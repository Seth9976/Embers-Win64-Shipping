// 函数: sub_142b9b7d0
// 地址: 0x142b9b7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = arg2
int32_t var_48 = 4
int64_t* arg_10
int32_t rax = sub_142b96840(arg1, &var_48, &arg_10)

if (rax != 0)
    return rax

int64_t* rbx_1 = arg_10

if (rbx_1 == 0)
    return rax + 0x51

int32_t rax_1 = sub_142b9b600(arg1, rbx_1, arg2, 0x51607, arg4, arg3)
int64_t rsi_1 = rbx_1[6]
int64_t rax_2 = rbx_1[5]

if (rax_2 != 0)
    rax_2(rbx_1)

(*(rsi_1 + 0x10))(rsi_1, rbx_1)
return rax_1
