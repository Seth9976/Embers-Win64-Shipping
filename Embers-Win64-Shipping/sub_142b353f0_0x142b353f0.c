// 函数: sub_142b353f0
// 地址: 0x142b353f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xa]
char rax

if (rcx != 0)
    rax = (*(*rcx + 0x68))(rcx)

if (rcx == 0 || rax == 0)
    int64_t* rcx_1 = arg1[0xb]
    
    if (rcx_1 != 0)
        rax = (*(*rcx_1 + 0x68))(rcx_1)
    
    if (rcx_1 == 0 || rax == 0)
        return 0

int64_t rax_3 = sub_142b36cd0(arg1[1].d, *(arg1 + 0xc))

if (mods.dp.q(sx.o(arg2), rax_3) == 0 && mods.dp.q(sx.o(*arg1), rax_3) != 0)
    int64_t result
    result.b = 1
    return result

return 0
