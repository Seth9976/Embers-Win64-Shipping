// 函数: sub_141db58b0
// 地址: 0x141db58b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = nullptr
*(arg2 + 0xc8) = 0

if (*(arg2 + 0xcc) s<= 0xffffffff)
    sub_141dd5f20(arg2, 0)

void* rax = sub_142459c10()

if (rax != 0)
    void* rax_1 = sub_142459c10()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rax + 0x38) && *(*(rax + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            rbp = rax

if (rbp != sub_142459c10())
    if (arg3 == 0)
        return sub_1419f71f0(arg1, rax, arg2)
    
    return sub_141db3190(arg1, rax, arg2)

if (arg3 == 0)
    return sub_1419f6fe0(arg1, rax, arg2)

return sub_141db2e10(arg1, rax, arg2)
