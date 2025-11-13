// 函数: sub_140de03c0
// 地址: 0x140de03c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142ec8878
*arg1 = &data_142ec8878
int64_t* rcx = arg1[2]

if (rcx != data_143e244b0)
    result = sub_140de9860(rcx, arg1[1])

int64_t* rbx_1 = arg1[3]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result
