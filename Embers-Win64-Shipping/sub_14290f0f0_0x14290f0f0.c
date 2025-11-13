// 函数: sub_14290f0f0
// 地址: 0x14290f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rbx = *(arg2 + 0x28)
int64_t arg_18 = 0
void* arg_10 = nullptr
int32_t rbx_1

if (**(arg2 + 0x10) == 6)
    rbx_1 = 5
else if (*(rbx + 0x60) != 0)
    int32_t* result = sub_1428f8c10(*(rbx + 0x60), &data_1434ea5a0, &arg_10)
    
    if (result == 0)
        return result
    
    rbx_1 = 0x10
else
    rbx_1 = -1

int32_t rax_1 = sub_142897a60(*(arg2 + 0x28), &arg_18)
void* var_38

if (rax_1 s> 0)
    if (sub_1428f10c0(arg1, sub_1428a9570(**(arg2 + 0x10)), 0, rbx_1, arg_10, arg_18, rax_1) != 0)
        return 1
    
    var_38.d = 0xa1
else
    var_38.d = 0x9a

sub_1428a5670(4, 0x8a, 0x41, "crypto\rsa\rsa_ameth.c", var_38.d)
sub_1428f2c80(arg_10)
return 0
