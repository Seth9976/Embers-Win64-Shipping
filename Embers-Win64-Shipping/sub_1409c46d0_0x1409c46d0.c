// 函数: sub_1409c46d0
// 地址: 0x1409c46d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 0x28)
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

int64_t* rax_2 = (sx.q(arg2) << 5) + *r15
int32_t* i = *rax_2
int64_t result = sx.q(rax_2[1].d)

for (void* r12 = &i[result]; i != r12; i = &i[1])
    int64_t rdi_1 = 0
    int64_t rcx_1 = sx.q(*i) * 3
    int64_t rax_4 = *(r15 + 0x38)
    int32_t* rbx_1 = *(rax_4 + (rcx_1 << 3) + 8)
    result = &rbx_1[sx.q(*(rax_4 + (rcx_1 << 3) + 0x10))]
    uint64_t rsi_2 = sx.q(*(rax_4 + (rcx_1 << 3) + 0x10)) << 2 u>> 2
    
    if (rbx_1 u> result)
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            result = sub_1408d92c0(arg3, *(r15 + 0xa8) + 0xc + (sx.q(*rbx_1) << 4))
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != rsi_2)

return result
