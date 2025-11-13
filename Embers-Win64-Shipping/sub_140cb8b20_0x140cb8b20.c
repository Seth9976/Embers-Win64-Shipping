// 函数: sub_140cb8b20
// 地址: 0x140cb8b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0xf]
int64_t* var_18
int32_t result

if ((*(rax + 0xb0) & 0x40) != 0)
    int64_t* r14_1 = *(rax + 0xb8)
    int64_t* var_20_1 = arg1
    sub_140cad070(&var_18, arg2, *(arg1 + 0x4c) + arg3, arg1[7].d, *(arg1 + 0x3c))
    int32_t rbx_4 = (*(arg1 + 0x4c) + arg3) << 0xd | 0x700
    int64_t rdi_1 = sx.q(*(arg2 + 0x1f0))
    int32_t rax_2 = (rdi_1 + 1).d
    *(arg2 + 0x1f0) = rax_2
    
    if (rax_2 s> *(arg2 + 0x1f4))
        sub_1405a4cf0(arg2 + 0x1e8)
    
    *(*(arg2 + 0x1e8) + (rdi_1 << 2)) = rbx_4
    result = sub_140cb83d0(arg2 + 0x1e8, (*(*r14_1 + 0xe8))(r14_1))
    goto label_140cb8c33

result = (*(*arg1 + 0x110))(arg5, arg4)

if (result.b != 0)
    int64_t* var_20_2 = arg1
    result = sub_140cad070(&var_18, arg2, *(arg1 + 0x4c) + arg3, arg1[7].d, *(arg1 + 0x3c))
    
    for (int64_t* i = *(arg1[0xf] + 0x70); i != 0; i = i[0xb])
        result = (*(*i + 0x120))(i, arg2, zx.q(*(arg1 + 0x4c) + arg3), arg4)
    
label_140cb8c33:
    int32_t var_10
    
    if (var_10 s> 1)
        int64_t* rax_8 = var_18
        int64_t rcx_6 = sx.q(rax_8[1].d)
        int64_t rax_9 = *rax_8
        result = *(rax_9 + (rcx_6 << 2) - 4)
        *(rax_9 + (rcx_6 << 2) - 4) = zx.d(result.b + 1) ^ zx.d(result.b) ^ result

return result
