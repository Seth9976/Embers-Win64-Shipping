// 函数: sub_14190c170
// 地址: 0x14190c170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x570)
void* rbp = nullptr
*(arg1 + 0x560) = 0
int64_t rdi = *(rax + 0x78)

if (data_143efed00 != 0)
    void* rsi_1 = *(rax + 0x88)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    sub_141933b70(*(arg1 + 0x568), rdi, 0, arg1 + 0x580, *(rsi_1 + 0x38) + 0xd8)

sub_1419339e0(*(arg1 + 0x568), rdi, 0)

if (data_143efed00 != 0)
    void* rsi_2 = *(*(arg1 + 0x570) + 0x90)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    sub_141933b70(*(arg1 + 0x568) + 0x80, rdi, 1, arg1 + 0x6d0, *(rsi_2 + 0x38) + 0xd8)

sub_1419339e0(*(arg1 + 0x568) + 0x80, rdi, 1)
void* result = *(arg1 + 0x570)
void* rsi_3 = *(result + 0x98)

if (rsi_3 != 0)
    char rcx_6 = data_143f01c92
    
    if (rcx_6 != 0)
        result = sub_140a80f40()
        rcx_6 = data_143f01c92
    
    if (*(rsi_3 + 0x38) != 0)
        if (data_143efed00 != 0)
            void* rsi_4 = *(*(arg1 + 0x570) + 0x98)
            
            if (rsi_4 != 0)
                if (rcx_6 != 0)
                    sub_140a80f40()
                
                rbp = *(rsi_4 + 0x38)
            
            sub_141933b70(*(arg1 + 0x568) + 0x100, rdi, 2, arg1 + 0x740, rbp + 0xd8)
        
        return sub_1419339e0(*(arg1 + 0x568) + 0x100, rdi, 2)

return result
