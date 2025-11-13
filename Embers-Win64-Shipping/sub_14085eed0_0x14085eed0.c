// 函数: sub_14085eed0
// 地址: 0x14085eed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
sub_140b33630("Niagara")
char var_148
uint128_t zmm6 = sub_140744520(&var_148, arg1)
void* rax_2 = *(arg1 + 0x28)
*(arg1 + 0x71c) = 0
*(arg1 + 0x728) = 0
void* const r13

if (rax_2 == 0)
    r13 = nullptr
else
    r13 = *(rax_2 + 0x408)

int32_t rax_3 = *(arg1 + 0xa8)
int64_t* rdx_1 = nullptr
int64_t* var_120 = nullptr
int32_t var_94 = 0x100
uint32_t rsi_1 = (rax_3 + 0x1f) u>> 5
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x28)
int64_t* var_a0

if (rsi_1 u> 8)
    sub_1408390d0(&var_c0, 0, rsi_1, 4)
    int64_t* rbx_1 = &var_c0
    uint32_t var_94_1 = rsi_1 << 5
    
    if (var_a0 != 0)
        rbx_1 = var_a0
    
    memset(rbx_1, 0, zx.q(rsi_1) << 2)
    uint64_t rdx_2 = zx.q(rsi_1 - 1)
    *(rbx_1 + (rdx_2 << 2)) &= 0xffffffff u>> ((neg.d(rax_3)).b & 0x1f)
    rdx_1 = var_a0
    var_120 = rdx_1

int64_t r15
r15.b = 0
int32_t* rbx_2 = *(arg1 + 0x6f8)
int64_t rsi_2 = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x700)) << 2 u>> 2

