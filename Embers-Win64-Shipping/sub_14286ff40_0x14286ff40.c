// 函数: sub_14286ff40
// 地址: 0x14286ff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (sub_14286e110(arg1 + 0x800) != 0 && sub_1428721f0(arg1) != 0)
    void* rax_2 = sub_1428a6a70(0x210)
    
    if (rax_2 == 0)
        sub_142871c90(arg1)
    else
        *(rax_2 + 0x118) = sub_1428857f0()
        int64_t rax_4 = sub_1428857f0()
        *(rax_2 + 0x120) = rax_4
        
        if (*(arg1 + 0x38) != 0)
            *(rax_2 + 0x100) = 0x100
        
        *(rax_2 + 0x128) = 0
        *(rax_2 + 0x130) = 0
        int64_t rcx_2 = *(rax_2 + 0x118)
        
        if (rcx_2 == 0 || rax_4 == 0)
            sub_142885710(rcx_2)
            sub_142885710(*(rax_2 + 0x120))
            sub_1428a6780(rax_2)
            sub_142871c90(arg1)
        else
            int64_t rax_5 = *(arg1 + 8)
            *(arg1 + 0xb0) = rax_2
            
            if ((*(rax_5 + 0x18))(arg1) != 0)
                return 1

return 0
