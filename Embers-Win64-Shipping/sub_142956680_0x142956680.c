// 函数: sub_142956680
// 地址: 0x142956680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t* arg_28
int32_t* r9 = arg_28
int32_t var_18
int32_t* var_10
void* rax_1 = sub_142956790(arg1, arg3, arg4, *(r9 + 8), *r9, &var_10, &var_18, 0)

if (rax_1 == 0)
    sub_1428a5670((rax_1 + 0x23).d, (rax_1 + 0x6a).d, (rax_1 + 0x75).d, "crypto\pkcs12\p12_decr.c", 
        0x5e)
    return 0

int32_t r8_2 = var_18
int32_t* rbx = var_10
arg_28 = rbx
int64_t result = sub_1428c41c0(nullptr, &arg_28, r8_2, arg2)

if (arg5 != 0)
    sub_1428b8960(rbx, sx.q(var_18))

if (result == 0)
    sub_1428a5670((result + 0x23).d, (result + 0x6a).d, (result + 0x65).d, 
        "crypto\pkcs12\p12_decr.c", 0x72)

sub_1428a6780(rbx)
return result
