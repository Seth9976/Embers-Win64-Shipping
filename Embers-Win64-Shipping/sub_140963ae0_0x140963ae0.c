// 函数: sub_140963ae0
// 地址: 0x140963ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1acc) != 3)
    return sub_14214aaf0(arg1) __tailcall

void* rdi = *(arg1 + 0x58)
void* result

if (rdi == 0)
    result = *(arg1 + 0x58)
    *(result + 0x78)
else
    void* rax_1 = sub_140985a80()
    void* rdx_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx_1 + 0x38))
        result = *(arg1 + 0x58)
        *(result + 0x78)
    else
        result = *(rdx_1 + 0x30)
        
        if (*(result + (rax_2 << 3)) != rax_1 + 0x30 || not(*(rdi + 0x77c) f!= 0f))
            result = *(arg1 + 0x58)
            *(result + 0x78)

return result
