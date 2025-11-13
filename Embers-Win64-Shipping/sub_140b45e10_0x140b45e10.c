// 函数: sub_140b45e10
// 地址: 0x140b45e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_828
int64_t rax_1 = __security_cookie ^ &var_828
int64_t* rax_2 = sub_140ac6680(arg2)
int64_t* rax_3 = sub_140ac6680(&arg1[2])
int16_t* const rbx = &data_142d40450
int16_t* const r8

if (rax_2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_2

int16_t* result

if (rax_3[1].d == 0)
    result = &data_142d40450
else
    result = *rax_3

void* r8_1 = r8 - result
uint32_t i
uint32_t rdx

do
    rdx = zx.d(*result)
    i = zx.d(*(result + r8_1))
    
    if (rdx != i)
        break
    
    result = &result[1]
while (i != 0)

if (rdx - i != 0)
    *(arg1 + 9) = 0
    uint128_t zmm1_1 = sub_14065da90(&arg1[2], arg2)
    sub_140ac0850(&arg1[8], 0)
    
    if (arg1[0x17].b != 0)
        arg1[0x17].b = 0
        int64_t rcx_4 = arg1[0x14]
        
        if (rcx_4 != 0)
            zmm1_1 = sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = arg1[0x12]
        
        if (rcx_5 != 0)
            zmm1_1 = sub_140a74f90(rcx_5)
    
    if (sub_140ab3de0(&arg1[2]) == 0)
        int16_t** rax_5 = sub_140ac6680(&arg1[2])
        
        if (rax_5[1].d != 0)
            rbx = *rax_5
        
        void var_4c0
        int128_t zmm6_1
        uint128_t zmm7_1
        uint128_t zmm8_1
        zmm6_1, zmm7_1, zmm8_1 = sub_140b1e060(&var_4c0, rbx, &arg1[0x22], zmm1_1)
        char var_4a8
        void* var_4a0
        int32_t i_5
        char var_490
        
        if (var_490 == 0 || var_4a8 != 0)
            sub_14065da90(&arg1[5], &var_4c0)
        else
            int32_t i_6 = i_5
            
            if (i_6 s> *(arg1 + 0x4c))
                sub_140775cf0(&arg1[8], i_6)
                i_6 = i_5
            
            void* r8_3 = var_4a0
            uint64_t r13
            r13.b = 0
            uint64_t r15_1 = 0
            int128_t var_48_1 = zmm6_1
            uint128_t var_58_1 = zmm7_1
            char var_807_1 = 0
            void* rdi_2 = sx.q(i_6) * 0x58 + r8_3
            char var_808
            void** const var_800
            uint64_t zmm1_2
            int128_t var_7c8
            
            if (r8_3 == rdi_2)
            label_140b46022:
                
                if (i_6 s> 0)
                    zmm7_1 = zx.o(*(r8_3 + 0x50))
                    zmm6_1 = *(r8_3 + 0x40)
                    var_7c8 = zmm6_1
                    
                    if (i_6 s> 1)
                        uint64_t i_4 = zx.q(i_6 - 1)
                        void* r8_4 = r8_3 + 0xa0
                        int64_t rcx_16 = var_7c8:8.q
                        uint64_t i_1
                        
                        do
                            if (*r8_4 u> rcx_16)
                                rcx_16 = *r8_4
                            
                            r8_4 += 0x58
                            i_1 = i_4
                            i_4 -= 1
                        while (i_1 != 1)
                        var_7c8:8.q = rcx_16
                        zmm6_1 = var_7c8
                    
                    void var_700
                    void var_5e8
                    void var_540
                    int128_t* rax_15 = sub_140b2b470(&var_540, 
                        sub_140b35eb0(&var_5e8, 
                            sub_140596d10(&var_7c8, 
                                sub_140ac6680(sub_140ac6c30(&var_700, &arg1[2])))))
                    void var_1a8
                    sub_140b0a670(&var_1a8, rax_15)
                    uint64_t var_158_1 = zmm7_1.q
                    sub_140b0bbf0(rax_15)
                    int64_t rbx_3 = sx.q(arg1[9].d)
                    int32_t rax_16 = (rbx_3 + 1).d
                    arg1[9].d = rax_16
                    
                    if (rax_16 s> *(arg1 + 0x4c))
                        sub_1407755b0(&arg1[8])
                    
                    int64_t* rbx_5 = rbx_3 * 0x58 + arg1[8]
                    sub_140b0a670(rbx_5, &var_1a8)
                    *(rbx_5 + 0x40) = zmm6_1
                    rbx_5[0xa] = var_158_1
                    sub_140b0bbf0(&var_1a8, var_158_1)
                    int64_t* var_6f8
                    
                    if (var_6f8 != 0)
                        var_6f8[1].d -= 1
                        
                        if (var_6f8[1].d == 1)
                            (**var_6f8)(var_6f8)
                            int32_t rax_19 = *(var_6f8 + 0xc)
                            *(var_6f8 + 0xc) -= 1
                            
                            if (rax_19 == 1)
                                (*(*var_6f8 + 8))(var_6f8, 1)
            else
                void* rbx_1 = r8_3 + 8
                
                while (true)
                    sub_140b3e980()
                    void* rax_9 = rbx_1 + 0x10
                    
                    if (((*(rbx_1 + 4) ^ data_143de7cdc) | (*(rbx_1 - 4) ^ data_143de7cd4)
                            | (*(rbx_1 - 8) ^ data_143de7cd0) | (data_143de7cd8 ^ *rbx_1)) != 0)
                        rax_9 = nullptr
                    
                    if (rax_9 != 0)
                        int32_t i_7 = i_5
                        var_808 = 0
                        int32_t r14_1 = 0
                        
                        if (i_7 s> 0)
                            uint128_t var_68_1 = zmm8_1
                            void** const r12_1 = nullptr
                            uint128_t zmm9
                            uint128_t var_78_1 = zmm9
                            uint128_t zmm10
                            uint128_t var_88_1 = zmm10
                            uint128_t zmm11
                            uint128_t var_98_1 = zmm11
                            
                            while (true)
                                int32_t* rbx_8 = r12_1 * 0x58 + var_4a0
                                
                                if (r14_1 + 3 s>= i_7)
                                label_140b46874:
                                    
                                    if (r13.b == 0)
                                        sub_140b3e200()
                                        void* rdi_8 = &rbx_8[6]
                                        void* rax_59 = rdi_8
                                        
                                        if (((data_143de7bfc ^ rbx_8[1])
                                                | (data_143de7c04 ^ rbx_8[3])
                                                | (data_143de7c00 ^ rbx_8[2])
                                                | (data_143de7bf8 ^ *rbx_8)) != 0)
                                            rax_59 = nullptr
                                        
                                        if (rax_59 != 0)
                                            var_807_1 = 1
                                        else
                                            sub_140b3e680()
                                            void* rax_62 = rdi_8
                                            
                                            if (((data_143de7c14 ^ rbx_8[1])
                                                    | (data_143de7c1c ^ rbx_8[3])
                                                    | (data_143de7c18 ^ rbx_8[2])
                                                    | (*rbx_8 ^ data_143de7c10)) != 0)
                                                rax_62 = nullptr
                                            
                                            if (rax_62 != 0)
                                                var_807_1 = 1
                                            else
                                                sub_140b3e500()
                                                void* rax_65 = rdi_8
                                                
                                                if (((data_143de7c2c ^ rbx_8[1])
                                                        | (data_143de7c34 ^ rbx_8[3])
                                                        | (data_143de7c30 ^ rbx_8[2])
                                                        | (*rbx_8 ^ data_143de7c28)) != 0)
                                                    rax_65 = nullptr
                                                
                                                if (rax_65 != 0)
                                                    var_807_1 = 1
                                                else
                                                    sub_140b3e580()
                                                    void* rax_68 = rdi_8
                                                    
                                                    if (((data_143de7c44 ^ rbx_8[1])
                                                            | (data_143de7c4c ^ rbx_8[3])
                                                            | (data_143de7c48 ^ rbx_8[2])
                                                            | (*rbx_8 ^ data_143de7c40)) != 0)
                                                        rax_68 = nullptr
                                                    
                                                    if (rax_68 != 0)
                                                        var_807_1 = 1
                                                    else
                                                        sub_140b3e380()
                                                        void* rax_71 = rdi_8
                                                        
                                                        if (((data_143de7c5c ^ rbx_8[1])
                                                                | (data_143de7c64 ^ rbx_8[3])
                                                                | (data_143de7c60 ^ rbx_8[2])
                                                                | (*rbx_8 ^ data_143de7c58)) != 0)
                                                            rax_71 = nullptr
                                                        
                                                        if (rax_71 != 0)
                                                            var_807_1 = 1
                                                        else
                                                            sub_140b3e400()
                                                            
                                                            if (((data_143de7c7c ^ rbx_8[3])
                                                                    | (data_143de7c78 ^ rbx_8[2])
                                                                    | (data_143de7c74 ^ rbx_8[1])
                                                                    | (*rbx_8 ^ data_143de7c70)) != 0)
                                                                rdi_8 = nullptr
                                                            
                                                            if (rdi_8 != 0)
                                                                var_807_1 = 1
                                    
                                    if (r15_1.b != 0)
                                        sub_140b3e980()
                                        uint64_t rdi_9 = &rbx_8[6]
                                        uint64_t rax_76 = rdi_9
                                        
                                        if (((data_143de7cdc ^ rbx_8[3])
                                                | (data_143de7cd8 ^ rbx_8[2])
                                                | (data_143de7cd4 ^ rbx_8[1])
                                                | (data_143de7cd0 ^ *rbx_8)) != 0)
                                            rax_76 = 0
                                        
                                        if (rax_76 != 0)
                                            rax_76.b = 1
                                        else
                                            sub_140b3e880()
                                            rax_76 = rdi_9
                                            
                                            if (((data_143de7bd4 ^ rbx_8[3])
                                                    | (data_143de7bd0 ^ rbx_8[2])
                                                    | (data_143de7bcc ^ rbx_8[1])
                                                    | (*rbx_8 ^ data_143de7bc8)) != 0)
                                                rax_76 = 0
                                            
                                            if (rax_76 != 0)
                                                rax_76.b = 1
                                            else
                                                sub_140b3e600()
                                                
                                                if (((data_143de7cc4 ^ rbx_8[3])
                                                        | (data_143de7cc0 ^ rbx_8[2])
                                                        | (data_143de7cbc ^ rbx_8[1])
                                                        | (data_143de7cb8 ^ *rbx_8)) != 0)
                                                    rdi_9 = 0
                                                
                                                if (rdi_9 != 0)
                                                    rax_76.b = 1
                                                else
                                                    rax_76.b = 0
                                        
                                        if (rax_76.b != 0)
                                            sub_140b3e180()
                                            void** const var_658_1 = &data_142e786c8
                                            int128_t var_668 = data_143de7ca0.o
                                            void var_208
                                            sub_140b0a670(&var_208, &var_668)
                                            int128_t zmm0_12 = *(rbx_8 + 0x40)
                                            zmm1_2 = *(rbx_8 + 0x50)
                                            sub_140b0bbf0(&var_668, zmm1_2)
                                            int64_t rdi_10 = sx.q(arg1[9].d)
                                            int32_t rax_80 = (rdi_10 + 1).d
                                            arg1[9].d = rax_80
                                            
                                            if (rax_80 s> *(arg1 + 0x4c))
                                                sub_1407755b0(&arg1[8])
                                            
                                            int64_t* rdi_12 = rdi_10 * 0x58 + arg1[8]
                                            sub_140b0a670(rdi_12, &var_208)
                                            *(rdi_12 + 0x40) = zmm0_12
                                            rdi_12[0xa] = zmm1_2
                                            sub_140b0bbf0(&var_208, zmm1_2)
                                    
                                    sub_140b3e980()
                                    void* rdi_13 = &rbx_8[6]
                                    void* rax_83 = rdi_13
                                    
                                    if (((data_143de7cdc ^ rbx_8[3]) | (data_143de7cd8 ^ rbx_8[2])
                                            | (data_143de7cd4 ^ rbx_8[1])
                                            | (*rbx_8 ^ data_143de7cd0)) != 0)
                                        rax_83 = nullptr
                                    
                                    if (rax_83 == 0)
                                        sub_140b3e800()
                                        var_808 = 0
                                        
                                        if (((data_143de7bec ^ rbx_8[3])
                                                | (data_143de7be8 ^ rbx_8[2])
                                                | (data_143de7be4 ^ rbx_8[1])
                                                | (data_143de7be0 ^ *rbx_8)) != 0)
                                            rdi_13 = nullptr
                                    
                                    if (rax_83 != 0 || rdi_13 != 0)
                                        var_808 = 1
                                    
                                    int64_t rdi_14 = sx.q(arg1[9].d)
                                    int32_t rax_86 = (rdi_14 + 1).d
                                    arg1[9].d = rax_86
                                    
                                    if (rax_86 s> *(arg1 + 0x4c))
                                        sub_1407755b0(&arg1[8])
                                    
                                    int64_t* rdi_16 = rdi_14 * 0x58 + arg1[8]
                                    sub_140b0a670(rdi_16, rbx_8)
                                    *(rdi_16 + 0x40) = *(rbx_8 + 0x40)
                                    rdi_16[0xa] = *(rbx_8 + 0x50)
                                else
                                    sub_140b3e980()
                                    void* rax_24 = &rbx_8[6]
                                    
                                    if (((data_143de7cdc ^ rbx_8[3]) | (data_143de7cd8 ^ rbx_8[2])
                                            | (data_143de7cd4 ^ rbx_8[1])
                                            | (*rbx_8 ^ data_143de7cd0)) != 0)
                                        rax_24 = nullptr
                                    
                                    if (rax_24 == 0)
                                        goto label_140b46874
                                    
                                    zmm9 = *(rbx_8 + 0x40)
                                    zmm10 = zx.o(*(rbx_8 + 0x50))
                                    void* rdi_4 = (r12_1 + 1) * 0x58 + var_4a0
                                    sub_140b3e880()
                                    void* rax_28 = rdi_4 + 0x18
                                    
                                    if (((*(rdi_4 + 0xc) ^ data_143de7bd4)
                                            | (*(rdi_4 + 8) ^ data_143de7bd0)
                                            | (*(rdi_4 + 4) ^ data_143de7bcc)
                                            | (*rdi_4 ^ data_143de7bc8)) != 0)
                                        rax_28 = nullptr
                                    
                                    if (rax_28 == 0)
                                        goto label_140b46874
                                    
                                    void* r13_1 = var_4a0
                                    int32_t rbx_9 = 1
                                    r12_1 += 2
                                    r14_1 += 2
                                    int32_t* r15_2 = r12_1 * 0x58
                                    var_800 = r12_1
                                    zmm6_1 = *(r15_2 + r13_1 + 0x40)
                                    zmm11 = zx.o(*(r15_2 + r13_1 + 0x50))
                                    var_7c8 = zmm6_1
                                    int64_t rdi_5 = var_7c8:8.q
                                    
                                    if (r14_1 s< i_5)
                                        while (true)
                                            sub_140b3e880()
                                            void* r12_3 = r13_1 + 0x18 + r15_2
                                            int32_t rdx_21 = (data_143de7bd4
                                                ^ *(r15_2 + r13_1 + 0xc))
                                                | (data_143de7bcc ^ *(r15_2 + r13_1 + 4))
                                                | (data_143de7bd0 ^ *(r15_2 + r13_1 + 8))
                                                | (*(r15_2 + r13_1) ^ data_143de7bc8)
                                            void* rax_31 = r12_3
                                            
                                            if (rdx_21 != 0)
                                                rax_31 = nullptr
                                            
                                            if (rax_31 == 0)
                                                sub_140b3e800()
                                                int32_t r8_20 = (data_143de7bec
                                                    ^ *(r15_2 + r13_1 + 0xc))
                                                    | (data_143de7be4 ^ *(r15_2 + r13_1 + 4))
                                                    | (data_143de7be8 ^ *(r15_2 + r13_1 + 8))
                                                    | (*(r15_2 + r13_1) ^ data_143de7be0)
                                                
                                                if (r8_20 != 0)
                                                    r12_3 = nullptr
                                                
                                                if (r12_3 != 0)
                                                    int32_t temp9_1 = rbx_9
                                                    rbx_9 -= 1
                                                    
                                                    if (temp9_1 == 1)
                                                        r12_1 = var_800
                                                        break
                                            else
                                                rbx_9 += 1
                                            
                                            if (*(r15_2 + r13_1 + 0x48) u> rdi_5)
                                                rdi_5 = *(r15_2 + r13_1 + 0x48)
                                            
                                            r12_1 = var_800 + 1
                                            r14_1 += 1
                                            var_7c8:8.q = rdi_5
                                            r15_2 = &r15_2[0x16]
                                            var_800 = r12_1
                                            
                                            if (r14_1 s>= i_5)
                                                break
                                            
                                            r13_1 = var_4a0
                                        
                                        zmm6_1 = var_7c8
                                    
                                    zmm7_1 = zx.o(0)
                                    int64_t var_758_1 = 0
                                    sub_140b3e880()
                                    void** const var_618_1 = &data_142e78588
                                    int128_t var_628 = data_143de7bc8.o
                                    void var_3e8
                                    sub_140b0a670(&var_3e8, &var_628)
                                    zmm8_1 = zx.o(var_758_1)
                                    uint64_t var_398_1 = zmm8_1.q
                                    sub_140b0bbf0(&var_628)
                                    int64_t rbx_10 = sx.q(arg1[9].d)
                                    int32_t rax_34 = (rbx_10 + 1).d
                                    arg1[9].d = rax_34
                                    
                                    if (rax_34 s> *(arg1 + 0x4c))
                                        sub_1407755b0(&arg1[8])
                                    
                                    int64_t* rbx_12 = rbx_10 * 0x58 + arg1[8]
                                    sub_140b0a670(rbx_12, &var_3e8)
                                    *(rbx_12 + 0x40) = zmm7_1
                                    rbx_12[0xa] = var_398_1
                                    sub_140b0bbf0(&var_3e8, var_398_1)
                                    int32_t rax_35 = 0
                                    void** rcx_50 = zmm9.q
                                    var_800 = rcx_50
                                    int64_t r13_2 = 0
                                    int64_t r15_3 = _mm_bsrli_si128(zmm9, 8).q
                                    int64_t var_7f8 = 0
                                    int64_t var_7f0_1 = 0
                                    int32_t r15_5 = ((r15_3 - rcx_50) s>> 1).d
                                    int32_t rbx_13 = 0
                                    
                                    if (rcx_50 != 0 && *rcx_50 != 0 && r15_5 s> 0)
                                        if (r15_5 + 1 s> 0)
                                            sub_1405947f0(&var_7f8, r15_5 + 1)
                                            rax_35 = var_7f0_1:4.d
                                            rbx_13 = var_7f0_1.d
                                            r13_2 = var_7f8
                                        
                                        rbx_13 += r15_5 + 1
                                        var_7f0_1.d = rbx_13
                                        
                                        if (rbx_13 s> rax_35)
                                            sub_140594770(&var_7f8)
                                            rbx_13 = var_7f0_1.d
                                            r13_2 = var_7f8
                                        
                                        UnDecorator::getReferenceType(r13_2, var_800, r15_5 * 2)
                                        *(r13_2 + (sx.q(rbx_13) << 1) - 2) = 0
                                        rax_35 = var_7f0_1:4.d
                                    
                                    int64_t var_7b0 = r13_2
                                    int32_t r13_3 = 0
                                    var_7f8 = 0
                                    int64_t var_7f0_2 = 0
                                    int64_t var_7a0_1 = 0
                                    int64_t var_798_1 = 0
                                    sub_140b4ae80(&var_7b0)
                                    int64_t var_750 = var_7b0
                                    int32_t var_748_1 = rbx_13
                                    int32_t var_744_1 = rax_35
                                    int64_t var_740_1 = var_7a0_1
                                    int32_t var_738_1 = var_798_1.d
                                    int32_t var_734_1 = var_798_1:4.d
                                    int16_t var_730_1 = 1
                                    void var_5c0
                                    int128_t* rax_43 = sub_140b2b470(&var_5c0, &var_750)
                                    void var_388
                                    sub_140b0a670(&var_388, rax_43)
                                    uint64_t var_338_1 = zmm10.q
                                    sub_140b0bbf0(rax_43)
                                    int64_t rbx_16 = sx.q(arg1[9].d)
                                    int32_t rax_44 = (rbx_16 + 1).d
                                    arg1[9].d = rax_44
                                    
                                    if (rax_44 s> *(arg1 + 0x4c))
                                        sub_1407755b0(&arg1[8])
                                    
                                    int64_t* rbx_18 = rbx_16 * 0x58 + arg1[8]
                                    sub_140b0a670(rbx_18, &var_388)
                                    *(rbx_18 + 0x40) = zmm9
                                    rbx_18[0xa] = var_338_1
                                    sub_140b0bbf0(&var_388, var_338_1)
                                    sub_140b3e900()
                                    void** const var_6d8_1 = &data_142e785c8
                                    int128_t var_6e8 = data_143de7ce8.o
                                    void var_328
                                    sub_140b0a670(&var_328, &var_6e8)
                                    uint64_t var_2d8_1 = zmm8_1.q
                                    sub_140b0bbf0(&var_6e8)
                                    int64_t rbx_19 = sx.q(arg1[9].d)
                                    int32_t rax_45 = (rbx_19 + 1).d
                                    arg1[9].d = rax_45
                                    
                                    if (rax_45 s> *(arg1 + 0x4c))
                                        sub_1407755b0(&arg1[8])
                                    
                                    int64_t* rbx_21 = rbx_19 * 0x58 + arg1[8]
                                    sub_140b0a670(rbx_21, &var_328)
                                    *(rbx_21 + 0x40) = zmm7_1
                                    rbx_21[0xa] = var_2d8_1
                                    sub_140b0bbf0(&var_328, var_2d8_1)
                                    void** rax_46 = zmm6_1.q
                                    int64_t var_7e8 = 0
                                    var_800 = rax_46
                                    int32_t rdi_7 = ((rdi_5 - rax_46) s>> 1).d
                                    int32_t rbx_22 = 0
                                    int32_t var_7e0_1 = 0
                                    int64_t r15_6 = 0
                                    int32_t var_7dc_1 = 0
                                    
                                    if (rax_46 != 0 && *rax_46 != 0 && rdi_7 s> 0)
                                        if (rdi_7 + 1 s> 0)
                                            sub_1405947f0(&var_7e8, rdi_7 + 1)
                                            r13_3 = var_7dc_1
                                            rbx_22 = var_7e0_1
                                            r15_6 = var_7e8
                                        
                                        rbx_22 += rdi_7 + 1
                                        
                                        if (rbx_22 s> r13_3)
                                            sub_140594770(&var_7e8)
                                            r13_3 = var_7dc_1
                                            r15_6 = var_7e8
                                        
                                        UnDecorator::getReferenceType(r15_6, var_800, rdi_7 * 2)
                                        *(r15_6 + (sx.q(rbx_22) << 1) - 2) = 0
                                    
                                    int64_t var_790 = r15_6
                                    var_7e0_1.q = 0
                                    int64_t var_780_1 = 0
                                    int64_t var_778_1 = 0
                                    var_7e8 = 0
                                    sub_140b4ae80(&var_790)
                                    int64_t var_728 = var_790
                                    int32_t var_720_1 = rbx_22
                                    int32_t var_71c_1 = r13_3
                                    int64_t var_718_1 = var_780_1
                                    int32_t var_710_1 = var_778_1.d
                                    int32_t var_70c_1 = var_778_1:4.d
                                    int16_t var_708_1 = 1
                                    void var_580
                                    int128_t* rax_54 = sub_140b2b470(&var_580, &var_728)
                                    void var_2c8
                                    sub_140b0a670(&var_2c8, rax_54)
                                    uint64_t var_278_1 = zmm11.q
                                    sub_140b0bbf0(rax_54)
                                    int64_t rbx_25 = sx.q(arg1[9].d)
                                    int32_t rax_55 = (rbx_25 + 1).d
                                    arg1[9].d = rax_55
                                    
                                    if (rax_55 s> *(arg1 + 0x4c))
                                        sub_1407755b0(&arg1[8])
                                    
                                    int64_t* rbx_27 = rbx_25 * 0x58 + arg1[8]
                                    sub_140b0a670(rbx_27, &var_2c8)
                                    *(rbx_27 + 0x40) = zmm6_1
                                    rbx_27[0xa] = var_278_1
                                    sub_140b0bbf0(&var_2c8, var_278_1)
                                    sub_140b3e800()
                                    void** const var_698_1 = &data_142e785a8
                                    int128_t var_6a8 = data_143de7be0.o
                                    void var_268
                                    sub_140b0a670(&var_268, &var_6a8)
                                    uint64_t var_218_1 = zmm8_1.q
                                    sub_140b0bbf0(&var_6a8)
                                    int64_t rbx_28 = sx.q(arg1[9].d)
                                    int32_t rax_56 = (rbx_28 + 1).d
                                    arg1[9].d = rax_56
                                    
                                    if (rax_56 s> *(arg1 + 0x4c))
                                        sub_1407755b0(&arg1[8])
                                    
                                    int64_t* rbx_30 = rbx_28 * 0x58 + arg1[8]
                                    sub_140b0a670(rbx_30, &var_268)
                                    *(rbx_30 + 0x40) = zmm7_1
                                    rbx_30[0xa] = var_218_1
                                    sub_140b0bbf0(&var_268, var_218_1)
                                
                                i_7 = i_5
                                r14_1 += 1
                                r15_1 = zx.q(var_808)
                                r12_1 += 1
                                
                                if (r14_1 s>= i_7)
                                    break
                                
                                r13 = zx.q(var_807_1)
                        
                        r15_1 = 0
                        break
                    
                    rbx_1 += 0x58
                    
                    if (rbx_1 - 8 == rdi_2)
                        i_6 = i_5
                        r8_3 = var_4a0
                        goto label_140b46022
            int32_t rdi_17 = 0
            int64_t var_7d0_1 = 0
            int32_t r12_5 = 0
            uint64_t var_7d8 = 0
            int32_t rdx_75 = arg1[9].d
            
            if (rdx_75 s> 0)
                sub_140775cf0(&var_7d8, rdx_75)
                r12_5 = var_7d0_1:4.d
                rdi_17 = var_7d0_1.d
                r15_1 = var_7d8
            
            void* r14_2 = arg1[8]
            void* r13_5 = sx.q(arg1[9].d) * 0x58 + r14_2
            
            if (r14_2 != r13_5)
                int128_t* rsi_2 = r14_2 + 0x40
                
                do
                    void var_500
                    int64_t* rax_89 = sub_140b121d0(r14_2, &var_500)
                    void var_148
                    sub_140b0a670(&var_148, rax_89)
                    int128_t zmm0_15 = *rsi_2
                    zmm1_2 = rsi_2[1].q
                    sub_140b0bbf0(rax_89, zmm1_2)
                    int64_t rbx_32 = sx.q(rdi_17)
                    rdi_17 = (rbx_32 + 1).d
                    var_7d0_1.d = rdi_17
                    
                    if (rdi_17 s> r12_5)
                        sub_1407755b0(&var_7d8)
                        r12_5 = var_7d0_1:4.d
                        rdi_17 = var_7d0_1.d
                        r15_1 = var_7d8
                    
                    int64_t* rbx_34 = rbx_32 * 0x58 + r15_1
                    sub_140b0a670(rbx_34, &var_148)
                    *(rbx_34 + 0x40) = zmm0_15
                    rbx_34[0xa] = zmm1_2
                    sub_140b0bbf0(&var_148, zmm1_2)
                    r14_2 += 0x58
                    rsi_2 += 0x58
                while (r14_2 != r13_5)
            
            uint64_t var_768 = r15_1
            int32_t var_760_1 = rdi_17
            int32_t var_75c_1 = r12_5
            void var_420
            int64_t* rax_90 = sub_140b0f760(&var_420, &var_768)
            
            if (rax_90 != &arg1[0xa])
                if (arg1[0x11].b != 0)
                    arg1[0x11].b = 0
                    sub_140acd7a0(&arg1[0xa])
                
                arg1[0xd].b = 0
                
                if (rax_90[3].b != 0)
                    arg1[0xa] = *rax_90
                    void* rax_92 = rax_90[1]
                    arg1[0xb] = rax_92
                    
                    if (rax_92 != 0)
                        *(rax_92 + 8) += 1
                    
                    arg1[0xc].d = rax_90[2].d
                    arg1[0xd].b = 1
                
                arg1[0x10].b = 0
                
                if (rax_90[6].b != 0)
                    arg1[0xe] = 0
                    arg1[0xe] = rax_90[4]
                    rax_90[4] = 0
                    arg1[0xf].d = rax_90[5].d
                    *(arg1 + 0x7c) = *(rax_90 + 0x2c)
                    rax_90[5] = 0
                    arg1[0x10].b = 1
                
                arg1[0x11].b = 1
            
            void var_400
            sub_140b2fa60(&var_400)
            char var_408
            
            if (var_408 != 0)
                char var_408_1 = 0
                int64_t* var_418
                
                if (var_418 != 0)
                    var_418[1].d -= 1
                    
                    if (var_418[1].d == 1)
                        (**var_418)(var_418)
                        int32_t rax_100 = *(var_418 + 0xc)
                        *(var_418 + 0xc) -= 1
                        
                        if (rax_100 == 1)
                            (*(*var_418 + 8))(var_418, 1)
            
            if (arg1[0x10].b == 0 || arg1[0xd].b != 0)
                sub_14065da90(&arg1[5], &arg1[0xa])
            else
                *(arg1 + 9) = (var_807_1 != 0) + 2
                sub_1405d9400()
                sub_14065da90(&arg1[5], &data_143cd6fd8)
                var_800 = &data_142e77ec8
                (*(*arg1 + 0x10))(arg1, &arg1[0xa], &var_800, &arg1[5], var_808, var_800)
                
                if (arg1[0xf].d == 1)
                    void* rcx_146 = arg1[0xe]
                    
                    if (*(rcx_146 + 0x58) == 0)
                        char var_470_1 = 0
                        int32_t var_468
                        void var_e8
                        sub_140b0a670(&var_468, sub_140b121d0(rcx_146, &var_e8))
                        char var_428_1 = 1
                        sub_140b0bbf0(&var_e8)
                        sub_140b3e980()
                        void var_450
                        int64_t* rbx_37 = &var_450
                        int32_t var_464
                        int32_t var_460
                        int32_t var_45c
                        
                        if (((data_143de7cd4 ^ var_464) | (data_143de7cd8 ^ var_460)
                                | (data_143de7cdc ^ var_45c) | (data_143de7cd0 ^ var_468)) != 0)
                            rbx_37 = nullptr
                        
                        if (rbx_37 != 0 && rbx_37 != &arg1[0x12])
                            if (arg1[0x17].b != 0)
                                arg1[0x17].b = 0
                                int64_t rcx_153 = arg1[0x14]
                                
                                if (rcx_153 != 0)
                                    sub_140a74f90(rcx_153)
                                
                                int64_t rcx_154 = arg1[0x12]
                                
                                if (rcx_154 != 0)
                                    sub_140a74f90(rcx_154)
                            
                            sub_140b2f8e0(&arg1[0x12], rbx_37)
                            arg1[0x17].b = 1
                        
                        if (var_428_1 != 0)
                            char var_428_2 = 0
                            sub_140b0bbf0(&var_468)
                        
                        if (var_470_1 != 0)
                            char var_470_2 = 0
                            int64_t* var_480
                            
                            if (var_480 != 0)
                                var_480[1].d -= 1
                                
                                if (var_480[1].d == 1)
                                    (**var_480)(var_480)
                                    int32_t rax_108 = *(var_480 + 0xc)
                                    *(var_480 + 0xc) -= 1
                                    
                                    if (rax_108 == 1)
                                        (*(*var_480 + 8))(var_480, 1)
        
        if (var_490 != 0)
            int32_t i_3 = i_5
            void* rbx_39 = var_4a0
            char var_490_1 = 0
            
            if (i_3 != 0)
                int32_t i_2
                
                do
                    sub_140b0bbf0(rbx_39)
                    rbx_39 += 0x58
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
                rbx_39 = var_4a0
            
            if (rbx_39 != 0)
                sub_140a74f90(rbx_39)
        
        if (var_4a8 != 0)
            char var_4a8_1 = 0
            int64_t* var_4b8
            
            if (var_4b8 != 0)
                var_4b8[1].d -= 1
                
                if (var_4b8[1].d == 1)
                    (**var_4b8)(var_4b8)
                    int32_t r12_6 = *(var_4b8 + 0xc)
                    *(var_4b8 + 0xc) -= 1
                    
                    if (r12_6 == 1)
                        (*(*var_4b8 + 8))(var_4b8, zx.q(r12_6))
    else
        *(arg1 + 9) = 1
        sub_1405d9400()
        sub_14065da90(&arg1[5], &data_143cd6fd8)
        
        if (arg1[0x11].b != 0)
            arg1[0x11].b = 0
            sub_140acd7a0(&arg1[0xa])
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_828)
return result
