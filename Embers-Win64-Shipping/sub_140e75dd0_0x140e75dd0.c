// 函数: sub_140e75dd0
// 地址: 0x140e75dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi_1

if (*arg2 != data_143e1e0f8)
    *arg1 = 0
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = 0
    arg1[0x20] = 0
    __builtin_memset(&arg1[0x28], 0, 0x88)
    *(arg1 + 0xb4) &= 0xffffff00
    *(arg1 + 0xb0) = 0x20702
    rdi_1 = arg2[2]
else
    sub_140e5ecc0(data_143e29f28 + 0x1d0, 0)
    *arg1 = 1
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = 0
    arg1[0x20] = 0
    __builtin_memset(&arg1[0x28], 0, 0x88)
    *(arg1 + 0xb4) &= 0xffffff00
    *(arg1 + 0xb0) = 0x20702
    rdi_1 = arg2[2]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg1
