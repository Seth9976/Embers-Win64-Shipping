// 函数: sub_141fb32e0
// 地址: 0x141fb32e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18
sub_14062d5f0(arg1 + 0xd70, &arg_18, arg2)
int64_t rax = sx.q(arg_18)
void* const r8_3

if (rax.d == 0xffffffff)
    r8_3 = nullptr
else
    r8_3 = (rax << 5) + *(arg1 + 0xd70)

int32_t* rax_1 = r8_3 + 0x10

if (r8_3 == 0)
    rax_1 = nullptr

int64_t rax_2

if (rax_1 == 0)
    int64_t rbp_1 = sx.q(*(arg1 + 0xd68))
    int32_t rax_3 = (rbp_1 + 1).d
    *(arg1 + 0xd68) = rax_3
    
    if (rax_3 s> *(arg1 + 0xd6c))
        sub_1405a4df0(arg1 + 0xd60)
    
    int64_t rdi_1 = rbp_1 * 0x18
    int64_t* rbx_2 = *(arg1 + 0xd60) + rdi_1
    sub_140596d10(rbx_2, arg2)
    rbx_2[2].d = 0xffffffff
    *(rbx_2 + 0x14) = 0
    int64_t rax_4 = *(arg1 + 0xd60)
    int32_t arg_8 = rbp_1.d
    int64_t* var_38 = arg2
    *(rax_4 + rdi_1 + 0x10) = rbp_1.d
    int32_t* var_30_1 = &arg_8
    sub_140625670(arg1 + 0xd70, &arg_18, &var_38, nullptr)
    *(arg1 + 0xe80) += 1
    rax_2 = sx.q(arg_8)
else
    rax_2 = sx.q(*rax_1)

return *(arg1 + 0xd60) + rax_2 * 0x18
