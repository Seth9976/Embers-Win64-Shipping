// 函数: sub_14235ad50
// 地址: 0x14235ad50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int64_t rsi = 0
int64_t var_28 = 0
int64_t var_20 = 0

if (rax s> 0)
    sub_1405c5570(&var_28, rax)
    rax = arg2[1].d

int64_t* r14_1 = *arg2
uint64_t r15_1 = sx.q(rax) << 3 u>> 3

if (r14_1 u> &r14_1[sx.q(rax)])
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t rbx_1 = sx.q(var_20.d)
        int64_t rdi_2 = *r14_1 + 0x28
        int32_t rax_3 = (rbx_1 + 1).d
        var_20.d = rax_3
        
        if (rax_3 s> var_20:4.d)
            sub_1405a4d70(&var_28)
        
        r14_1 = &r14_1[1]
        rsi += 1
        *(var_28 + (rbx_1 << 3)) = rdi_2
    while (rsi != r15_1)

int128_t zmm6
int64_t result = sub_14235a3f0(arg1, &var_28, arg3, zmm6)
int64_t rcx_3 = var_28

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
