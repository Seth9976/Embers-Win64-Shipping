// 函数: sub_14091b530
// 地址: 0x14091b530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xa0)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*(arg1 + 0x28) = &data_142e20cf0
*(arg1 + 0x90) = 0
int64_t rcx_2 = *(arg1 + 0x88)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t result = sub_140925830(arg1 + 0x48, 0)
int64_t rcx_4 = *(arg1 + 0x68)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x48)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 0x18)

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t* rbx_1 = *(arg1 + 0x10)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
