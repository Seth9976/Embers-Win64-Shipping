// 函数: sub_14281b364
// 地址: 0x14281b364
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_14281e6ec(*arg1)
void* rcx_1 = *arg1

if ((rax & 1) != 0)
    if (sub_14281e748(rcx_1) == 0)
        return sub_14281b4d0(arg1, arg2)
    
    return sub_14281b288(arg1, arg2)

if (*(rcx_1 + 0x68) == 0x22)
    sub_14281ee88(rcx_1)
    rcx_1 = *arg1

if (sub_14281e748(rcx_1) == 0)
    return sub_14281b3d4(arg1, arg2)

return sub_14281b194(arg1, arg2)
