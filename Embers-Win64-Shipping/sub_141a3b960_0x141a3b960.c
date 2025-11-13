// 函数: sub_141a3b960
// 地址: 0x141a3b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t rsi = *(arg1 + 8)

if (rbx != 0)
    *(rbx + 0xc) += 1
    
    if (rbx != 0)
        int32_t rax_1 = *(rbx + 0xc)
        *(rbx + 0xc) = rax_1
        
        if (rax_1 == 0)
            (*(*rbx + 8))(rbx, 1)

arg2[4].b |= 3
*arg2 = &data_14302ebc8
arg2[1] = rsi
arg2[2] = rbx
return arg2
