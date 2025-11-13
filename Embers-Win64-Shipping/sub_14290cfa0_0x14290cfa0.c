// 函数: sub_14290cfa0
// 地址: 0x14290cfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
char* r9 = *(arg1 + 0x28)

if (r9 != 0)
    int64_t rdx = *(arg2 + 0x28)
    
    if (rdx != 0)
        int32_t rcx = **(arg1 + 0x10)
        int64_t r8_1
        
        if (rcx == 0x40a || rcx == 0x43f)
            r8_1 = 0x20
        else
            int64_t r8
            r8.b = rcx != 0x40b
            r8_1 = r8 + 0x38
        
        int32_t rbx
        rbx.b = sub_1428bc500(r9, rdx, r8_1) == 0
        return zx.q(rbx)

return 0xfffffffe
