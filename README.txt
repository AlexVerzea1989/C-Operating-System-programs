/*
ALEX VERZEA
260324472
COMP310
Mini-Assignment 2
*/

producer_consumer runs with synchronization, while producer_consumer_nosync runs without synchronization.

First, we run producer_consumer for 3 different values of N:
============================================================

N=3:

Produced -> item id: 1 BY  Thread 0xb4babb40
Produced -> item id: 2 BY  Thread 0xb4babb40
Produced -> item id: 3 BY  Thread 0xb4babb40
Produced -> item id: 4 BY  Thread 0xb5badb40
Produced -> item id: 5 BY  Thread 0xb5badb40
Produced -> item id: 6 BY  Thread 0xb5badb40
Produced -> item id: 7 BY  Thread 0xb3ba9b40
Produced -> item id: 8 BY  Thread 0xb3ba9b40
Produced -> item id: 9 BY  Thread 0xb3ba9b40
Produced -> item id: 10 BY  Thread 0xb33a8b40
Produced -> item id: 11 BY  Thread 0xb33a8b40
Produced -> item id: 12 BY  Thread 0xb33a8b40
Produced -> item id: 13 BY  Thread 0xb2ba7b40
Produced -> item id: 14 BY  Thread 0xb2ba7b40
Produced -> item id: 15 BY  Thread 0xb2ba7b40
Produced -> item id: 16 BY  Thread 0xb6bafb40
Produced -> item id: 17 BY  Thread 0xb6bafb40
Produced -> item id: 18 BY  Thread 0xb6bafb40
Produced -> item id: 19 BY  Thread 0xb63aeb40
Produced -> item id: 20 BY  Thread 0xb63aeb40
Produced -> item id: 21 BY  Thread 0xb63aeb40
Consumed -> item id: 21 
Consumed -> item id: 20 
Consumed -> item id: 19 
Consumed -> item id: 18 
Consumed -> item id: 17 
Consumed -> item id: 16 
Consumed -> item id: 15 
Consumed -> item id: 14 
Consumed -> item id: 13 
Consumed -> item id: 12 
Consumed -> item id: 11 
Consumed -> item id: 10 
Consumed -> item id: 9 
Consumed -> item id: 8 
Consumed -> item id: 7 
Consumed -> item id: 6 
Consumed -> item id: 5 
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb53acb40
Produced -> item id: 2 BY  Thread 0xb53acb40
Produced -> item id: 3 BY  Thread 0xb53acb40
Produced -> item id: 4 BY  Thread 0xb43aab40
Produced -> item id: 5 BY  Thread 0xb43aab40
Produced -> item id: 6 BY  Thread 0xb43aab40
Consumed -> item id: 6 
Consumed -> item id: 5 
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb73b0b40
Produced -> item id: 2 BY  Thread 0xb73b0b40
Produced -> item id: 3 BY  Thread 0xb73b0b40
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
-----------------------------------
ProducedItems=30
ConsumedItems=30
start program: 497206
end program:   525663
time program:  28457


N=5:

