// 函数: sub_14185bd80
// 地址: 0x14185bd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void** rax_2 = j_sub_140a82f30(0x18)
void** rbx

if (rax_2 == 0)
    rbx = nullptr
else
    rbx = sub_14106a750(rax_2)

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_142fe5e98
    *(rax_4 + 0xc) = 1
    rax_4[2] = rbx

if (rax_4 != 0)
    rax_4[1].d += 1

int64_t rax_7 = *arg2
void* var_78 = nullptr

if (rax_7 != 0)
    void* rax_8 = arg2[2]
    void* rcx_1 = &arg2[4]
    
    if (rax_8 != 0)
        rcx_1 = rax_8
    
    (**rcx_1)(rcx_1, &var_78)

void*** rax_10 = sub_140a82f30(0x70, 0x10)
*rax_10 = &data_142fe85a8
rax_10[2] = rbx
rax_10[3] = rax_4

if (rax_4 != 0)
    rax_4[1].d += 1

rax_10[4] = rax_7
rax_10[6] = 0
void var_68

if (rax_10[4] != 0)
    void* rax_15 = var_78
    void* rcx_2 = &var_68
    
    if (rax_15 != 0)
        rcx_2 = rax_15
    
    (**rcx_2)(rcx_2)

rax_10[0xc].b = arg3
*rax_10 = &data_142fe85c8
int64_t (* var_d8)(int64_t* arg1, int128_t arg2 @ zmm1, int128_t arg3 @ zmm2, int128_t arg4 @ zmm3)
int64_t (* rax_18)(int64_t* arg1, int128_t arg2 @ zmm1, int128_t arg3 @ zmm2, 
    int128_t arg4 @ zmm3) = var_d8

if (rax_10 != -0x10)
    rax_18 = sub_14187b140

void*** var_c8 = rax_10
int64_t (* var_d8_1)(int64_t* arg1, int128_t arg2 @ zmm1, int128_t arg3 @ zmm2, 
    int128_t arg4 @ zmm3) = rax_18

if (rax_7 != 0)
    void* rax_19 = var_78
    void* rcx_3 = &var_68
    
    if (rax_19 != 0)
        rcx_3 = rax_19
    
    (*(*rcx_3 + 0x10))(rcx_3)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t rax_23 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (rax_23 == 1)
            (*rax_4)[1](rax_4, 1)

uint32_t rax_25

if (data_143de5480 != 0)
    rax_25.b = GetCurrentThreadId() == data_143de5470

int128_t var_b8

if (data_143de5480 == 0 || rax_25.b != 0)
    void*** rcx_7 = &var_b8
    
    if (var_c8 != 0)
        rcx_7 = var_c8
    
    var_d8_1((*rcx_7)[1](rcx_7))
else
    int64_t (* rcx_6)(int64_t* arg1, int128_t arg2 @ zmm1, int128_t arg3 @ zmm2, 
        int128_t arg4 @ zmm3) = var_d8_1
    int128_t zmm0_1 = var_b8
    int64_t (* var_118)(int64_t* arg1, int128_t arg2 @ zmm1, int128_t arg3 @ zmm2, 
        int128_t arg4 @ zmm3) = rcx_6
    
    if (rcx_6 != 0)
        rcx_6 = nullptr
    
    var_d8_1 = rcx_6
    void*** var_108_1 = var_c8
    var_c8 = nullptr
    int128_t var_f8_1 = zmm0_1
    int128_t var_a8
    int128_t var_e8_1 = var_a8
    sub_140a20e40(2, &var_118)

rbx[2].b = 1
*arg1 = *rbx
void* rax_31 = rbx[1]
arg1[1] = rax_31

if (rax_31 != 0)
    *(rax_31 + 8) += 1

if (var_d8_1 != 0)
    void*** rcx_10 = &var_b8
    
    if (var_c8 != 0)
        rcx_10 = var_c8
    
    (*rcx_10)[2](rcx_10)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t rdi_2 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (rdi_2 == 1)
            void** r8_1 = *rax_4
            r8_1[1](rax_4, zx.q(rdi_2), r8_1)

__security_check_cookie(rax_1 ^ &var_148)
return arg1
