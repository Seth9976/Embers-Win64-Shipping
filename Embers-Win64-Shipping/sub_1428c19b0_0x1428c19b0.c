// 函数: sub_1428c19b0
// 地址: 0x1428c19b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rcx = *(arg1 + 0x40)
int32_t rbx

if (rcx == 0)
    int32_t rax_1 = *(arg1 + 0x18)
    rbx = -1
    
    if (rax_1 != 0)
        rbx = rax_1
else
    rbx = sub_142890560(rcx)

return sub_1428907a0(sub_142890560(*(arg1 + 8)), rbx) __tailcall
