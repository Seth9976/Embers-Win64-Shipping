// 函数: sub_14290d5a0
// 地址: 0x14290d5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = **(arg1 + 0x10)

if (arg2 != 0)
    int32_t rax_2
    
    if (rbx == 0x40a || rbx == 0x43f)
        rax_2 = 0x20
    else
        int32_t rax_1
        rax_1.b = rbx != 0x40b
        rax_2 = rax_1 + 0x38
    
    if (arg3 == rax_2)
        int64_t rax_3 = sub_1428a6a70(0x48)
        
        if (rax_3 == 0)
            sub_1428a5670((rax_3 + 0x10).d, 0x10a, (rax_3 + 0x41).d, "crypto\ec\ecx_meth.c", 0x47)
            return 0
        
        memcpy(rax_3, arg2, arg3)
        sub_142896310(arg1, rbx, rax_3)
        return 1

sub_1428a5670(0x10, 0x10a, 0x66, "crypto\ec\ecx_meth.c", 0x40)
return 0
