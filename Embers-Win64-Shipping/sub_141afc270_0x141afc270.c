// 函数: sub_141afc270
// 地址: 0x141afc270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x148
    int32_t i
    
    do
        sub_1405aec80(rbx_1 + 0xa0)
        sub_1405aec80(rbx_1)
        sub_1405aec80(rbx_1 - 0xa0)
        sub_1405aec80(rbx_1 - 0x140)
        rbx_1 += 0x288
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
