// 函数: sub_14094a1b0
// 地址: 0x14094a1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_142e276e8
__builtin_memset(&arg1[5], 0, 0x2c)
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
*(arg1 + 0x74) = 0xffffffff
arg1[0xf].d = 0
int64_t* var_10 = nullptr
int64_t var_18

if (&arg1[0xc] != &var_18)
    arg1[0xc] = 0
    var_18 = 0
    sub_1405aeff0(&arg1[0xd], &var_10)
    int64_t* rcx_1 = var_10
    
    if (rcx_1 != 0)
        rcx_1[1].d -= 1
        
        if (rcx_1[1].d == 1)
            int64_t* rbx_1 = var_10
            (**rbx_1)(rbx_1)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t* rcx_3 = var_10
                (*(*rcx_3 + 8))(rcx_3, zx.q(rsi_1))

int64_t arg_8
sub_140d3a3a0(&arg_8, nullptr)
*(arg1 + 0x74) = arg_8
*(arg1 + 0x7c) = 0
return arg1
