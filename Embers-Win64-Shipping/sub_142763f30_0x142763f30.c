// 函数: sub_142763f30
// 地址: 0x142763f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x13390)
void var_13398
uint64_t result = __security_cookie ^ &var_13398
uint64_t result_1 = result

if (data_143f879a0 == 0)
    int64_t i_8 = 0x11
    int32_t var_13368[0x10]
    int32_t (* r15_1)[0x10] = &var_13368
    uint128_t zmm0
    int64_t i
    
    do
        int32_t (* rsi_1)[0x10] = r15_1
        int64_t j_7 = 0x11
        int64_t j
        
        do
            int32_t (* rbx_1)[0x10] = rsi_1
            int64_t k_3 = 0x11
            int64_t k
            
            do
                zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
                zmm0.d = zmm0.d f+ zmm0.d
                zmm0.d = zmm0.d f- 1f
                *rbx_1 = zmm0.d
                rbx_1 = &(*rbx_1)[0x121]
                k = k_3
                k_3 -= 1
            while (k != 1)
            rsi_1 = &(*rsi_1)[0x11]
            j = j_7
            j_7 -= 1
        while (j != 1)
        r15_1 = &(*r15_1)[1]
        i = i_8
        i_8 -= 1
    while (i != 1)
    int32_t var_12f28[0x11]
    int32_t (* rdx_1)[0x11] = &var_12f28
    void var_13328
    void* r8_1 = &var_13328
    
    for (int64_t i_1 = 0; i_1 s< 0x11; i_1 += 1)
        *r8_1 = *(r8_1 - 0x40)
        *rdx_1 = (*rdx_1)[-0x110]
        int32_t var_eb28[0x11]
        var_eb28[i_1] = var_13368[i_1]
        *(r8_1 + 0x44) = *(r8_1 + 4)
        (*rdx_1)[1] = (*rdx_1)[-0x10f]
        int32_t var_13324[0x11]
        int32_t var_eae4[0x11]
        var_eae4[i_1] = var_13324[i_1]
        *(r8_1 + 0x88) = *(r8_1 + 0x48)
        (*rdx_1)[2] = (*rdx_1)[-0x10e]
        int32_t var_132e0[0x11]
        int32_t var_eaa0[0x11]
        var_eaa0[i_1] = var_132e0[i_1]
        *(r8_1 + 0xcc) = *(r8_1 + 0x8c)
        (*rdx_1)[3] = (*rdx_1)[-0x10d]
        void var_1329c
        int32_t var_ea5c[0x11]
        var_ea5c[i_1] = *(&var_1329c + (i_1 << 2))
        *(r8_1 + 0x110) = *(r8_1 + 0xd0)
        (*rdx_1)[4] = rdx_1[-0xf][0]
        int32_t var_13258[0x11]
        int32_t var_ea18[0x11]
        var_ea18[i_1] = var_13258[i_1]
        *(r8_1 + 0x154) = *(r8_1 + 0x114)
        (*rdx_1)[5] = (*rdx_1)[-0x10b]
        int32_t var_13214[0x11]
        int32_t var_e9d4[0x11]
        var_e9d4[i_1] = var_13214[i_1]
        *(r8_1 + 0x198) = *(r8_1 + 0x158)
        (*rdx_1)[6] = (*rdx_1)[-0x10a]
        int32_t var_131d0[0x11]
        int32_t var_e990[0x11]
        var_e990[i_1] = var_131d0[i_1]
        *(r8_1 + 0x1dc) = *(r8_1 + 0x19c)
        (*rdx_1)[7] = (*rdx_1)[-0x109]
        int32_t var_1318c[0x11]
        int32_t var_e94c[0x11]
        var_e94c[i_1] = var_1318c[i_1]
        *(r8_1 + 0x220) = *(r8_1 + 0x1e0)
        (*rdx_1)[8] = (*rdx_1)[-0x108]
        int32_t var_13148[0x11]
        int32_t var_e908[0x11]
        var_e908[i_1] = var_13148[i_1]
        *(r8_1 + 0x264) = *(r8_1 + 0x224)
        (*rdx_1)[9] = (*rdx_1)[-0x107]
        int32_t var_13104[0x11]
        int32_t var_e8c4[0x11]
        var_e8c4[i_1] = var_13104[i_1]
        *(r8_1 + 0x2a8) = *(r8_1 + 0x268)
        (*rdx_1)[0xa] = (*rdx_1)[-0x106]
        int32_t var_130c0[0x11]
        int32_t var_e880[0x11]
        var_e880[i_1] = var_130c0[i_1]
        *(r8_1 + 0x2ec) = *(r8_1 + 0x2ac)
        (*rdx_1)[0xb] = (*rdx_1)[-0x105]
        int32_t var_1307c[0x11]
        int32_t var_e83c[0x11]
        var_e83c[i_1] = var_1307c[i_1]
        *(r8_1 + 0x330) = *(r8_1 + 0x2f0)
        (*rdx_1)[0xc] = (*rdx_1)[-0x104]
        int32_t var_13038[0x11]
        int32_t var_e7f8[0x11]
        var_e7f8[i_1] = var_13038[i_1]
        *(r8_1 + 0x374) = *(r8_1 + 0x334)
        (*rdx_1)[0xd] = (*rdx_1)[-0x103]
        r8_1 += 0x484
        rdx_1 = &rdx_1[0x11]
        int32_t var_12ff4[0x11]
        int32_t var_e7b4[0x11]
        var_e7b4[i_1] = var_12ff4[i_1]
        *(r8_1 - 0xcc) = *(r8_1 - 0x10c)
        (*rdx_1)[-0x113] = (*rdx_1)[-0x223]
        int32_t var_12fb0[0x11]
        int32_t var_e770[0x11]
        var_e770[i_1] = var_12fb0[i_1]
        *(r8_1 - 0x88) = *(r8_1 - 0xc8)
        (*rdx_1)[-0x112] = (*rdx_1)[-0x222]
        int32_t var_12f6c[0x11]
        int32_t var_e72c[0x11]
        var_e72c[i_1] = var_12f6c[i_1]
        *(r8_1 - 0x44) = *(r8_1 - 0x84)
        (*rdx_1)[-0x111] = (*rdx_1)[-0x221]
        int32_t var_e6e8[0x15]
        var_e6e8[i_1] = var_12f28[i_1]
    
    void var_e68c
    void* rbx_2 = &var_e68c
    int64_t i_5 = 0x10
    void var_12ee4
    void* rdi_1 = &var_12ee4
    uint128_t zmm1
    uint128_t zmm2
    float zmm3[0x4]
    uint128_t zmm4_1
    int64_t i_2
    
    do
        void* r8_2 = rdi_1
        void* r9_1 = rbx_2
        int64_t j_5 = 0x10
        int64_t j_1
        
        do
            void* rdx_2 = r9_1
            void* rcx_1 = r8_2
            int64_t k_5 = 2
            int64_t k_1
            
            do
                zmm3 = *(rcx_1 - 0x480)
                zmm0 = *(rcx_1 - 0x484)
                zmm4_1 = *(rcx_1 - 0x46c)
                zmm2.d = zmm0.d f- *rcx_1
                zmm1 = zmm0
                zmm0.d = zmm0.d f- zmm3[0]
                zmm1.d = zmm1.d f- *(rcx_1 - 0x440)
                int32_t var_13370_1 = zmm0.d
                zmm0 = zmm2
                zmm2 = *(rcx_1 - 0x47c)
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
                zmm1.d = zmm3.d f- *(rcx_1 - 0x43c)
                *(rdx_2 - 0xc) = zmm0.q
                zmm0.d = zmm3.d f- *(rcx_1 + 4)
                zmm3[0] = zmm3[0] f- zmm2.d
                *(rdx_2 - 4) = var_13370_1
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
                zmm1.d = zmm2.d f- *(rcx_1 - 0x438)
                *rdx_2 = zmm0.q
                zmm0.d = zmm2.d f- *(rcx_1 + 8)
                float var_13370_2 = zmm3[0]
                zmm3 = *(rcx_1 - 0x478)
                zmm2.d = zmm2.d f- zmm3[0]
                *(rdx_2 + 8) = var_13370_2
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
                zmm1.d = zmm3.d f- *(rcx_1 - 0x434)
                *(rdx_2 + 0xc) = zmm0.q
                zmm0.d = zmm3.d f- *(rcx_1 + 0xc)
                int32_t var_13370_3 = zmm2.d
                zmm2 = *(rcx_1 - 0x474)
                zmm3[0] = zmm3[0] f- zmm2.d
                *(rdx_2 + 0x14) = var_13370_3
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
                zmm1.d = zmm2.d f- *(rcx_1 - 0x430)
                *(rdx_2 + 0x18) = zmm0.q
                zmm0.d = zmm2.d f- *(rcx_1 + 0x10)
                float var_13370_4 = zmm3[0]
                zmm3 = *(rcx_1 - 0x470)
                zmm2.d = zmm2.d f- zmm3[0]
                *(rdx_2 + 0x20) = var_13370_4
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
                zmm1.d = zmm3.d f- *(rcx_1 - 0x42c)
                *(rdx_2 + 0x24) = zmm0.q
                zmm0.d = zmm3.d f- *(rcx_1 + 0x14)
                int32_t var_13370_5 = zmm2.d
                zmm3[0] = zmm3[0] f- zmm4_1.d
                zmm2 = *(rcx_1 - 0x468)
                *(rdx_2 + 0x2c) = var_13370_5
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
                zmm1.d = zmm4_1.d f- *(rcx_1 - 0x428)
                *(rdx_2 + 0x30) = zmm0.q
                zmm0.d = zmm4_1.d f- *(rcx_1 + 0x18)
                zmm4_1.d = zmm4_1.d f- zmm2.d
                *(rdx_2 + 0x38) = zmm3[0]
                *(rdx_2 + 0x3c) = (_mm_unpacklo_ps(zmm0, zmm1.q)).q
                zmm0.d = zmm2.d f- *(rcx_1 + 0x1c)
                *(rdx_2 + 0x44) = zmm4_1.d
                zmm1.d = zmm2.d f- *(rcx_1 - 0x424)
                zmm2.d = zmm2.d f- *(rcx_1 - 0x464)
                rcx_1 += 0x20
                *(rdx_2 + 0x48) = (_mm_unpacklo_ps(zmm0, zmm1.q)).q
                *(rdx_2 + 0x50) = zmm2.d
                rdx_2 += 0x60
                k_1 = k_5
                k_5 -= 1
            while (k_1 != 1)
            r9_1 += 0xd8c
            r8_2 += 0x484
            j_1 = j_5
            j_5 -= 1
        while (j_1 != 1)
        rdi_1 += 0x44
        rbx_2 += 0xcc
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    void var_dd8
    void* r10_1 = &var_dd8
    void var_e5d8
    void* rcx_2 = &var_e5d8
    uint64_t i_7 = zx.q((i_5 + 0x11).d)
    int64_t j_4
    uint64_t i_3
    
    do
        void* rdx_3 = rcx_2 + 0xc00
        void* r8_3 = r10_1
        j_4 = 0x11
        int64_t j_2
        
        do
            r8_3 += 0xcc
            int32_t rax_61 = *(rcx_2 - 0xb8)
            rdx_3 += 0xc
            *rcx_2 = *(rcx_2 - 0xc0)
            *(rcx_2 + 8) = rax_61
            rcx_2 += 0xcc
            int32_t rax_62 = *(rdx_3 - 0xcc4)
            *(rdx_3 - 0xc) = *(rdx_3 - 0xccc)
            *(rdx_3 - 4) = rax_62
            result = zx.q(*(r8_3 - 0xd984))
            *(r8_3 - 0xcc) = *(r8_3 - 0xd98c)
            *(r8_3 - 0xc4) = result.d
            j_2 = j_4
            j_4 -= 1
        while (j_2 != 1)
        r10_1 += 0xc
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
    void* rbx_3 = &data_143f75590
    void var_e694
    void* rdi_2 = &var_e694
    uint64_t i_6 = zx.q((j_4 + 0x10).d)
    uint64_t i_4
    
    do
        void* r9_2 = rdi_2
        void* r10_2 = rbx_3
        int64_t j_6 = 0x10
        int64_t j_3
        
        do
            uint128_t zmm7 = *r9_2
            float (* rdx_4)[0x4] = r10_2
            void* rcx_3 = r9_2
            int64_t k_4 = 8
            int64_t k_2
            
            do
                uint128_t zmm6 = *(rcx_3 + 0xd8c)
                zmm0.d = zmm7.d f+ *(rcx_3 + 0xc)
                zmm1 = *(rcx_3 + 4)
                zmm7.d = zmm7.d f- zmm6.d
                zmm2 = *(rcx_3 - 4)
                zmm4_1.d = zmm1.d f- *(rcx_3 + 0xd0)
                uint128_t zmm5_1 = *(rcx_3 + 0xd90)
                zmm3 = zmm2
                zmm3[0] = zmm3[0] f- *(rcx_3 + 8)
                zmm2.d = zmm2.d f+ *(rcx_3 + 0xc8)
                zmm4_1.d = zmm4_1.d f- zmm0.d
                zmm0.d = zmm5_1.d f+ zmm1.d
                zmm7.d = zmm7.d f- zmm2.d
                zmm3[0] = zmm3[0] f- zmm0.d
                zmm0.d = zmm6.d f+ *(rcx_3 + 0xd98)
                zmm2 = zmm3
                zmm3 = zmm4_1
                zmm2 = _mm_unpacklo_ps(zmm2, 0)
                zmm1 = *(rcx_3 + 0xd88)
                zmm4_1.d = zmm5_1.d f- *(rcx_3 + 0xe5c)
                zmm5_1.d = zmm5_1.d f+ *(rcx_3 + 0x1b1c)
                float temp0_11[0x4] = _mm_unpacklo_ps(zmm3, zmm7.q)
                zmm7 = *(rcx_3 + 0x1b18)
                zmm6.d = zmm6.d f- zmm7.d
                rdx_4[-0x121] = _mm_unpacklo_ps(temp0_11, zmm2.q)
                zmm2.d = zmm1.d f- *(rcx_3 + 0xd94)
                zmm1.d = zmm1.d f+ *(rcx_3 + 0xe54)
                zmm4_1.d = zmm4_1.d f- zmm0.d
                rcx_3 += 0x1b18
                zmm2.d = zmm2.d f- zmm5_1.d
                zmm6.d = zmm6.d f- zmm1.d
                zmm2 = _mm_unpacklo_ps(zmm2, 0)
                *rdx_4 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, zmm6.q), zmm2.q)
                rdx_4 = &rdx_4[0x242]
                k_2 = k_4
                k_4 -= 1
            while (k_2 != 1)
            r10_2 += 0x110
            r9_2 += 0xcc
            j_3 = j_6
            j_6 -= 1
        while (j_3 != 1)
        rdi_2 += 0xc
        rbx_3 += 0x10
        i_4 = i_6
        i_6 -= 1
    while (i_4 != 1)
    data_143f879a0 = 1

__security_check_cookie(result_1 ^ &var_13398)
return result
