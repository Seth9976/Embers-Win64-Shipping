// 函数: sub_1428eaef0
// 地址: 0x1428eaef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rdi = *arg1
int32_t* rbx = *arg2
int32_t rax = *rdi

if (rax != 0)
    if (rax == 1 && *rbx == rax)
        int32_t result = sub_1428e47f0(**(rdi + 8), **(rbx + 8))
        
        if (result != 0)
            return result
        
        return sub_1428e47f0(*(*(rdi + 8) + 8), *(*(rbx + 8) + 8)) __tailcall
else if (*rbx == rax)
    return sub_1428e47f0(*(rdi + 8), *(rbx + 8)) __tailcall

int64_t* rdx_7 = *(rbx + 8)
int32_t* rcx_7 = *(rdi + 8)

if (rax != 0)
    return sub_1428e47f0(*rcx_7, rdx_7)

return sub_1428e47f0(rcx_7, *rdx_7) __tailcall
