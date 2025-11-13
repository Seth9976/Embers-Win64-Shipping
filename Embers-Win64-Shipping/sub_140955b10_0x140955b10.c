// 函数: sub_140955b10
// 地址: 0x140955b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && arg1[0x69] != 0)
    void* rax_2 = (*(*arg1 + 0x150))()
    
    if (rax_2 != 0)
        void* rsi_1 = *(rax_2 + 0x188)
        void* rsi_2
        
        if (rsi_1 == 0)
            rsi_2 = *(rax_2 + 0x300)
        else
            rsi_2 = *(rsi_1 + 0xc0)
        
        if (sub_1423dce10(rsi_2, &arg1[0x69]) != 0)
            sub_1423e60e0(rsi_2, arg1[0x69])
        
        arg1[0x69] = 0
    
    (*(*arg1 + 0x6b0))(arg1, 0xc)

void* result = (*(*arg1 + 0x150))(arg1)

if (result != 0)
    void* rdi_1 = *(result + 0x188)
    void* rdi_2
    
    if (rdi_1 == 0)
        rdi_2 = *(result + 0x300)
    else
        rdi_2 = *(rdi_1 + 0xc0)
    
    if (sub_1423dce10(rdi_2, &arg1[0x6a]) != 0)
        sub_1423e60e0(rdi_2, arg1[0x6a])
    
    arg1[0x6a] = 0
    
    if (sub_1423dce10(rdi_2, &arg1[0x6b]) != 0)
        sub_1423e60e0(rdi_2, arg1[0x6b])
    
    arg1[0x6b] = 0
    
    if (sub_1423dce10(rdi_2, &arg1[0x6c]) != 0)
        sub_1423e60e0(rdi_2, arg1[0x6c])
    
    arg1[0x6c] = 0
    
    if (sub_1423dce10(rdi_2, &arg1[0x6d]) != 0)
        sub_1423e60e0(rdi_2, arg1[0x6d])
    
    arg1[0x6d] = 0
    result = sub_1423dce10(rdi_2, &arg1[0x69])
    
    if (result != 0)
        result = sub_1423e60e0(rdi_2, arg1[0x69])
    
    __builtin_memset(&arg1[0x69], 0, 0x28)

return result
