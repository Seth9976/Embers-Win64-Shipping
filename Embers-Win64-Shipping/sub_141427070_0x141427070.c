// 函数: sub_141427070
// 地址: 0x141427070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *(arg2 + 0x350)
void* rax = *(arg4 + 0x40)
int128_t var_f8 = zx.o(0)
int64_t* rbx = nullptr
int128_t var_e8 = *(arg2 + 0x340)
int128_t var_d8 = zmm1
int128_t var_c8 = *(arg2 + 0x360)
int128_t var_b8 = *(arg2 + 0x370)
int128_t var_a8 = *(arg2 + 0x280)
int128_t var_98 = *(arg2 + 0x290)
zmm1 = *(arg2 + 0x2b0)
int128_t var_88 = *(arg2 + 0x2a0)
int64_t var_40 = 0
int128_t var_78 = zmm1
int64_t* rcx = *(rax + 8)
int64_t var_68 = (*(*rcx + 8))(rcx)
void* rax_3 = *(arg4 + 0x70)
void* const arg_8
int64_t arg_10
void* const rax_4
int32_t rcx_1
int32_t r14

if (rax_3 == 0)
    rax_4 = nullptr
    arg_10 = 0
    r14 = 0
    rcx_1 = 2
else
    rax_4 = *(rax_3 + 0x10)
    arg_8 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
        rax_4 = arg_8
    
    r14 = 1
    rcx_1 = 0

void* const var_60 = rax_4

if (rcx_1 != 0)
    sub_1405d1550(&arg_10)

if (r14 != 0)
    sub_1405d1550(&arg_8)

int64_t* rcx_4 = *(*(arg4 + 0x68) + 8)
int64_t var_58 = (*(*rcx_4 + 8))(rcx_4)
int64_t var_48 = *(arg2 + 0x10)
sub_1405d16e0(&var_40, *arg5)
int64_t var_50 = arg3
void* var_38 = arg2 + 0x17e0
var_f8.d = *(arg2 + 0x1598)
var_f8:4.d = *(arg2 + 0x159c)
var_f8:8.d = *(arg2 + 0x15a0)
var_f8:0xc.d = *(arg2 + 0x15a4)
void* var_30 = arg2

if (*(arg1 + 0x60) != 0)
    int64_t* rcx_6 = *(arg1 + 0x58)
    
    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
        if (*(arg1 + 0x60) != 0)
            rbx = *(arg1 + 0x58)
        
        (*(*rbx + 0x50))(rbx, &var_f8)

return sub_1405d1550(&var_40)
