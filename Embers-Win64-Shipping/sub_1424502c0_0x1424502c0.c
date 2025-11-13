// 函数: sub_1424502c0
// 地址: 0x1424502c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = *(arg1 + 0x20)
void* rax_1
int64_t rax_2
void* r9_1

if (rdi != 0)
    rax_1 = sub_1425be5e0()
    r9_1 = *(rdi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rdi == 0 || rax_2.d s> *(r9_1 + 0x38) || *(*(r9_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rdi = nullptr

void* var_28 = nullptr
int32_t result_1 = 0
int64_t var_38 = 0
int32_t var_30 = 0
sub_14244dd60(arg1, arg2, arg3, &var_28, &var_38)
int32_t rax_4 = sub_14243ac50(rdi)
int64_t r12 = var_38
int64_t rbx_1 = r12
int64_t* rbp
rbp.b = rax_4 == 1
int64_t r14 = r12 + sx.q(var_30) * 0x18
int64_t* var_58

if (r12 != r14)
    do
        var_58.b = 0
        sub_14244d840(arg1, rdi, *rbx_1, 0, 0, rbp.b, *(rbx_1 + 0x10))
        rbx_1 += 0x18
    while (rbx_1 != r14)

void* r14_1 = var_28
int64_t result = sx.q(result_1)
void* rbx_2 = r14_1
void* r15 = r14_1 + result * 0x18

if (r14_1 != r15)
    do
        var_58.b = 1
        result = sub_14244d840(arg1, rdi, *rbx_2, 1, 1, rbp.b, *(rbx_2 + 0x10))
        rbx_2 += 0x18
    while (rbx_2 != r15)

if (r12 != 0)
    result = sub_140a74f90(r12)

if (r14_1 == 0)
    return result

return sub_140a74f90(r14_1)
