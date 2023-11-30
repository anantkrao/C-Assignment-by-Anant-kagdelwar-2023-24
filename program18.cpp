#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    // Declare variables
    int totalVotes;
    unordered_map<string, int> candidateVotes; // Map to store candidate names and their votes

    // Get the total number of votes
    cout << "Enter the total number of votes: ";
    cin >> totalVotes;

    // Input votes for each candidate
    for (int i = 0; i < totalVotes; ++i) {
        string candidateName;
        cout << "Enter the name of the candidate for vote " << i + 1 << ": ";
        cin >> candidateName;

        // Increment the vote count for the candidate
        candidateVotes[candidateName]++;
    }

    // Find the winner by determining the candidate with the maximum votes
    auto winner = max_element(candidateVotes.begin(), candidateVotes.end(),
        [](const auto& a, const auto& b) {
            return a.second < b.second;
        }
    );

    // Display the winner
    cout << "\nThe winner of the election is: " << winner->first << " with " << winner->second << " votes." << endl;

    return 0; // Exit the program successfully
}