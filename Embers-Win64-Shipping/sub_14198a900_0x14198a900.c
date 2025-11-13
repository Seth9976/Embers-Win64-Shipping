// 函数: sub_14198a900
// 地址: 0x14198a900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)
int64_t rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int32_t count = (r12 << 5).d
int64_t count_1 = sx.q(count)
int64_t rax = count_1 + rdi_2

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(&arg1[0x30], count + 8)
    rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = count_1 + rdi_2

*(arg1 + 0x30) = rax
memcpy(rdi_2, arg2, count)
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_4[4]

if (rax_1 u> *(arg1 + 0x38))
    sub_140b0e3d0(&arg1[0x30], 0x28)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_4[4]

*(arg1 + 0x30) = rax_1
void** rax_2 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_2 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_143000d48
rcx_4[2] = rdi_2
rcx_4[3].d = r12.d
*(rcx_4 + 0x1c) = arg4
int64_t* var_30
sub_141980430(arg1, &var_30, 1)
int64_t* rax_4 = var_30

if (rax_4 != 0)
    rax_4[9].d -= 1
    
    if (rax_4[9].d == 1)
        sub_140a2f6e0(var_30)

int32_t result = sub_140b187a0(&arg1[0x30])

if (result s> 0x40000 && *(arg1 + 0x14) u> 0)
    return sub_14196ef60(&data_143f02b88, arg1, arg5, arg6)

return result
