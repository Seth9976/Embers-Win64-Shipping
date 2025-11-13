// 函数: sub_14290ba50
// 地址: 0x14290ba50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rax_1 = sub_1428bec00(sub_142891590(*(arg2 + 0x28)))

if (rax_1 != 0)
    int64_t* rax_2 = *(arg1 + 0x28)
    
    if (rax_2 != 0)
    label_14290ba9c:
        
        if (sub_1428c1040(rax_2, rax_1) != 0)
            sub_1428bee10(rax_1)
            return 1
    else
        rax_2 = sub_1428c0d20()
        *(arg1 + 0x28) = rax_2
        
        if (rax_2 != 0)
            goto label_14290ba9c
    
    sub_1428bee10(rax_1)

return 0
