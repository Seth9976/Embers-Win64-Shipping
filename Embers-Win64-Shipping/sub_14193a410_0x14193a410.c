// 函数: sub_14193a410
// 地址: 0x14193a410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3
uint128_t zmm1

if (arg1[1].d != *(arg1 + 0x34))
    zmm1 = arg3[1]
    int128_t var_88 = *arg3
    uint128_t var_78_1 = zmm1
    int128_t var_68_1 = arg3[2]
    uint128_t var_58_1 = arg3[3]
    int128_t var_48_1 = arg3[4]
    uint128_t var_38_1 = arg3[5]
    int128_t var_28_1 = arg3[6]
    uint64_t var_18_1 = arg3[7].q
    int32_t rax_1 = sub_140b21160(&var_88, 0x78, 0)
    void* rcx_1 = arg1[8]
    void* r8 = &arg1[7]
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    rax_3 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_3 == 0xffffffff)
label_14193a5b2:
    *arg2 = 0xffffffff
else
    int64_t r10_1 = *arg1
    zmm1 = arg3[1]
    int128_t var_108 = *arg3
    int128_t zmm0 = arg3[2]
    uint128_t var_f8 = zmm1
    int128_t var_e8_1 = zmm0
    uint128_t var_d8_1 = arg3[3]
    int128_t var_c8_1 = arg3[4]
    uint128_t var_b8_1 = arg3[5]
    int128_t var_a8_1 = arg3[6]
    uint64_t var_98_1 = arg3[7].q
    
    while (true)
        int64_t r9_2 = sx.q(rax_3) * 2
        uint64_t r8_1 = 0
        int128_t* rcx_2 = *(r10_1 + (r9_2 << 3))
        zmm1 = rcx_2[1]
        int128_t var_188 = *rcx_2
        zmm0 = rcx_2[2]
        uint128_t var_178 = zmm1
        int128_t var_168_1 = zmm0
        uint128_t var_158_1 = rcx_2[3]
        int128_t var_148_1 = rcx_2[4]
        zmm0 = rcx_2[6]
        uint128_t var_138_1 = rcx_2[5]
        zmm1 = zx.o(rcx_2[7].q)
        rcx_2.b = 1
        int128_t var_128_1 = zmm0
        uint64_t var_118_1 = zmm1.q
        
        do
            if (rcx_2.b == 0)
                goto label_14193a5a4
            
            uint64_t rdx_3 = r8_1 * 5
            int64_t rcx_3 = *(&var_188 + (rdx_3 << 2))
            rcx_2 = rcx_3 - *(&var_108 + (rdx_3 << 2))
            
            if (rcx_3 == *(&var_108 + (rdx_3 << 2)))
                int64_t rcx_4 = *(&var_188:8 + (rdx_3 << 2))
                rcx_2 = rcx_4 - *(&var_108:8 + (rdx_3 << 2))
                
                if (rcx_4 == *(&var_108:8 + (rdx_3 << 2)))
                    rcx_2 = zx.q(*(&var_178 + (rdx_3 << 2))) - zx.q(*(&var_f8 + (rdx_3 << 2)))
            
            rcx_2.b = rcx_2 == 0
            r8_1 = zx.q(r8_1.d + 1)
        while (r8_1.d u< 6)
        
        if (rcx_2.b != 0)
            *arg2 = rax_3
            break
        
    label_14193a5a4:
        rax_3 = *(r10_1 + (r9_2 << 3) + 8)
        
        if (rax_3 == 0xffffffff)
            goto label_14193a5b2

return arg2
