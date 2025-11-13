// 函数: sub_141bda220
// 地址: 0x141bda220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18

if (arg1 + 0x208 != &var_18)
    *(arg1 + 0x208) = 0
    int64_t* rbx_1 = *(arg1 + 0x210)
    
    if (rbx_1 != 0)
        *(arg1 + 0x210) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

*(arg1 + 0x158) = 0

if (*(arg1 + 0x15c) s<= 0xffffffff)
    sub_140638c50(arg1 + 0x150, 0)

int32_t rax_3 = *(arg1 + 0x14c)
*(arg1 + 0x148) = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_140638c50(arg1 + 0x140, 0)

sub_141bdc410(arg1 + 0x170)
int32_t result = *(arg1 + 0x1d4)
*(arg1 + 0x1d0) = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(arg1 + 0x1c8, 0)

return result
