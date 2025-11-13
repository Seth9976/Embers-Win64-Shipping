// 函数: sub_142a40080
// 地址: 0x142a40080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[6] &= 0xfd
int64_t rdx = *(arg1 + 0x30)

if (rdx u> 0x200000)
    void* rcx = **(arg1 + 0x38)
    int64_t* rcx_1
    
    if (rdx u<= 0x4000000)
        rcx_1 = rcx + 0x208
    else
        rcx_1 = rcx + 0x228
    
    sub_142a43f80(rcx_1, rdx)

void* rbx = **(arg1 + 0x38)
sub_142a40d10(arg2, arg1)
return sub_142a3efd0(arg1, arg3, rbx + 0x18) __tailcall
