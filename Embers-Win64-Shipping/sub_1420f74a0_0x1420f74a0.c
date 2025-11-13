// 函数: sub_1420f74a0
// 地址: 0x1420f74a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(data_143f0f1a0)
int32_t var_54 = arg3
int64_t var_48 = 0
int32_t rbp = 0
char rax = sub_1419d5c70(rdi.d)
int64_t rdx = data_1439c9138
int64_t var_50
int64_t var_40
int64_t var_38
int64_t var_30_1

if (rax == 0)
    var_40 = rdx
    var_38 = rdx
    var_50 = rdx
    var_30_1 = rdx
else
    int64_t rcx_1 = rdx
    var_48 = *(arg2 + 0x1c8)
    int64_t rax_2 = *(arg2 + 0x1f8)
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    var_38 = *(arg2 + 0x1d0)
    var_50 = *(arg2 + 0x1d8)
    var_40 = rcx_1
    int64_t rax_5
    
    if (arg4 == 0)
        rax_5 = *(arg2 + 0x1e0)
        rbp = *(arg2 + 0x1f0)
    else
        rax_5 = *(arg4 + 0x20)
        rbp = sbb.d(0, 0, 1 u< *(arg4 + 0x34))
    
    var_30_1 = rax_5
    
    if (rax_5 == 0)
        var_30_1 = rdx

int32_t r10 = *(arg2 + 0x1e8)
int64_t rax_6 = data_143f025c0
char rcx_3

if (rdi.d u> 0x30)
    if (*(&data_143f025f0 + rdi * 0x14) == rax_6)
        rcx_3 = 1
    else
        rcx_3 = 0
else if (test_bit(0x1000030320000, rdi) || *(&data_143f025f0 + rdi * 0x14) == rax_6)
    rcx_3 = 1
else
    rcx_3 = 0

int32_t r8 = arg5

if (rcx_3 != 0)
    r8 = 0

char rcx_5

if (rdi.d u> 0x30)
    if (*(&data_143f025f0 + rdi * 0x14) == rax_6)
        rcx_5 = 1
    else
        rcx_5 = 0
else if (test_bit(0x1000030320000, rdi) || *(&data_143f025f0 + rdi * 0x14) == rax_6)
    rcx_5 = 1
else
    rcx_5 = 0

int32_t rax_7 = arg6
int32_t var_64 = *(arg2 + 0x1ec)
int64_t* rcx_6 = data_143f0f180

if (rcx_5 != 0)
    rax_7 = 0

int32_t var_5c = r8
int32_t var_68 = rbp
void* arg_8
(*(*rcx_6 + 0xf8))(rcx_6, &arg_8, &var_68, &data_143f48570, 2, 1, var_68, r10, rax_7, var_50, 
    var_48, var_40, var_38, var_30_1)
void* rax_9 = arg_8
*arg1 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

sub_1405d1550(&arg_8)
return arg1
