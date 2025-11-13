// 函数: sub_141e80e00
// 地址: 0x141e80e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t rbx = 0
int32_t rcx = data_143f39bc4
void* r12 = *(*(*(*arg3 + 0x2e8) + 0x10) + (sx.q(arg3[2].d) << 3))
int32_t rax_4 = *(r12 + 4)

if (arg5 == 0)
    rcx = data_143a2d470

if (rcx == 1)
    rbx = 3
else if (rcx == 2)
    rbx = 2
else if (rcx == 3)
    rbx = 1
else if (rcx != 4)
    rbx = 4

*(arg1 + 0x30) += neg.q(sx.q(*(arg2 + 0x20)))
int32_t rcx_4 = *(r12 + 4)
int32_t rax_7 = *(arg2 + 0x20)

if (rcx_4 s> rax_7)
    *(arg2 + 0x20) = rcx_4
    
    if (rcx_4 s> *(arg2 + 0x24))
        sub_1405daba0(arg2 + 0x18)
else if (rcx_4 s< rax_7 && rcx_4 != rax_7)
    *(arg2 + 0x20) = rcx_4
    sub_1405dac10(arg2 + 0x18)

*(arg1 + 0x30) += sx.q(*(arg2 + 0x20))
bool z

if (0 == *(arg2 + 0x44))
    *(arg2 + 0x44) = 0
    z = true
else
    *(arg2 + 0x44)
    z = false

if (z)
    int64_t* rcx_7 = *(arg2 + 0x50)
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x28))(rcx_7)
        int64_t* rcx_8 = *(arg2 + 0x50)
        int512_t zmm1
        zmm1.o = zx.o(0)
        (*(*rcx_8 + 0x10))(rcx_8, zmm1)
        int64_t* rcx_9 = *(arg2 + 0x50)
        
        if (rcx_9 != 0)
            *(arg2 + 0x50) = 0
            (**rcx_9)(rcx_9, 1)

sub_140bc7f20(r12 + 8)
*(arg1 + 0x40) += 1
int64_t rax_13 = *arg4
int128_t* var_f8 = nullptr

if (rax_13 != 0)
    void* rax_14 = arg4[2]
    void* rcx_11 = &arg4[4]
    
    if (rax_14 != 0)
        rcx_11 = rax_14
    
    (**rcx_11)(rcx_11, &var_f8)

int128_t zmm0 = *arg3
int64_t r13_1 = sx.q(rax_4)
uint64_t var_b0 = arg3[2]
int32_t var_a8 = r13_1.d
int64_t* rax_16 = sub_140a82f30(0x90, 0x10)
*rax_16 = &data_143251908
rax_16[2] = arg1
rax_16[4] = rax_13
rax_16[6] = var_f8
int128_t var_e8
int128_t zmm0_1 = var_e8
var_f8 = nullptr
*(rax_16 + 0x40) = zmm0_1
uint128_t var_d8
*(rax_16 + 0x50) = var_d8
int64_t rax_17 = rax_13

if (rax_16[4] != 0)
    rax_17 = 0

rax_16[0xc] = arg2
*(rax_16 + 0x68) = zmm0
uint128_t zmm1_1 = zx.o(var_b0)
rax_16[0xf] = zmm1_1.q
rax_16[0x10].d = var_a8
*rax_16 = &data_143251928
void* (* var_98)(int64_t* arg1, char* arg2, int64_t arg3)
void* (* rax_20)(int64_t* arg1, char* arg2, int64_t arg3) = var_98

if (rax_16 != -0x10)
    rax_20 = sub_141e764f0

var_98 = rax_20

if (rax_17 != 0)
    int128_t* rax_21 = var_f8
    int128_t* rcx_15 = &var_e8
    
    if (rax_21 != 0)
        rcx_15 = rax_21
    
    (*(*rcx_15 + 0x10))(rcx_15)

void*** result = sub_140bc4910(r12 + 8, 0, r13_1, rbx, zmm1_1, &var_98, *(arg2 + 0x18))
void*** result_2 = *(arg2 + 0x50)
void*** result_1 = result_2

if (result_2 != result)
    *(arg2 + 0x50) = result
    result_1 = result
    
    if (result_2 != 0)
        result = (**result_2)(result_2, 1, result_1)
        result_1 = *(arg2 + 0x50)

if (result_1 == 0)
    void* rax_25 = arg4[2]
    void* rcx_17 = &arg4[4]
    char var_138 = 3
    
    if (rax_25 != 0)
        rcx_17 = rax_25
    
    result = (*arg4)((*(*rcx_17 + 8))(rcx_17), &var_138)
    *(arg1 + 0x40) -= 1

if (var_98 != 0)
    void var_78
    int64_t* rcx_19 = &var_78
    
    if (rax_16 != 0)
        rcx_19 = rax_16
    
    result = (*(*rcx_19 + 0x10))(rcx_19)

if (*arg4 != 0)
    void* rax_30 = arg4[2]
    void* rcx_20 = &arg4[4]
    
    if (rax_30 != 0)
        rcx_20 = rax_30
    
    result = (*(*rcx_20 + 0x10))(rcx_20)

__security_check_cookie(rax_1 ^ &var_168)
return result
