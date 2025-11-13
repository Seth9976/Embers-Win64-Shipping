// 函数: sub_141cfdac0
// 地址: 0x141cfdac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x278) != 0)
    return 

int64_t rsi_1 = 0
int64_t* rdi_1 = *(arg1 + 0x268)
uint64_t r14_2 = sx.q(*(arg1 + 0x270)) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x270))])
    r14_2 = 0

if (r14_2 != 0)
    do
        int64_t* rbx_1 = *rdi_1
        
        if (*(rbx_1 + 0x61) == 0)
            int512_t zmm1
            zmm1.o = zx.o(0)
            (*(*rbx_1 + 8))(rbx_1, zmm1)
        
        (**rbx_1)(rbx_1, 1)
        rdi_1 = &rdi_1[1]
        rsi_1 += 1
    while (rsi_1 != r14_2)

bool cond:0_1 = *(arg1 + 0x274) == 0
*(arg1 + 0x270) = 0

if (not(cond:0_1))
    sub_1405c5570(arg1 + 0x268, 0)
