// 函数: sub_141d75300
// 地址: 0x141d75300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[5]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t result = 0x42d56f80
*arg1 = &data_142d56f80
int64_t* rbx_1 = arg1[4]

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
