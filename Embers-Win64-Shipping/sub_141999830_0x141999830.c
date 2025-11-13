// 函数: sub_141999830
// 地址: 0x141999830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
int64_t* r12 = arg3
void var_2e0
sub_1419928d0(&var_2e0, arg1)
void*** rax_2
int128_t zmm6
rax_2, zmm6 = sub_1410fccd0(&var_2e0, *r12, u"GenerateMipsGraphTexture", 0)
int128_t var_328
sub_1419a2ec0(*((sx.q((*1111")[sx.q(data_1439c7a08)]) << 3) + &data_143f13910), &var_328, 
    &data_143f10690, arg2[8].d u>> 4 & 1)
int128_t zmm7 = var_328
int64_t r14
r14.b = 1
int64_t* var_2d0
int32_t var_2c8
int32_t var_2c4

if (*(arg2 + 0x34) u> 1)
    int32_t r12_1 = 1
    uint32_t i = 1
    uint128_t var_308_1 = zx.o(0)
    int512_t zmm6_2
    
    do
        int32_t r13_1 = 1
        void var_2f8
        int32_t rdx_5 = *(*(*arg2 + 0x30))(arg2, &var_2f8) s>> i.b
        
        if (rdx_5 s>= 1)
            r13_1 = rdx_5
        
        char var_3a8_1 = 0
        char var_3a6_1 = 1
        void var_2ec
        int32_t rdx_8 = *((*(*arg2 + 0x30))(arg2, &var_2ec) + 4) s>> i.b
        char var_3a7_1 = (r14 - 1).b
        
        if (rdx_8 s>= 1)
            r12_1 = rdx_8
        
        int64_t var_3a4_1 = 0
        int32_t var_39c_1 = 0
        char var_390_1 = 0
        
        if (*(rax_2 + 0x54) != 0)
            int32_t var_39c_2 = *(rax_2 + 0x4c)
        
        char var_330_1 = r14.b
        char var_32f_1 = 0
        int64_t* var_2d8
        int32_t* rax_9
        uint128_t zmm6_1
        rax_9, zmm6_1 = sub_14081d830(0x20, var_2d8, 1, 0)
        uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(r13_1))
        __builtin_memset(&rax_9[2], 0, 0x18)
        uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(r12_1))
        *rax_9 = zmm6_1.d f/ zmm0_2.d
        zmm0_2.d = zmm6_1.d f/ zmm1_2.d
        rax_9[1] = zmm0_2.d
        void*** rax_10 = sub_14081d830(0x38, var_2d8, 1, 0)
        
        if (rax_10 == 0)
            rax_10 = nullptr
        else
            rax_10[1] = rax_2[1]
            *rax_10 = &data_142f34e88
            *(rax_10 + 0x18) = var_3a8_1.o
            rax_10[2] = 0
            *(rax_10 + 0x28) = rax_2.o
        
        *(rax_9 + 8) = rax_10
        void*** rax_11 = sub_14081d830(0x28, var_2d8, 1, 0)
        
        if (rax_11 == 0)
            rax_11 = nullptr
        else
            rax_11[1] = rax_2[1]
            *rax_11 = &data_142f285c0
            rax_11[2] = 0
            *(rax_11 + 0x18) = rax_2.o
        
        *(rax_9 + 0x10) = rax_11
        int64_t* rcx_11 = data_143f0f180
        int64_t* var_350
        (*(*rcx_11 + 0x28))(rcx_11, &var_350, *arg3 + 0x18)
        int64_t* rbx_1 = var_350
        *(rax_9 + 0x18) = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_14
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_14 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_14 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_16 = sub_140a20af0()
                        uint64_t rdx_14 = zx.q(rax_16)
                        void* const rax_17
                        
                        if (rax_16 != 0)
                            rax_17 = *((rdx_14 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_14.d) & 0x3fff) * 0x18
                        else
                            rax_17 = nullptr
                        
                        *(rax_17 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rdx_14.d)
        
        int32_t rax_22 = r12_1 + 7
        r12_1 = 1
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rax_22)
        int32_t rcx_16 = 1
        int32_t r8_3 = ((temp3_1 & 7) + temp4_1) s>> 3
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r13_1 + 7)
        int32_t rax_27 = (temp6_1 + (temp5_1 & 7)) s>> 3
        
        if (rax_27 s>= 1)
            rcx_16 = rax_27
        
        int32_t rcx_17 = 1
        
        if (r8_3 s>= 1)
            rcx_17 = r8_3
        
        int32_t var_344_1 = rcx_17
        sub_1419a3600(rcx_17.b)
        int64_t var_378
        var_378.o = var_308_1
        sub_141998c50(var_328.q, &data_143f193d0, rax_9)
        var_390_1.q = rcx_16.q
        var_3a8_1.q = rax_9
        var_3a4_1:4.o = zmm7
        int32_t var_388_1 = 1
        void*** rax_28
        char rcx_19
        rax_28, rcx_19, zmm6_2 = sub_14081d830(0x60, var_2d8, 1, 0)
        void*** rbx_2 = rax_28
        
        if (rax_28 == 0)
            rbx_2 = nullptr
        else
            sub_1419a3600(rcx_19)
            rbx_2[6].b = 0xa
            void* var_310_1 = &data_143f19400
            rbx_2[2] = 0
            rbx_2[3] = 0
            *(rbx_2 + 0x20) = rax_9.o
            *rbx_2 = &data_14300a9c0
            *(rbx_2 + 0x38) = var_3a8_1.o
            *(rbx_2 + 0x48) = rax_2.o
            rbx_2[0xb] = var_388_1.q
        
        int64_t var_140
        rbx_2[2] = var_140
        int64_t var_c8
        rbx_2[3] = var_c8
        int64_t rdi_2 = sx.q(var_2c8)
        int32_t rax_31 = (rdi_2 + 1).d
        var_2c8 = rax_31
        
        if (rax_31 s> var_2c4)
            sub_14083a440(&var_2d0, rdi_2.d)
        
        r14.b += 1
        var_2d0[rdi_2] = rbx_2
        i = zx.d(r14.b)
    while (i u< *(arg2 + 0x34))
    
    r12 = arg3
    zmm6_2.o = zmm6

