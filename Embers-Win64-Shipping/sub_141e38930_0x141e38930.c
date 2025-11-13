// 函数: sub_141e38930
// 地址: 0x141e38930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rsi_1 = rcx + 0x28
    int32_t i
    
    do
        int64_t j = 2
        void* rdi_1 = rsi_1
        
        do
            int64_t rcx_1 = *(rdi_1 - 0x10)
            rdi_1 -= 0x10
            j -= 1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
        while (j != 0)
        
        rsi_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
