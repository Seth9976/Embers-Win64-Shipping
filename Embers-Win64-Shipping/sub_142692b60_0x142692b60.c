// 函数: sub_142692b60
// 地址: 0x142692b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18

if (arg1 + 0x960 != &var_18)
    *(arg1 + 0x960) = 0
    int64_t* rdi_1 = *(arg1 + 0x968)
    
    if (rdi_1 != 0)
        *(arg1 + 0x968) = 0
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

*(arg1 + 0x2ba) = 0
*(arg1 + 0x2c8) = 0

if (*(arg1 + 0x2cc) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0x2c0, 0)

sub_1417f42b0(arg1 + 0x2e0)
int32_t result = *(arg1 + 0x2dc)
*(arg1 + 0x2d8) = 0

if (result s< 0 && result != 0)
    result = sub_1405dadb0(arg1 + 0x2d0, 0)

*(arg1 + 0x330) = 0
*(arg1 + 0x334) = 0
return result
