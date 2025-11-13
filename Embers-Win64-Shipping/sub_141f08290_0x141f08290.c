// 函数: sub_141f08290
// 地址: 0x141f08290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx

if ((*(arg1 + 0x1f8) & 0x10) == 0)
    void* rdx_1 = *(arg1 + 0x200)
    
    if (rdx_1 != 0)
        rdx = rdx_1 + 0x28
        goto label_141f082b9
else
    rdx = arg1 + 0x208
label_141f082b9:
    
    if (rdx != 0)
        sub_141f05390(arg2, rdx)
        void* rax_1
        rax_1.b = 1
        return rax_1
void* rax
rax.b = 0
return rax
