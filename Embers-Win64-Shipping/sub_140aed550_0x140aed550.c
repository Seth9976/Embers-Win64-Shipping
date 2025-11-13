// 函数: sub_140aed550
// 地址: 0x140aed550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140af3620(arg1)
int64_t rbx = sx.q(arg2[1].d)

if (rax s> rbx.d)
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
    
    memset(rbx + *arg2, 0, sx.q(rax - rbx.d))
else if (rax s< rbx.d && rax != rbx.d)
    arg2[1].d = rax
    sub_1405dac10(arg2)

int32_t rax_1 = arg1[1].d
int32_t rdx_1 = rax_1 - 1

if (rax_1 == 0)
    rdx_1 = 0

if (rax_1 == 0)
    return sub_140ae4700(&data_142d40450, rdx_1, *arg2) __tailcall

return sub_140ae4700(*arg1, rdx_1, *arg2) __tailcall
