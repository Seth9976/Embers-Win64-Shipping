// 函数: sub_1406c0070
// 地址: 0x1406c0070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x68)
int64_t rax = *rcx

if (arg3 == 0x10000)
    jump(*(rax + 0x28))

int64_t rax_1 = (*(rax + 0x20))(rcx)
int64_t* rcx_1 = *(arg1 + 0x68)
int64_t r8 = *rcx_1
(*(r8 + 0x178))(rcx_1, rax_1 + arg2, r8)
jump(*(**(arg1 + 0x68) + 0x20))
