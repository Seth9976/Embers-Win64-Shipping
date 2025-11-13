// 函数: sub_1405dfc20
// 地址: 0x1405dfc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
*arg1 = arg2

if (arg2 != 0)
    *(arg2 + 0x44) += 1

if (rbx != 0)
    int32_t temp0_1 = *(rbx + 0x44)
    *(rbx + 0x44) -= 1
    
    if (temp0_1 == 1)
        if ((*(rbx + 0x4c) & 1) != 0)
            void* rax_1 = *(rbx + 0x28)
            sub_1405e3820(zx.q(*(rax_1 + 0x58)) * 0x50 + &data_143cd84b0, rax_1 + 0x70)
            *(rbx + 0x4c) &= 0xfffffffe
        
        *(rbx + 0x48) = 1
        sub_141997870(rbx + 0x38)

return arg1
