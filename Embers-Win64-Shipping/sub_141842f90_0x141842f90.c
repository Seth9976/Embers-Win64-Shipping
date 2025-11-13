// 函数: sub_141842f90
// 地址: 0x141842f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg3)
void*** rax = j_sub_140a82f30(0x2b8)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_14181e1b0(rax)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

LeaveCriticalSection(arg3)

if ((*rbx)[0x27](rbx, arg2) == 0)
    *arg1 = 0
    arg1[1] = 0
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t rsi_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*rax_2)[1](rax_2, zx.q(rsi_1))
else
    *arg1 = rbx
    arg1[1] = rax_2

return arg1
