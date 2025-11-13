// 函数: sub_142b9a790
// 地址: 0x142b9a790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int64_t rdi = *(arg2 + 0x20)
uint64_t rdx = zx.q(modu.dp.d(0:((*(arg2 + 0x10))(&arg_8)), *(arg2 + 4)))
int64_t i = *(rdi + (rdx << 3))
int64_t* result = rdi + (rdx << 3)

for (; i != 0; i = *result)
    if ((*(arg2 + 0x18))(i, &arg_8) != 0)
        break
    
    result -= 8
    
    if (result u< rdi)
        result = rdi + (zx.q(*(arg2 + 4) - 1) << 3)

return result
