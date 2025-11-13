// 函数: sub_140d2c120
// 地址: 0x140d2c120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2[5].b & 1) == 0 || arg2[8].d s>= 0x202)
    (*(*arg2 + 0x140))(arg2, arg1)
    return sub_140a1d9d0(arg2, &arg1[1], arg3)

uint64_t var_38 = 0
int64_t var_30_1 = 0
sub_140a1d9d0(arg2, &var_38, arg3)
int128_t var_28

if (arg2[8].d s< 0x1e4)
    uint64_t* rax_1 = sub_140baa580(&var_28, &var_38)
    
    if (&var_38 != rax_1)
        uint64_t rcx_2 = var_38
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        var_38 = *rax_1
        *rax_1 = 0
        var_30_1.d = rax_1[1].d
        var_30_1:4.d = *(rax_1 + 0xc)
        rax_1[1] = 0
    
    int64_t rcx_4 = var_28.q
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

void var_18
var_28 = *sub_140a1dfc0(&var_38, &var_18)
int64_t* result = sub_140d2c760(arg1, &var_28)
uint64_t rcx_7 = var_38

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
