// 函数: sub_141f1b700
// 地址: 0x141f1b700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result
result.b = arg1[0x11].b & 3

if (result.b != 3 || arg1[0x7d] != 0)
    result = (*(*arg1 + 0x668))()
    int32_t i = 0
    
    if (arg3[1].d s> 0)
        int64_t* rbx_1 = nullptr
        
        do
            int64_t rbp_1 = *arg3
            
            if (sub_1423b27f0(*(rbx_1 + rbp_1)) == 0)
            label_141f1b7d6:
                int32_t rdx_4 = arg3[1].d
                int32_t rcx_3 = rdx_4 - i - 1
                
                if (rcx_3 s>= 1)
                    rcx_3 = 1
                
                if (rcx_3 != 0)
                    memcpy(sx.q(i) * 0x30 + *arg3, sx.q(rdx_4 - rcx_3) * 0x30 + *arg3, rcx_3 * 0x30)
                    rdx_4 = arg3[1].d
                
                arg3[1].d = rdx_4 - 1
                result = sub_1407c4120(arg3)
                i -= 1
                rbx_1 -= 0x30
            else
                float zmm0[0x2] = *(rbx_1 + rbp_1 + 0x24)
                result.b = arg1[0x11].b & 1
                
                if ((zmm0[0] > 9.99999994e-09f
                        || (result.b == 0 && (*(rbx_1 + rbp_1 + 0x2c) & 1) != 0))
                        && (9.99999994e-09f f< *(rbx_1 + rbp_1 + 0x20) || result.b == 0))
                    if (_finite(_mm_cvtps_pd(zmm0)) == 0)
                        result.b = 0
                    else
                        result = 1
                else
                    result.b = 0
                
                if ((*(arg1 + 0x20b) & 2) == 0 && result.b == 0
                        && not(0f f> *(rbx_1 + rbp_1 + 0x24)))
                    goto label_141f1b7d6
            
            i += 1
            rbx_1 = &rbx_1[6]
        while (i s< arg3[1].d)

return result
