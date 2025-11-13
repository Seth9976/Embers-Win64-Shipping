// 函数: sub_14209eec0
// 地址: 0x14209eec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x288)
int32_t result = 0
int32_t result_1 = -1

if (r9 s> 0)
    int64_t* rcx = nullptr
    
    while (true)
        if (result_1 == 0xffffffff)
            int64_t rdx = *(arg1 + 0x280)
            
            if (*(rcx + rdx) == arg2 && (arg3 == 0 || not(-1f f!= *(rcx + rdx + 0x30))))
                result_1 = result
            
            result += 1
            rcx = &rcx[0xc]
            
            if (result s< r9)
                continue
            else if (result_1 == 0xffffffff)
                break
        
        int64_t rsi_2 = sx.q(result_1) * 0x60
        int64_t rcx_1 = *(rsi_2 + *(arg1 + 0x280) + 0x20)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int32_t rcx_3 = *(arg1 + 0x288)
        int32_t rax_3 = rcx_3 - result_1
        
        if (rax_3 != 1)
            int64_t r9_1 = *(arg1 + 0x280)
            memmove(r9_1 + rsi_2, sx.q(result_1 + 1) * 0x60 + r9_1, (rax_3 - 1) * 0x60)
            rcx_3 = *(arg1 + 0x288)
        
        *(arg1 + 0x288) = rcx_3 - 1
        return sub_140d3e820(arg1 + 0x280)

return result
