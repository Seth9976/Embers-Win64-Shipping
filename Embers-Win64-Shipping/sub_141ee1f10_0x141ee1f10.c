// 函数: sub_141ee1f10
// 地址: 0x141ee1f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*(arg1 + 0x140) + 0x40))(arg1 + 0x140)

if (result.b != 0)
    void* rbx_1 = *(arg1 + 0x4c0)
    
    if (rbx_1 == 0)
        void* rax_2 = (*(*(arg1 + 0x140) + 0x30))(arg1 + 0x140)
        rbx_1 = rax_2
        *(arg1 + 0x4c0) = rax_2
    
    result = sub_1405be820(arg1)
    *(rbx_1 + 0x70) = *(result + 0x520) - 10f

return result
