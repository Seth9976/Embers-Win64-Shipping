// 函数: sub_140f5d950
// 地址: 0x140f5d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140de1b90(arg1 + 0x2b8, arg2)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result
