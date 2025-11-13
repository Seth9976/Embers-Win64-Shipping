// 函数: sub_14198ac20
// 地址: 0x14198ac20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg3

if (data_143f01c92 == 0 || *(data_143f02a80 + 4) s> 0)
    int32_t rdi_1 = data_143f029c8
    sub_140b34200("UpdateTextureReference", rdi_1)
    int32_t rsi_1 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rsi_1)
    
    if (*(arg1 + 0x14) u> 0)
        sub_14196ef60(&data_143f02b88, arg1, arg5, arg4)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_7
    rdx_7.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rsi_1)
    sub_140b38680("UpdateTextureReference", rdi_1)
    int64_t* rcx_8 = *(arg1 + 0x20)
    return (*(*rcx_8 + 0x270))(rcx_8, arg2, rbp)

void*** r9_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &r9_3[4]

if (rax_2 u> *(arg1 + 0x38))
    sub_140b0e3d0(&arg1[0x30], 0x28)
    r9_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &r9_3[4]

*(arg1 + 0x30) = rax_2
int64_t* rax_3 = *(arg1 + 8)
arg3.b = 1
*(arg1 + 0x14) += 1
*rax_3 = r9_3
*(arg1 + 8) = &r9_3[1]
r9_3[1] = 0
*r9_3 = &data_143000d38
r9_3[2] = arg2
r9_3[3] = rbp
int64_t* var_28
sub_141980430(arg1, &var_28, arg3.b)
int64_t* rax_5 = var_28

if (rax_5 != 0)
    rax_5[9].d -= 1
    
    if (rax_5[9].d == 1)
        sub_140a2f6e0(var_28)

int32_t result = sub_140b187a0(&arg1[0x30])

if (result s> 0x40000 && *(arg1 + 0x14) u> 0)
    return sub_14196ef60(&data_143f02b88, arg1, arg5, arg4) __tailcall

return result
