// 函数: sub_1413f9c70
// 地址: 0x1413f9c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xf80)
int32_t r8

if (rax == 0)
    r8 = 1
else
    int32_t r10_1 = data_1439b6b3c
    
    if (r10_1 s< 0)
        int32_t rax_1 = *(rax + 0xe0)
        r10_1 = 2
        
        if (rax_1 s>= 2)
            r10_1 = rax_1
    
    r8 = 1
    
    if (r10_1 s>= 1)
        r8 = r10_1

void* rax_2 = *(arg2 + 0x15a8)
int32_t rax_4

if (rax_2 == 0)
    rax_4 = 0
else
    rax_4 = *(rax_2 + 0x4c8) & 0x3ff

void** var_78
sub_1411c8490(&var_78, arg1 + 0x6338, r8, 1, 3, rax_4)
int32_t var_44
int64_t rax_5 = zx.q(var_44)
int32_t var_40
uint32_t var_b8 = var_40 u/ 3
int32_t rcx_1 = int.d(_mm_sqrt_ss(0, float.s(rax_5)))
int32_t var_b4 = rcx_1
int64_t* rcx_2 = data_143f0f180
uint32_t var_b0 = divu.dp.d(0:(rax_5.d), rcx_1)
int32_t var_48
int32_t var_ac = var_48
int64_t var_68
int64_t arg_8
(*(*rcx_2 + 0x5b0))(rcx_2, &arg_8, &data_143f02b98, var_68)
int64_t var_a8 = arg_8
sub_1405ec8a0(&arg_8)
int64_t* rcx_4 = data_143f0f180
int64_t r9_1 = *(arg1 + 0x6368)
int32_t var_c8 = *(arg1 + 0x6380)
int64_t arg_10
(*(*rcx_4 + 0x5b0))(rcx_4, &arg_10, &data_143f02b98, r9_1)
int64_t var_c0 = arg_10
sub_1405ec8a0(&arg_10)
void* r9_2 = data_143f5b298
int32_t* rcx_6 = *(*(r9_2 + 0x700) + 0xd0)
int32_t rax_14
int32_t r8_1

if (rcx_6 == 0)
    rax_14 = 0
    r8_1 = 0
else
    rax_14 = rcx_6[1]
    r8_1 = *rcx_6

int32_t var_98 = r8_1
int32_t var_94 = r8_1
int32_t rcx_7 = r8_1

if (r8_1 s<= 1)
    rcx_7 = 1

int32_t var_90 = divs.dp.d(sx.q(rax_14), rcx_7)
int64_t rax_18 = *(*(*(r9_2 + 0x700) + 0x78) + 0x10)
*arg3 = r8_1
arg3[1] = r8_1
arg3[2] = 0
int64_t* rcx_9 = data_143f0f180
int64_t var_88 = rax_18
void* arg_18
(*(*rcx_9 + 0xf8))(rcx_9, &arg_18, &var_b8, &data_143e793f0, 0, 1)
void* rax_20 = arg_18
void* arg_20 = rax_20

if (rax_20 != 0)
    *(rax_20 + 8) += 1

sub_1405d1550(&arg_18)
sub_1405d1600(arg4, &arg_20)
sub_1405d1550(&arg_20)
int64_t* rcx_13 = data_143f0f180
void* var_e8
(*(*rcx_13 + 0xf8))(rcx_13, &var_e8, &var_c8, &data_143e79490, 0, 1)
void* rax_22 = var_e8
void* var_e0 = rax_22

if (rax_22 != 0)
    *(rax_22 + 8) += 1

sub_1405d1550(&var_e8)
sub_1405d1600(&arg4[1], &var_e0)
sub_1405d1550(&var_e0)
int64_t* rcx_17 = data_143f0f180
void* var_d8
(*(*rcx_17 + 0xf8))(rcx_17, &var_d8, &var_98, &data_143e2d9c0, 0, 1)
void* rax_24 = var_d8
void* var_d0 = rax_24

if (rax_24 != 0)
    *(rax_24 + 8) += 1

sub_1405d1550(&var_d8)
sub_1405d1600(&arg4[2], &var_d0)
sub_1405d1550(&var_d0)
return sub_1411c8fd0(&var_78)
