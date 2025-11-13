// 函数: sub_1414fa5d0
// 地址: 0x1414fa5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
*arg1 = 0
arg1[1].d = 0
arg1[2] = 0
float zmm1[0x4] = data_143eef8f0
*(arg1 + 0x30) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x20) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x40) = __andps_xmmxud_memxud(data_143eef8f0, data_143eef900)
__builtin_memset(&arg1[0xc], 0, 0x20)
void* rax_2 = *(arg2 + 0x1f0)

if (rax_2 != 0 && *(rax_2 + 0x2a) != 0)
    *(arg1 + 4) = data_1439b72bc
    data_1439b72bc += 1
    arg1[2] = *(arg2 + 0x1f0)
    float var_a8[0x3][0x4]
    float (* rax_5)[0x4] = sub_141f3d840(arg2, &var_a8)
    *(arg1 + 0x20) = *rax_5
    *(arg1 + 0x30) = rax_5[1]
    *(arg1 + 0x40) = rax_5[2]
    float zmm6_1[0x4] = *(arg2 + 0x100)
    float zmm2_1[0x4] = *(arg2 + 0x108)
    int128_t zmm1_1 = *(arg2 + 0x114)
    int32_t zmm4_1 = *(arg2 + 0x10c)
    zmm2_1[0] = zmm2_1[0] f+ zmm1_1.d
    int64_t zmm5_1 = *(arg2 + 0x104)
    zmm6_1[0] = zmm6_1[0] f- zmm4_1
    int32_t zmm3_1 = *(arg2 + 0x110)
    zmm2_1[0] = zmm2_1[0] f- zmm1_1.d
    void* rcx_1 = arg1[2]
    zmm6_1[0] = zmm6_1[0] f+ zmm4_1
    int64_t zmm7_1 = zmm5_1
    char var_108_1 = 1
    float var_ec_1 = zmm2_1[0]
    zmm5_1.d = zmm5_1.d f- zmm3_1
    int64_t var_e8 = 0
    zmm7_1.d = zmm7_1.d f+ zmm3_1
    float var_118_1 = zmm2_1[0]
    int64_t var_120 = (_mm_unpacklo_ps(zmm6_1, zmm5_1)).q
    float var_10c_1 = var_ec_1
    int64_t var_114_1 = (_mm_unpacklo_ps(zmm6_1, zmm7_1)).q
    int16_t var_e0_1 = 1
    int64_t var_dc
    __builtin_memset(&var_dc, 0, 0x14)
    int32_t var_c8_1 = 0x10001
    int16_t var_c4_1 = 0
    int32_t var_bc_1 = 0
    int64_t var_b8_1 = 0
    sub_142437410(rcx_1, &var_e8, &arg1[4])
    int32_t rcx_2 = var_dc.d
    int64_t var_d4
    arg1[0xa].d = var_d4.d * rcx_2
    *(arg1 + 0x54) = rcx_2 * var_d4:4.d
    arg1[0xb].d = zx.d(var_c4_1:1.b)
    void* rax_11 = arg1[2]
    char r15_1 = *(rax_11 + 0x28)
    char r12_1 = *(rax_11 + 0x2b)
    void*** rax_12 = j_sub_140a82f30(0xd0)
    void*** rdi_1 = rax_12
    
    if (rax_12 == 0)
        rdi_1 = nullptr
    else
        void* rax_13 = sub_141ee6400(arg2)
        int32_t rcx_5 = *(arg1 + 4)
        *rdi_1 = &data_142fbb610
        rdi_1[2] = &data_142fbb600
        *(rdi_1 + 0x18) = var_e8.o
        *(rdi_1 + 0x28) = var_dc:4.o
        *(rdi_1 + 0x38) = var_c8_1.o
        rdi_1[9] = var_b8_1
        rdi_1[0xa].d = rcx_5
        *(rdi_1 + 0x54) = 0
        rdi_1[0xb].b = r15_1
        *(rdi_1 + 0x59) = r12_1
        rdi_1[0xc] = rax_13
        *(rdi_1 + 0x70) = *(arg1 + 0x20)
        *(rdi_1 + 0x80) = *(arg1 + 0x30)
        *(rdi_1 + 0x90) = *(arg1 + 0x40)
        *(rdi_1 + 0xa0) = var_120.o
        rdi_1[0x16] = var_114_1
        rdi_1[0x17].d = var_108_1.d
        rdi_1[0x18] = 0
        rdi_1[0x19] = 0
    
    if (sub_1405948d0() != 0)
        void* r10_1 = arg1[2]
        int32_t rcx_7 = *(r10_1 + 0x40)
        
        if (rcx_7 s>= 0)
            int32_t rax_16 = 6
            
            if (rcx_7 s< 6)
                rax_16 = rcx_7
            
            if (rax_16 s> 0)
                int32_t r9_1 = var_d4:4.d
                int32_t temp0_4 = var_d4.d
                bool cond:0_1 = temp0_4 == r9_1
                
                if (temp0_4 u>= r9_1)
                    r9_1 = var_d4.d
                
                uint64_t rflags_1
                int32_t temp0_5
                temp0_5, rflags_1 = _bit_scan_reverse(r9_1)
                int32_t rcx_8
                
                rcx_8 = cond:0_1 ? 0x20 : 0x1f - temp0_5
                
                int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
                uint64_t rflags_2
                int32_t temp0_6
                temp0_6, rflags_2 = _bit_scan_reverse(r9_1 - 1)
                int32_t rdx_2
                
                if (rcx_10 == 0)
                    rdx_2 = 0x20
                else
                    rdx_2 = 0x1f - temp0_6
                
                int32_t var_128
                void*** rax_19 =
                    sub_14242fdd0(r10_1, rdi_1, (0x20 - rdx_2) & not.d(rcx_10), &var_128)
                int32_t rdx_4 = var_128
                rdi_1 = rax_19
                
                if (arg1[0xb].d s<= rdx_4)
                    rdx_4 = arg1[0xb].d
                
                arg1[0xb].d = rdx_4
    
    sub_142439e40(arg1[2], rdi_1, &arg1[4], &var_120)

__security_check_cookie(rax_1 ^ &var_148)
return arg1
