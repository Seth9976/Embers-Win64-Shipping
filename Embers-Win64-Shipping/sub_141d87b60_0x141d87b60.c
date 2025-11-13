// 函数: sub_141d87b60
// 地址: 0x141d87b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_14399fa54 += 1
char rax = sub_1419668e0(&data_143f02b98)
void* rbx_1 = *arg1

if (*(rbx_1 + 0x30) s> 0 && *(rbx_1 + 0xc8) s> 0 && *(rbx_1 + 0x38) != 0)
    rax = 0
    bool z_1
    
    if (0 == *(rbx_1 + 0xa0))
        *(rbx_1 + 0xa0) = 0
        z_1 = true
    else
        rax = (*(rbx_1 + 0xa0)).b
        z_1 = false
    
    if (z_1)
        int64_t* rcx = *(rbx_1 + 0x38)
        rax = (*(*rcx + 0x10))(rcx)
        
        if (rax != 0)
            char temp0_1 = (*(rbx_1 + 0xa0)).b
            *(rbx_1 + 0xa0) = 1
            return temp0_1

return rax
