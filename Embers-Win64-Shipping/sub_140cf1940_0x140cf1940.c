// 函数: sub_140cf1940
// 地址: 0x140cf1940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x78)

if (rbp != 0)
    void* rax_1 = sub_140cddc80()
    void* rdx = *(rbp + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        (*(*arg2 + 0x38))(arg2, arg1 + 0x78, 0, 0)

return sub_140cb0190(arg1, arg2) __tailcall
