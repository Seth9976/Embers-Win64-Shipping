// 函数: sub_14270b530
// 地址: 0x14270b530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1426fbec0(arg1)
int64_t* result_1 = result

if (result != 0)
    result = zx.q(*(result + 0x40))
    int32_t i = 0
    
    if (result.d s> 0)
        void* rbp_1 = result_1[7]
        int32_t* rcx = rbp_1 + 0x6c
        
        do
            if (*rcx == arg2)
                int64_t rsi_2 = sx.q(i) << 7
                int64_t rcx_1 = *(rsi_2 + rbp_1 + 0x58)
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                int64_t rcx_2 = *(rsi_2 + rbp_1 + 0x48)
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                int32_t rcx_5 = result_1[8].d
                int32_t rax_1 = rcx_5 - i
                
                if (rax_1 != 1)
                    int64_t rcx_3 = result_1[7]
                    memmove(rcx_3 + rsi_2, (sx.q(i + 1) << 7) + rcx_3, (rax_1 - 1) << 7)
                    rcx_5 = result_1[8].d
                
                result = zx.q(rcx_5 - 1)
                result_1[8].d = result.d
                *(result_1 + 0x54) |= 1
                
                if (arg3 != 0)
                    return sub_142708e30(result_1)
                
                break
            
            i += 1
            rcx -= -0x80
        while (i s< result.d)

return result
