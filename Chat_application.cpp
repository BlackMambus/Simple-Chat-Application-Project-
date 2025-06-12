#include <iostream>
#include <string>
#include <vector>
class ChatApp {
private:
    std::vector<std::string> chatHistory;
    // Simulate a response from the "chat bot"
    std::string getResponse(const std::string& userMessage) {
        return "Bot: You said \"" + userMessage + "\"";
    }
public:
    void run() {
        std::cout << "Welcome to SimpleChat! Type your messages below. Type 'exit' to quit.\n\n";
        std::string message;
        while (true) {
            std::cout << "You: ";
            std::getline(std::cin, message);
            if (message == "exit") {
                std::cout << "Exiting chat. Goodbye!\n";
                break;
            }
            chatHistory.push_back("You: " + message);
            std::string botResponse = getResponse(message);
            chatHistory.push_back(botResponse);
                 // Display chat history
                 std::cout << "\n--- Chat History ---\n";
                 for (const std::string& line : chatHistory) {
                     std::cout << line << "\n";
                 }
                 std::cout << "--------------------\n\n";
             }
         }
     };
     int main() {
         ChatApp chatApp;
         chatApp.run();
         return 0;
     }
     
     