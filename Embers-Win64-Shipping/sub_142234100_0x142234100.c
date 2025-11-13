// 函数: sub_142234100
// 地址: 0x142234100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int64_t* rcx = arg1[4]

if (rcx != 0)
    sub_140cd85e0(rcx)

uint32_t zmm6[0x4] = sub_142215b10(&arg1[0x24], arg1)

if (sub_140cdd6a0(arg1) s< 0x10b)
    if ((*(arg1 + 0x89) & 1) == 0)
        arg1[0x11].b = not.b(*(arg1 + 0x12c) u>> 4) & 1
    else
        arg1[0x11].b = 2

int32_t rax_2
int64_t rcx_4
rax_2, rcx_4 = sub_140cdd6a0(arg1)

if (rax_2 s< 0x11c)
    int32_t rax_3
    rax_3, rcx_4 = sub_142216be0(&arg1[0x24])
    
    if (rax_3 == 0)
        *(arg1 + 0x8b) = 1

rcx_4.b = 1
int64_t* rax_4 = sub_140b1b3f0()
int32_t i_1 = 0
int32_t arg_8

if (rax_4 != 0)
    int64_t rdx_1 = *rax_4
    int64_t* rax_5 = (*(rdx_1 + 0x80))(rax_4, rdx_1)
    int32_t i = 0
    
    if (rax_5[1].d s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            int64_t* rcx_8 = *(rsi_1 + *rax_5)
            int64_t r9_1 = *rcx_8
            zmm6 = sub_142230b50(arg1, *(*(r9_1 + 0x128))(rcx_8, &arg_8, arg1, r9_1))
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< rax_5[1].d)

(*(*arg1 + 0x260))(arg1)
uint32_t result = sub_140cdd6a0(arg1)

if (result s< 0x134 && arg1[0xc].d s> 0)
    float zmm4_1[0x4] = data_142d3f760
    int64_t rcx_12 = 0
    uint32_t zmm5_1[0x4] = data_143f51390
    uint32_t var_28_1[0x4] = zmm6
    zmm6 = data_143f51380
    arg_8 = 0x7f800000
    
    do
        int64_t rdx_4 = arg1[0xb]
        uint32_t zmm3_1[0x4] = *(rcx_12 + rdx_4 + 0x70)
        uint32_t zmm2_1[0x4] = *(rcx_12 + rdx_4 + 0x80)
        uint32_t zmm1_1[0x4] = *(rcx_12 + rdx_4 + 0x90)
        result = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(zmm4_1, zmm3_1), zmm4_1, 0))
        
        if (result != 0)
        label_1422342ef:
            *(rcx_12 + rdx_4 + 0x70) = data_143dbb0c0
            *(rcx_12 + rdx_4 + 0x80) = data_143dbb0d0
            *(rcx_12 + rdx_4 + 0x90) = data_143dbb0e0
        else
            result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(zmm2_1, data_142d3f760), data_142d3f760, 0))
            arg_8 = 0x7f800000
            
            if (result != 0)
                goto label_1422342ef
            
            result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(zmm1_1, data_142d3f760), data_142d3f760, 0))
            arg_8 = 0x7f800000
            
            if (result != 0)
                goto label_1422342ef
            
            zmm1_1 = data_143f51330
            zmm3_1 = _mm_mul_ps(zmm3_1, zmm3_1)
            zmm3_1 = _mm_add_ps(zmm3_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e))
            result = _mm_movemask_ps(_mm_cmpeq_ps(zmm6, 
                _mm_and_ps(
                    _mm_sub_ps(zmm1_1, _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x39), zmm3_1)), 
                    zmm5_1), 
                1))
            
            if (result != 0)
                goto label_1422342ef
        
        i_1 += 1
        rcx_12 += 0xb0
    while (i_1 s< arg1[0xc].d)

return result
