// 函数: sub_1421ccf30
// 地址: 0x1421ccf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_20 = arg4[0]
float arg_18 = arg3
float __saved_zmm6[0x4] = arg5
float __saved_zmm9[0x4] = arg8
arg5 = zx.o(0)
arg8 = *(arg1 + 0x44)
arg8[0] = arg8[0] f- *(arg1 + 0x38)
float __saved_zmm10[0x4] = arg9
arg9 = *(arg1 + 0x40)
arg9[0] = arg9[0] f- *(arg1 + 0x34)
float __saved_zmm12[0x4] = arg11
arg11 = *(arg1 + 0x3c)
arg11[0] = arg11[0] f- *(arg1 + 0x30)
arg8[0] = arg8[0] * arg8[0]
arg9[0] = arg9[0] * arg9[0]
arg11[0] = arg11[0] * arg11[0]
arg9[0] = arg9[0] + arg11[0]
arg9[0] = arg9[0] + arg8[0]

if (not(arg9[0] != 0f))
    arg11 = 0x322bcc77
    arg9 = 0x322bcc77
    arg8 = 0x322bcc77

arg9[0] = arg9[0] * arg9[0]
arg11[0] = arg11[0] * arg11[0]
arg8[0] = arg8[0] * arg8[0]
arg9[0] = arg9[0] + arg11[0]
arg9[0] = arg9[0] + arg8[0]
float zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (not(arg9[0] <= 9.99999994e-09f))
    zmm5 = 0x3f000000
    zmm4 = _mm_rsqrt_ss(arg9[0], arg9[0])
    zmm2 = 0x3f000000
    arg9[0] = arg9[0] * 0.5f
    zmm4[0] = zmm4[0] * zmm4[0]
    arg9[0] = arg9[0] * zmm4[0]
    zmm2[0] = 0.5f - arg9[0]
    zmm4[0] = zmm4[0] * zmm2[0]
    zmm4[0] = zmm4[0] + zmm4[0]
    zmm4[0] = zmm4[0] * zmm4[0]
    arg9[0] = arg9[0] * zmm4[0]
    zmm5[0] = 0.5f - arg9[0]
    zmm4[0] = zmm4[0] * zmm5[0]
    zmm4[0] = zmm4[0] + zmm4[0]
    arg_18 = zmm4[0]

int32_t rax = *(arg2 + 0x118)
int64_t r14 = *(arg2 + 0xf0)
int32_t result = rax - 1
int32_t r15 = *(arg2 + 0x114)
int64_t r12 = *(arg2 + 0xf8)
int64_t result_1 = sx.q(result)

