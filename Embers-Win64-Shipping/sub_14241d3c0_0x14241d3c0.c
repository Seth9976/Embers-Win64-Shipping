// 函数: sub_14241d3c0
// 地址: 0x14241d3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg2

if (result != data_143e1e830 && result != data_143e1e848)
    int64_t* rbx = arg2[2]
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    result.b = 0
    return result

if (arg3 == 1)
    *(arg1 + 0xb0) &= 0xfffffffb
else if (arg3 == 0)
    *(arg1 + 0xb0) |= 4

int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

result.b = 1
return result