Produced -> item id: 1 BY  Thread 0xb4bf4b40
Produced -> item id: 2 BY  Thread 0xb4bf4b40
Produced -> item id: 3 BY  Thread 0xb4bf4b40
Produced -> item id: 4 BY  Thread 0xb4bf4b40
Produced -> item id: 5 BY  Thread 0xb4bf4b40
Produced -> item id: 6 BY  Thread 0xb63f7b40
Produced -> item id: 7 BY  Thread 0xb63f7b40
Produced -> item id: 8 BY  Thread 0xb63f7b40
Produced -> item id: 9 BY  Thread 0xb63f7b40
Produced -> item id: 10 BY  Thread 0xb63f7b40
Produced -> item id: 11 BY  Thread 0xb43f3b40
Produced -> item id: 12 BY  Thread 0xb43f3b40
Produced -> item id: 13 BY  Thread 0xb43f3b40
Produced -> item id: 14 BY  Thread 0xb43f3b40
Produced -> item id: 15 BY  Thread 0xb43f3b40
Consumed -> item id: 15 
Consumed -> item id: 14 
Consumed -> item id: 13 
Consumed -> item id: 12 
Consumed -> item id: 11 
Consumed -> item id: 10 
Consumed -> item id: 9 
Consumed -> item id: 8 
Consumed -> item id: 7 
Consumed -> item id: 6 
Consumed -> item id: 5 
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb3bf2b40
Produced -> item id: 2 BY  Thread 0xb3bf2b40
Produced -> item id: 3 BY  Thread 0xb3bf2b40
Produced -> item id: 4 BY  Thread 0xb3bf2b40
Produced -> item id: 5 BY  Thread 0xb3bf2b40
Produced -> item id: 6 BY  Thread 0xb33f1b40
Produced -> item id: 7 BY  Thread 0xb33f1b40
Produced -> item id: 8 BY  Thread 0xb33f1b40
Produced -> item id: 9 BY  Thread 0xb33f1b40
Produced -> item id: 10 BY  Thread 0xb33f1b40
Produced -> item id: 11 BY  Thread 0xb6bf8b40
Produced -> item id: 12 BY  Thread 0xb6bf8b40
Produced -> item id: 13 BY  Thread 0xb6bf8b40
Produced -> item id: 14 BY  Thread 0xb6bf8b40
Produced -> item id: 15 BY  Thread 0xb6bf8b40
Produced -> item id: 16 BY  Thread 0xb2bf0b40
Produced -> item id: 17 BY  Thread 0xb2bf0b40
Produced -> item id: 18 BY  Thread 0xb2bf0b40
Produced -> item id: 19 BY  Thread 0xb2bf0b40
Produced -> item id: 20 BY  Thread 0xb2bf0b40
Produced -> item id: 21 BY  Thread 0xb53f5b40
Produced -> item id: 22 BY  Thread 0xb53f5b40
Produced -> item id: 23 BY  Thread 0xb53f5b40
Produced -> item id: 24 BY  Thread 0xb53f5b40
Produced -> item id: 25 BY  Thread 0xb53f5b40
Produced -> item id: 26 BY  Thread 0xb5bf6b40
Produced -> item id: 27 BY  Thread 0xb5bf6b40
Produced -> item id: 28 BY  Thread 0xb5bf6b40
Produced -> item id: 29 BY  Thread 0xb5bf6b40
Produced -> item id: 30 BY  Thread 0xb5bf6b40
Consumed -> item id: 30 
Consumed -> item id: 29 
Consumed -> item id: 28 
Consumed -> item id: 27 
Consumed -> item id: 26 
Consumed -> item id: 25 
Consumed -> item id: 24 
Consumed -> item id: 23 
Consumed -> item id: 22 
Consumed -> item id: 21 
Consumed -> item id: 20 
Consumed -> item id: 19 
Consumed -> item id: 18 
Consumed -> item id: 17 
Consumed -> item id: 16 
Consumed -> item id: 15 
Consumed -> item id: 14 
Consumed -> item id: 13 
Consumed -> item id: 12 
Consumed -> item id: 11 
Consumed -> item id: 10 
Consumed -> item id: 9 
Consumed -> item id: 8 
Consumed -> item id: 7 
Consumed -> item id: 6 
Consumed -> item id: 5 
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb73f9b40
Produced -> item id: 2 BY  Thread 0xb73f9b40
Produced -> item id: 3 BY  Thread 0xb73f9b40
Produced -> item id: 4 BY  Thread 0xb73f9b40
Produced -> item id: 5 BY  Thread 0xb73f9b40
Consumed -> item id: 5 
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
-----------------------------------
ProducedItems=50
ConsumedItems=50
start program: 546632
end program:   564251
time program:  17619

N=7:

