// 函数: sub_14037de40
// 地址: 0x14037de40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result = arg7
int128_t zmm10 = arg6
int64_t r12 = sx.q(arg4)
int64_t r15 = sx.q(arg3)
int64_t r10 = arg1
zmm10.d f- 0f

if (not(is_unordered.d(zmm10.d, 0f)) && not(zmm10.d f!= 0f))
    result.d f- 0f

if (is_unordered.d(zmm10.d, 0f) || zmm10.d f!= 0f || is_unordered.d(result.d, 0f)
        || result.d f!= 0f)
    int32_t rbx_1 = arg11
    int64_t rsi_1 = arg10
    int64_t rcx = sx.q(arg8) * 3
    uint32_t r11_1 = 0
    int64_t rdi_1 = r12
    int128_t zmm15 = zmm10
    int128_t zmm6 = zmm10
    int128_t result_3 = result
    zmm10.d = zmm10.d f* *((rcx << 2) + 0x1435fd5f8)
    zmm6.d = zmm6.d f* *((rcx << 2) + 0x1435fd5f4)
    zmm15.d = zmm15.d f* *(&data_1435fd5f0 + (rcx << 2))
    int128_t result_4 = result
    int128_t result_5 = result
    int64_t rcx_1 = sx.q(arg9) * 3
    result = 0x3f800000
    arg6 = zmm6.d
    result_3.d = result_3.d f* *(&data_1435fd5f0 + (rcx_1 << 2))
    result_4.d = result_4.d f* *((rcx_1 << 2) + 0x1435fd5f4)
    result_5.d = result_5.d f* *((rcx_1 << 2) + 0x1435fd5f8)
    int128_t* rcx_3 = arg2 - (r12 << 2)
    int128_t zmm9 = *(rcx_3 + 4)
    int128_t zmm8 = *rcx_3
    int128_t zmm7 = *(rcx_3 - 4)
    int128_t zmm14 = *(arg2 - ((r12 << 2) + 8))
    uint64_t rcx_6 = 0
    int32_t zmm1
    int128_t result_1
    float zmm3
    int128_t result_2
    int128_t zmm5
    
    if (rbx_1 s>= 4)
        void* rax_6 = (r15 << 2) + 0xc - arg2
        int64_t r9_1 = r15 - r12
        float* r8_3 = arg2 - ((r15 << 2) + 8)
        void* rax_9 = (r15 << 2) + 0x10 - arg2
        void* rax_12 = (r15 << 2) + 0x14 - arg2
        void* rax_15 = (r15 << 2) + 8 - arg2
        void* rcx_8 = rax_15 + rsi_1
        uint64_t rax_19 = zx.q(((rbx_1 - 4) u>> 2) + 1)
        uint64_t i_2 = zx.q(rax_19.d)
        void* r11_5 = rcx_8
        uint64_t i
        
        do
            result_2 = *(r8_3 + r11_5)
            zmm6 = r8_3[r9_1 + 4]
            zmm5 = zmm7
            result_2.d = result_2.d f* result_2.d
            result_1.d = result.d f- result_2.d
            zmm3 = result_1.d
            result = result_1
            result_1.d = result_1.d f* zmm10.d
            result.d = result.d f* arg6
            zmm1 = (r8_3[3] + r8_3[1]) f* result.d
            result.d = (*r8_3).d f+ r8_3[4]
            result.d = result.d f* result_1.d
            zmm3 = zmm3 f* zmm15.d * r8_3[2] f+ *(r8_3 + (r15 << 2) + 8) f+ zmm1
            zmm1 = result_2.d f* result_4.d
            zmm3 = zmm3 f+ result.d
            result = result_2
            result_2.d = result_2.d f* result_5.d
            result.d = result.d f* result_3.d
            result.d = result.d f* zmm8.d
            zmm3 = zmm3 f+ result.d
            result.d = zmm7.d f+ zmm9.d
            zmm1 = zmm1 f* result.d
            result.d = zmm6.d f+ zmm14.d
            zmm14 = zmm6
            zmm6 = arg6
            result.d = result.d f* result_2.d
            *(r8_3 + rax_15 + r10) = zmm3 f+ zmm1 f+ result.d
            result_2 = *(rax_6 + rsi_1 + r8_3)
            result_2.d = result_2.d f* result_2.d
            zmm7 = r8_3[r9_1 + 5]
            result_1.d = 1f f- result_2.d
            result = result_1
            zmm3 = result_1.d
            result_1.d = result_1.d f* zmm10.d
            result.d = result.d f* zmm6.d
            zmm1 = (r8_3[4] + r8_3[2]) f* result.d
            result.d = r8_3[5].d f+ r8_3[1]
            result.d = result.d f* result_1.d
            zmm3 = zmm3 f* zmm15.d * r8_3[3] f+ *((r15 << 2) + 0xc + r8_3) f+ zmm1
            zmm1 = result_2.d f* result_4.d
            zmm3 = zmm3 f+ result.d
            result = result_2
            result_2.d = result_2.d f* result_5.d
            result.d = result.d f* result_3.d
            result.d = result.d f* zmm9.d
            zmm3 = zmm3 f+ result.d
            result.d = zmm8.d f+ zmm14.d
            zmm1 = zmm1 f* result.d
            result.d = zmm7.d f+ zmm5.d
            zmm5 = zmm8
            result.d = result.d f* result_2.d
            *(rax_6 + r10 + r8_3) = zmm3 f+ zmm1 f+ result.d
            result_2 = *(rax_9 + rsi_1 + r8_3)
            zmm8 = r8_3[r9_1 + 6]
            result_2.d = result_2.d f* result_2.d
            zmm1 = r8_3[5]
            r11_5 = rcx_8
            result_1.d = 1f f- result_2.d
            r8_3 = &r8_3[4]
            zmm3 = result_1.d
            result = result_1
            result_1.d = result_1.d f* zmm10.d
            result.d = result.d f* zmm6.d
            zmm1 = (zmm1 f+ r8_3[-1]) f* result.d
            result.d = r8_3[2].d f+ r8_3[-2]
            result.d = result.d f* result_1.d
            zmm3 = zmm3 f* zmm15.d * *r8_3 f+ *((r15 << 2) + 0x10 + r8_3 - 0x10) f+ zmm1
            zmm1 = result_2.d f* result_4.d
            zmm3 = zmm3 f+ result.d
            result = result_2
            result_2.d = result_2.d f* result_5.d
            result.d = result.d f* result_3.d
            result.d = result.d f* zmm14.d
            zmm3 = zmm3 f+ result.d
            result.d = zmm9.d f+ zmm7.d
            zmm1 = zmm1 f* result.d
            result.d = zmm8.d f+ zmm5.d
            zmm5 = zmm9
            result.d = result.d f* result_2.d
            *(rax_9 + r10 + r8_3 - 0x10) = zmm3 f+ zmm1 f+ result.d
            result_2 = *(rax_12 + rsi_1 + r8_3 - 0x10)
            result_2.d = result_2.d f* result_2.d
            zmm9 = r8_3[r9_1 + 3]
            result_1.d = 1f f- result_2.d
            result = result_1
            zmm3 = result_1.d
            result_1.d = result_1.d f* zmm10.d
            result.d = result.d f* zmm6.d
            zmm1 = (r8_3[2] + *r8_3) f* result.d
            result.d = r8_3[3].d f+ r8_3[-1]
            result.d = result.d f* result_1.d
            zmm3 =
                zmm3 f* zmm15.d * r8_3[1] f+ *((r15 << 2) + 0x14 + r8_3 - 0x10) f+ zmm1 f+ result.d
            zmm1 = result_2.d f* result_4.d
            result.d = result_2.d f* result_3.d
            result_2.d = result_2.d f* result_5.d
            result.d = result.d f* zmm7.d
            zmm3 = zmm3 f+ result.d
            result.d = zmm14.d f+ zmm8.d
            zmm1 = zmm1 f* result.d
            result.d = zmm9.d f+ zmm5.d
            result.d = result.d f* result_2.d
            zmm3 = zmm3 f+ zmm1 f+ result.d
            result = 0x3f800000
            *(r8_3 + rax_12 + r10 - 0x10) = zmm3
            i = i_2
            i_2 -= 1
        while (i != 1)
        r12 = sx.q(arg4)
        r10 = arg1
        r11_1 = (rax_19 << 2).d
        rbx_1 = arg11
        rsi_1 = arg10
        rcx_6 = rax_19 << 2
        r15 = zx.q(arg3)
        rdi_1 = r12
    
    if (r11_1 s< rbx_1)
        int64_t rax_20 = sx.q(r15.d)
        float* rcx_13 = arg2 + ((rcx_6 - rax_20 - 1) << 2)
        int64_t rax_22 = (rax_20 << 2) - arg2
        int32_t i_4 = rbx_1 - r11_1
        uint64_t i_3 = zx.q(i_4)
        r11_1 += i_4
        uint64_t i_1
        
        do
            result_2 = *(rcx_13 + rsi_1 + rax_22 + 4)
            zmm3 = rcx_13[2]
            zmm5 = rcx_13[rax_20 - rdi_1 + 3]
            rcx_13 = &rcx_13[1]
            result_2.d = result_2.d f* result_2.d
            result_1.d = result.d f- result_2.d
            zmm1 = result_1.d
            result = result_1
            result_1.d = result_1.d f* zmm10.d
            result.d = result.d f* zmm6.d
            zmm3 = (zmm3 + rcx_13[-1]) f* result.d
            result.d = rcx_13[2].d f+ rcx_13[-2]
            result.d = result.d f* result_1.d
            zmm3 = zmm3 f+ zmm1 f* zmm15.d f* *rcx_13 f+ rcx_13[rax_20] f+ result.d
            zmm1 = result_2.d f* result_4.d
            result.d = result_2.d f* result_3.d
            result_2.d = result_2.d f* result_5.d
            result.d = result.d f* zmm8.d
            zmm3 = zmm3 f+ result.d
            result.d = zmm7.d f+ zmm9.d
            zmm1 = zmm1 f* result.d
            result.d = zmm5.d f+ zmm14.d
            zmm14 = zmm7
            zmm7 = zmm8
            zmm8 = zmm9
            zmm9 = zmm5
            result.d = result.d f* result_2.d
            zmm3 = zmm3 f+ zmm1 f+ result.d
            result = 0x3f800000
            *(rcx_13 + rax_22 + r10) = zmm3
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    result = arg7
    result.d f- 0f
    
    if (is_unordered.d(result.d, 0f) || result.d f!= 0f)
        int64_t rax_26 = sx.q(r11_1)
        return sub_14037e600(r10 + (rax_26 << 2), arg2 + (rax_26 << 2), r12.d, arg5 - r11_1, 
            result_3.d, result_4.d, result_5.d)
    
    if (arg2 != r10)
        int64_t rcx_14 = sx.q(rbx_1)
        return memmove(r10 + (rcx_14 << 2), arg2 + (rcx_14 << 2), (arg5 - rbx_1) << 2)
else if (arg2 != arg1)
    return memmove(arg1, arg2, arg5 << 2)

return result
