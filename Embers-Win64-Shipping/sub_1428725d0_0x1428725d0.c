// 函数: sub_1428725d0
// 地址: 0x1428725d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
bool cond:0 = *(arg1 + 0x40) != 0
int32_t rax_1

if (not(cond:0))
    rax_1 = sub_1428563f0(arg1)

if (cond:0 || rax_1 != 0)
    *(arg1 + 0x44) = 3
else
    int32_t rcx = *(arg1 + 0x44)
    
    if ((rcx.b & 1) == 0)
        *(arg1 + 0x44) = rcx | 1
        sub_1428732d0(arg1, zx.q(rax_1 + 1), 0)
        
        if (*(*(arg1 + 0xa8) + 0xfc) != 0)
            return 0xffffffff
    else
        bool cond:1_1
        
        if (*(*(arg1 + 0xa8) + 0xfc) != 0)
            cond:1_1 = (*(*(arg1 + 8) + 0x78))(arg1) != 0xffffffff
        label_142872692:
            
            if (not(cond:1_1))
                return 0xffffffff
        else if ((rcx.b & 2) == 0)
            void arg_8
            (*(*(arg1 + 8) + 0x68))(arg1, 0, 0, 0, 0, 0, &arg_8)
            cond:1_1 = (*(arg1 + 0x44) & 2) != 0
            goto label_142872692
    
    if (*(arg1 + 0x44) != 3 || *(*(arg1 + 0xa8) + 0xfc) != 0)
        return 0

return 1
