// 函数: sub_142c22570
// 地址: 0x142c22570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(arg3[3].w)
int32_t rdx = *arg1

if ((r9.b & rdx.b & 0xe) == 0)
    if ((r9.b & 8) == 0)
    label_142c225cf:
        int16_t rcx_1 = arg3[4].w
        
        if ((rcx_1.b & 0x60) == 0x20 && (arg3[3].b u>> 5 & 1) == 0
                && (arg1[1].b != 0 || (rcx_1.b & 0x1f) != 1 || (0x200 & rcx_1) == 0)
                && (*(arg1 + 5) != 0 || (rcx_1.b & 0x1f) != 1 || (0x100 & rcx_1) == 0))
            return 2
        
        return 0
    
    bool rax_1
    
    if ((rdx.b & 0x10) == 0)
        int32_t rdx_2 = rdx & 0xff00
        
        if (rdx_2 == 0)
            goto label_142c225cf
        
        rax_1 = rdx_2 == (r9 & 0xff00)
        goto label_142c225cb
    
    rax_1 = sub_142c21fd0(*(arg2 + 0xa0), rdx u>> 0x10, *arg3)
label_142c225cb:
    
    if (rax_1 != 0)
        goto label_142c225cf

return 1