Produced -> item id: 1 BY  Thread 0xb4b9ab40
Produced -> item id: 2 BY  Thread 0xb4b9ab40
Produced -> item id: 3 BY  Thread 0xb4b9ab40
Produced -> item id: 4 BY  Thread 0xb4b9ab40
Produced -> item id: 5 BY  Thread 0xb4b9ab40
Produced -> item id: 6 BY  Thread 0xb4b9ab40
Produced -> item id: 7 BY  Thread 0xb4b9ab40
Produced -> item id: 8 BY  Thread 0xb3397b40
Produced -> item id: 9 BY  Thread 0xb3397b40
Produced -> item id: 10 BY  Thread 0xb3397b40
Produced -> item id: 11 BY  Thread 0xb3397b40
Produced -> item id: 12 BY  Thread 0xb3397b40
Produced -> item id: 13 BY  Thread 0xb3397b40
Produced -> item id: 14 BY  Thread 0xb3397b40
Produced -> item id: 15 BY  Thread 0xb639db40
Produced -> item id: 16 BY  Thread 0xb639db40
Produced -> item id: 17 BY  Thread 0xb639db40
Produced -> item id: 18 BY  Thread 0xb639db40
Produced -> item id: 19 BY  Thread 0xb639db40
Produced -> item id: 20 BY  Thread 0xb639db40
Produced -> item id: 21 BY  Thread 0xb639db40
Produced -> item id: 22 BY  Thread 0xb2b96b40
Produced -> item id: 23 BY  Thread 0xb2b96b40
Produced -> item id: 24 BY  Thread 0xb2b96b40
Produced -> item id: 25 BY  Thread 0xb2b96b40
Produced -> item id: 26 BY  Thread 0xb2b96b40
Produced -> item id: 27 BY  Thread 0xb2b96b40
Produced -> item id: 28 BY  Thread 0xb2b96b40
Consumed -> item id: 28 
Consumed -> item id: 27 
Consumed -> item id: 26 
Consumed -> item id: 25 
Consumed -> item id: 24 
Consumed -> item id: 23 
Consumed -> item id: 22 
Consumed -> item id: 21 
Consumed -> item id: 20 
Consumed -> item id: 19 
Consumed -> item id: 18 
Consumed -> item id: 17 
Consumed -> item id: 16 
Consumed -> item id: 15 
Consumed -> item id: 14 
Consumed -> item id: 13 
Consumed -> item id: 12 
Consumed -> item id: 11 
Consumed -> item id: 10 
Consumed -> item id: 9 
Produced -> item id: 9 BY  Thread 0xb539bb40
Produced -> item id: 10 BY  Thread 0xb539bb40
Produced -> item id: 11 BY  Thread 0xb539bb40
Produced -> item id: 12 BY  Thread 0xb539bb40
Produced -> item id: 13 BY  Thread 0xb539bb40
Produced -> item id: 14 BY  Thread 0xb539bb40
Produced -> item id: 15 BY  Thread 0xb539bb40
Produced -> item id: 16 BY  Thread 0xb5b9cb40
Produced -> item id: 17 BY  Thread 0xb5b9cb40
Produced -> item id: 18 BY  Thread 0xb5b9cb40
Produced -> item id: 19 BY  Thread 0xb5b9cb40
Produced -> item id: 20 BY  Thread 0xb5b9cb40
Produced -> item id: 21 BY  Thread 0xb5b9cb40
Produced -> item id: 22 BY  Thread 0xb5b9cb40
Produced -> item id: 23 BY  Thread 0xb3b98b40
Produced -> item id: 24 BY  Thread 0xb3b98b40
Produced -> item id: 25 BY  Thread 0xb3b98b40
Produced -> item id: 26 BY  Thread 0xb3b98b40
Produced -> item id: 27 BY  Thread 0xb3b98b40
Produced -> item id: 28 BY  Thread 0xb3b98b40
Produced -> item id: 29 BY  Thread 0xb3b98b40
Produced -> item id: 30 BY  Thread 0xb6b9eb40
Produced -> item id: 31 BY  Thread 0xb6b9eb40
Produced -> item id: 32 BY  Thread 0xb6b9eb40
Produced -> item id: 33 BY  Thread 0xb6b9eb40
Produced -> item id: 34 BY  Thread 0xb6b9eb40
Produced -> item id: 35 BY  Thread 0xb6b9eb40
Produced -> item id: 36 BY  Thread 0xb6b9eb40
Produced -> item id: 37 BY  Thread 0xb4399b40
Produced -> item id: 38 BY  Thread 0xb4399b40
Produced -> item id: 39 BY  Thread 0xb4399b40
Produced -> item id: 40 BY  Thread 0xb4399b40
Produced -> item id: 41 BY  Thread 0xb4399b40
Produced -> item id: 42 BY  Thread 0xb4399b40
Produced -> item id: 43 BY  Thread 0xb4399b40
Consumed -> item id: 43 
Consumed -> item id: 42 
Consumed -> item id: 41 
Consumed -> item id: 40 
Consumed -> item id: 39 
Consumed -> item id: 38 
Consumed -> item id: 37 
Consumed -> item id: 36 
Consumed -> item id: 35 
Consumed -> item id: 34 
Consumed -> item id: 33 
Consumed -> item id: 32 
Consumed -> item id: 31 
Consumed -> item id: 30 
Consumed -> item id: 29 
Consumed -> item id: 28 
Consumed -> item id: 27 
Consumed -> item id: 26 
Consumed -> item id: 25 
Consumed -> item id: 24 
Consumed -> item id: 23 
Consumed -> item id: 22 
Consumed -> item id: 21 
Consumed -> item id: 20 
Consumed -> item id: 19 
Consumed -> item id: 18 
Consumed -> item id: 17 
Consumed -> item id: 16 
Consumed -> item id: 15 
Consumed -> item id: 14 
Consumed -> item id: 13 
Consumed -> item id: 12 
Consumed -> item id: 11 
Consumed -> item id: 10 
Consumed -> item id: 9 
Consumed -> item id: 8 
Consumed -> item id: 7 
Consumed -> item id: 6 
Consumed -> item id: 5 
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb739fb40
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb739fb40
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb739fb40
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb739fb40
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb739fb40
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb739fb40
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb739fb40
Consumed -> item id: 1 
-----------------------------------
ProducedItems=70
ConsumedItems=70
start program: 303328
end program:   338282
time program:  34954




