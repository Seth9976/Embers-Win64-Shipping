// 函数: sub_141f9a780
// 地址: 0x141f9a780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x28) & 1) != 0)
    arg1[0x1d].b |= 1

int64_t result = sub_142498da0(arg1, arg2)

if ((arg1[0x1d].b & 1) == 0)
    return result

int64_t rsi_1 = 0
int64_t* rdi_1 = arg1[0x19]
uint64_t r14_2 = sx.q(arg1[0x1a].d) << 3 u>> 3

if (rdi_1 u> &rdi_1[arg1[0x1a]])
    r14_2 = 0

if (r14_2 != 0)
    do
        uint64_t rbx_1 = *rdi_1
        
        if (rbx_1 != 0 && ((*(rbx_1 + 8) u>> 0xa).b & 1) != 0)
            int64_t rax_4 = sub_140d3cb50(rbx_1)
            
            if (rax_4 != 0)
                sub_140cc45a0(rax_4 + 0x200, rbx_1)
        
        rdi_1 = &rdi_1[1]
        rsi_1 += 1
    while (rsi_1 != r14_2)

return sub_141f8f700(arg1, 1)
