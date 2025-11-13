// 函数: sub_1420f6bc0
// 地址: 0x1420f6bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_28[0x4] = zmm6
int32_t result

if (arg1[6] == 0)
    result.b = 0
else
    zmm6 = zx.o(0)
    
    if (0f f>= arg1[0x10].d || 0f f>= *(arg1 + 0x84) || arg3 == 0)
        result.b = 0
    else if ((*(*arg1 + 0x2b8))(arg1, arg3, zx.q(arg8), arg2).b == 0)
        result.b = 0
    else
        int32_t rcx = *(arg2 + 0xa0)
        
        if (rcx s< 0)
            result.b = 0
        else
            int32_t rdx_1 = *(arg2 + 0xa4)
            
            if (rdx_1 s< 0 || *(arg2 + 0xa8) - rcx s<= 0 || *(arg2 + 0xac) - rdx_1 s<= 0)
                result.b = 0
            else
                void* rax_3 = arg1[6]
                void* rcx_1 = *(rax_3 + 0x2b8)
                
                if (rcx_1 != 0)
                    if ((*(rcx_1 + 0x2710) & 4) != 0)
                        *(arg2 + 0xe8) = *(rcx_1 + 0x24c)
                        float zmm0[0x4] = *(*(arg1[6] + 0x2b8) + 0x25c)
                        
                        if (not(zmm0[0] < 0f))
                            zmm6 = __minss_xmmss_memss(zmm0[0], 0x3f800000)
                        
                        *(arg2 + 0xf4) = zmm6[0]
                        rax_3 = arg1[6]
                    
                    void* rcx_3 = *(rax_3 + 0x2b8)
                    
                    if ((*(rcx_3 + 0x2710) & 0x10) != 0)
                        arg5 = *(rcx_3 + 0x264)
                        arg6 = *(rcx_3 + 0x268)
                        int32_t var_2c_1 = 0x3f800000
                        float var_38[0x4]
                        var_38[0] = (*(rcx_3 + 0x260))[0]
                        float temp0_2[0x4] = _mm_shuffle_ps(var_38, var_38, 0xe1)
                        temp0_2[0] = arg5
                        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
                        temp0_3[0] = arg6
                        arg7 = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
                        *(arg2 + 0xf8) = arg7
                        rax_3 = arg1[6]
                    
                    *(arg2 + 0x1dc) = (*(*(rax_3 + 0x2b8) + 0x2710) u>> 0xa).b & 1
                
                int32_t r14_1 = 0
                
                if (sub_142391ee0(zx.q(arg8), arg5, arg6, arg7) != 0)
                    r14_1 = arg8 - 1
                
                *(arg2 + 0xb8) = *(arg1[0x15] + sx.q(r14_1) * 0x28 + 8)
                int64_t* rcx_9 = arg1[6]
                *(arg2 + 0xc0) = (*(*rcx_9 + 0x698))(rcx_9)
                *(arg2 + 0xc8) = arg1[0x17].d
                *(arg2 + 0xd0) = arg4
                *(arg2 + 0xd8) = data_14399f5e0
                *(arg2 + 0x1c8) = *(arg1[6] + 0x2e8)
                *(arg2 + 0x108) = arg8
                *(arg2 + 0x110) = *(sub_141dcc7c0(arg1[6]) + 0x240)
                int32_t rax_16
                int32_t rbp_2
                
                if ((*(*arg3 + 0x58))(arg3) == 0)
                    int32_t rax_18 = (*(*arg3 + 0xc8))(arg3)
                    int64_t rdx_2 = *arg3
                    rbp_2 = rax_18
                    rax_16 = (*(rdx_2 + 0xc0))(arg3, rdx_2)
                else
                    rax_16 = -1
                    rbp_2 = -1
                
                *(arg2 + 0x1c0) = rax_16
                *(arg2 + 0x1c4) = rbp_2
                int64_t* rcx_16 = arg1[6]
                void* rax_20 = (*(*rcx_16 + 0x150))(rcx_16)
                *(arg2 + 0x1d0) = *(rax_20 + 0x550)
                *(arg2 + 0x1d8) = *(rax_20 + 0x558)
                result.b = 1

return result
