// 函数: sub_140f8b9e0
// 地址: 0x140f8b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140f7aa70(&arg1[0x5e], arg2) == 0)
    sub_140693390(&arg1[0x5e], arg2)
    arg1[0x63].b = arg2[0xa].b
    sub_140692f90(&arg1[0x64], &arg2[0xc])
    sub_140e19ef0(arg1, 2)

uint64_t result = sub_140745b20(&arg2[0xc])
int64_t* rbx_1 = *(arg2 + 0x20)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
