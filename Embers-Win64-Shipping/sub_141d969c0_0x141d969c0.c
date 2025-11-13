// 函数: sub_141d969c0
// 地址: 0x141d969c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_1 = *arg1 + 0x230

if (rbx_1 != arg2 + 0xa0)
    int64_t rcx = *rbx_1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *rbx_1 = *(arg2 + 0xa0)
    *(arg2 + 0xa0) = 0
    rbx_1[1].d = *(arg2 + 0xa8)
    *(rbx_1 + 0xc) = *(arg2 + 0xac)
    *(arg2 + 0xa8) = 0

*(*arg1 + 0x240) = 0
return sub_140926420(&arg1[1], arg2) __tailcall
