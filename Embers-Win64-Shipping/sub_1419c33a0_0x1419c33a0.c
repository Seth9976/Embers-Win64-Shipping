// 函数: sub_1419c33a0
// 地址: 0x1419c33a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0x4300e468
*arg1 = &data_14300e468
int64_t rcx = arg1[5]

if (rcx != 0)
    sub_140b51740(rcx, arg1[1], arg1[6].d u> 0)
    
    if (arg1[6].d u> 0)
        sub_140a74f90(arg1[5])
    
    result = 0
    arg1[6] = 0
    arg1[5] = 0

int64_t* rcx_2 = arg1[4]

if (rcx_2 != 0)
    result = (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = arg1[3]

if (rcx_3 != 0)
    result = rcx_3[1].d
    rcx_3[1].d -= 1
    
    if (result == 1 && rcx_3 != 0)
        result = (**rcx_3)(rcx_3, 1)

int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    int32_t rdi_1 = *(rbx_1 + 0x3c)
    *(rbx_1 + 0x3c) -= 1
    
    if (rdi_1 == 1)
        result = (*(*rbx_1 + 0x50))(rbx_1)
        
        if (result.b != 0)
            sub_141997f50(rbx_1)
            return sub_141997870(&rbx_1[2])

return result
