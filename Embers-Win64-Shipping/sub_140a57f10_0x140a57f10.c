// 函数: sub_140a57f10
// 地址: 0x140a57f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9_1 = arg2 u>> (*(arg1 + 0x10)).b
int64_t* rcx_6 = ((zx.q(*(arg1 + 0x20) - 1) & zx.q(r9_1.d)) << 5) + *(arg1 + 0x460)
int64_t* rax_1 = rcx_6

do
    if (*rax_1 == r9_1)
        return ((zx.q((arg2 u>> (*(arg1 + 8)).b).d) & zx.q(*(arg1 + 0x18))) << 5) + rax_1[1]
    
    rax_1 = rax_1[3]
while (rax_1 != rcx_6)

return 0
