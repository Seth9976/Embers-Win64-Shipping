// 函数: sub_1426d41c0
// 地址: 0x1426d41c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
void* rdx = rbx[0x23]

if (rdx != 0)
label_1426d41f5:
    
    if (*(rdx + 0x98) != 0)
        sub_1426ae190(arg1, rdx + 0x90, arg2)
else
    (*(*rbx + 0x390))(rbx, rdx)
    rdx = rbx[0x23]
    
    if (rdx != 0)
        goto label_1426d41f5
