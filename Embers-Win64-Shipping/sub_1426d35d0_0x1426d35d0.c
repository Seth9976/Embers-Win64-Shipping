// 函数: sub_1426d35d0
// 地址: 0x1426d35d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
void* rdx = rbx[0x23]

if (rdx != 0)
label_1426d3605:
    
    if (*(rdx + 0x90) != 0)
        sub_1426ae190(arg1, rdx + 0x88, arg2)
else
    (*(*rbx + 0x390))(rbx, rdx)
    rdx = rbx[0x23]
    
    if (rdx != 0)
        goto label_1426d3605
