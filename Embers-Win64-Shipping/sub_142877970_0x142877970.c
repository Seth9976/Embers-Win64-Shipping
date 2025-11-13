// 函数: sub_142877970
// 地址: 0x142877970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
char* r15_1 = *(arg1 + 0xb0) + 0x190
memset(r15_1, 0, 0x58)
int32_t arg_8
void arg_20

if (sub_142877b70(arg1, &arg_8, &arg_20) == 0)
    int32_t i
    
    do
        if (arg_8 + 3 u> 1)
            return 0
        
        i = sub_142877b70(arg1, &arg_8, &arg_20)
    while (i == 0)

*arg2 = *(*(arg1 + 0xa8) + 0x230)
char* rdi_1 = *(*(arg1 + 0x88) + 8)
*arg3 = *(arg1 + 0x98)

if (*arg2 == 0x101)
    int64_t rax_6 = *(arg1 + 0xb8)
    
    if (rax_6 != 0)
        rax_6(0, zx.q(*arg1), 0x14, rdi_1, 1, arg1, *(arg1 + 0xc0))
    
    return 1

int64_t rsi_1 = *(r15_1 + 8)
*rdi_1 = *r15_1
rdi_1[3] = rsi_1.b
uint8_t rdx_4 = (rsi_1 u>> 0x10).b
rdi_1[1] = rdx_4
uint8_t rcx_6 = (rsi_1 u>> 8).b
rdi_1[2] = rcx_6
rdi_1[4] = r15_1[0x11]
rdi_1[5] = r15_1[0x10]
*(rdi_1 + 6) = 0
rdi_1[8] = 0
rdi_1[9] = rdx_4
rdi_1[0xa] = rcx_6
rdi_1[0xb] = rsi_1.b
void* rdi_2 = &rdi_1[0xc]

if (*arg1 != 0x100)
    rdi_2 = rdi_1
    rsi_1 += 0xc

int32_t rax_11

if (*arg2 == 0x14)
    rax_11 = sub_14285e7b0(arg1)

if ((*arg2 != 0x14 || rax_11 != 0) && sub_142882640(arg1, rdi_2, rsi_1) != 0)
    int64_t r10_1 = *(arg1 + 0xb8)
    
    if (r10_1 != 0)
        r10_1(0, zx.q(*arg1), 0x16, rdi_2, rsi_1, arg1, *(arg1 + 0xc0))
    
    memset(r15_1, 0, 0x58)
    void* rax_14 = *(arg1 + 0xb0)
    *(rax_14 + 0x110) += 1
    *(arg1 + 0x90) = *(*(arg1 + 0x88) + 8) + 0xc
    return 1

return 0
