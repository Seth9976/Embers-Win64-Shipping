// 函数: sub_142401a20
// 地址: 0x142401a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2[3].d)
int32_t rdi_1 = arg3 - r9.d
int16_t* i_2 = nullptr
int32_t rcx = 0
int16_t* i_4 = nullptr
void* rax = arg2[2]
int16_t* i_1 = nullptr
int32_t var_f4 = 0
int128_t zmm1 = *(rax + 0x10)
int64_t zmm0 = *(rax + 0x20)
int32_t rdx = 0
int32_t var_f8 = 0
int16_t* rsi = *arg2 + (r9 << 1)
int32_t rbx_2
int16_t* const i_5

if (rsi != 0 && *rsi != 0 && rdi_1 s> 0)
    if (rdi_1 + 1 s> 0)
        sub_1405947f0(&i_1, rdi_1 + 1)
        rcx = var_f4
        rdx = var_f8
        i_4 = i_1
    
    rbx_2 = rdi_1 + 1 + rdx
    
    if (rbx_2 s> rcx)
        sub_140594770(&i_1)
        i_4 = i_1
    
    UnDecorator::getReferenceType(i_4, rsi, rdi_1 * 2)
    i_5 = i_4
    i_4[sx.q(rbx_2) - 1] = 0

if (rsi == 0 || *rsi == 0 || rdi_1 s<= 0 || rbx_2 == 0)
    i_5 = &data_142d40450

int16_t* i = nullptr
int32_t rdx_3 = 0
i_1 = nullptr
int32_t rax_4 = 0
int32_t var_f8_2 = 0
int64_t rsi_1 = -1
int32_t var_f4_1 = 0
int32_t r12_1

if (i_5 != 0 && *i_5 != 0)
    int64_t rdi_2 = -1
    
    do
        rdi_2 += 1
    while (i_5[rdi_2] != 0)
    
    if (rdi_2.d + 1 s> 0)
        sub_1405947f0(&i_1, rdi_2.d + 1)
        rax_4 = var_f4_1
        rdx_3 = var_f8_2
        i = i_1
    
    r12_1 = rdx_3 + rdi_2.d + 1
    
    if (r12_1 s> rax_4)
        sub_140594770(&i_1)
        i = i_1
    
    UnDecorator::getReferenceType(i, i_5, (rdi_2.d + 1) * 2)

if (i_5 == 0 || *i_5 == 0 || r12_1 == 0)
    i = &data_142d40450

do
    rsi_1 += 1
while (i[rsi_1] != 0)

void* r14_1 = zmm1:8.q
int128_t zmm9 = zx.o(0)
int128_t zmm7 = zx.o(0)

if (r14_1 != 0)
    int32_t var_108
    int32_t var_104
    uint128_t zmm6_1
    int128_t zmm10_1
    int32_t zmm11_1
    zmm6_1, zmm7, zmm9, zmm10_1, zmm11_1 = sub_142003d30(r14_1, 0x30, &var_108, &var_104)
    
    if (not(var_108 f!= zmm11_1))
        zmm6_1, zmm7, zmm9, zmm10_1 = sub_142003d30(r14_1, 0x41, &var_108, &var_104)
    
    if (*i != 0)
        int128_t var_88_1 = zmm10_1
        uint128_t var_48_1 = zmm6_1
        
        while (i u< &i[sx.q(rsi_1.d)])
            int16_t rdi_4 = *i
            int32_t arg_18
            int32_t arg_20
            uint128_t zmm8_2
            int32_t zmm11_2
            int32_t zmm12_2
            zmm7, zmm8_2, zmm9, zmm10_1, zmm11_2, zmm12_2 =
                sub_142003d30(r14_1, rdi_4, &arg_18, &arg_20)
            zmm1 = arg_20
            
            if (not(zmm1.d f!= zmm11_2) && rdi_4 == 0xa)
                zmm1 = var_104
                arg_20 = zmm1.d
            
            zmm6_1 = zmm8_2
            
            if (i_2 != 0)
                char rax_6
                int32_t zmm8_3
                rax_6, zmm7, zmm8_3, zmm9, zmm10_1, zmm12_2 = sub_142003bb0(r14_1, *i_2, rdi_4)
                zmm1 = arg_20
                zmm6_1.d = _mm_cvtepi32_ps(zx.o(sx.d(rax_6))).d f* zmm12_2
                zmm6_1.d = zmm6_1.d f+ zmm8_3
            
            wint_t _C = i[1]
            int128_t zmm0_2
            zmm0_2.d = arg_18.d f* zmm12_2
            zmm1.d = zmm1.d f* zmm10_1.d
            arg_18 = zmm0_2.d
            arg_20 = zmm1.d
            int32_t rax_7 = iswspace(_C)
            
            if (rax_7 != 0 || i[1] == rax_7.w)
                zmm0_2 = arg_18
            else
                zmm0_2.d = arg_18.d f+ zmm6_1.d
                arg_18 = zmm0_2.d
            
            zmm9.d = zmm9.d f+ zmm0_2.d
            zmm0_2.d = zmm0:4.d.d f* zmm10_1.d
            zmm0_2.d = zmm0_2.d f+ arg_20
            
            if (not(zmm7.d f>= zmm0_2.d))
                zmm7 = zmm0_2
            
            bool cond:1_1 = i[1] != 0
            i_2 = i
            i = &i[1]
            
            if (not(cond:1_1))
                break

int64_t* rbx_4 = arg2[4]
int32_t var_f0 = zmm9.d
int64_t rdi_6 = sx.q(rbx_4[1].d)
int32_t var_ec = zmm7.d
int32_t rax_8 = (rdi_6 + 1).d
rbx_4[1].d = rax_8

if (rax_8 s> *(rbx_4 + 0xc))
    sub_1405a4df0(rbx_4)

int64_t* rbx_5 = *rbx_4 + rdi_6 * 0x18
int64_t* result = sub_140596d10(rbx_5, &i_1)
int16_t* i_3 = i_1
rbx_5[2].d = var_f0
*(rbx_5 + 0x14) = var_ec.d

if (i_3 != 0)
    result = sub_140a74f90(i_3)

if (i_4 == 0)
    return result

return sub_140a74f90(i_4)
