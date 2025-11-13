// 函数: sub_1428e66c0
// 地址: 0x1428e66c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rax = arg3
int32_t* r8 = *arg4

if (rax == 0)
    rax = *(r8 + 8)

int64_t* rax_1 = sub_14292b530(nullptr, rax, *r8 & 0x10)

if (rax_1 != 0)
    int64_t rcx = *(*arg2 + 0x10)
    *rax_1 |= 4
    rax_1[2] = rcx
    
    if (sub_14292b660(arg1, rax_1, arg4, arg5) != 0)
        return 1
    
    sub_14292b4d0(rax_1)

return 0
