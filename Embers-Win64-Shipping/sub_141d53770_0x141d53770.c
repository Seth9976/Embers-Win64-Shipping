// 函数: sub_141d53770
// 地址: 0x141d53770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx

if ((*(arg1 + 0x1f0) & 8) == 0)
    void* rdx_1 = *(arg1 + 0x1f8)
    
    if (rdx_1 != 0)
        rdx = rdx_1 + 0x28
        goto label_141d53799
else
    rdx = arg1 + 0x200
label_141d53799:
    
    if (rdx != 0)
        sub_141c51970(arg2, rdx)
        void* rax_1
        rax_1.b = 1
        return rax_1
void* rax
rax.b = 0
return rax
