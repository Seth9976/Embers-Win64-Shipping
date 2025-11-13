// 函数: sub_1426e8380
// 地址: 0x1426e8380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18

if (&arg1[0xa6] != &var_18)
    arg1[0xa6] = 0
    int64_t* rbx_1 = arg1[0xa7]
    
    if (rbx_1 != 0)
        arg1[0xa7] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

*(arg1 + 0x4ec) = 0
int32_t result = *(arg1 + 0x54c)
int64_t* rbx_2 = arg1[0xa8]
int32_t i_2 = arg1[0xa9].d

if (result s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            sub_1426ca9a0(rbx_2)
            rbx_2 = &rbx_2[0x2d]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0x54c)
    
    arg1[0xa9].d = 0
    
    if (result != 0)
        result = sub_1426e8520(&arg1[0xa8], 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            result = sub_1426ca9a0(rbx_2)
            rbx_2 = &rbx_2[0x2d]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[0xa9].d = 0

if (arg1[0x4b] != 0)
    return result

return (*(*arg1 + 0x700))(arg1)
