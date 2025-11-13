// 函数: sub_140dc0ac0
// 地址: 0x140dc0ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg4
uint64_t i_1 = zx.q(arg3)
void* rax_1 = sub_142bf6cf0(sub_1405948b0(arg1))
int32_t rax_3 = sub_142bf6d10(sub_1405948b0(arg1))
int32_t* rax_4 = sub_142bf4a70(arg1, &data_143e20d00)
int32_t arg_20 = 0
int32_t arg_18 = 0
int32_t r13 = 1
sub_142bf4a50(arg1, &arg_20, &arg_18)
int32_t result = -1
int32_t* rbx_1 = arg6

if (arg_18 s< 0)
    r13 = -1

if (i_1.d != 0)
    uint64_t i
    
    do
        int32_t zmm0_1 = rax_4[1]
        int32_t r8_1 = *rdi
        int64_t* rcx_5 = *(rax_4 + 0x10)
        int32_t rax_5 = *rax_4
        arg_18 = 0
        result = sub_140da12c0(rcx_5, rax_1, r8_1, rax_3 | 0x10, rax_5, zmm0_1, &arg_18)
        int32_t rcx_7
        
        if (result.b == 0)
            rcx_7 = 0
        else
            result = arg_18 * r13
            rcx_7 = (0x200 - result) s>> 0xa
        
        *rbx_1 = rcx_7
        rdi += zx.q(arg5)
        rbx_1 += zx.q(arg7)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
