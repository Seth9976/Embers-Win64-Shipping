// 函数: sub_141d68e70
// 地址: 0x141d68e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_142459c10()
    void* rdx = arg2[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        return arg2[0x14]
    
    void* rax_5 = sub_14245f6d0()
    void* rdx_1 = arg2[2]
    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (rax_6.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30
            && (*(*arg2 + 0x150))(arg2, rdx_1) != 0)
        return sub_1408d7580(arg2) __tailcall

return 0
