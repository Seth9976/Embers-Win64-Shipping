// 函数: sub_140b42380
// 地址: 0x140b42380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58

if (**(arg1 + 8) == 0)
    int64_t* rax_2
    rax_2.b = 0
    __security_check_cookie(rax_1 ^ &var_58)
    return rax_2

void* rbx = **(arg1 + 8)
*arg2 = *(rbx + 8)
*(arg2 + 4) = *(rbx + 0xc)
*(arg2 + 8) = *(rbx + 0x10)
sub_140597df0(&arg2[0x10], rbx + 0x18)
sub_140597df0(&arg2[0x20], rbx + 0x28)
*(arg2 + 0x30) = *(rbx + 0x38)
*(arg2 + 0x38) = *(rbx + 0x40)
int64_t* rcx_4 = *(rbx + 0x50)
int64_t var_38 = *(rbx + 0x48)
int64_t* var_30 = rcx_4

if (rcx_4 != 0)
    rcx_4[1].d += 1
    rcx_4 = var_30

if (&var_38 != &arg2[0x40])
    int128_t zmm1 = var_38.o
    int128_t var_28_1 = zmm1
    var_38.o = *(arg2 + 0x40)
    rcx_4 = var_30
    *(arg2 + 0x40) = zmm1

if (rcx_4 != 0)
    rcx_4[1].d -= 1
    
    if (rcx_4[1].d == 1)
        (**var_30)(var_30)
        int32_t rdi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rdi_1))

int64_t* rax_10
rax_10.b = 1
__security_check_cookie(rax_1 ^ &var_58)
return rax_10
