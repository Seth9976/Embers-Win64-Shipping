// 函数: sub_141ccc6b0
// 地址: 0x141ccc6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) != 3)
    return &__return_addr

void** var_d8
sub_140b4c480(&var_d8)
int64_t var_38
int64_t rdx_1 = var_38 + 1
int64_t var_48
uint32_t count
int64_t var_30
char var_28

if (rdx_1 s> var_30 && var_28 != 0)
    int64_t count_2 = sx.q(count)
    int64_t rax_1 = var_30 * 2
    
    if (rax_1 s>= rdx_1)
        rdx_1 = rax_1
    
    var_30 = rdx_1
    int32_t rbx_3 = ((rdx_1 + 7) s>> 3).d - count_2.d
    uint32_t count_1 = count_2.d + rbx_3
    count = count_1
    int32_t var_3c
    
    if (count_1 s> var_3c)
        sub_1405daba0(&var_48)
    
    memset(count_2 + var_48, 0, sx.q(rbx_3))

char var_28_1 = 1
sub_140b54c70(&var_d8, arg1 + 0x40)
sub_140b54c70(&var_d8, arg1 + 0x38)
sub_140b53d10(&var_d8, arg2[0x12], arg2[0x14])
sub_140b4cc40(arg2, &var_d8)

if (&arg2[0x12] != &var_48)
    int64_t r14_1 = var_48
    int32_t r8_3 = *(arg2 + 0x9c)
    arg2[0x13].d = count
    
    if (count != 0 || r8_3 != 0)
        sub_1405da9e0(&arg2[0x12], count, r8_3)
        memcpy(arg2[0x12], r14_1, count)
    else
        *(arg2 + 0x9c) = 0

arg2[0x14] = var_38
arg2[0x15] = var_30
arg2[0x16].b = var_28_1
char var_27
*(arg2 + 0xb1) = var_27
int64_t var_e8 = 0
int32_t var_e0_1 = 0
sub_1405947f0(&var_e8, 0x10)
int32_t rax_6 = var_e0_1 + 0x10
var_e0_1 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_e8)

int64_t rbx_5 = var_e8
UnDecorator::getReferenceType(rbx_5, u"PostReliability", 0x20)

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

int64_t rcx_14 = var_48

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return sub_140b4cb40(&var_d8)
