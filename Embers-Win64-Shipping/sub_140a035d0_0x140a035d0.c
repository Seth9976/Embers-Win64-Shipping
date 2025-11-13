// 函数: sub_140a035d0
// 地址: 0x140a035d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0

if (arg2 s< 0)
    return 0

int64_t rax = sx.q(arg1[0x8a].d)
int32_t r10 = 0
int32_t rbx = 0

if (rax.d s<= 0)
    return 0

int64_t r8 = 0
int32_t* r9_1 = arg1[0x89] + 0x18

while (true)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x55555556, *r9_1)
    r10 += temp0_1 + (temp0_1 u>> 0x1f)
    
    if (arg2 s< r10)
        break
    
    rbx += 1
    r8 += 1
    r9_1 = &r9_1[0x10]
    
    if (r8 s>= rax)
        return 0

int64_t result = (*(*arg1 + 0x548))(arg1, zx.q(rbx))
*arg3 = rbx
return result
