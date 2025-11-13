// 函数: sub_140400670
// 地址: 0x140400670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t r12 = sx.q(arg5)
uint64_t result = zx.q((r12 - 3).d)
int32_t rcx = 0
int64_t r11 = sx.q(arg4)
int64_t r15 = arg2
float zmm0[0x4]
float zmm2[0x4]

if (result.d s> 0)
    void* r8 = arg3 + 8
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int32_t rdi_1 = (r11 - 3).d
    uint64_t rax_4 = zx.q(((result.d - 1) u>> 2) + 1)
    uint64_t i_2 = zx.q(rax_4.d)
    result = zx.q((rax_4 << 2).d)
    var_78 = result.d
    uint64_t i
    
    do
        uint32_t result_1 = 0
        int64_t var_68_1 = 0
        float zmm5[0x4] = 0.o
        zmm6 = zx.o(0)
        
        if (rdi_1 s> 0)
            int128_t* r9 = arg1
            int128_t* rbx_1 = neg.q(arg1) + arg2
            result = zx.q(((rdi_1 - 1) u>> 2) + 1)
            uint64_t j_5 = zx.q(result.d)
            result_1 = (result << 2).d
            uint64_t j
            
            do
                float zmm4[0x4] = *r9
                zmm2 = *(rbx_1 + r9)
                float zmm3[0x4] = *(rbx_1 + r9 + 0xc)
                r9 = &r9[1]
                float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm3, 0x9e)
                float temp0_3[0x4] = _mm_mul_ps(temp0_1, zmm2)
                float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm3, 0x49)
                float temp0_5[0x4] = _mm_add_ps(zmm5, temp0_3)
                float temp0_7[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
                float temp0_8[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                zmm5 = _mm_add_ps(temp0_5, temp0_7)
                float temp0_11[0x4] = _mm_mul_ps(temp0_4, temp0_8)
                float temp0_12[0x4] = _mm_mul_ps(temp0_9, zmm3)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, temp0_11), temp0_12)
                j = j_5
                j_5 -= 1
            while (j != 1)
        
        if (result_1 s< r11.d)
            result = sx.q(result_1)
            zmm0 = *(arg1 + (result << 2))
            zmm5 =
                _mm_add_ps(zmm5, _mm_mul_ps(*(arg2 + (result << 2)), _mm_shuffle_ps(zmm0, zmm0, 0)))
            
            if (result_1 + 1 s< r11.d)
                result = sx.q(result_1 + 1)
                zmm0 = *(arg1 + (result << 2))
                zmm6 = _mm_add_ps(zmm6, 
                    _mm_mul_ps(*(arg2 + (result << 2)), _mm_shuffle_ps(zmm0, zmm0, 0)))
                
                if (result_1 + 2 s< r11.d)
                    result = sx.q(result_1 + 2)
                    zmm0 = *(arg1 + (result << 2))
                    zmm5 = _mm_add_ps(zmm5, 
                        _mm_mul_ps(*(arg2 + (result << 2)), _mm_shuffle_ps(zmm0, zmm0, 0)))
        
        float temp0_24[0x4] = _mm_add_ps(zmm6, zmm5)
        r8 += 0x10
        arg2 += 0x10
        int64_t var_70_1
        var_70_1.o = temp0_24
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)
        *(r8 - 0x18) = temp0_24[0]
        *(r8 - 0x14) = temp0_25[0]
        *(r8 - 0x10) = temp0_26[0]
        *(r8 - 0xc) = _mm_shuffle_ps(temp0_24, temp0_24, 0xff)[0]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx = var_78

int64_t rcx_3 = sx.q(rcx)

if (rcx_3 s< r12)
    result = rcx_3 << 2
    void* r9_3 = arg1 - result - r15
    uint64_t result_2 = result + r15
    void* r8_4 = ((3 - rcx_3) << 2) - r15 + arg1
    int64_t i_3 = r12 - rcx_3
    int64_t i_1
    
    do
        int64_t r11_1 = 0
        zmm2 = zx.o(0)
        
        if (r11 s>= 4)
            result = result_2
            int64_t j_3 = ((r11 - 4) u>> 2) + 1
            r11_1 = j_3 << 2
            int64_t j_1
            
            do
                float zmm1[0x4] = *(r9_3 + result + 4)
                zmm0 = *(r9_3 + result)
                result += 0x10
                zmm0[0] = zmm0[0] f* *(result - 0x10)
                zmm1[0] = zmm1[0] f* *(result - 0xc)
                zmm0[0] = zmm0[0] + zmm2[0]
                zmm2 = zmm1
                zmm1 = *(r8_4 + result - 0x10)
                zmm1[0] = zmm1[0] f* *(result - 4)
                zmm2[0] = zmm2[0] + zmm0[0]
                zmm0 = *(r8_4 + result - 0x14)
                zmm0[0] = zmm0[0] f* *(result - 8)
                zmm2[0] = zmm2[0] + zmm0[0]
                zmm2[0] = zmm2[0] + zmm1[0]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        if (r11_1 s< r11)
            void* rcx_6 = arg1 + (r11_1 << 2)
            int64_t j_4 = r11 - r11_1
            int64_t j_2
            
            do
                result = neg.q(arg1) + result_2
                rcx_6 += 4
                zmm0 = *(result + rcx_6 - 4)
                zmm0[0] = zmm0[0] f* *(rcx_6 - 4)
                zmm0[0] = zmm0[0] + zmm2[0]
                zmm2 = zmm0
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        *(arg3 - r15 + result_2) = zmm2[0]
        result_2 += 4
        r8_4 -= 4
        r9_3 -= 4
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

__security_check_cookie(rax_1 ^ &var_78)
return result