Second, we run producer_consumer_nosync for 3 different values of N:
====================================================================

N=3:

Produced -> item id: 1 BY  Thread 0xb4c03b40
Produced -> item id: 6 BY  Thread 0xb4c03b40
Produced -> item id: 8 BY  Thread 0xb4c03b40
Produced -> item id: 4 BY  Thread 0xb5c05b40
Produced -> item id: 9 BY  Thread 0xb5c05b40
Produced -> item id: 10 BY  Thread 0xb5c05b40
Produced -> item id: 5 BY  Thread 0xb6406b40
Produced -> item id: 11 BY  Thread 0xb6406b40
Produced -> item id: 12 BY  Thread 0xb6406b40
Produced -> item id: 7 BY  Thread 0xb3c01b40
Produced -> item id: 13 BY  Thread 0xb3c01b40
Produced -> item id: 14 BY  Thread 0xb3c01b40
Produced -> item id: 3 BY  Thread 0xb4402b40
Produced -> item id: 15 BY  Thread 0xb4402b40
Produced -> item id: 16 BY  Thread 0xb4402b40
Produced -> item id: 2 BY  Thread 0xb5404b40
Produced -> item id: 17 BY  Thread 0xb5404b40
Produced -> item id: 18 BY  Thread 0xb5404b40
Produced -> item id: 19 BY  Thread 0xb6c07b40
Produced -> item id: 21 BY  Thread 0xb6c07b40
Produced -> item id: 22 BY  Thread 0xb6c07b40
Produced -> item id: 22 BY  Thread 0xb2bffb40
Produced -> item id: 23 BY  Thread 0xb2bffb40
Produced -> item id: 24 BY  Thread 0xb2bffb40
Produced -> item id: 20 BY  Thread 0xb3400b40
Produced -> item id: 25 BY  Thread 0xb3400b40
Produced -> item id: 26 BY  Thread 0xb3400b40
Consumed -> item id: 22 
Consumed -> item id: 26 
Consumed -> item id: 25 
Consumed -> item id: 24 
Consumed -> item id: 23 
Consumed -> item id: 22 
Consumed -> item id: 21 
Consumed -> item id: 20 
Consumed -> item id: 19 
Consumed -> item id: 18 
Consumed -> item id: 17 
Consumed -> item id: 16 
Consumed -> item id: 15 
Consumed -> item id: 14 
Consumed -> item id: 13 
Consumed -> item id: 12 
Consumed -> item id: 11 
Consumed -> item id: 10 
Consumed -> item id: 9 
Consumed -> item id: 8 
Consumed -> item id: 7 
Consumed -> item id: 6 
Consumed -> item id: 5 
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
Produced -> item id: 1 BY  Thread 0xb7408b40
Produced -> item id: 2 BY  Thread 0xb7408b40
Produced -> item id: 3 BY  Thread 0xb7408b40
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
-----------------------------------
ProducedItems=30
ConsumedItems=30
start program: 457437
end program:   478686
time program:  21249

