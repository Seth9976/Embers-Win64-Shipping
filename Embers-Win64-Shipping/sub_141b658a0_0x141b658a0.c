// 函数: sub_141b658a0
// 地址: 0x141b658a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(*arg2 + 0x910)
int32_t result = (*(*rcx + 0x68))(rcx)

if (result == 0)
    result = sub_1423ee5e0(data_143a30330, data_143a30334, data_143a30338)
    data_143a3033c = 1

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
