// 函数: sub_1427cc380
// 地址: 0x1427cc380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
void** const var_78 = &data_1434cd540
int64_t var_70
__builtin_memset(&var_70, 0, 0x20)
sub_1427d0160(arg2, &var_78)
int64_t var_68
int32_t rax = var_68.d
int64_t rdi = 0
int64_t r13 = var_70
int32_t r12 = 0
int64_t var_a8 = 0
int32_t r14 = 0
int64_t var_a0 = 0
int32_t arg_10 = rax

if (rax != 0)
    do
        char** rdi_2 = zx.q(r14) * 0x28 + r13
        int32_t rax_2 = sub_1427cc8d0(&var_a8, *rdi_2)
        char* rdx_2 = rdi_2[1]
        *rdi_2 = zx.q(rax_2)
        r14 += 1
        rdi_2[1] = zx.q(sub_1427cc8d0(&var_a8, rdx_2))
    while (r14 u< arg_10)
    
    r12 = var_a0:4.d
    rdi = var_a8

int32_t var_84
__builtin_strncpy(&var_84, "W_64 ", 8)
int64_t rax_6 = *arg1
int32_t var_98
__builtin_strncpy(&var_98, "META", 4)
int32_t var_94 = 0x3040000
int32_t var_90 = 0
int32_t var_88 = 8
int32_t var_8c = 0
(*rax_6)(arg1, &var_98, 4)
(**arg1)(arg1, &var_94, 4)
(**arg1)(arg1, &var_90, 4)
(**arg1)(arg1, &var_8c, 4)
(**arg1)(arg1, &var_88, 4)
(**arg1)(arg1, &var_84, 4)
int32_t var_80
(**arg1)(arg1, &var_80, 4)
(**arg1)(arg1, &arg_10, 4)
int64_t r9 = *arg1
(*r9)(arg1, r13, zx.q(arg_10 * 0x28), r9)
int32_t arg_18 = *(arg2 + 0x44)
(**arg1)(arg1, &arg_18, 4)

if (arg_18 u> 0)
    do
        int16_t arg_8 = sub_1427d0270(arg2, rbx)
        int32_t var_7c = sub_1427cc8d0(&var_a8, sub_1427d0250(arg2, zx.q(rbx)))
        (**arg1)(arg1, &arg_8, 2)
        (**arg1)(arg1, &var_7c, 4)
        rbx += 1
    while (rbx u< arg_18)
    
    r12 = var_a0:4.d
    rdi = var_a8

int32_t arg_20 = var_a0.d
(**arg1)(arg1, &arg_20, 4)
(**arg1)(arg1, rdi, zx.q(arg_20))

if ((r12 & 0x7fffffff) != 0 && r12 s>= 0 && rdi != 0)
    class physx::PxAllocatorCallback* rax_25 = physx::shdfnd::getAllocator()
    int64_t r8_3 = *rax_25
    (*(r8_3 + 0x10))(rax_25, rdi, r8_3)

int64_t var_58
int32_t rax_26 = var_58:4.d
int64_t var_60

if ((rax_26 & 0x7fffffff) != 0 && rax_26 s>= 0 && var_60 != 0)
    class physx::PxAllocatorCallback* rax_27 = physx::shdfnd::getAllocator()
    int64_t r8_4 = *rax_27
    (*(r8_4 + 0x10))(rax_27, var_60, r8_4)

int32_t result = var_68:4.d

if ((result & 0x7fffffff) != 0 && result s>= 0)
    int64_t rbx_2 = var_70
    
    if (rbx_2 != 0)
        class physx::PxAllocatorCallback* rax_28 = physx::shdfnd::getAllocator()
        int64_t r8_5 = *rax_28
        return (*(r8_5 + 0x10))(rax_28, rbx_2, r8_5)

return result
