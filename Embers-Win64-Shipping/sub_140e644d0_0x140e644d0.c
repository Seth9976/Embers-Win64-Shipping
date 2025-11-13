// 函数: sub_140e644d0
// 地址: 0x140e644d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
sub_140de1590(arg1 + 0x30, sub_140d91e10(&var_68, (zx.o(0)).d, 1f, 0))
double zmm0 = sub_140d952d0(&var_68)
int64_t* rcx_3 = *(arg1 - 0x380)
int64_t rdx_1 = 0

if (rcx_3 != 0)
    int32_t rax_1 = rcx_3[1].d
    
    if (rax_1 != 0)
        rcx_3[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rcx_3 = nullptr
    
    if (rcx_3 != 0)
        rdx_1 = *(arg1 - 0x388)

int64_t var_78 = rdx_1
int64_t result = sub_140db7a20(arg1 + 0x30, &var_78, 0, zx.o(0), zmm0, 1)

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        result = (**rcx_3)(rcx_3)
        int32_t temp1_1 = *(rcx_3 + 0xc)
        *(rcx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rcx_3 + 8))(rcx_3, 1)

return result
