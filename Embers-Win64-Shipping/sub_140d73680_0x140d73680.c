// 函数: sub_140d73680
// 地址: 0x140d73680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

void* rax_2 = *arg1
void* rdx_1 = *(rax_2 + 0x18)
int64_t* rcx_2 = *(rax_2 + 0x10)
int64_t* var_f0 = rcx_2
void* var_e8_1 = rdx_1

if (rdx_1 != 0)
    *(rdx_1 + 8) += 1

int64_t* rax_4 = (*(*rcx_2 + 0xa8))()
int64_t r8_1 = *rax_4
void var_18
uint64_t* rax_5 = (*(r8_1 + 0x28))(rax_4, &var_18, r8_1)
int64_t var_100 = 0
int64_t var_f8_1 = 0
int64_t arg_8 = 0
void** const var_c8
memset(&var_c8, 0, 0x90)
sub_140b4c2a0(&var_c8)
int64_t var_38_1 = 0
var_c8 = &data_142d6ad48
int64_t* var_30_1 = &var_100
int64_t var_28_1 = 0
sub_140b552b0(&var_c8, 1)
int64_t rdx_4
rdx_4.b = 1
var_c8[0x1b](&var_c8, rdx_4)
sub_140a1d9d0(&var_c8, rax_5, arg2)
int32_t var_108 = 0x18
int512_t zmm1 = sub_140b4cb40(&var_c8)
uint64_t rcx_10 = *rax_5

if (rcx_10 != 0)
    zmm1 = sub_140a74f90(rcx_10)

sub_140597060(&var_f0)
int64_t var_e0
int64_t* rax_7 = sub_140d6ffa0(&var_108, &var_e0, zmm1)
PWSTR psz

if (rax_7[1].d == 0)
    psz = &data_142d40450
else
    psz = *rax_7

**arg1[2] = SysAllocString(psz)
int64_t rcx_14 = var_e0

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = var_100

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

*arg1[1] = 0
