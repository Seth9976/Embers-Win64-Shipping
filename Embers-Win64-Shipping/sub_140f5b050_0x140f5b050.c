// 函数: sub_140f5b050
// 地址: 0x140f5b050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x418) = *arg2
void var_68
sub_140de1590(arg1 + 0x540, sub_140d91ed0(&var_68))
sub_140d952d0(&var_68)
int64_t rdx_2 = 0
int64_t var_78
int128_t zmm0_1 = *sub_140d986d0(arg1 + 0x540, &var_78, (zx.o(0)).q, 0x3f400000.d, 0)
*(arg1 + 0x530) = zmm0_1
int64_t* rcx_4 = *(arg1 + 0x10)

if (rcx_4 != 0)
    int32_t rax_2 = rcx_4[1].d
    
    if (rax_2 != 0)
        rcx_4[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rcx_4 = nullptr
    
    if (rcx_4 != 0)
        rdx_2 = *(arg1 + 8)

var_78 = rdx_2
int64_t result = sub_140db7a20(arg1 + 0x540, &var_78, 0, zx.o(0), zmm0_1.q, 1)

if (rcx_4 != 0)
    rcx_4[1].d -= 1
    
    if (rcx_4[1].d == 1)
        result = (**rcx_4)(rcx_4)
        int32_t temp1_1 = *(rcx_4 + 0xc)
        *(rcx_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rcx_4 + 8))(rcx_4, 1)

return result
