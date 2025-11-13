// 函数: sub_141dec590
// 地址: 0x141dec590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d)
int128_t __saved_zmm12 = arg11
int64_t* rbx = arg1
float __saved_zmm13[0x4] = arg12
arg11 = arg4
arg12 = arg3
uint64_t rsi
rsi.b = arg12[0] f> arg11.d
char arg_18 = rsi.b

if (rsi.b == 0)
    int32_t i = 0
    
    if (result.d s> 0)
        do
            result, arg11, arg12 = sub_141dec230((sx.q(i) << 5) + *rbx, arg2, arg12, arg11)
            i += 1
        while (i s< rbx[1].d)
else
    int32_t temp0_1 = result.d
    result = zx.q(result.d - 1)
    int64_t r12_1 = sx.q(result.d)
    
    if (temp0_1 - 1 s>= 0)
        uint32_t var_48_1[0x4] = arg5
        uint32_t var_58_1[0x4] = arg6
        uint32_t var_68_1[0x4] = arg7
        uint32_t var_78_1[0x4] = arg8
        uint32_t var_88_1[0x4] = arg9
        uint32_t var_98_1[0x4] = arg10
        int64_t r13_2 = r12_1 << 5
        int64_t temp1_1
        
        do
            int64_t* rbx_2 = *rbx + r13_2
            
            if (not(arg12[0] f== arg11.d) && *(rbx_2 + 0x1c) != 0)
                void* const r14_1 = *rbx_2
                
                if (r14_1 != 0)
                    arg5 = rbx_2[1].d
                    uint32_t zmm0_1[0x4]
                    zmm0_1, result = sub_141debb60(rbx_2)
                    zmm0_1[0] = zmm0_1[0] f+ arg5[0]
                    bool cond:1_1
                    
                    if (rsi.b == 0)
                        if (not(arg12[0] f>= zmm0_1[0]))
                            cond:1_1 = arg11.d f<= arg5[0]
                        label_141dec69d:
                            
                            if (not(cond:1_1))
                                arg10 = *(r14_1 + 0x94)
                                arg10[0] = arg10[0] f* *(rbx_2 + 0x14)
                                
                                if (not(_mm_and_ps(arg10, 0x7fffffff)[0] f> 9.99999994e-09f))
                                    arg10 = 0x3f800000
                                
                                uint32_t arg_20
                                
                                if (rsi.b == 0)
                                    arg_20 = _mm_max_ss(arg5[0], arg12[0])[0]
                                    _mm_min_ss(zmm0_1[0], arg11.d)
                                else
                                    arg6 = _mm_min_ss(zmm0_1[0], arg12[0])
                                    _mm_max_ss(arg5[0], arg11.d)
                                    arg_20 = arg6[0]
                                
                                uint32_t zmm0_2[0x4]
                                int512_t zmm2
                                zmm0_2, zmm2, arg5, arg6 = sub_141de6e10(rbx_2, &arg_20)
                                arg8 = *(rbx_2 + 0xc)
                                arg7 = zmm0_2
                                zmm0_2 = rbx_2[2].d
                                
                                if (not(arg7[0] f>= arg8[0]))
                                    arg7 = arg8
                                else if (not(arg7[0] f< zmm0_2[0]))
                                    arg7 = zmm0_2
                                
                                arg10[0] f- 0f
                                bool c_1 = arg10[0] f< 0f
                                arg5[0] = arg5[0] f- arg6[0]
                                arg5 = _mm_and_ps(arg5, 0x7fffffff)
                                
                                if (c_1 == rsi.b)
                                    arg9 = arg8
                                    arg8 = zmm0_2
                                else
                                    arg9 = zmm0_2
                                
                                void* rax_1 = sub_1424696d0()
                                void* rdx_1 = *(r14_1 + 0x10)
                                result = sx.q(*(rax_1 + 0x38))
                                
                                if (result.d s> *(rdx_1 + 0x38))
                                    r14_1 = nullptr
                                else
                                    uint64_t result_1 = result
                                    result = *(rdx_1 + 0x30)
                                    
                                    if (*(result + (result_1 << 3)) != rax_1 + 0x30)
                                        r14_1 = nullptr
                                
                                void* const rbp_1 = *rbx_2
                                
                                if (rbp_1 == 0)
                                    rbp_1 = nullptr
                                else
                                    void* rax_2 = sub_14245c1f0()
                                    void* rdx_2 = *(rbp_1 + 0x10)
                                    result = sx.q(*(rax_2 + 0x38))
                                    
                                    if (result.d s> *(rdx_2 + 0x38))
                                        rbp_1 = nullptr
                                    else
                                        uint64_t result_2 = result
                                        result = *(rdx_2 + 0x30)
                                        
                                        if (*(result + (result_2 << 3)) != rax_2 + 0x30)
                                            rbp_1 = nullptr
                                
                                if (r14_1 != 0 || rbp_1 != 0)
                                    int32_t rsi_1 = 1
                                    
                                    if (rbx_2[3].d s>= 1)
                                        rsi_1 = rbx_2[3].d
                                    
                                    if (rsi_1 s<= 0)
                                    label_141dec872:
                                        rsi = zx.q(arg_18)
                                    else
                                        while (true)
                                            if (arg5[0] f<= 0f)
                                                goto label_141dec872
                                            
                                            arg8[0] = arg8[0] f- arg7[0]
                                            uint32_t zmm1_1[0x4] = _mm_and_ps(arg5, 0x7fffffff)
                                            arg8[0] = arg8[0] f/ arg10[0]
                                            uint32_t zmm0_3[0x4] = _mm_and_ps(arg8, 0x7fffffff)
                                            void* const var_e8
                                            uint32_t var_e0
                                            
                                            if (zmm1_1[0] f< zmm0_3[0])
                                                rsi = zx.q(arg_18)
                                                float zmm3
                                                
                                                zmm3 = rsi.b == 0 ? 1f : -1f
                                                
                                                if (r14_1 != 0)
                                                    int64_t rbx_4 = sx.q(arg2[1].d)
                                                    var_e0 = arg7[0]
                                                    float var_dc_1 =
                                                        zmm3 f* arg10[0] f* arg5[0] f+ arg7[0]
                                                    var_e8 = r14_1
                                                    int32_t rax_4 = (rbx_4 + 1).d
                                                    arg2[1].d = rax_4
                                                    
                                                    if (rax_4 s> *(arg2 + 0xc))
                                                        sub_1405a4f90(arg2)
                                                    
                                                    result = *arg2
                                                    *(result + rbx_4 * 0x10) = var_e8.o
                                                else if (rbp_1 != 0)
                                                    zmm2.o = arg7
                                                    result = sub_141dec590(rbp_1 + 0xa8, arg2, zmm2)
                                                
                                                break
                                            
                                            void* const var_f8
                                            uint32_t var_f0
                                            
                                            if (r14_1 != 0)
                                                int64_t rbx_3 = sx.q(arg2[1].d)
                                                var_f0 = arg7[0]
                                                uint32_t var_ec_1 = arg8[0]
                                                var_f8 = r14_1
                                                int32_t rax_3 = (rbx_3 + 1).d
                                                arg2[1].d = rax_3
                                                
                                                if (rax_3 s> *(arg2 + 0xc))
                                                    sub_1405a4f90(arg2)
                                                
                                                result = *arg2
                                                *(result + rbx_3 * 0x10) = var_f8.o
                                            else if (rbp_1 != 0)
                                                zmm2.o = arg7
                                                result = sub_141dec590(rbp_1 + 0xa8, arg2, zmm2, 
                                                    arg8[0], var_f8, var_f0, var_e8, var_e0, arg14, 
                                                    arg13, __saved_zmm13, __saved_zmm12, var_98_1, 
                                                    var_88_1, var_78_1, var_68_1, var_58_1, 
                                                    var_48_1)
                                            rsi_1 -= 1
                                            arg5[0] = arg5[0] f- arg8[0]
                                            arg7 = arg9
                                            
                                            if (rsi_1 s<= 0)
                                                goto label_141dec872
                    else if (not(arg11.d f>= zmm0_1[0]))
                        cond:1_1 = arg12[0] f<= arg5[0]
                        goto label_141dec69d
            
            rbx = arg1
            r13_2 -= 0x20
            temp1_1 = r12_1
            r12_1 -= 1
        while (temp1_1 - 1 s>= 0)

return result
