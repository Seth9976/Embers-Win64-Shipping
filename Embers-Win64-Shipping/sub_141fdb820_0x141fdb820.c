// 函数: sub_141fdb820
// 地址: 0x141fdb820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
int64_t* r15 = arg1
char rdi = arg3
int64_t result_1 = result
float zmm14[0x4] = arg2
int64_t result_4 = result
int32_t rcx = (result - 1).d
int32_t var_140 = rcx

if (result.d s> 0)
    int32_t r9_1 = 1
    int32_t i = 0
    int64_t r14_1 = 0
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    int64_t r10_1 = sx.q(rcx)
    int128_t zmm8
    int128_t var_68_1 = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    int64_t var_130_1 = r10_1
    int32_t arg_20 = 1
    
    do
        int32_t rax
        
        if (r14_1 != 0)
            rax = r9_1 - 2
        else
            rax = 0
            
            if (r15[2].b != r14_1.b)
                rax = rcx
        
        int32_t r8
        
        if (r14_1 != r10_1)
            r8 = r9_1
        else
            r8 = rcx
            
            if (r15[2].b != 0)
                r8 = 0
        
        int64_t rcx_1 = *r15
        int128_t* rbx_3 = r14_1 * 0x50 + rcx_1
        int128_t* rdx_3 = sx.q(rax) * 0x50 + rcx_1
        float (* r8_3)[0x4] = sx.q(r8) * 0x50 + rcx_1
        uint32_t rcx_2 = zx.d(*(rbx_3 + 0x4c))
        result = zx.q(rcx_2 - 1)
        float var_158[0x4]
        float var_150
        int64_t var_14c
        float var_144
        float zmm0[0x4]
        float zmm2[0x4]
        float zmm4[0x4]
        
        if ((result.b & 0xfb) == 0)
            if (rdi == 0 || (r14_1 != 0 && (r14_1 != r10_1 || r15[2].b != 0)))
                result = zx.q(*(rdx_3 + 0x4c))
                
                if (result.b == 1)
                    result.b = 1
                else
                    result.b -= 3
                    
                    if (result.b u<= 2)
                        result.b = 1
                    else
                        result.b = 0
                
                if (result.b == 0)
                    *(rbx_3 + 0x1c) = *(rdx_3 + 0x1c)
                    *(rbx_3 + 0x2c) = *(rdx_3 + 0x2c)
                    *(rbx_3 + 0x34) = *(rdx_3 + 0x34)
                    arg2 = zx.o(*(rdx_3 + 0x44))
                else
                    char rax_4 = r15[2].b
                    __builtin_memset(&var_158, 0, 0x18)
                    
                    if (rax_4 == 0 || r14_1 != 0)
                        zmm11 = *rdx_3
                        zmm6 = *rbx_3
                    else
                        zmm6 = *rbx_3
                        zmm11 = zmm6
                        zmm11[0] = zmm11[0] f- *(r15 + 0x14)
                    
                    if (rax_4 == 0 || r14_1 != r10_1)
                        zmm10 = *r8_3
                    else
                        zmm10 = zmm6
                        zmm10[0] = zmm10[0] f+ *(r15 + 0x14)
                    
                    void* rdi_1 = rdx_3 + 4
                    
                    if (rcx_2.b != 5)
                        zmm0 = rbx_3[1].d
                        zmm10[0] = zmm10[0] - zmm11[0]
                        arg2 = *(rbx_3 + 0x14)
                        zmm2 = *(rbx_3 + 0x18)
                        zmm8.d = 1f - zmm14[0]
                        float zmm3[0x4] = *(rbx_3 + 4)
                        zmm9 = r8_3[1][0]
                        zmm7 = zmm3
                        zmm7[0] = zmm7[0] f- *rdi_1
                        arg2[0] = arg2[0] f- *(rdx_3 + 0x14)
                        zmm4 = *(rbx_3 + 8)
                        zmm9[0] = zmm9[0] - zmm0[0]
                        zmm0[0] = zmm0[0] f- rdx_3[1].d
                        zmm6 = *(rbx_3 + 0xc)
                        float temp0_5[0x4] = _mm_max_ss(zmm10[0], 0x38d1b717)
                        zmm9[0] = zmm9[0] + zmm0[0]
                        zmm0 = (*r8_3)[5]
                        zmm0[0] = zmm0[0] - arg2[0]
                        zmm2[0] = zmm2[0] f- *(rdx_3 + 0x18)
                        zmm9[0] = zmm9[0] f* zmm8.d
                        arg2[0] = arg2[0] + zmm0[0]
                        zmm0 = (*r8_3)[6]
                        zmm0[0] = zmm0[0] - zmm2[0]
                        zmm4[0] = zmm4[0] f- *(rdx_3 + 8)
                        arg2[0] = arg2[0] f* zmm8.d
                        zmm2[0] = zmm2[0] + zmm0[0]
                        zmm0 = (*r8_3)[1]
                        zmm0[0] = zmm0[0] - zmm3[0]
                        zmm2[0] = zmm2[0] f* zmm8.d
                        zmm7[0] = zmm7[0] + zmm0[0]
                        zmm0 = (*r8_3)[2]
                        zmm0[0] = zmm0[0] - zmm4[0]
                        float result_3 = zmm2[0]
                        zmm6[0] = zmm6[0] f- *(rdx_3 + 0xc)
                        zmm7[0] = zmm7[0] f* zmm8.d
                        zmm4[0] = zmm4[0] + zmm0[0]
                        zmm0 = (*r8_3)[3]
                        zmm0[0] = zmm0[0] - zmm6[0]
                        zmm4[0] = zmm4[0] f* zmm8.d
                        zmm6[0] = zmm6[0] + zmm0[0]
                        int64_t var_114_1 = (_mm_unpacklo_ps(zmm9, arg2[0].q)).q
                        zmm6[0] = zmm6[0] f* zmm8.d
                        float var_e8_1 = zmm6[0]
                        float temp0_7[0x4] = _mm_unpacklo_ps(zmm7, zmm4[0].q)
                        zmm2 = 0x3f800000
                        zmm2[0] = 1f / temp0_5[0]
                        float var_118_1 = var_e8_1
                        result = zx.q(result_3)
                        int32_t var_10c_1 = result.d
                        zmm3 = zx.o(var_114_1)
                        float var_120[0x4]
                        var_120[0].q = temp0_7.q
                        var_14c = zmm3.q
                        var_158 = var_120
                        arg2 = var_158[1]
                        arg2[0] = arg2[0] * zmm2[0]
                        zmm2[0] = zmm2[0] * zmm7[0]
                        var_158[1] = arg2[0]
                        arg2 = var_14c.d
                        var_158[0] = zmm2[0]
                        zmm0 = var_150
                        zmm0[0] = zmm0[0] * zmm2[0]
                        arg2[0] = arg2[0] * zmm2[0]
                        var_150 = zmm0[0]
                        zmm0 = var_144
                        zmm0[0] = zmm0[0] * zmm2[0]
                        zmm3[0] = zmm3[0] * zmm2[0]
                        var_144 = zmm0[0]
                        var_14c.d = arg2[0]
                        var_14c:4.d = zmm3[0]
                    else
                        result = &var_158 - rdi_1
                        0x3f800000[0] = 1f - zmm14[0]
                        void* r13_2 = rbx_3 + 4 - rdi_1
                        void* r12_2 = &(*r8_3)[1] - rdi_1
                        
                        do
                            zmm0, zmm6, zmm7 = sub_140acf6c0((*rdi_1)[0], zmm11, *(rdi_1 + r13_2), 
                                zmm6, (*(r12_2 + rdi_1))[0], zmm10[0])
                            zmm0[0] = zmm0[0] * zmm7[0]
                            i += 4
                            *(result + rdi_1) = zmm0[0]
                            rdi_1 += 4
                        while (i u< 0x18)
                        
                        r15 = arg1
                        i = 0
                        r9_1 = arg_20
                        r10_1 = var_130_1
                        result_4 = result_1
                    
                    zmm2 = var_158
                    rdi = arg3
                    arg2 = zx.o(var_14c)
                    *(rbx_3 + 0x1c) = zmm2
                    *(rbx_3 + 0x2c) = arg2.q
                    *(rbx_3 + 0x34) = zmm2
                
                *(rbx_3 + 0x44) = arg2.q
            else
            label_141fdba30:
                *(rbx_3 + 0x1c) = zx.o(0)
                *(rbx_3 + 0x2c) = (_mm_unpacklo_ps(zx.o(0), 0)).q
                *(rbx_3 + 0x34) = zx.o(0)
                *(rbx_3 + 0x44) = (_mm_unpacklo_ps(zx.o(0), 0)).q
        else if (rcx_2.b == 0)
            arg2 = (*r8_3)[1]
            zmm0 = (*r8_3)[6]
            zmm0[0] = zmm0[0] f- *(rbx_3 + 0x18)
            float zmm5[0x4] = r8_3[1][0]
            arg2[0] = arg2[0] f- *(rbx_3 + 4)
            zmm2 = (*r8_3)[2]
            zmm2[0] = zmm2[0] f- *(rbx_3 + 8)
            zmm5[0] = zmm5[0] f- rbx_3[1].d
            zmm4 = (*r8_3)[5]
            zmm4[0] = zmm4[0] f- *(rbx_3 + 0x14)
            float result_2 = zmm0[0]
            zmm0 = (*r8_3)[3]
            zmm0[0] = zmm0[0] f- *(rbx_3 + 0xc)
            float temp0_1[0x4] = _mm_unpacklo_ps(arg2, zmm2[0].q)
            var_150 = zmm0[0]
            result = zx.q(result_2)
            var_14c = (_mm_unpacklo_ps(zmm5, zmm4[0].q)).q
            zmm2 = var_158
            var_144 = result.d
            arg2 = zx.o(var_14c)
            zmm2[0].q = temp0_1.q
            *(rbx_3 + 0x1c) = zmm2
            *(rbx_3 + 0x2c) = arg2.q
            var_158 = zmm2
            *(rbx_3 + 0x34) = zmm2
            *(rbx_3 + 0x44) = arg2.q
        else if (rcx_2.b == 2)
            goto label_141fdba30
        rcx = var_140
        r9_1 += 1
        r14_1 += 1
        arg_20 = r9_1
    while (r14_1 s< result_4)

return result