int32_t var_178
int64_t rbx_3 = sx.q(var_178)
int64_t var_370 = *r12
int32_t rax_34 = (rbx_3 + 1).d
char var_368 = 1
int32_t var_178_1 = rax_34
int64_t var_180
int32_t var_174

if (rax_34 s> var_174)
    sub_14119a720(&var_180, rbx_3.d)

int64_t rax_35 = var_180
int64_t rcx_22 = rbx_3 * 3
*(rax_35 + (rcx_22 << 3)) = rax_2.o
*(rax_35 + (rcx_22 << 3) + 0x10) = var_368.q
sub_140b33630("FRDGBuilder_Execute")
sub_1419baa70(&var_2e0)
int64_t* rbx_4 = var_2d0
int64_t rdi_3 = 0
void* rcx_24 = &rbx_4[sx.q(var_2c8)]
uint64_t rsi_4 = (rcx_24 - rbx_4 + 7) u>> 3

if (rbx_4 u> rcx_24)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        sub_14199f8f0(&var_2e0, *rbx_4)
        rdi_3 += 1
        rbx_4 = &rbx_4[1]
    while (rdi_3 != rsi_4)

sub_1419a9390(&var_2e0)
int64_t rbx_5 = sx.q(var_2c8 - 1)

if (var_2c8 - 1 s>= 0)
    int64_t temp2_1
    
    do
        int64_t* rcx_27 = var_2d0[rbx_5]
        (**rcx_27)(rcx_27, 0)
        temp2_1 = rbx_5
        rbx_5 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t var_2c8_1 = 0

if (var_2c4 != 0)
    sub_14083ad10(&var_2d0, 0)

int32_t var_178_2 = 0

if (var_174 != 0)
    sub_1410b3bb0(&var_180, 0)

int32_t var_168 = 0
int32_t var_164
void var_170

if (var_164 != 0)
    sub_1410b3bb0(&var_170, 0)
void var_220
sub_14199e990(&var_220, 0)
void var_1d0
sub_14199e990(&var_1d0, 0)
void var_2c0
sub_14199e910(&var_2c0, 0)
void var_270
sub_14199e890(&var_270, 0)
sub_140b37f60("FRDGBuilder_Execute")
int32_t var_b8 = 0
int32_t var_b4
void var_c0

if (var_b4 != 0)
    sub_1410b3aa0(&var_c0, 0)
int32_t var_130 = 0
int32_t var_12c
void var_138

if (var_12c != 0)
    sub_1410b3aa0(&var_138, 0)
int32_t var_188 = 0
int32_t var_1c8 = 0
int32_t var_1c4

if (var_1c4 != 0)
    sub_1410b3bb0(&var_1d0, 0)

int32_t var_1a0 = 0xffffffff
int32_t var_19c = 0
void var_1c0
sub_141095ed0(&var_1c0, 0)
int32_t var_1d8 = 0
int32_t var_218 = 0
int32_t var_214

if (var_214 != 0)
    sub_1410b3bb0(&var_220, 0)

int32_t var_1f0 = 0xffffffff
int32_t var_1ec = 0
void var_210
sub_141095ed0(&var_210, 0)
int32_t var_228 = 0
sub_141096480(&var_270, 0)
int32_t var_278 = 0
int64_t result = sub_14199ea30(&var_2c0, 0)
int64_t* rbx_6 = r12[1]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        result = (**rbx_6)(rbx_6)
        int32_t temp8_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp8_1 == 1)
            result = (*(*rbx_6 + 8))(rbx_6, 1)

__security_check_cookie(rax_1 ^ &var_3c8)
return result
