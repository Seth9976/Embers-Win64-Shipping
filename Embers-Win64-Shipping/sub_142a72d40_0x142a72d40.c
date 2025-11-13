// 函数: sub_142a72d40
// 地址: 0x142a72d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x289) = 0
int32_t rax
uint128_t zmm6
uint128_t zmm6_1
rax, zmm6_1 = sub_142a6a710(arg1, arg2, zmm6)
int32_t rsi = rax

if (arg2 == 3 && arg1[0xb].d == arg1[0x50].d && rax s>= arg1[0x4e].d)
    *(arg1 + 0x289) = 1
    return sub_142a6a710(arg1, arg2, zmm6_1) __tailcall

int32_t rax_2
rax_2.b = rsi s>= arg1[0x4e].d
int32_t rcx_2
rcx_2.b = arg1[0x51].b == 1

if (rcx_2 != rax_2)
    *(arg1 + 0x289) = 1
    rsi = sub_142a6a710(arg1, arg2, zmm6_1)

if (arg1[0x51].b != 0)
    int64_t rax_4 = sx.q(arg1[0xb].d)
    
    if (rax_4.d == arg1[0x50].d)
        int32_t rbx_1 = 2 - sub_142accb50(rax_4 - 1, 0x64)
        int32_t rax_7 = sub_142accb50(rax_4 - 1, 0x190) + rbx_1
        
        if (arg2 == 6)
            return zx.q(rsi - rax_7)
        
        if (arg2 == 4)
            rsi += 0xe

return zx.q(rsi)
