// 函数: sub_1409f6120
// 地址: 0x1409f6120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x68) = 0
int64_t rcx = *(arg1 + 0x60)

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t result = sub_14059ad90(arg1 + 0x20, 0)
int64_t rcx_2 = *(arg1 + 0x40)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x20)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t* rbx = *(arg1 + 0x18)

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        (**rbx)(rbx)
        result = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result
