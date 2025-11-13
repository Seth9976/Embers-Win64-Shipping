// 函数: sub_14059e250
// 地址: 0x14059e250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(arg3)

if (*(arg1 + 0xc) != 0 && *(arg1 + 8) == 0)
    sub_14059a610(arg2, zx.q(result.b), arg5)
    
    if (arg4 != 0)
        sub_140afd390()
        sub_140aed6d0()
    
    result = sub_1405a46b0(&data_143b4db28, &data_143958020)

int64_t rcx_1 = *(arg1 + 0x28)

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t* rbx_1 = *(arg1 + 0x18)

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
