// 函数: sub_142280850
// 地址: 0x142280850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1

if (rdi == 0)
    return 

int64_t var_18
int32_t zmm1

if (arg4 == 0)
    zmm1 = 0x7f7fffff
    var_18 = 0
    int32_t var_c_2 = 0
else
    char rax_1 = arg2[3].b
    
    if ((rax_1 & 1) == 0)
        arg5 = (zx.o(0)).d
    else
        arg5 = *arg2
    
    int32_t zmm2
    
    if ((rax_1 & 2) == 0)
        zmm2 = (zx.o(0)).d
    else
        zmm2 = arg2[1]
    
    zmm1 = arg2[2]
    
    if (not(zmm1 f> 0f))
        zmm1 = 0x7f7fffff
    
    var_18.d = arg5
    var_18:4.d = zmm2
    int32_t var_c_1 = 1

int32_t var_10_1 = zmm1
(*(*rdi + 0x140))(rdi, zx.q(sub_14227f3b0(arg3)), &var_18, arg5)
