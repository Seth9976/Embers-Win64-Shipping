// 函数: sub_140b025b0
// 地址: 0x140b025b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg4
int64_t r12 = sx.q(arg6)
int64_t var_a8 = 0
char* rax_1 = (*rax)(arg4, &var_a8, arg5, r12)

if (var_a8 s>= r12)
    int32_t var_b8_1 = arg8
    return sub_140b02330(arg1, arg2, arg3, rax_1, r12.d, arg7)

int32_t rcx_4
rcx_4.b = arg1:4.d == 0

if ((rcx_4.b & sub_140b5b8a0(arg1.d, 0x101)) == 0)
    char* rax_8 = sub_140a82f30(r12, 0)
    (*(*arg4 + 0x10))(arg4, rax_8, arg5, r12)
    int32_t var_b8_2 = arg8
    char rax_9 = sub_140b02330(arg1, arg2, arg3, rax_8, r12.d, arg7)
    sub_140a74f90(rax_8)
    return zx.d(rax_9)

int64_t rax_3 = *arg4
int64_t arg_20 = 0
int64_t rax_4 = (*rax_3)(arg4, &arg_20, arg5, r12)
int64_t rdi_1 = arg_20
int64_t (* var_68_1)(int64_t arg1, int32_t arg2, int32_t arg3) = sub_140b07c10
int128_t* var_88_1 = arg2
int64_t var_98 = rax_4
int32_t rdx_4 = 0xf
int64_t (* var_60_1)(int64_t arg1, int64_t arg2) = sub_140b07c20

if (arg8 != 0)
    rdx_4 = arg8

int64_t var_58_1 = 0
int32_t var_90_1 = rdi_1.d
int32_t var_80_1 = arg3
uint32_t result

if (sub_140371b70(&var_98, rdx_4, "1.2.5", 0x58) == 0)
    uint32_t rbx_1
    uint32_t i
    
    do
        if (var_90_1 == 0)
            int64_t rax_7 = (**arg4)(arg4, &arg_20, rdi_1 + arg5, r12 - rdi_1)
            int64_t rcx_8 = arg_20
            rdi_1 += rcx_8
            var_90_1 = rcx_8.d
            var_98 = rax_7
        
        i = sub_140371df0(&var_98, 2)
        rbx_1 = i
    while (i == 0)
    result = sub_140374100(&var_98)
    
    if (rbx_1 s>= 0)
        rbx_1 = result
    
    result.b = rbx_1 == 0
else
    result.b = 0

return result
