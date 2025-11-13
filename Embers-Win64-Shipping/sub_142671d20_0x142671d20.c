// 函数: sub_142671d20
// 地址: 0x142671d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x6d0)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void* result = sub_1405ae080(arg1 + 0x48)
int64_t rcx_3 = *(arg1 + 0x38)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x28)

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
