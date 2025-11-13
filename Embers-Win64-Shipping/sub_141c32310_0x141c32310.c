// 函数: sub_141c32310
// 地址: 0x141c32310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg1

if (result != 0)
    *(result + 0x3c) -= 1

int64_t* rbx = arg1[1]

if (rbx != 0)
    result = zx.q(rbx[1].d)
    rbx[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx + 8))(rbx, zx.q(rdi_1))

return result
