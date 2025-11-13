// 函数: sub_142b81e00
// 地址: 0x142b81e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg4
(*(*arg1 + 0x58))(arg1, zx.o(arg6))
void* rcx = arg1[2]
int32_t arg_8
int512_t zmm2

if (rcx == 0)
    int64_t* rcx_4 = arg1[3]
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0xa0))(rcx_4, arg2, arg9, arg3)
else
    zmm2, zmm6 = sub_142b363a0(rcx, arg2, arg3, arg5, arg8, arg9)
    
    if (arg7 != 0 && *(arg1[2] + 0x98) == 0 && *(arg3 + 8) == 0)
        arg_8 = 0
        int64_t* rax_3 = sub_142a58680(&arg_8)
        
        if (arg_8 s<= 0)
            (*(*rax_3 + 0xa0))(rax_3, arg2, arg9, arg3)
        
        if (rax_3 != 0)
            (**rax_3)(rax_3, 1)

if (*(arg3 + 8) == 0)
    sub_142aa8170(arg9, 0)
    int64_t rax_8
    rax_8.b = 0
    return rax_8

arg_8 = 0
uint128_t zmm0 = sub_142aa7d40(arg9, &arg_8)
zmm2.o = zmm6
(*(*arg1 + 0x50))(arg1, zmm0, zmm2)
sub_142aa8140(arg9, zmm0)
int64_t rax_7
rax_7.b = 1
return rax_7
