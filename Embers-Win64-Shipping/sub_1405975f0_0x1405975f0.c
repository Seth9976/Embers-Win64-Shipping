// 函数: sub_1405975f0
// 地址: 0x1405975f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142d3fe38
*arg1 = &data_142d3fe38
int64_t* rbx = arg1[0x12]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t rcx_2 = arg1[0xc]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t* rbx_1 = arg1[0xa]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rcx_5 = arg1[1]

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
