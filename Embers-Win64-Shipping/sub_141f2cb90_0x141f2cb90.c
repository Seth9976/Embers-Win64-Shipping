// 函数: sub_141f2cb90
// 地址: 0x141f2cb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = nullptr
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
*(arg1 + 0xcc) = 0x18

if (arg2 != 0)
    void* rax_1 = sub_142577430()
    
    if (rax_1 != 0)
        void* rax_2 = sub_142459c10()
        
        if (rax_2 != 0)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s<= *(rax_1 + 0x38) && *(*(rax_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                rbp = rax_1
    
    if (rbp != sub_142459c10())
        if (arg3 == 0)
            sub_1419f71f0(arg2, rax_1, arg1)
        else
            sub_141db3190(arg2, rax_1, arg1)
    else if (arg3 == 0)
        sub_1419f6fe0(arg2, rax_1, arg1)
    else
        sub_141db2e10(arg2, rax_1, arg1)

return arg1
