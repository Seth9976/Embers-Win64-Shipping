// 函数: sub_141be3540
// 地址: 0x141be3540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x3f8)
*(arg1 + 0x3f8) = *arg2
*arg2 = r8
int64_t r8_1 = *(arg1 + 0x400)
*(arg1 + 0x400) = arg2[1]
arg2[1] = r8_1
int32_t result = arg2[2].d
*(arg1 + 0x408) = result
int64_t* rbx = arg2[1]

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        result = (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx + 8))(rbx, zx.q(rdi_1))

return result
