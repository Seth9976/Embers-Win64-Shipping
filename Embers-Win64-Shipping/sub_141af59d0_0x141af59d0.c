// 函数: sub_141af59d0
// 地址: 0x141af59d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x10)
int64_t* r15 = arg3
arg3.b = 0
char arg_9 = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x18)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x18))])
    r14_1 = 0

int32_t result_1

if (r14_1 != 0)
    do
        void* rax_2 = *rbx
        
        if (*(rax_2 + 0x64) == 1)
            *(arg2 + 0x2d0) = *(rax_2 + 0x58)
            *(arg2 + 0x2d8) = *(rax_2 + 0x60)
            *(arg2 + 0x2dc) = 2
            uint64_t rdx
            rdx.b = 2
            result_1.q = *(arg2 + 0x2d0)
            int32_t var_20_1 = *(arg2 + 0x2d8)
            sub_141a590e0(arg2 + 0x148, rdx.b, *r15, &result_1, arg4, arg2 + 0xf8)
            arg3.b = 1
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

int32_t result = data_1439e5888
char rdx_1 = *(arg2 + 0x2dd)
result_1 = result
int32_t var_24 = 0xffffffff
*(arg2 + 0x2d0) = result_1.q
*(arg2 + 0x2d8) = 0xffffffff
*(arg2 + 0x2dc) = rdx_1

if (arg3.b != 0 || rdx_1 == 0)
    return result

result_1.q = *(arg2 + 0x2d0)
int32_t var_20_2 = *(arg2 + 0x2d8)
return sub_141a590e0(arg2 + 0x148, rdx_1, *r15, &result_1, arg4, arg2 + 0xf8)
