// 函数: sub_140906480
// 地址: 0x140906480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x2c)

if ((rcx & 0xfffffffa) != 0 || rcx == 5)
    int64_t r8_1 = *arg2
    
    if (r8_1 s>= 0)
        int64_t r9_1 = *(arg1 + 0x20)
        
        if (r8_1 s< r9_1)
            if (rcx == 5)
                rcx = 2
                *(arg1 + 0x2c) = 2
                r8_1 = *arg2
            
            int64_t rdx_1 = data_143988980 + r8_1
            *(arg1 + 0x48) = 1
            *(arg1 + 0x30) = rdx_1
            
            if (rdx_1 == r9_1)
                *(arg1 + 0x30) = rdx_1 - data_143988980
                rcx = *(arg1 + 0x2c)
            
            if (rcx == 2)
                arg3 = *(arg1 + 0x28)
                sub_1409063a0(*(arg1 + 0x60), *(arg1 + 0x30), arg3, *(arg1 + 0x8c))
            
            int64_t* rcx_2 = *(arg1 + 0x50)
            *(arg1 + 0x58) = -0x8000000000000000
            (**rcx_2)(rcx_2, 8, arg3)
            int64_t rax_2
            rax_2.b = 1
            return rax_2

int64_t rax
rax.b = 0
return rax
