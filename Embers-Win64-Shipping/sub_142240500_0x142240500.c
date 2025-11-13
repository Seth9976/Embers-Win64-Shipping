// 函数: sub_142240500
// 地址: 0x142240500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = arg1

if (arg2 == 0)
    return 0

void* r8 = *arg1

if (0x10000 - *(r8 + 0x10010) s< arg2)
    void* rax_1 = *(r8 + 0x10000)
    r8 = rax_1
    
    if (rax_1 == 0)
        r8 = sub_140a82f30(0x10018, 0x10, r8)
        __builtin_memset(r8 + 0x10000, 0, 0x14)
        *(r8 + 0x10008) = *rbx
        *(*rbx + 0x10000) = r8
        *rbx = r8
    else
        *arg1 = rax_1

int32_t rcx_2 = *(r8 + 0x10010)
*(r8 + 0x10010) = (arg2 + 0xf + rcx_2) & 0xfffffff0
return zx.q(rcx_2) + *rbx
