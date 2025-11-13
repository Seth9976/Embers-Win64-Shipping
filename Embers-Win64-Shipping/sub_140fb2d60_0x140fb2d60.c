// 函数: sub_140fb2d60
// 地址: 0x140fb2d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = 0
int64_t* rbx_1
int128_t zmm0

if (*(arg1 + 0x390) == 0)
    rbx_1 = 0.q
    zmm0 = zx.o(0)
else
    rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 == 0)
        rbx_1 = 0.q
        zmm0 = zx.o(0)
    else
        int32_t rcx = rbx_1[1].d
        
        if (rcx s<= 0)
            rbx_1 = 0.q
            zmm0 = zx.o(0)
        else if (rbx_1 == 0)
            zmm0 = *nullptr
            rax = 1
        else if (rcx == 0)
            rbx_1 = nullptr
            zmm0 = *nullptr
            rax = 1
        else
            rbx_1[1].d = rcx + 1
            zmm0 = **(arg1 + 0x390)
            rax = 1

*arg2 = zmm0

if ((rax & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
