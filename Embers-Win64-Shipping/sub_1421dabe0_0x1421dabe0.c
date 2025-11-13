// 函数: sub_1421dabe0
// 地址: 0x1421dabe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg2 + 0x448))
int64_t* result

if (rax.d s> 0)
    result = *(arg2 + 0x440)
    int64_t r8_1 = 0
    
    do
        if (*result == *(arg1 + 0x48))
            return result
        
        r8_1 += 1
        result -= -0x80
    while (r8_1 s< rax)

int64_t rbx_1 = sx.q(*(arg2 + 0x448))
int32_t rax_1 = (rbx_1 + 1).d
*(arg2 + 0x448) = rax_1

if (rax_1 s> *(arg2 + 0x44c))
    sub_1408888d0(arg2 + 0x440)

int64_t rbx_2 = rbx_1 << 7
memset(*(arg2 + 0x440) + rbx_2, 0, 0x80)
*(rbx_2 + *(arg2 + 0x440)) = *(arg1 + 0x48)
*(rbx_2 + *(arg2 + 0x440) + 8) = 6
result = *(arg2 + 0x440)
result[rbx_1 * 0x10 + 6] = 0
return result
