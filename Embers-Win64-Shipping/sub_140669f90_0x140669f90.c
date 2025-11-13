// 函数: sub_140669f90
// 地址: 0x140669f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[8]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_140627040(&arg1[6])
int64_t* rbx = arg1[5]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t rcx_4 = arg1[2]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *arg1

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
