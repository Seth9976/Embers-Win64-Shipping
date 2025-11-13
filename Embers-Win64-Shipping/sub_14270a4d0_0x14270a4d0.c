// 函数: sub_14270a4d0
// 地址: 0x14270a4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142704500(arg2)
char i = *arg2
int64_t rax = *(arg2 + 4)
uint64_t result_1
sub_140d3a3a0(&result_1, arg3)
char* r14 = *(arg1 + 0x118)
char* rbx_1 = r14
void* rdi_1 = &r14[sx.q(*(arg1 + 0x120)) * 0x14]
uint64_t result
int64_t rdx_3

if (r14 != rdi_1)
    while (*rbx_1 != i || sub_14077a170(&rbx_1[0xc], &result_1) == 0)
        rbx_1 = &rbx_1[0x14]
        
        if (rbx_1 == rdi_1)
            goto label_14270a57a
    
    int64_t rax_4
    int64_t rdx_2
    rdx_2:rax_4 = muls.dp.q(0x6666666666666667, rbx_1 - r14)
    rdx_3 = rdx_2 s>> 3
    result = rdx_3 u>> 0x3f

if (r14 == rdi_1 || rdx_3.d + result.d == 0xffffffff)
label_14270a57a:
    int64_t rbx_3 = sx.q(*(arg1 + 0x120))
    int32_t rax_6 = (rbx_3 + 1).d
    *(arg1 + 0x120) = rax_6
    
    if (rax_6 s> *(arg1 + 0x124))
        sub_1405c4d20(arg1 + 0x118)
    
    char* rdx_6 = *(arg1 + 0x118) + rbx_3 * 0x14
    *rdx_6 = i
    *(rdx_6 + 4) = rax
    result = result_1
    *(rdx_6 + 0xc) = result

return result
