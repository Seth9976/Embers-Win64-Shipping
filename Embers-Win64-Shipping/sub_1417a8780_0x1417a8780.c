// 函数: sub_1417a8780
// 地址: 0x1417a8780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = data_1439b8ec0

if (r15 s< 0)
    r15 = *(arg1 + 0x35c)

int32_t rbx = 0

if (r15 s<= 0)
    return 

int64_t rbp
int64_t arg_8 = rbp

do
    rbp.b = 0
    int64_t* rdi_1 = *(arg1 + 0x100)
    int64_t rsi_1 = 0
    uint64_t r14_2 = sx.q(*(arg1 + 0x108)) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x108))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t* rcx = *rdi_1
            rsi_1 += 1
            rdi_1 = &rdi_1[1]
            rbp.b |= (*(*rcx + 0x30))(rcx, arg2, zx.q(arg3), zx.q(rbx), r15).b
        while (rsi_1 != r14_2)
    
    if (data_1439b8ebc != 0 && rbp.b == 0)
        break
    
    rbx += 1
while (rbx s< r15)
