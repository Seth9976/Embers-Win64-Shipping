// 函数: sub_141aaf930
// 地址: 0x141aaf930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int128_t zmm6
result, zmm6 = sub_141e1c570(arg1 + 0x10, arg2, arg3)

if (*(arg1 + 0x30) != 0 && *(arg1 + 0x38) != 0)
    char arg_8
    float var_40_1 = &arg_8
    void*** (* var_48)() = j_sub_141a7e490
    arg_8 = 0
    void* rax = sub_140a756e0(&var_48, &data_1439dbe78)
    *(rax + 0x18) = 0
    
    if (*(rax + 0x1c) s<= 0xffffffff)
        sub_14083ad30(rax + 0x10, 0)
    
    sub_142498670(*(arg1 + 0x30), rax + 0x10)
    int64_t* rbx_1 = *(rax + 0x10)
    void* r14_1 = *(*arg2 + 0xb0)
    result = sx.q(*(rax + 0x18))
    void* rdi_2 = rbx_1 + result * 0xc
    
    if (rbx_1 != rdi_2)
        int128_t var_28_1 = zmm6
        
        do
            float rax_2 = rbx_1[1].d
            var_48 = *rbx_1
            result = sub_141e43480(r14_1, &data_143f398c8, &var_48)
            int16_t r8_2 = result.w
            
            if (result.w != 0xffff)
                int64_t* r9_1 = arg2[6]
                uint32_t r10_1 = zx.d(result.w)
                int32_t r11_1 = r9_1[1].d
                int16_t rdx_1
                
                if (r10_1 s>= r11_1)
                    rdx_1 = -1
                else
                    uint64_t rcx_6 = zx.q(result.w)
                    result = *r9_1
                    rdx_1 = *(result + (rcx_6 << 1))
                
                float zmm2
                
                if (rdx_1 == 0xffff)
                    zmm2 = (zx.o(0)).d
                else
                    result = arg2[4]
                    zmm2 = *(result + (zx.q(rdx_1) << 3))
                
                void*** (* zmm0_1)() = *(arg1 + 0x28)
                
                if (zmm0_1.d f>= 0f)
                    zmm0_1 = _mm_min_ss(zmm0_1.d, 0x3f800000)
                else
                    zmm0_1 = (zx.o(0)).q
                
                int16_t rdx_2
                
                if (r10_1 s>= r11_1)
                    rdx_2 = -1
                else
                    result = *r9_1
                    rdx_2 = *(result + (zx.q(r8_2) << 1))
                
                if (rdx_2 != 0xffff)
                    result = arg2[4]
                    uint64_t rcx_9 = zx.q(rdx_2)
                    *(result + (rcx_9 << 3)) = (rax_2 - zmm2) f* zmm0_1.d + zmm2
                    *(result + (rcx_9 << 3) + 4) = 1
            
            rbx_1 += 0xc
        while (rbx_1 != rdi_2)

return result
