// 函数: sub_14194b680
// 地址: 0x14194b680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

uint128_t zmm1 = arg2[1]
int128_t var_88 = *arg2
uint128_t var_78_1 = zmm1
int128_t var_68_1 = arg2[2]
uint128_t var_58_1 = arg2[3]
int128_t var_48_1 = arg2[4]
uint128_t var_38_1 = arg2[5]
int128_t var_28_1 = arg2[6]
uint64_t var_18_1 = arg2[7].q
int32_t rax_1 = sub_140b21160(&var_88, 0x78, 0)
void* rdx = arg1[8]
void* rsi_1 = &arg1[7]
int32_t r11_1 = 0
int64_t r14_1 = sx.q(arg1[9].d - 1)

if (rdx != 0)
    rsi_1 = rdx

int64_t rax_3 = sx.q(rax_1) & r14_1
void* r9_1 = rsi_1 + (rax_3 << 2)
int32_t i = *(rsi_1 + (rax_3 << 2))

if (i != 0xffffffff)
    void* r10_1 = *arg1
    zmm1 = arg2[1]
    int128_t var_108 = *arg2
    int128_t zmm0 = arg2[2]
    uint128_t var_f8 = zmm1
    int128_t var_e8_1 = zmm0
    uint128_t var_d8_1 = arg2[3]
    int128_t var_c8_1 = arg2[4]
    uint128_t var_b8_1 = arg2[5]
    int128_t var_a8_1 = arg2[6]
    uint64_t var_98_1 = arg2[7].q
    
    do
        int32_t j = 0
        int64_t r8_2 = sx.q(i) * 2
        int128_t* rax_4 = *(r10_1 + (r8_2 << 3))
        zmm1 = rax_4[1]
        int128_t var_188 = *rax_4
        zmm0 = rax_4[2]
        uint128_t var_178 = zmm1
        int128_t var_168_1 = zmm0
        uint128_t var_158_1 = rax_4[3]
        int128_t var_148_1 = rax_4[4]
        zmm0 = rax_4[6]
        uint128_t var_138_1 = rax_4[5]
        zmm1 = zx.o(rax_4[7].q)
        rax_4.b = 1
        int128_t var_128_1 = zmm0
        uint64_t var_118_1 = zmm1.q
        
        do
            if (rax_4.b == 0)
                goto label_14194b818
            
            uint64_t rcx_3 = zx.q(j) * 5
            int64_t rax_6 = *(&var_188 + (rcx_3 << 2))
            rax_4 = rax_6 - *(&var_108 + (rcx_3 << 2))
            
            if (rax_6 == *(&var_108 + (rcx_3 << 2)))
                int64_t rax_7 = *(&var_188:8 + (rcx_3 << 2))
                rax_4 = rax_7 - *(&var_108:8 + (rcx_3 << 2))
                
                if (rax_7 == *(&var_108:8 + (rcx_3 << 2)))
                    rax_4 = zx.q(*(&var_178 + (rcx_3 << 2))) - zx.q(*(&var_f8 + (rcx_3 << 2)))
            
            rax_4.b = rax_4 == 0
            j += 1
        while (j u< 6)
        
        if (rax_4.b != 0)
            int64_t rcx_5 = sx.q(*r9_1)
            
            if (arg1[1].d != *(arg1 + 0x34))
                int64_t r8_4 = rcx_5 * 2
                int64_t rax_11 = sx.q(*(r10_1 + (r8_4 << 3) + 0xc)) & r14_1
                void* rdx_1 = rsi_1 + (rax_11 << 2)
                
                for (int32_t j_1 = *(rsi_1 + (rax_11 << 2)); j_1 != 0xffffffff; j_1 = *rdx_1)
                    if (j_1 == rcx_5.d)
                        *rdx_1 = *(r10_1 + (r8_4 << 3) + 8)
                        break
                    
                    rdx_1 = r10_1 + 8 + (sx.q(j_1) << 4)
            
            r11_1 = 1
            void* r10_2 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(*arg1 + sx.q(arg1[6].d) * 0x10) = rcx_5.d
            
            int32_t rax_16 = -1
            int32_t* r8_7 = (rcx_5 << 4) + *arg1
            *r8_7 = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_16 = arg1[6].d
            
            r8_7[1] = rax_16
            *(arg1 + 0x34) += 1
            arg1[6].d = rcx_5.d
            void* rax_17 = *(r10_2 + 0x10)
            
            if (rax_17 != 0)
                r10_2 = rax_17
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rcx_5.d)
            int64_t rcx_6 = sx.q((temp5_1 + (temp4_1 & 0x1f)) s>> 5)
            *(r10_2 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
            break
        
    label_14194b818:
        i = *(r10_1 + 8 + (r8_2 << 3))
        r9_1 = r10_1 + 8 + (r8_2 << 3)
    while (i != 0xffffffff)

return zx.q(r11_1)
