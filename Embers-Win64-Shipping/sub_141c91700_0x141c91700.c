// 函数: sub_141c91700
// 地址: 0x141c91700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t arg_10 = arg2
void var_88
void var_68
sub_140b2f3e0(&var_68, sub_140b63b70(&arg_10, &var_88))
void var_78
void var_48
sub_140b2f3e0(&var_48, sub_140b63b70(&arg_20, &var_78))
int64_t i_2 = 2
int32_t i_5 = 2
uint64_t var_a8 = 0
sub_14083a1f0(&var_a8, 2, 0)
uint64_t rbp = var_a8
void* rdi = &var_68
int32_t i_4 = 2
int32_t i

do
    sub_140b2f340(rbp, rdi)
    rbp += 0x20
    rdi += 0x20
    i = i_4
    i_4 -= 1
while (i != 1)
int64_t var_98
int64_t* rax_2 = sub_140b3b4b0(&var_98, u"{0}.{1}", &var_a8)
int16_t* rdx_5

if (rax_2[1].d == 0)
    rdx_5 = &data_142d40450
else
    rdx_5 = *rax_2

sub_140b58260(arg1, rdx_5, 1)
int64_t rcx_8 = var_98

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int32_t i_3 = i_5

if (i_3 != 0)
    int64_t* rdi_2 = var_a8 + 0x10
    int32_t i_1
    
    do
        int64_t rcx_9 = *rdi_2
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rdi_2 = &rdi_2[4]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

uint64_t rcx_10 = var_a8

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t __saved_r12
int64_t* rdi_3 = &__saved_r12

do
    int64_t rcx_11 = rdi_3[-4]
    rdi_3 = &rdi_3[-4]
    i_2 -= 1
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
while (i_2 != 0)

arg1[1] = arg_10
arg1[3] = arg_20
arg1[4] = arg5
arg1[2] = arg3
sub_141c922a0(&arg1[5], arg6)
arg1[7] = 0
arg1[7] = *arg7
*arg7 = 0
arg1[8].d = arg7[1].d
*(arg1 + 0x44) = *(arg7 + 0xc)
arg7[1] = 0
arg1[9].d = arg8
sub_1408464b0(arg6)
int64_t rcx_14 = *arg7

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return arg1