N=5:

Produced -> item id: 1 BY  Thread 0xb4b45b40
Produced -> item id: 9 BY  Thread 0xb4b45b40
Produced -> item id: 10 BY  Thread 0xb4b45b40
Produced -> item id: 11 BY  Thread 0xb4b45b40
Produced -> item id: 11 BY  Thread 0xb4b45b40
Produced -> item id: 6 BY  Thread 0xb6348b40
Produced -> item id: 12 BY  Thread 0xb6348b40
Produced -> item id: 13 BY  Thread 0xb6348b40
Produced -> item id: 14 BY  Thread 0xb6348b40
Produced -> item id: 15 BY  Thread 0xb6348b40
Produced -> item id: 4 BY  Thread 0xb5b47b40
Produced -> item id: 16 BY  Thread 0xb5b47b40
Produced -> item id: 17 BY  Thread 0xb5b47b40
Produced -> item id: 18 BY  Thread 0xb5b47b40
Produced -> item id: 19 BY  Thread 0xb5b47b40
Consumed -> item id: 11 
Consumed -> item id: 20 
Consumed -> item id: 19 
Consumed -> item id: 18 
Consumed -> item id: 17 
Consumed -> item id: 16 
Consumed -> item id: 15 
Consumed -> item id: 14 
Consumed -> item id: 13 
Consumed -> item id: 12 
Consumed -> item id: 11 
Produced -> item id: 3 BY  Thread 0xb5346b40
Produced -> item id: 11 BY  Thread 0xb5346b40
Produced -> item id: 12 BY  Thread 0xb5346b40
Produced -> item id: 13 BY  Thread 0xb5346b40
Produced -> item id: 14 BY  Thread 0xb5346b40
Produced -> item id: 20 BY  Thread 0xb6b49b40
Produced -> item id: 15 BY  Thread 0xb6b49b40
Produced -> item id: 16 BY  Thread 0xb6b49b40
Produced -> item id: 17 BY  Thread 0xb6b49b40
Produced -> item id: 18 BY  Thread 0xb6b49b40
Produced -> item id: 5 BY  Thread 0xb3b43b40
Produced -> item id: 19 BY  Thread 0xb3b43b40
Produced -> item id: 20 BY  Thread 0xb3b43b40
Produced -> item id: 21 BY  Thread 0xb3b43b40
Produced -> item id: 22 BY  Thread 0xb3b43b40
Produced -> item id: 7 BY  Thread 0xb3342b40
Produced -> item id: 23 BY  Thread 0xb3342b40
Produced -> item id: 24 BY  Thread 0xb3342b40
Produced -> item id: 25 BY  Thread 0xb3342b40
Produced -> item id: 26 BY  Thread 0xb3342b40
Produced -> item id: 8 BY  Thread 0xb2b41b40
Produced -> item id: 27 BY  Thread 0xb2b41b40
Produced -> item id: 28 BY  Thread 0xb2b41b40
Produced -> item id: 29 BY  Thread 0xb2b41b40
Produced -> item id: 30 BY  Thread 0xb2b41b40
Produced -> item id: 2 BY  Thread 0xb4344b40
Produced -> item id: 31 BY  Thread 0xb4344b40
Produced -> item id: 32 BY  Thread 0xb4344b40
Produced -> item id: 33 BY  Thread 0xb4344b40
Produced -> item id: 34 BY  Thread 0xb4344b40
Consumed -> item id: 34 
Consumed -> item id: 33 
Consumed -> item id: 32 
Consumed -> item id: 31 
Consumed -> item id: 30 
Consumed -> item id: 29 
Consumed -> item id: 28 
Consumed -> item id: 27 
Consumed -> item id: 26 
Consumed -> item id: 25 
Consumed -> item id: 24 
Consumed -> item id: 23 
Consumed -> item id: 22 
Consumed -> item id: 21 
Consumed -> item id: 20 
Consumed -> item id: 19 
Consumed -> item id: 18 
Consumed -> item id: 17 
Consumed -> item id: 16 
Consumed -> item id: 15 
Consumed -> item id: 14 
Consumed -> item id: 13 
Consumed -> item id: 12 
Consumed -> item id: 11 
Consumed -> item id: 10 
Consumed -> item id: 9 
Consumed -> item id: 8 
Consumed -> item id: 7 
Consumed -> item id: 7 
Consumed -> item id: 6 
Consumed -> item id: 5 
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
Produced -> item id: 7 BY  Thread 0xb734ab40
Produced -> item id: 1 BY  Thread 0xb734ab40
Produced -> item id: 2 BY  Thread 0xb734ab40
Produced -> item id: 3 BY  Thread 0xb734ab40
Produced -> item id: 4 BY  Thread 0xb734ab40
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
-----------------------------------
ProducedItems=50
ConsumedItems=50
start program: 552377
end program:   569198
time program:  16821

