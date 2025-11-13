// 函数: sub_1423c7a40
// 地址: 0x1423c7a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
void* var_78 = __security_cookie ^ &var_348
int128_t zmm6 = zx.o(0)
int128_t zmm7 = zx.o(0)
int128_t zmm8 = zx.o(0)

if (*(arg1 + 0x18) == 0)
    zmm6 = *(arg2 + 0x80)
    zmm7 = *(arg2 + 0x84)
    zmm8 = *(arg2 + 0x88)

int64_t* r15 = *(arg2 + 0x58)
void* result

if (r15 == 0)
    result.b = 0
else
    int64_t* rax_1
    int512_t zmm0_1
    rax_1, zmm0_1 = j_sub_140a82f30(0x90)
    int64_t* r12_1
    
    if (rax_1 == 0)
        r12_1 = nullptr
    else
        zmm0_1.o = 0x3f800000
        int32_t var_2e0_1 = 0x3f800000
        int64_t* rcx = *(arg2 + 0x70)
        int64_t var_300_1 = 0xffffffff
        int64_t* var_310 = r15
        int32_t var_2dc
        int32_t rax_4 = (var_2dc & 0xffffffe8) | 8
        int64_t* var_308_1 = rcx
        int32_t var_2f8_1 = 0xffffffff
        int64_t var_2f4_1 = 0
        
        if (rcx != 0 && (*(*rcx + 0x240))(zmm0_1) != 0)
            uint32_t rax_7
            
            if (data_143de5480 != 0)
                rax_7.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rax_7.b != 0)
                rax_4 |= 0x10
        
        int32_t var_2ec_1 = zmm7.d
        int32_t var_2dc_2 = rax_4 | 0x10
        int32_t var_2e8_1 = zmm8.d
        int32_t var_2e4_1 = zmm6.d
        (*(*r15 + 0x20))(r15)
        int32_t var_2e0_2 = 0x3f800000
        r12_1 = sub_1422d9ba0(rax_1, &var_310)
    
    void var_2c8
    uint64_t rbx_2 = *(*(*r15 + 0x18))(r15, &var_2c8)
    uint32_t rdi_2 = (rbx_2 u>> 0x20).d
    uint64_t var_2a8
    sub_1413c1ea0(&var_2a8)
    int32_t rax_14 = data_143dbb200
    int128_t zmm1_1 = data_14399f6f0
    var_2a8 = data_143dbb1f8.q
    uint128_t var_298_1 = data_14399f6e0
    int128_t var_288_1 = zmm1_1
    uint32_t var_20c_1 = rdi_2
    uint32_t var_1fc_1 = rdi_2
    int32_t var_2a0_1 = rax_14
    void* rax_15 = *(arg1 + 8)
    uint128_t var_278_1 = data_14399f700
    int128_t var_268_1 = data_14399f710
    int64_t* var_1f8_1 = r12_1
    int64_t var_218_1 = 0
    int32_t var_210_1 = rbx_2.d
    int64_t var_208_1 = 0
    int32_t var_200_1 = rbx_2.d
    uint128_t var_258_1 = *(rax_15 + 0x10)
    int128_t var_248_1 = *(rax_15 + 0x20)
    uint128_t var_238_1 = *(rax_15 + 0x30)
    int128_t var_228_1 = *(rax_15 + 0x40)
    uint128_t var_1d0_1 = data_14399f5e0
    int128_t var_1c0_1 = data_14399f5c0
    int64_t* rax_16 = j_sub_140a82f30(0x15a0)
    int64_t* r13_1
    
    if (rax_16 == 0)
        r13_1 = nullptr
    else
        r13_1 = sub_1422d8af0(rax_16, &var_2a8)
    
    int32_t rcx_6 = (*U"1111")[sx.q(*(arg2 + 0x90))]
    int32_t var_2d8_1 = rcx_6
    
    if (sub_14128e090(rcx_6) == 0 || *(arg2 + 0x8d) == 0)
        r12_1.b = 0
    else
        r12_1.b = 1
    
    bool cond:2_1 = *(arg2 + 0x60) != 0
    rbx_2.b = 0
    uint8_t r14_2 = (*(arg2 + 0x78) u>> 1).b & 1
    void* rcx_8 = *(*(*r15 + 8))(r15)
    void* var_318 = rcx_8
    
    if (rcx_8 != 0)
        *(rcx_8 + 8) += 1
        int32_t rdx_3 = *(var_318 + 0x3c)
        
        if (rdx_3 == 1 || rdx_3 == 0xd || rdx_3 == 0x11)
            rbx_2.b = (*(sx.q(data_143f0f1a0) * 0x14 + &data_143f025fc) u>> 0x1e).b & 1
    
    void* r15_1 = *(arg1 + 0x10)
    int64_t rax_24 = *(arg1 + 8)
    
    if (r15_1 != 0)
        *(r15_1 + 8) += 1
    
    void*** rax_25 = sub_140a82f30(0x28, 8)
    rax_25[1] = rax_24
    rax_25[2] = r15_1
    rax_25[4].b = cond:2_1
    *(rax_25 + 0x22) = rbx_2.b
    *(rax_25 + 0x21) = r12_1.b
    rax_25[3] = r13_1
    *rax_25 = &data_14333d990
    int64_t* rbx_5 = *arg3
    int64_t (* var_b8)(int64_t** arg1, int64_t arg2)
    int64_t (* rax_26)(int64_t** arg1, int64_t arg2) = var_b8
    
    if (rax_25 != -8)
        rax_26 = j_sub_1423bb450
    
    int64_t r15_2 = sx.q(rbx_5[1].d)
    int32_t rax_27 = (r15_2 + 1).d
    rbx_5[1].d = rax_27
    
    if (rax_27 s> *(rbx_5 + 0xc))
        sub_1405c4fe0(rbx_5)
    
    int64_t* rcx_14 = (r15_2 << 6) + *rbx_5
    *rcx_14 = rax_26
    rcx_14[2] = rax_25
    int128_t* var_a8_2 = nullptr
    int128_t var_98
    *(rcx_14 + 0x20) = var_98
    int128_t var_88
    *(rcx_14 + 0x30) = var_88
    
    if (*rcx_14 == 0 && rax_26 != 0)
        int128_t* rcx_15 = &var_98
        
        if (var_a8_2 != 0)
            rcx_15 = var_a8_2
        
        (*(*rcx_15 + 0x10))(rcx_15)
    
    void var_2c0
    
    if (r14_2 != 0 && arg1 + 8 != &var_2c0)
        *(arg1 + 8) = 0
        int64_t* rbx_6 = *(arg1 + 0x10)
        
        if (rbx_6 != 0)
            *(arg1 + 0x10) = 0
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp3_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
    
    sub_1405d1550(&var_318)
    void var_140
    sub_1413c3330(&var_140)
    int32_t var_148_1 = 0
    int64_t var_150
    
    if (var_150 != 0)
        sub_140a74f90(var_150)
    
    int32_t var_188_1 = 0
    int64_t var_190
    int32_t var_184
    
    if (var_184 != 0)
        sub_140638cc0(&var_190, 0)
    
    int32_t var_160_1 = 0xffffffff
    int32_t var_15c_1 = 0
    void var_180
    sub_14059a8e0(&var_180, 0)
    int64_t var_170
    
    if (var_170 != 0)
        sub_140a74f90(var_170)
    
    int64_t rcx_24 = var_190
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    result.b = 1

__security_check_cookie(var_78 ^ &var_348)
return result
