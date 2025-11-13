// 函数: sub_141464cb0
// 地址: 0x141464cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x1040)
int32_t i_2 = 0
*(arg1 + 0x10f0) = 0

if (rdx s> *(arg1 + 0x10f4))
    sub_1407c4520(arg1 + 0x10e8, rdx)

*(arg1 + 0x10f8) = 0
int32_t i = 0x155
int32_t r12 = 0
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(data_1439c7a24)).d f* 0.166666672f
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f- 0.5f
int32_t i_4 = int.d(zmm1.d) s>> 1

if (i_4 s<= 0x155)
    i = i_4

int32_t i_3 = i
char arg_8

if (*(arg1 + 0x1040) s> 0)
    int64_t r13_1 = 0
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    
    while (*(arg1 + 0x10f0) s< i)
        bool cond:0_1 = *(arg1 + 8) s< 3
        int32_t rcx_1 = -1
        uint128_t zmm0 = data_142d3f660
        int64_t* rax_1 = *(arg1 + 0x1038)
        int128_t var_128_1
        __builtin_memcpy(&var_128_1, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x20)
        uint128_t var_c8_1 = zmm0
        int64_t* rdi_1 = *(rax_1 + r13_1)
        int32_t var_134_1 = 0xffffffff
        int32_t var_ac_1 = 0x3f800000
        int32_t var_b8_1 = rdi_1[8].d.d
        int32_t var_b4_1 = (*(rdi_1 + 0x44)).d
        int32_t var_b0_1 = rdi_1[9].d.d
        
        if (cond:0_1)
            goto label_141464e25
        
        sub_140865c40(arg1 + 0x1078, &arg_8, *rdi_1)
        int64_t rax_2 = sx.q(arg_8.d)
        void* const rcx_3
        
        if (rax_2.d == 0xffffffff)
            rcx_3 = nullptr
        else
            rcx_3 = *(arg1 + 0x1078) + rax_2 * 0x18
        
        int32_t* rax_4 = rcx_3 + 8
        
        if (rcx_3 == 0)
            rax_4 = nullptr
        
        if (rax_4 != 0)
            rcx_1 = *rax_4
            int32_t var_ac_2 = rax_4[1].d
            int32_t var_134_2 = rcx_1
        label_141464e25:
            zmm0 = *(rdi_1 + 0x2c)
            zmm1 = rdi_1[6].d
            uint128_t zmm2 = *(rdi_1 + 0x34)
            int32_t rax_5 = *(rdi_1 + 0x3c)
            float zmm3[0x4] = rdi_1[5].d
            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            temp0_1[0] = zmm0.d
            int32_t var_13c_1 = 0
            zmm0 = rdi_1[7].d
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_2[0] = zmm1.d
            int32_t rax_6 = *(rdi_1 + 0x24)
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
            temp0_3[0] = zmm2.d
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
            float var_148[0x4]
            var_148[0] = zmm0.d
            float temp0_5[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_1))
            zmm2 = _mm_cvtepi32_ps(zx.o(rax_6))
            temp0_5[0] = zmm1.d
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
            temp0_8[0] = zmm2.d
            float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
            var_148 = temp0_9
            float var_108[0x4]
            uint128_t var_f8
            uint128_t var_e8
            uint128_t var_d8
            
            if (rax_6 == 2)
                *(arg1 + 0x10f8) += 1
                zmm7 = *(rdi_1 + 0xa0)
                zmm0 = *(rdi_1 + 0xb0)
                __builtin_memset(&var_e8, 0, 0x20)
                float temp0_10[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                float temp0_11[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                float temp0_12[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                float temp0_13[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
                temp0_13[0] = temp0_10[0]
                uint128_t var_88_1 = zmm0
                float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
                temp0_14[0] = temp0_11[0]
                var_f8 = zmm0
                zmm0 = data_142d3f660
                float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
                temp0_15[0] = temp0_12[0]
                var_108 = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
                var_c8_1 = zmm0
            else if (rax_6 != 0)
                *(arg1 + 0x10f8) += 1
                zmm0 = *(rdi_1 + 0x50)
                zmm1 = *(rdi_1 + 0x60)
                zmm3 = rdi_1[0x12].d
                zmm2 = *(rdi_1 + 0x9c)
                float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                var_108 = zmm0
                var_f8 = zmm1
                zmm1 = *(rdi_1 + 0x80)
                var_e8 = *(rdi_1 + 0x70)
                temp0_17[0] = (*(rdi_1 + 0x94)).d
                var_d8 = zmm1
                zmm1 = rdi_1[0x13].d
                float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
                temp0_18[0] = zmm1.d
                float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x27)
                temp0_19[0] = zmm2.d
                var_c8_1 = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
            else
                *(arg1 + 0x10fc) += 1
            
            int64_t rdi_2 = sx.q(*(arg1 + 0x10f0))
            int32_t rax_7 = (rdi_2 + 1).d
            *(arg1 + 0x10f0) = rax_7
            
            if (rax_7 s> *(arg1 + 0x10f4))
                sub_140775640(arg1 + 0x10e8)
            
            int128_t* rdx_6 = rdi_2 * 0xa0 + *(arg1 + 0x10e8)
            *rdx_6 = rax_5.o
            rdx_6[1] = temp0_4
            rdx_6[2] = temp0_9
            rdx_6[3] = var_108
            zmm1 = var_e8
            rdx_6[4] = var_f8
            rdx_6[5] = zmm1
            rdx_6[6] = var_d8
            rdx_6[7] = var_c8_1
            rdx_6[8] = var_b8_1.o
            rdx_6[9] = rdi_1.o
        
        i = i_3
        r12 += 1
        r13_1 += 8
        
        if (r12 s>= *(arg1 + 0x1040))
            break

sub_141438fb0(*(arg1 + 0x10e8), *(arg1 + 0x10f0), arg_8)
int32_t i_1 = 0

if (*(arg1 + 0x10f0) s> 0)
    int64_t r8_3 = 0
    
    do
        r8_3 += 0xa0
        *(*(r8_3 + *(arg1 + 0x10e8) - 0x10) + 0x4c) = i_1
        i_1 += 1
    while (i_1 s< *(arg1 + 0x10f0))

uint64_t result = sub_1410a09e0((*U"1111")[sx.q(*(arg1 + 8))])

if (result.b != 0 && *(arg1 + 0x1031) != 0)
    int64_t r8_4 = sx.q(*(arg1 + 0xdc0))
    
    if (r8_4 s> 0)
        int64_t rdx_8 = 0
        
        do
            result = *(arg1 + 0xdb8)
            void* rcx_8 = *(result + (rdx_8 << 3))
            rdx_8 += 1
            *(rcx_8 + 0x120) |= 2
        while (rdx_8 s< r8_4)
    
    *(arg1 + 0x1700) = 1
    *(arg1 + 0x1031) = 0

if (*(arg1 + 0x1030) != 0)
    int32_t r15_1 = *(arg1 + 8)
    
    if (*(arg1 + 0xdc0) s> 0)
        void** r14_1 = nullptr
        
        do
            void* rdi_3 = *(r14_1 + *(arg1 + 0xdb8))
            result = sub_1413a3ce0(rdi_3)
            
            if (r15_1 s< 3)
                sub_141396900(rdi_3)
                result = sub_141393890(rdi_3)
            
            i_2 += 1
            r14_1 = &r14_1[1]
        while (i_2 s< *(arg1 + 0xdc0))
    
    *(arg1 + 0x1030) = 0

return result
