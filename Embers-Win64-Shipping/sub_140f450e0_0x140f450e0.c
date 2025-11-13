// 函数: sub_140f450e0
// 地址: 0x140f450e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
sub_140de1590(arg1 + 0x440, sub_140d91ed0(&var_68))
int32_t zmm0 = sub_140d952d0(&var_68)
void* rdi = nullptr

if (*(arg1 + 0x3f8) != 0)
    int64_t* rcx_3 = *(arg1 + 0x3f0)
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
        int64_t* rcx_4
        
        if (*(arg1 + 0x3f8) == 0)
            rcx_4 = nullptr
        else
            rcx_4 = *(arg1 + 0x3f0)
        
        (*(*rcx_4 + 0x48))(rcx_4)
        *(arg1 + 0x3e8) = zmm0

void* var_78
int128_t zmm0_1 = *sub_140d986d0(arg1 + 0x440, &var_78, (zx.o(0)).q, (*(arg1 + 0x3e8)).d, 0)
*(arg1 + 0x4a0) = zmm0_1
int64_t* rcx_6 = *(arg1 + 0x10)

if (rcx_6 != 0)
    int32_t rax_5 = rcx_6[1].d
    
    if (rax_5 != 0)
        rcx_6[1].d = rax_5 + 1
        rax_5.b = 1
    
    if (rax_5.b == 0)
        rcx_6 = nullptr
    
    if (rcx_6 != 0)
        rdi = *(arg1 + 8)

var_78 = rdi
int64_t result = sub_140db7ab0(arg1 + 0x440, &var_78, 0, zx.o(0), zmm0_1.q, 1)

if (rcx_6 != 0)
    rcx_6[1].d -= 1
    
    if (rcx_6[1].d == 1)
        result = (**rcx_6)(rcx_6)
        int32_t temp1_1 = *(rcx_6 + 0xc)
        *(rcx_6 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rcx_6 + 8))(rcx_6, 1)

return result
