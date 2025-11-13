// 函数: sub_1420537f0
// 地址: 0x1420537f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1

if (arg2 == 0)
    rax_1 = data_143a2e230
else
    int64_t* rcx = data_143f0f180
    void arg_8
    (*(*rcx + 0x4b8))(rcx, &arg_8, &data_143f02b98, *(arg2 + 0x10), 4, 0xd)
    sub_1405d1600(arg4 + 0x50, &arg_8)
    sub_1405ec8a0(&arg_8)
    rax_1 = *(arg4 + 0x50)

void* r9_1 = *(arg1 + 0x160)
int64_t var_68 = rax_1
int64_t rax_4

if (r9_1 == 0)
    rax_4 = data_143a2e250
    int64_t var_58_1 = rax_4
else
    int64_t* rcx_3 = data_143f0f180
    void arg_10
    (*(*rcx_3 + 0x4b8))(rcx_3, &arg_10, &data_143f02b98, *(r9_1 + 0x10), 4, 0x3d)
    sub_1405d1600(arg4 + 0x58, &arg_10)
    sub_1405ec8a0(&arg_10)
    int64_t var_58 = *(arg4 + 0x58)
    rax_4 = data_143a2e250

void* r9_3 = *(arg1 + 0x170)

if (r9_3 != 0)
    int64_t* rcx_6 = data_143f0f180
    void arg_18
    (*(*rcx_6 + 0x4b8))(rcx_6, &arg_18, &data_143f02b98, *(r9_3 + 0x10), 4, 0x3d)
    sub_1405d1600(arg4 + 0x60, &arg_18)
    sub_1405ec8a0(&arg_18)
    rax_4 = *(arg4 + 0x60)

void* r9_5 = *(arg1 + 0x1c8)
int64_t var_50 = rax_4

if (r9_5 == 0)
    sub_1405d16e0(arg4 + 0x68, data_1439c9138)
else
    int64_t* rcx_9 = data_143f0f180
    void arg_20
    (*(*rcx_9 + 0x4b8))(rcx_9, &arg_20, &data_143f02b98, *(r9_5 + 0x10), 4, 2)
    sub_1405d1600(arg4 + 0x68, &arg_20)
    sub_1405ec8a0(&arg_20)

int64_t var_48 = *(arg4 + 0x68)
int64_t rax_9

if (arg3 != 0)
    int64_t* rcx_13 = data_143f0f180
    void var_88
    (*(*rcx_13 + 0x4b8))(rcx_13, &var_88, &data_143f02b98, *(arg3 + 0x10), 4, 0xd)
    sub_1405d1600(arg4 + 0x70, &var_88)
    sub_1405ec8a0(&var_88)
    rax_9 = *(arg4 + 0x70)
else if (arg2 == 0)
    rax_9 = data_143a2e230
else
    rax_9 = *(arg4 + 0x50)

int64_t var_60 = rax_9
int64_t rax_11

if (*(arg1 + 0x1c0) == 0)
    rax_11 = data_143a2e230
else
    int64_t* rcx_16 = data_143f0f180
    void var_80
    (*(*rcx_16 + 0x4b8))(rcx_16, &var_80, &data_143f02b98, *(*(arg1 + 0x180) + 0x10), 4, 0xd)
    sub_1405d1600(arg4 + 0x78, &var_80)
    sub_1405ec8a0(&var_80)
    rax_11 = *(arg4 + 0x78)

int64_t* rcx_19 = data_143f0f180
int64_t var_40 = rax_11
void* var_78
(*(*rcx_19 + 0xf8))(rcx_19, &var_78, &var_68, &data_143f40ef0, 1, 1)
void* rax_13 = var_78
void* var_70 = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

sub_1405d1550(&var_78)
sub_1405d1600(arg4 + 0x80, &var_70)
return sub_1405d1550(&var_70)
