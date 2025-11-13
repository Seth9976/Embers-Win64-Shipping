// 函数: sub_140edda70
// 地址: 0x140edda70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x10)
int64_t r8 = 0

if (rdx != 0)
    int32_t rax_1 = rdx[1].d
    
    if (rax_1 != 0)
        rdx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdx = nullptr
    
    if (rdx != 0)
        r8 = *(arg1 + 8)

int64_t var_18 = r8
sub_140db7a20(arg1 + 0x460, &var_18, 0, zx.o(0), arg3, 1)

if (rdx != 0)
    rdx[1].d -= 1
    
    if (rdx[1].d == 1)
        (**rdx)(rdx)
        int32_t temp1_1 = *(rdx + 0xc)
        *(rdx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdx + 8))(rdx, 1)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
