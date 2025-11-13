// 函数: sub_14249cc90
// 地址: 0x14249cc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0xa0)

if (rcx != 0)
    sub_140a74f90(rcx)

*(arg2 + 0x98) = 0
int64_t rcx_1 = *(arg2 + 0x90)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t result = sub_1405e1cf0(arg2 + 0x50, 0)
int64_t rcx_3 = *(arg2 + 0x70)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg2 + 0x50)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t* rbx = *(arg2 + 0x48)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
