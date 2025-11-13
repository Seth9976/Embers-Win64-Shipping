// 函数: sub_141e49710
// 地址: 0x141e49710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg2 + 0x150)
int64_t rsi = arg4

if (i s<= 0)
    return 

char rax_1 = sub_140b5b8a0(arg4.d, 0)
arg4.b = arg4:4.d == 0

if ((arg4.b & rax_1) != 0)
    rsi = *(*(arg2 + 0x148) + 0x30)

int32_t r12_1 = sub_141e24560(arg2, rsi)
int64_t rdi_1 = rsi

do
    i -= 1
    int64_t rbx_2 = *(sx.q(r12_1) * 0x58 + *(arg2 + 0x148) + 0x3c)
    int32_t rax_4 = sub_141e24560(arg2, rbx_2)
    r12_1 = rax_4
    
    if (rax_4 == 0xffffffff)
        int64_t r8_1
        
        if (arg3 == 0)
            int64_t arg_10 = 0
            r8_1 = 0
        else
            r8_1 = rsi
        
        sub_141e07760(arg1, rdi_1, r8_1, 0)
        break
    
    sub_141e07760(arg1, rdi_1, rbx_2, 0)
    rdi_1 = rbx_2
while (i s> 0)
