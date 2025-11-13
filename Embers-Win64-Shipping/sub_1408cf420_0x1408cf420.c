// 函数: sub_1408cf420
// 地址: 0x1408cf420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t* rsi = arg3

if (arg3 != 0)
    arg2.b = 1
    (*(*arg3 + 0x340))(arg3, arg2)

void* rdx_2 = (rbx << 6) + *(arg1 + 0x38)
void* result

if (*(rdx_2 + 5) == 0)
label_1408cf4ff:
    int32_t* rbx_2 = *(rdx_2 + 0x20)
    int64_t rdi_1 = 0
    result = &rbx_2[sx.q(*(rdx_2 + 0x28))]
    uint64_t r14_2 = sx.q(*(rdx_2 + 0x28)) << 2 u>> 2
    
    if (rbx_2 u> result)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            arg3.b = 1
            result, arg3 = sub_141f70fe0(*(*(arg1 + 0x48) + sx.q(*rbx_2) * 0x10), rsi, arg3.d)
            rdi_1 += 1
            rbx_2 = &rbx_2[1]
        while (rdi_1 != r14_2)
else
    int64_t rax_2 = sx.q(*(rdx_2 + 0x18))
    
    if (rax_2.d s< 0 || rax_2.d s>= *(arg1 + 0xe0))
        goto label_1408cf4ff
    
    int64_t rcx_1 = rax_2 * 5
    int64_t rax_3 = *(arg1 + 0xd8)
    
    if (**(rax_3 + (rcx_1 << 3) + 0x18) == rsi)
        goto label_1408cf4ff
    
    (rax_3 + (rcx_1 << 3))[2] = rsi
    result = *(arg1 + 0xd8)
    int64_t* rbx_1 = *(result + sx.q(*(rdx_2 + 0x18)) * 0x28 + 0x18)
    
    if (rbx_1[1] != 0)
        int64_t* rcx_3 = *rbx_1
        (*(*rcx_3 + 0x3d0))(rcx_3, rbx_1[3])
        int32_t* rcx_5 = rbx_1[1] + 0x268
        rbx_1[3] = rsi
        sub_140d3a3a0(rcx_5, rsi)
        rbx_1[3]
        jump(*(**rbx_1 + 0x3c0))

return result