if (rax - 1 s>= 0)
    zmm5 = 0x3f800000
    float var_48_1[0x4] = arg6
    float var_58_1[0x4] = arg7
    float var_88_1[0x4] = arg10
    int64_t result_2
    
    do
        void* rbx_3 = zx.q(zx.d(*(r12 + (result_1 << 1))) * r15) + r14
        
        if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
            bool cond:1_1 = arg11[0] == arg5[0]
            void* r8 = *(arg2 + 0x18)
            arg6 = *(rbx_3 + 0x10)
            float zmm1[0x4] = *(r8 + 0x1d0)
            arg10 = *(rbx_3 + 0x14)
            arg6[0] = arg6[0] - zmm1[0]
            arg7 = *(rbx_3 + 0x18)
            arg4 = *(arg1 + 0x30)
            float zmm0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            arg10[0] = arg10[0] - zmm0[0]
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            arg7[0] = arg7[0] - zmm1[0]
            arg6[0] = arg6[0] - arg4[0]
            arg10[0] = arg10[0] f- *(arg1 + 0x34)
            arg6[0] = arg6[0] * arg11[0]
            arg7[0] = arg7[0] f- *(arg1 + 0x38)
            arg10[0] = arg10[0] * arg9[0]
            arg7[0] = arg7[0] * arg8[0]
            arg10[0] = arg10[0] + arg6[0]
            zmm5[0] = zmm5[0] / arg9[0]
            arg10[0] = arg10[0] + arg7[0]
            zmm1 = arg5
            arg11[0] = arg11[0] * arg10[0]
            arg9[0] = arg9[0] * arg10[0]
            arg8[0] = arg8[0] * arg10[0]
            zmm2 = arg5
            arg11[0] = arg11[0] * zmm5[0]
            arg9[0] = arg9[0] * zmm5[0]
            arg8[0] = arg8[0] * zmm5[0]
            zmm0 = arg5
            arg_18 = arg11[0]
            
            if (not(cond:1_1))
                zmm2 = arg11
                zmm2[0] = zmm2[0] - arg4[0]
                zmm2[0] = zmm2[0] / arg11[0]
            
            if (not(arg9[0] == arg5[0]))
                zmm1 = arg9
                zmm1[0] = zmm1[0] f- *(arg1 + 0x34)
                zmm1[0] = zmm1[0] / arg9[0]
            
            if (not(arg8[0] == arg5[0]))
                zmm0 = arg8
                zmm0[0] = zmm0[0] f- *(arg1 + 0x38)
                zmm0[0] = zmm0[0] / arg8[0]
            
            arg4 = arg5
            
            if (zmm2[0] != arg5[0])
            label_1421cd1eb:
                arg4 = zmm2
            label_1421cd1ee:
                
                if (not(arg4[0] < arg5[0]) && not(arg4[0] > zmm5[0]))
                    goto label_1421cd20a
            else
                if (zmm1[0] != arg5[0] || not(zmm0[0] == arg5[0]))
                    if (zmm2[0] != arg5[0])
                        goto label_1421cd1eb
                    
                    if (not(zmm1[0] == arg5[0]))
                        arg4 = zmm1
                        goto label_1421cd1ee
                    
                    if (zmm0[0] == arg5[0])
                        goto label_1421cd20a
                    
                    arg4 = zmm0
                    goto label_1421cd1ee
                
            label_1421cd20a:
                zmm0, result, arg5, arg6 = sub_141fe5610(arg1 + 0x48, arg4, r8, nullptr, arg14, 
                    arg13, arg12, __saved_zmm12, var_88_1, __saved_zmm10, __saved_zmm9, var_58_1, 
                    var_48_1, __saved_zmm6)
                arg6[0] = arg6[0] - arg_18
                arg10[0] = arg10[0] - arg9[0]
                bool cond:3_1 = zmm0[0] <= arg5[0]
                arg7[0] = arg7[0] - arg8[0]
                arg10[0] = arg10[0] * arg10[0]
                arg6[0] = arg6[0] * arg6[0]
                arg7[0] = arg7[0] * arg7[0]
                arg10[0] = arg10[0] + arg6[0]
                arg10[0] = arg10[0] + arg7[0]
                zmm4 = _mm_sqrt_ss(0, arg10[0])
                
                if (not(cond:3_1) && not(zmm4[0] > zmm0[0]))
                    int64_t r8_1 = *(arg2 + 0x18)
                    zmm0[0] = zmm0[0] - zmm4[0]
                    zmm0[0] = zmm0[0] / zmm0[0]
                    zmm0, result, arg5, arg6 = sub_141fe5610(arg1 + 0x78, zmm0, r8_1, nullptr)
                    zmm4 = arg_20
                    arg7[0] = arg7[0] * arg11[0]
                    arg7[0] = arg7[0] * arg9[0]
                    arg6[0] = arg6[0] * arg9[0]
                    arg10[0] = arg10[0] * arg8[0]
                    arg6[0] = arg6[0] * arg8[0]
                    arg10[0] = arg10[0] - arg7[0]
                    arg10[0] = arg10[0] * arg11[0]
                    arg7[0] = arg7[0] - arg6[0]
                    arg6[0] = arg6[0] - arg10[0]
                    arg10[0] = arg10[0] * zmm0[0]
                    arg7[0] = arg7[0] * zmm0[0]
                    arg6[0] = arg6[0] * zmm0[0]
                    arg7[0] = arg7[0] * zmm4[0]
                    arg10[0] = arg10[0] * zmm4[0]
                    arg7[0] = arg7[0] f+ *(rbx_3 + 0x34)
                    arg6[0] = arg6[0] * zmm4[0]
                    arg10[0] = arg10[0] f+ *(rbx_3 + 0x30)
                    arg6[0] = arg6[0] f+ *(rbx_3 + 0x38)
                    *(rbx_3 + 0x34) = arg7[0]
                    *(rbx_3 + 0x30) = arg10[0]
                    *(rbx_3 + 0x38) = arg6[0]
                
                zmm5 = 0x3f800000
        
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)

return result
