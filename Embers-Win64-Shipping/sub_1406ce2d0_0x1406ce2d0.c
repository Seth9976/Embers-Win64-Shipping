// 函数: sub_1406ce2d0
// 地址: 0x1406ce2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* arg_8 = arg1
int64_t* rax = sub_140b29d90(&arg_8)
uint64_t* arg_20
int64_t* rax_1 = sub_140b0a2c0(&arg_20, 0x7b2, 1, 1, 0, 0, 0, 0)
int64_t rax_2
int64_t rdx
rdx:rax_2 = muls.dp.q(0x7ab69e31156a6f47, *rax - *rax_1)
int64_t rdx_1 = rdx s>> 0x19
void var_c8
sub_1406bc020(&var_c8, (rdx_1.d + (rdx_1 u>> 0x3f).d + arg3) * 2)
uint64_t var_b8
arg_20 = &var_b8
var_b8 = 0
int32_t rbx_1 = arg2[1].d
int64_t rdi_1 = *arg2
int32_t var_b0 = rbx_1

if (rbx_1 != 0)
    sub_1405a4c70(&var_b8, rbx_1, 0)
    memcpy(var_b8, rdi_1, rbx_1 * 2)
else
    int32_t var_ac_1 = 0

void* var_d8 = &var_c8
int16_t* var_a8
int64_t* var_d0 = &var_a8
void var_98
void var_88
int16_t* var_78
void var_68
void var_58
int64_t var_48
int16_t* var_38
sub_140aef2d0(&var_a8, 
    _wstat64i32(&var_48, 
        sub_140aef2d0(&var_58, 
            sub_1406d1320(&var_38, 
                sub_1406d2fb0(&var_68, 
                    sub_1406d1320(&var_78, 
                        sub_1406d4bd0(&var_88, sub_1406c9ca0(&var_98, &var_d8))))))))
int64_t rcx_15 = var_48

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_38

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

`eh vector vbase constructor iterator'(&var_c8, 0x10, 2)
int16_t* rdx_15 = &data_142d40450
int32_t var_a0

if (var_a0 != 0)
    rdx_15 = var_a8

int64_t* rax_12 = sub_1406cfbb0(&var_d8, rdx_15)
int32_t rax_13 = rax_12[1].d
int32_t rdi_2 = rax_13 - 1
int32_t rcx_19 = rdi_2

if (rax_13 == 0)
    rcx_19 = 0

int32_t r10 = rcx_19

if (rcx_19 s> 0x13)
    r10 = 0x13

if (rax_13 == 0)
    rdi_2 = 0

int32_t rdi_3 = rdi_2 - r10
int32_t rcx_20 = rcx_19 - r10

if (rcx_19 - r10 s>= 0)
    if (rcx_20 s< rdi_3)
        rdi_3 = rcx_20
    
    if (rdi_3 != 0)
        int32_t r9_2 = rax_13 - rdi_3
        
        if (r9_2 != r10)
            int64_t r8_2 = *rax_12
            memmove(r8_2 + (sx.q(r10) << 1), r8_2 + (sx.q(rdi_3 + r10) << 1), (r9_2 - r10) * 2)
            rax_13 = rax_12[1].d
        
        rax_12[1].d = rax_13 - rdi_3

arg_8 = arg1
*arg1 = 0
*arg1 = *rax_12
*rax_12 = 0
arg1[1].d = rax_12[1].d
*(arg1 + 0xc) = *(rax_12 + 0xc)
rax_12[1] = 0
void* rcx_23 = var_d8

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int16_t* rcx_24 = var_a8

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_25 = *arg2

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

return arg1
