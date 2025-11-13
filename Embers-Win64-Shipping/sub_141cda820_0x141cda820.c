// 函数: sub_141cda820
// 地址: 0x141cda820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8
int32_t temp0_1
int32_t temp1_1

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x110))
    r8 = arg1 + 0x118
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    temp0_1:temp1_1 = sx.q(arg2)

if ((arg2 s>= 0 && arg2 s< *(arg1 + 0x110)
        && test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg2 & 0x1f)) || arg3 s< 0
        || arg3 s>= *(arg1 + 0x148))
    return 

void* r8_1 = arg1 + 0x150
void* rax_6 = *(r8_1 + 0x10)

if (rax_6 != 0)
    r8_1 = rax_6

int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(arg3)

if (not(test_bit(*(r8_1 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f)))
    return 

int64_t rbp_1 = *arg4
int64_t var_38
__builtin_memset(&var_38, 0, 0x20)
int32_t r14_1 = arg4[1].d
int32_t var_18_1 = data_143a1c6c4
sub_1409c9360(arg1 + 0x108, arg2, &var_38)
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t var_48 = rbp_1
int32_t var_40_1 = r14_1
var_48.o = var_48.o
sub_141cda990(arg1 + 0x28, arg2, arg3, &var_48, arg5)
