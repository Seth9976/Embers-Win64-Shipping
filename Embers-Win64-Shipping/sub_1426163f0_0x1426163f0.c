// 函数: sub_1426163f0
// 地址: 0x1426163f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0 && arg2 s<= *arg1 && arg4 s> 0)
    void* rbx_2 = sx.q(arg2) * 0x328 + *(arg1 + 8)
    
    if (*(rbx_2 + 0x325) == 3 && *(rbx_2 + 0x318) == *(arg3 + (sx.q(arg4) << 3) - 8))
        sub_142634120(rbx_2, rbx_2 + 0x30c, arg3, arg4)
        *(rbx_2 + 0x40) ^= (zx.d(*(arg1 + 0x2b22)) << 3 ^ *(rbx_2 + 0x40)) & 8
        sub_1426337c0(rbx_2 + 0x58)
        int64_t rax_4
        rax_4.b = 1
        *(rbx_2 + 0x325) = 2
        *(rbx_2 + 0x308) = 0
        return 1

int64_t result
result.b = 0
return result
