// 函数: sub_140f48d70
// 地址: 0x140f48d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x308)
int32_t rbx = 0xa

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0x910)
    
    if ((*(*rcx_1 + 0x68))(rcx_1) != 2)
        rbx = 5

return zx.q(rbx)
