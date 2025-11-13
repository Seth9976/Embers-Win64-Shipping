// 函数: sub_141ecc280
// 地址: 0x141ecc280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_140b21590(&arg_8)
void* rcx_1 = *(arg1 + 0xb90)

if (rcx_1 != 0)
    return sub_140597df0(rcx_1 + 8, arg2)

void*** rax_1 = j_sub_140a82f30(0x1a0)
void*** rdi = rax_1

if (rax_1 == 0)
    rdi = nullptr
else
    *rdi = &data_14325a580
    sub_140596d10(&rdi[1], arg2)
    rdi[3] = 0
    rdi[4] = 0
    rdi[9] = 0
    rdi[0xa] = 0
    rdi[0xf] = 0
    rdi[0x10] = 0
    __builtin_memset(&rdi[0x30], 0, 0x18)
    uint128_t zmm6
    sub_141ec98d0(rdi, &arg_8, zmm6)
    
    if (std::operator!=<char,struct std::char_traits<char> >(&data_143f3a500) != 0)
        sub_140d3a3a0(&data_143f3a500, sub_141fe0c50(0))
    
    if (sub_140d3e110(&data_143f3a500) != 0)
        uint64_t* rax_6 = sub_140a3f490(sub_141fe0c50(0))
        int64_t* rax_7 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_7 != 0)
            rax_7[1] = rdi
            *rax_7 = &data_142d3fe58
            rax_7[2] = sub_141ec82b0
            rax_7[4] = sub_140a387b0()
            *rax_7 = &data_142d3feb0
        
        int64_t rbx_1 = 0
        
        if (rax_7 != 0)
            sub_140599630(rax_6, 1)
            void arg_20
            int64_t* rax_10 = (*(*rax_7 + 0x30))(rax_7, &arg_20)
            int64_t r13_1 = sx.q(rax_6[1].d)
            rbx_1 = *rax_10
            int32_t rax_11 = (r13_1 + 1).d
            rax_6[1].d = rax_11
            
            if (rax_11 s> *(rax_6 + 0xc))
                sub_1405a4f90(rax_6)
            
            void** rax_14 = (r13_1 << 4) + *rax_6
            *rax_14 = rax_7
            rax_14[1].d = 3
        
        rdi[0x32] = rbx_1

int64_t* rax_15 = j_sub_140a82f30(0x18)
int64_t* rbx_2 = rax_15

if (rax_15 == 0)
    rbx_2 = nullptr
else
    rax_15[1].d = 1
    *(rax_15 + 0xc) = 1
    *rbx_2 = &data_142e4cf50
    rbx_2[2] = rdi

void*** var_78 = rdi
int64_t* var_70 = rbx_2

if (arg1 + 0xb90 == &var_78)
label_141ecc4ed:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    *(arg1 + 0xb90) = rdi
    int64_t* rdi_1 = *(arg1 + 0xb98)
    var_78 = nullptr
    
    if (rbx_2 == rdi_1)
        goto label_141ecc4ed
    
    int64_t* var_70_1 = nullptr
    *(arg1 + 0xb98) = rbx_2
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx_2 = var_70_1
        goto label_141ecc4ed

int64_t* rbx_3 = *(arg1 + 0xb98)
int64_t* rsi = *(arg1 + 0xb90)

if (rbx_3 != 0)
    rbx_3[1].d += 1

int64_t rbp_2 = sx.q(*(arg1 + 0xba8))
int32_t rax_20 = (rbp_2 + 1).d
*(arg1 + 0xba8) = rax_20

if (rax_20 s> *(arg1 + 0xbac))
    sub_1405a4f90(arg1 + 0xba0)

int64_t* rax_23 = (rbp_2 << 4) + *(arg1 + 0xba0)
*rax_23 = rsi
rax_23[1] = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (*(arg1 + 0xba8) == 1)
    int64_t zmm3 = (zx.o(0)).q
    float var_58[0x4]
    var_58[0].q = zmm3
    data_143f3a830 = zmm3
    float zmm2[0x4] = _mm_shuffle_ps(var_58, var_58, 0xd2)
    zmm2[0] = (zx.o(0)).d
    data_143f3a820 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
    data_143f3a810 = zx.o(0)
    sub_141ecc080(&data_143f3a810)

int64_t result = (**rsi)(rsi)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
