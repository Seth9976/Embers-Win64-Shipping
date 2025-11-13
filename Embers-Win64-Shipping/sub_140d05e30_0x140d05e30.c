// 函数: sub_140d05e30
// 地址: 0x140d05e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int32_t var_a8
int64_t var_a4
int64_t var_80
uint64_t var_68
int64_t* rdx_1
int32_t rdi

if (arg2 == 0)
    int64_t var_98_1
    __builtin_memset(&var_98_1, 0, 0x18)
    rdx_1 = &var_a8
    rdi = 2
    var_a8 = 0xffffffff
    var_a4 = 0
    arg_10.q = 0
else
    var_80 = *arg2
    int32_t var_78_1 = arg2[1].d
    int64_t var_70_1 = arg2[2]
    var_68 = 0
    int64_t var_60_1 = 0
    sub_140597df0(&var_68, &arg2[3])
    rdx_1 = &var_80
    rdi = 1

int64_t var_30 = *rdx_1
int32_t var_28 = rdx_1[1].d
int64_t var_20 = rdx_1[2]
uint64_t var_18 = 0
int64_t var_10 = 0
sub_140597df0(&var_18, &rdx_1[3])
uint64_t var_90

if ((rdi.b & 2) != 0)
    uint64_t rcx_2 = var_90
    rdi &= 0xfffffffd
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

if ((rdi.b & 1) != 0)
    uint64_t rcx_3 = var_68
    rdi &= 0xfffffffe
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

int32_t* rdx_4
int32_t rbx_1

if (arg3 == 0)
    int64_t var_70_2
    __builtin_memset(&var_70_2, 0, 0x18)
    rdx_4 = &var_80
    rbx_1 = 8
    var_80.d = 0xffffffff
    var_80 = 0
    arg_10.q = 0
else
    var_a8.q = *arg3
    var_a4:4.d = arg3[1].d
    int64_t var_98_2 = arg3[2]
    var_90 = 0
    int64_t var_88_1 = 0
    sub_140597df0(&var_90, &arg3[3])
    rdx_4 = &var_a8
    rbx_1 = 4

int64_t var_58 = *rdx_4
int32_t rbx_2 = rbx_1 | rdi
int32_t var_50 = rdx_4[2]
int64_t var_48 = *(rdx_4 + 0x10)
uint64_t var_40 = 0
int64_t var_38 = 0
sub_140597df0(&var_40, &rdx_4[6])

if ((rbx_2.b & 8) != 0)
    uint64_t rcx_6 = var_68
    rbx_2 &= 0xfffffff7
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

if ((rbx_2.b & 4) != 0)
    uint64_t rcx_7 = var_90
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

char rax_13 = sub_140d16af0(&var_20, &var_48)
uint64_t rcx_9 = var_40

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

uint64_t rcx_10 = var_18

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return zx.q(rax_13)
