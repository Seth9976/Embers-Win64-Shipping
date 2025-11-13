// 函数: sub_14137b7f0
// 地址: 0x14137b7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x98)
int64_t* rdi = &data_143ec4c60
int64_t var_20 = 0

if (rax != 0)
    rdi = rax

int64_t rsi = *(data_1439b70c8 + 0x10)
char r14 = *(rdi + 0x1d9)
int64_t rbp = *(data_1439b7130 + 0x10)
void* rbx = *(data_1439b7138 + 0x10)
int64_t rcx_1 = *sub_14139d700(rdi)
int64_t rax_5 = data_14395fa10
int64_t var_78 = rcx_1
int64_t var_70 = rax_5
void* rcx_3 = *sub_1410f83c0(rdi)

if (rcx_3 != 0 && (*(rcx_3 + 0x40) & 0x800) == 0)
    rbx = rcx_3

int64_t rax_7 = data_14395fa10
int64_t var_60 = rax_7
void* var_68 = rbx
void* rcx_4 = rdi[0xc]
int64_t rcx_5

if (rcx_4 == 0)
    rcx_5 = rsi
else
    rcx_5 = *(rcx_4 + 0x10)

int64_t var_58 = rcx_5
int64_t var_50 = rax_7

if (r14 != 0)
    void* rcx_6 = rdi[0x1d]
    
    if (rcx_6 != 0)
        rbp = *(rcx_6 + 0x10)

int64_t var_48 = rbp
int64_t var_40 = rax_7

if (r14 != 0)
    void* rcx_7 = rdi[0x1e]
    
    if (rcx_7 != 0)
        rsi = *(rcx_7 + 0x10)

int64_t var_30 = rax_7
int64_t rax_8 = data_1439b72e0
int64_t var_38 = rsi
int64_t rcx_8 = rdi[0x3d]

if (rcx_8 != 0)
    rax_8 = rcx_8

int64_t var_28 = rax_8
int64_t var_20_1 = *(data_143f11108 + 0x18)
int64_t* rcx_10 = data_143f0f180
void* arg_8
(*(*rcx_10 + 0xf8))(rcx_10, &arg_8, &var_78, &data_143ec5180, 0, 1)
void* rax_11 = arg_8
*arg1 = rax_11

if (rax_11 != 0)
    *(rax_11 + 8) += 1

sub_1405d1550(&arg_8)
return arg1