N=7:

Produced -> item id: 1 BY  Thread 0xb4b9db40
Produced -> item id: 9 BY  Thread 0xb4b9db40
Produced -> item id: 10 BY  Thread 0xb4b9db40
Produced -> item id: 11 BY  Thread 0xb4b9db40
Produced -> item id: 12 BY  Thread 0xb4b9db40
Produced -> item id: 13 BY  Thread 0xb4b9db40
Produced -> item id: 14 BY  Thread 0xb4b9db40
Produced -> item id: 8 BY  Thread 0xb2b99b40
Produced -> item id: 15 BY  Thread 0xb2b99b40
Produced -> item id: 16 BY  Thread 0xb2b99b40
Produced -> item id: 17 BY  Thread 0xb2b99b40
Produced -> item id: 18 BY  Thread 0xb2b99b40
Produced -> item id: 19 BY  Thread 0xb2b99b40
Produced -> item id: 20 BY  Thread 0xb2b99b40
Produced -> item id: 6 BY  Thread 0xb3b9bb40
Produced -> item id: 21 BY  Thread 0xb3b9bb40
Produced -> item id: 22 BY  Thread 0xb3b9bb40
Produced -> item id: 23 BY  Thread 0xb3b9bb40
Produced -> item id: 24 BY  Thread 0xb3b9bb40
Produced -> item id: 25 BY  Thread 0xb3b9bb40
Produced -> item id: 26 BY  Thread 0xb3b9bb40
Produced -> item id: 7 BY  Thread 0xb339ab40
Produced -> item id: 27 BY  Thread 0xb339ab40
Produced -> item id: 28 BY  Thread 0xb339ab40
Produced -> item id: 29 BY  Thread 0xb339ab40
Produced -> item id: 30 BY  Thread 0xb339ab40
Produced -> item id: 31 BY  Thread 0xb339ab40
Produced -> item id: 32 BY  Thread 0xb339ab40
Produced -> item id: 9 BY  Thread 0xb6ba1b40
Produced -> item id: 33 BY  Thread 0xb6ba1b40
Produced -> item id: 34 BY  Thread 0xb6ba1b40
Produced -> item id: 35 BY  Thread 0xb6ba1b40
Produced -> item id: 36 BY  Thread 0xb6ba1b40
Produced -> item id: 37 BY  Thread 0xb6ba1b40
Produced -> item id: 38 BY  Thread 0xb6ba1b40
Consumed -> item id: 9 
Consumed -> item id: 38 
Consumed -> item id: 37 
Consumed -> item id: 36 
Consumed -> item id: 35 
Consumed -> item id: 34 
Consumed -> item id: 33 
Consumed -> item id: 32 
Consumed -> item id: 31 
Consumed -> item id: 30 
Consumed -> item id: 29 
Consumed -> item id: 28 
Consumed -> item id: 27 
Consumed -> item id: 26 
Consumed -> item id: 25 
Consumed -> item id: 24 
Consumed -> item id: 23 
Consumed -> item id: 22 
Consumed -> item id: 21 
Consumed -> item id: 20 
Consumed -> item id: 19 
Consumed -> item id: 18 
Consumed -> item id: 17 
Consumed -> item id: 16 
Consumed -> item id: 15 
Consumed -> item id: 14 
Consumed -> item id: 13 
Consumed -> item id: 12 
Consumed -> item id: 11 
Consumed -> item id: 10 
Consumed -> item id: 9 
Consumed -> item id: 8 
Consumed -> item id: 7 
Consumed -> item id: 6 
Consumed -> item id: 5 
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
Produced -> item id: 4 BY  Thread 0xb439cb40
Produced -> item id: 1 BY  Thread 0xb439cb40
Produced -> item id: 2 BY  Thread 0xb439cb40
Produced -> item id: 3 BY  Thread 0xb439cb40
Produced -> item id: 4 BY  Thread 0xb439cb40
Produced -> item id: 5 BY  Thread 0xb439cb40
Produced -> item id: 6 BY  Thread 0xb439cb40
Produced -> item id: 5 BY  Thread 0xb63a0b40
Produced -> item id: 7 BY  Thread 0xb63a0b40
Produced -> item id: 8 BY  Thread 0xb63a0b40
Produced -> item id: 9 BY  Thread 0xb63a0b40
Produced -> item id: 10 BY  Thread 0xb63a0b40
Produced -> item id: 11 BY  Thread 0xb63a0b40
Produced -> item id: 12 BY  Thread 0xb63a0b40
Produced -> item id: 2 BY  Thread 0xb539eb40
Produced -> item id: 13 BY  Thread 0xb539eb40
Produced -> item id: 14 BY  Thread 0xb539eb40
Produced -> item id: 15 BY  Thread 0xb539eb40
Produced -> item id: 16 BY  Thread 0xb539eb40
Produced -> item id: 17 BY  Thread 0xb539eb40
Produced -> item id: 18 BY  Thread 0xb539eb40
Produced -> item id: 3 BY  Thread 0xb5b9fb40
Produced -> item id: 19 BY  Thread 0xb5b9fb40
Produced -> item id: 20 BY  Thread 0xb5b9fb40
Produced -> item id: 21 BY  Thread 0xb5b9fb40
Produced -> item id: 22 BY  Thread 0xb5b9fb40
Produced -> item id: 23 BY  Thread 0xb5b9fb40
Produced -> item id: 24 BY  Thread 0xb5b9fb40
Produced -> item id: 25 BY  Thread 0xb73a2b40
Produced -> item id: 26 BY  Thread 0xb73a2b40
Produced -> item id: 27 BY  Thread 0xb73a2b40
Produced -> item id: 28 BY  Thread 0xb73a2b40
Produced -> item id: 29 BY  Thread 0xb73a2b40
Produced -> item id: 30 BY  Thread 0xb73a2b40
Produced -> item id: 31 BY  Thread 0xb73a2b40
Consumed -> item id: 31 
Consumed -> item id: 30 
Consumed -> item id: 29 
Consumed -> item id: 28 
Consumed -> item id: 27 
Consumed -> item id: 26 
Consumed -> item id: 25 
Consumed -> item id: 24 
Consumed -> item id: 23 
Consumed -> item id: 22 
Consumed -> item id: 21 
Consumed -> item id: 20 
Consumed -> item id: 19 
Consumed -> item id: 18 
Consumed -> item id: 17 
Consumed -> item id: 16 
Consumed -> item id: 15 
Consumed -> item id: 14 
Consumed -> item id: 13 
Consumed -> item id: 12 
Consumed -> item id: 11 
Consumed -> item id: 10 
Consumed -> item id: 9 
Consumed -> item id: 8 
Consumed -> item id: 7 
Consumed -> item id: 6 
Consumed -> item id: 5 
Consumed -> item id: 4 
Consumed -> item id: 3 
Consumed -> item id: 2 
Consumed -> item id: 1 
-----------------------------------
ProducedItems=70
ConsumedItems=70
start program: 934776
end program:   947125
time program:  12349

Report of the experimental overhead:

As expected, there is an overhead of synchronization:

Overhead due to synchronization for N=3: 7208  ms
Overhead due to synchronization for N=5: 798   ms
Overhead due to synchronization for N=7: 22605 ms
