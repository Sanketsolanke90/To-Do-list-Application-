using System;
using System.Windows;
using Grpc.Net.Client;
using YourNamespace.Protos; // Adjust the namespace according to your project structure

namespace YourNamespace
{
    public partial class MainWindow : Window
    {
        private readonly YourService.YourServiceClient _client;

        public MainWindow()
        {
            InitializeComponent();
            var channel = GrpcChannel.ForAddress("https://localhost:5001"); // Adjust the address as needed
            _client = new YourService.YourServiceClient(channel);
        }

        private async void AddButton_Click(object sender, RoutedEventArgs e)
        {
            var request = new AddRequest { /* Set properties here */ };
            var response = await _client.AddAsync(request);
            // Handle response
        }

        private async void UpdateButton_Click(object sender, RoutedEventArgs e)
        {
            var request = new UpdateRequest { /* Set properties here */ };
            var response = await _client.UpdateAsync(request);
            // Handle response
        }

        private async void GetButton_Click(object sender, RoutedEventArgs e)
        {
            var request = new GetRequest { /* Set properties here */ };
            var response = await _client.GetAsync(request);
            // Handle response
        }
    }
}