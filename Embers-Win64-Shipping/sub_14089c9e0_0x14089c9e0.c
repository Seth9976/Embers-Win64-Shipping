// 函数: sub_14089c9e0
// 地址: 0x14089c9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* var_110 = arg3
int64_t* rdi = arg1
int64_t* var_f0 = arg2
int32_t var_100 = 0
int64_t* r8 = *(**arg1 + 0xb8)
int64_t* rcx = r8[0x13]
int64_t* rax_4

if (rcx == 0)
    int64_t* rcx_2 = *(*(*r8 + 8))(r8)
    rax_4 = (*(*rcx_2 + 0x38))(rcx_2)
else
    rax_4 = (*(*rcx + 0x10))(rcx)

int64_t* var_108 = nullptr
(*(*rax_4 + 0x18))(rax_4, &var_108)
int64_t* var_f8 = nullptr
int64_t* rcx_4 = var_108
(*(*rcx_4 + 0x140))(rcx_4, &var_f8)
int32_t var_70
(*(*rax_4 + 0x50))(rax_4, &var_70)
int64_t* var_118 = var_108
int64_t* rax_14 = **rdi + 0x608
int128_t* rax_15 = j_sub_140a82f30(0x80)
void*** r12 = rax_15
int128_t* var_d8 = rax_15

if (rax_15 == 0)
    r12 = nullptr
else
    *rax_15 = zx.o(0)
    *(rax_15 + 8) = 1
    *(rax_15 + 0xc) = 1
    *r12 = &data_142dfbec0
    void* var_c8_1 = &r12[2]
    int32_t rdi_1 = var_70
    sub_140590fd0(&r12[2], var_110)
    r12[2] = &data_142dfbdd8
    int32_t var_6c
    uint32_t var_60
    sub_14089eb90(rax_14, &r12[0xb], var_118, var_60, rdi_1, var_6c)
    __builtin_memset(&r12[0xc], 0, 0x20)
    r12[0xc].d = sub_14089ea60(var_60)
    *(r12 + 0x64) = rdi_1
    r12[0xd].d = var_6c
    rdi = arg1

void* var_e8_1 = &r12[2]
void*** var_e0 = r12
void* rbx_3 = **rdi + 0x5e0
int64_t rcx_9 = *(rbx_3 + 0x20)
int64_t rdx_6 = *(rbx_3 + 0x10)

if (rdx_6 u<= rcx_9 + 1)
    sub_1406c3e30(rbx_3, 1)
    rdx_6 = *(rbx_3 + 0x10)
    rcx_9 = *(rbx_3 + 0x20)

*(rbx_3 + 0x18) &= rdx_6 - 1
void*** rax_22 = *(rbx_3 + 8)

if (rax_22[(rdx_6 - 1) & (rcx_9 + *(rbx_3 + 0x18))] == 0)
    *((((rdx_6 - 1) & (rcx_9 + *(rbx_3 + 0x18))) << 3) + *(rbx_3 + 8)) = j_sub_140a82f30(0x10)
    rax_22 = *(rbx_3 + 8)

void** rax_25 = rax_22[(rdx_6 - 1) & (rcx_9 + *(rbx_3 + 0x18))]
*rax_25 = &r12[2]
rax_25[1] = r12
*(rbx_3 + 0x20) += 1
void* rcx_13 = **rdi
void* rsi_3 = **(*(rcx_13 + 0x5e8)
    + (((*(rcx_13 + 0x5f0) - 1) & (*(rcx_13 + 0x600) + *(rcx_13 + 0x5f8) - 1)) << 3))
int32_t var_b8
(*(*rax_4 + 0x50))(rax_4, &var_b8)
int64_t var_88 = 0
int32_t var_80 = 0
int32_t var_7c = var_b8
int32_t var_b4
int32_t var_78 = var_b4
int32_t var_74 = 1
var_110 = nullptr
var_118 = nullptr
int32_t var_100_1 = 6
int64_t* rcx_17 = *(rsi_3 + 0x48)
(*(*rcx_17 + 0x18))(rcx_17, &var_110)
int64_t* rbx_4 = var_110
int64_t* rcx_18 = var_118

if (rcx_18 != 0)
    var_118 = nullptr
    (*(*rcx_18 + 0x10))(rcx_18)

(*(*rbx_4 + 0x140))(rbx_4, &var_118)
int64_t* rcx_20 = var_110

if (rcx_20 != 0)
    var_110 = nullptr
    (*(*rcx_20 + 0x10))(rcx_20)

int64_t* rcx_21 = var_118
(*(*rcx_21 + 0x170))(rcx_21, *(rsi_3 + 0x48), 0, 0, 0, 0, rax_4, 0, &var_88)
int64_t* rcx_22 = var_118

if (rcx_22 != 0)
    var_118 = nullptr
    (*(*rcx_22 + 0x10))(rcx_22)

void* rcx_23 = **rdi
int64_t* rcx_25 = *(*(rcx_23 + 0x5e8)
    + (((*(rcx_23 + 0x5f0) - 1) & (*(rcx_23 + 0x600) + *(rcx_23 + 0x5f8) - 1)) << 3))
*arg2 = 0
arg2[1] = 0
void* rax_43 = rcx_25[1]

if (rax_43 != 0)
    *(rax_43 + 8) += 1

*arg2 = *rcx_25
arg2[1] = rcx_25[1]
int64_t* rcx_26 = var_f8

if (rcx_26 != 0)
    var_f8 = nullptr
    int64_t rdx_21 = *rcx_26
    (*(rdx_21 + 0x10))(rcx_26, rdx_21)

int64_t* rcx_27 = var_108

if (rcx_27 != 0)
    var_108 = nullptr
    int64_t rdx_22 = *rcx_27
    (*(rdx_22 + 0x10))(rcx_27, rdx_22)

__security_check_cookie(rax_1 ^ &var_168)
return arg2
