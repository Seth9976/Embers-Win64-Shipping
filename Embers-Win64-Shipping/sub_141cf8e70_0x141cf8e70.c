// 函数: sub_141cf8e70
// 地址: 0x141cf8e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0xb5) == 0
*arg1 = &data_14321d168
arg1[0xd] = &data_14321d180

if (not(cond:0))
    sub_141cfd440(data_143f36250, &arg1[0xd])

int64_t rcx_1 = arg1[2]

if (rcx_1 != 0 && *(arg1 + 0x65) == 0)
    sub_140a74f90(rcx_1)

arg1[2] = 0
arg1[0xd] = &data_14321d0d0
return sub_140a3c4a0(arg1) __tailcall
