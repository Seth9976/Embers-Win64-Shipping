// 函数: sub_1426d9470
// 地址: 0x1426d9470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_68 = nullptr
int32_t result_1 = 0
void* rdx

if (*(arg1 + 0x50) == 0)
    rdx = nullptr
else
    void* rax_1 = sub_142736ba0()
    
    if (rax_1 == 0)
        rdx = nullptr
    else
        rdx = *(arg1 + 0x50)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx = nullptr

sub_1426e7790(arg2, rdx, &var_68)
int64_t* r12 = var_68
int64_t result = sx.q(result_1)
int64_t* rsi = r12
void* r13 = r12 + result * 0xc

if (r12 != r13)
    do
        int64_t r14_1 = sx.q(arg2[4].d)
        result_1 = rsi[1].d
        int64_t var_58_1 = 0
        uint64_t count = zx.q(*(arg2 + 0x13c))
        uint128_t zmm0_1
        zmm0_1.q = *rsi
        var_68.o = zmm0_1
        int32_t rax_5 = (r14_1 + count).d
        uint128_t var_48 = zmm0_1
        uint64_t var_38_1 = var_58_1
        arg2[4].d = rax_5
        
        if (rax_5 s> *(arg2 + 0x24))
            sub_1405daba0(&arg2[3])
        
        memset(arg2[3] + r14_1, 0, count)
        sub_142714690(arg2[3] + r14_1, &var_48)
        int64_t rbx_1 = sx.q(arg2[1].d)
        int32_t arg_c = r14_1.d & 0x7fffffff
        int32_t rax_6 = (rbx_1 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        rsi += 0xc
        result = 0.q
        *(*arg2 + (rbx_1 << 3)) = result
    while (rsi != r13)

if (r12 == 0)
    return result

return sub_140a74f90(r12)
