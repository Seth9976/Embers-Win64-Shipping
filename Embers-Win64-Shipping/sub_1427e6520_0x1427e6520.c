// 函数: sub_1427e6520
// 地址: 0x1427e6520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
uint64_t rcx = zx.q(*(arg3 + 0x210))

if ((*(arg3 + 0x214) & 0x7fffffff) u> rcx.d)
    int64_t** rdx_1 = *(arg3 + 0x208) + (rcx << 3)
    
    if (rdx_1 != 0)
        *rdx_1 = arg2
    
    *(arg3 + 0x210) += 1
else
    sub_1427e5170(arg3, &arg_10)

char var_38 = 1
void var_78
void* var_30 = &var_78
int64_t* rbx = nullptr
int32_t var_28 = 0
int32_t result_1 = 8
int32_t rax_4 = (*(*arg2 + 0x1c0))(arg2)
int64_t arg_18 = 0
arg_10.d = rax_4
sub_1427e6bb0(&var_78, rax_4, &arg_18)
(*(*arg2 + 0x1c8))(arg2, var_30, zx.q(arg_10.d), 0)
int32_t i_2 = arg_10.d

if (i_2 != 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        sub_1427e6520(arg1, *(rbx + var_30), arg3)
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result = result_1

if ((result & 0x7fffffff) != 0 && result s>= 0)
    result = &var_78
    
    if (var_30 != &var_78 && var_30 != 0)
        class physx::PxAllocatorCallback* rax_5 = physx::shdfnd::getAllocator()
        int64_t r8_3 = *rax_5
        return (*(r8_3 + 0x10))(rax_5, var_30, r8_3)

return result
