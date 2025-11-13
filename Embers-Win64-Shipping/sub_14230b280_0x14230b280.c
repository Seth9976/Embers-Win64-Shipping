// 函数: sub_14230b280
// 地址: 0x14230b280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax
int64_t r8
rax, r8 = sub_142591550()
void* rdx = arg2[2]
int64_t rax_1 = sx.q(*(rax + 0x38))
uint64_t result

if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
    r8.b = 1
    result = (*(*arg2 + 0x6a8))(arg2, 0, r8)
    
    if (result != 0)
        return sub_14220a810(result, arg3, arg4)

result.b = 0
return result
