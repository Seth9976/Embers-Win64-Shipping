// 函数: sub_14281a6ec
// 地址: 0x14281a6ec
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_14281e6ec(*arg1)
void* rcx_1 = *arg1

if ((rax & 1) != 0)
    if (sub_14281e748(rcx_1) == 0)
        return sub_14281a814(arg1, arg2)
    
    return sub_14281a60c(arg1, arg2)

if (*(rcx_1 + 0x68) == 0x22)
    sub_14281ee88(rcx_1)

if (((arg2 - 4) & 0xfffffffd) == 0)
    sub_14281ee88(*arg1)

if (sub_14281e748(*arg1) == 0)
    return sub_14281a76c(arg1, arg2)

return sub_14281a508(arg1, arg2)
