// 函数: sub_140ff8ab0
// 地址: 0x140ff8ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (*(arg1 + 0x19e0) == arg2)
    int32_t result = memcmp(arg1 + 0x19e4, arg3, rdi * 0x18)
    
    if (result == 0)
        return result

memcpy(arg1 + 0x19e4, arg3, (rdi * 0x18).d)
int64_t* rcx_2 = *(arg1 + 0x170)
*(arg1 + 0x19e0) = rdi.d
return (*(*rcx_2 + 0x160))(rcx_2, zx.q(rdi.d), arg3)
