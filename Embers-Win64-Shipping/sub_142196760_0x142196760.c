// 函数: sub_142196760
// 地址: 0x142196760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1
r8_1.b = 1
void** var_c8
sub_140b4c4f0(&var_c8, sx.q(arg2[0x14].d + *(arg1 + 0xe8) + 1), r8_1.b)
int64_t rcx_1 = sx.q(*(arg1 + 0xe8))

if (rcx_1.d s> 0)
    void* rdx_1 = arg1 + 0xd0
    void* rax_2 = *(rdx_1 + 0x10)
    
    if (rax_2 != 0)
        rdx_1 = rax_2
    
    sub_140b53d10(&var_c8, rdx_1, rcx_1)

sub_140b560b0(&var_c8, 0)
sub_140b53d10(&var_c8, arg2[0x12], arg2[0x14])
sub_140b4cc40(arg2, &var_c8)
int64_t var_38
int64_t rcx_7

if (&arg2[0x12] == &var_38)
    rcx_7 = var_38
else
    int64_t rcx_6 = arg2[0x12]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    rcx_7 = 0
    arg2[0x12] = var_38
    int32_t var_30
    arg2[0x13].d = var_30
    int32_t var_2c
    *(arg2 + 0x9c) = var_2c
    var_30.q = 0
    var_38 = 0

int64_t var_28
arg2[0x14] = var_28
int64_t var_20
arg2[0x15] = var_20
char var_18
arg2[0x16].b = var_18
char var_17
*(arg2 + 0xb1) = var_17

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return sub_140b4cb40(&var_c8)