if (rbx_2 u> &rbx_2[sx.q(*(arg1 + 0x700))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t rdx_3 = sx.q(*rbx_2)
        void* rax_11 = *(*(arg1 + 0xa0) + rdx_3 * 0x10)
        
        if (*(rax_11 + 0x24) == 0)
            r15.b = 1
            sub_14085b840(&var_c0, rdx_3.d, 1, 1)
        else
            void* rcx_8 = *(*(rax_11 + 0x778) + 0x98)
            
            if (rcx_8 != 0 && *(rcx_8 + 0xb0) s> 0)
                r15.b = 1
                sub_14085b840(&var_c0, rdx_3.d, 1, 1)
        
        rbx_2 = &rbx_2[1]
        rsi_2 += 1
    while (rsi_2 != r14_1)
    
    rdx_1 = var_a0
    var_120 = rdx_1

if (*(arg1 + 0x6e8) - 3 u> 1 && r15.b != 0 && r13 != 0 && *(arg1 + 0x28) != 0
        && not(9.99999994e-09f f> *(arg1 + 0x6c0)))
    int32_t* rbx_3 = *(arg1 + 0x6f8)
    int64_t rsi_3 = 0
    int64_t rcx_10 = sx.q(*(arg1 + 0x700))
    uint64_t r14_3 = rcx_10 << 2 u>> 2
    
    if (rbx_3 u> &rbx_3[rcx_10])
        r14_3 = 0
    
    if (r14_3 != 0)
        int64_t* r15_1 = &var_c0
        
        if (rdx_1 != 0)
            r15_1 = rdx_1
        
        do
            int64_t rdx_4 = sx.q(*rbx_3)
            int32_t rax_16 = rdx_4.d
            
            if (rdx_4.d s< 0)
                rax_16 = (rdx_4 + 0x1f).d
            
            if (test_bit(*(r15_1 + (sx.q(rax_16 s>> 5) << 2)), rdx_4.d & 0x1f))
                zmm6 = sub_140806720(*(*(arg1 + 0xa0) + rdx_4 * 0x10))
            
            rbx_3 = &rbx_3[1]
            rsi_3 += 1
        while (rsi_3 != r14_3)
        
        rcx_10 = zx.q(*(arg1 + 0x700))
        rdx_1 = var_120
    
    int32_t* rsi_4 = *(arg1 + 0x6f8)
    int32_t r15_2 = 0
    int64_t r14_4 = 0
    uint64_t r12_2 = sx.q(rcx_10.d) << 2 u>> 2
    
    if (rsi_4 u> &rsi_4[sx.q(rcx_10.d)])
        r12_2 = 0
    
    uint128_t zmm7
    uint128_t zmm8
    uint128_t zmm9
    uint128_t zmm10
    uint128_t zmm11
    
    if (r12_2 != 0)
        int64_t* r13_1 = &var_c0
        
        if (rdx_1 != 0)
            r13_1 = rdx_1
        
        do
            int64_t rdx_5 = sx.q(*rsi_4)
            int32_t r8_7 = rdx_5.d & 0x1f
            void* rbx_4 = *(*(arg1 + 0xa0) + rdx_5 * 0x10)
            
            if (rdx_5.d s< 0)
                rdx_5 = zx.q(rdx_5.d + 0x1f)
            
            if (test_bit(*(r13_1 + (sx.q(rdx_5.d s>> 5) << 2)), r8_7))
                zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 = sub_14080d670(rbx_4, *(arg1 + 0x6c0))
            
            void* rax_25 = *(rbx_4 + 0x788)
            
            if (rax_25 != 0 && *(rax_25 + 0xd8) == 1 && *(rbx_4 + 0x24) - 3 u> 1)
                void* rax_28 = *(rbx_4 + 0x728)
                
                if (rax_28 != 0)
                    r15_2 += *(rax_28 + 0x114)
                    
                    if (*(rax_28 + 0x250) != 0 || *(arg1 + 0x728) != 0)
                        rax_28.b = 1
                    else
                        rax_28.b = 0
                    
                    *(arg1 + 0x720) += 1
                    *(arg1 + 0x728) = rax_28.b
            
            rsi_4 = &rsi_4[1]
            r14_4 += 1
        while (r14_4 != r12_2)
    
    int32_t rcx_18 = *(arg1 + 0x720)
    
    if (rcx_18 != 0)
        int32_t rax_29
        rax_29.b = *(arg1 + 0x728) != 0
        *(arg1 + 0x71c) = (((rcx_18 + 0x11) * (rax_29 + 1)) << 5) + r15_2
    
    if ((*(r13 + 0x34) & 1) == 0)
        void** rbx_5 = *(arg1 + 0xa0)
        rsi_4.b = 0
        uint128_t var_38_1 = zmm6
        zmm6 = data_143dbb200
        uint128_t var_48_1 = zmm7
        zmm7 = data_143dbb1fc
        uint128_t var_58_1 = zmm8
        zmm8 = data_143dbb1f8
        uint128_t var_68_1 = zmm9
        zmm9 = zmm6
        uint128_t var_78_1 = zmm10
        void* r14_7 = &rbx_5[sx.q(*(arg1 + 0xa8)) * 2]
        uint128_t var_88_1 = zmm11
        zmm10 = zmm8
        int32_t var_134_1 = zmm8.d
        zmm11 = zmm7
        int32_t var_130_1 = zmm7.d
        int32_t var_12c_1 = zmm6.d
        int32_t var_140_1 = zmm8.d
        int32_t var_13c_1 = zmm7.d
        int32_t var_138_1 = zmm6.d
        char var_128_1 = 0
        int32_t rax_36
        uint128_t zmm0_1
        uint128_t zmm1_1
        
        if (rbx_5 == r14_7)
        label_14085f58c:
            zmm0_1 = zx.o(data_143dbb1f8.q)
            rax_36 = data_143dbb200
            zmm1_1 = zmm0_1
            int32_t var_110_2 = rax_36
        label_14085f5a1:
            uint64_t var_10c_1 = zmm0_1.q
            int32_t var_104_1 = rax_36
            zmm0_1.q = zmm1_1.q
            *(arg1 + 0x6c8) = zmm0_1
            *(arg1 + 0x6d8) = var_10c_1
            *(arg1 + 0x6e0) = 1.d
        else
            uint128_t zmm2_1
            
            do
                void var_dc
                uint128_t* rax_32 = sub_1407eeec0(*rbx_5, &var_dc)
                
                if (rsi_4.b == 0)
                    if (*(rax_32 + 0x18) != 0)
                        zmm1_1 = zx.o(rax_32[1].q)
                        zmm2_1 = *rax_32
                        int32_t rax_33 = *(rax_32 + 0x18)
                        rsi_4 = zx.q(rax_33.b)
                        var_130_1.q = zmm1_1.q
                        zmm7 = var_130_1
                        var_140_1.o = zmm2_1
                        var_128_1.d = rax_33
                        zmm9 = var_138_1
                        zmm6 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                        zmm11 = var_13c_1
                        zmm10 = var_140_1
                        zmm8 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                else if (*(rax_32 + 0x18) != 0)
                    zmm0_1 = *rax_32
                    
                    if (not(zmm10.d f<= zmm0_1.d))
                        var_140_1 = zmm0_1.d
                        zmm10 = zmm0_1
                    
                    zmm0_1 = *(rax_32 + 4)
                    
                    if (not(zmm11.d f<= zmm0_1.d))
                        var_13c_1 = zmm0_1.d
                        zmm11 = zmm0_1
                    
                    zmm0_1 = *(rax_32 + 8)
                    
                    if (not(zmm9.d f<= zmm0_1.d))
                        var_138_1 = zmm0_1.d
                        zmm9 = zmm0_1
                    
                    zmm0_1 = *(rax_32 + 0xc)
                    
                    if (not(zmm8.d f>= zmm0_1.d))
                        int32_t var_134_2 = zmm0_1.d
                        zmm8 = zmm0_1
                    
                    zmm0_1 = rax_32[1].d
                    
                    if (not(zmm7.d f>= zmm0_1.d))
                        var_130_1 = zmm0_1.d
                        zmm7 = zmm0_1
                    
                    zmm0_1 = *(rax_32 + 0x14)
                    
                    if (not(zmm6.d f>= zmm0_1.d))
                        int32_t var_12c_2 = zmm0_1.d
                        zmm6 = zmm0_1
                
                rbx_5 = &rbx_5[2]
            while (rbx_5 != r14_7)
            
            if (rsi_4.b == 0)
                goto label_14085f58c
            
            zmm0_1.d = (*(arg1 + 0x6c4)).d f+ *(arg1 + 0x6c0)
            void* rax_34 = *(arg1 + 0x28)
            *(arg1 + 0x6c4) = zmm0_1.d
            
            if (zmm0_1.d f> *(rax_34 + 0x550))
            label_14085f4fe:
                *(arg1 + 0x6b8) |= 0x80
                zmm2_1.d = zmm6.d f- zmm9.d
                zmm0_1 = data_14396ff04
                *(arg1 + 0x6c4) = 0
                zmm2_1.d = zmm2_1.d f* 0.5f
                zmm2_1.d = zmm2_1.d f* zmm0_1.d
                float zmm4_1 = (zmm8.d f- zmm10.d) * 0.5f f* zmm0_1.d
                zmm9.d = zmm9.d f- zmm2_1.d
                zmm8.d = zmm8.d f+ zmm4_1
                zmm10.d = zmm10.d f- zmm4_1
                float zmm3 = (zmm7.d f- zmm11.d) * 0.5f f* zmm0_1.d
                zmm6.d = zmm6.d f+ zmm2_1.d
                zmm7.d = zmm7.d f+ zmm3
                int32_t var_110_1 = zmm9.d
                zmm11.d = zmm11.d f- zmm3
                rax_36 = zmm6.d
                zmm0_1 = _mm_unpacklo_ps(zmm8, zmm7.q)
                zmm1_1 = _mm_unpacklo_ps(zmm10, zmm11.q)
                goto label_14085f5a1
            
            zmm0_1 = *(arg1 + 0x6c8)
            
            if (zmm10.d f< zmm0_1.d || zmm10.d f> *(arg1 + 0x6d4) || zmm11.d f< *(arg1 + 0x6cc)
                    || zmm11.d f> *(arg1 + 0x6d8) || zmm9.d f< *(arg1 + 0x6d0)
                    || zmm9.d f> *(arg1 + 0x6dc) || zmm8.d f< zmm0_1.d || zmm8.d f> *(arg1 + 0x6d4)
                    || zmm7.d f< *(arg1 + 0x6cc) || zmm7.d f> *(arg1 + 0x6d8)
                    || zmm6.d f< *(arg1 + 0x6d0) || not(zmm6.d f<= *(arg1 + 0x6dc)))
                goto label_14085f4fe
    else
        *(arg1 + 0x6c8) = *(r13 + 0x408)
        *(arg1 + 0x6d8) = *(r13 + 0x418)
        *(arg1 + 0x6e0) = *(r13 + 0x420)
    
    rdx_1 = var_120

*(arg1 + 0x6bc) = 0

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

sub_140746840(&var_148)
int64_t result = sub_140b37f60("Niagara")
__security_check_cookie(rax_1 ^ &var_168)
return result
