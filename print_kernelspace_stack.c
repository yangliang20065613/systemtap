probe kernel.function("netif_receive_skb") 
{ 
    printf("--------------------------------------------------------\n"); 
    print_backtrace(); 
    printf("--------------------------------------------------------\n"); 
} 
