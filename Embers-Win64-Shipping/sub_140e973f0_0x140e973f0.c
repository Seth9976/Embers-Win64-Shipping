// 函数: sub_140e973f0
// 地址: 0x140e973f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140745b20(arg1 + 0x18)
int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result
