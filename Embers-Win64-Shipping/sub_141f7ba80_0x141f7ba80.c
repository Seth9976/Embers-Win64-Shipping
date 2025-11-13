// 函数: sub_141f7ba80
// 地址: 0x141f7ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142e259e0
arg1[2] = &data_142e259e0
int64_t rcx = arg1[5]

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t* rbx = arg1[4]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
