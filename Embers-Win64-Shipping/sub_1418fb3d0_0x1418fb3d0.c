// 函数: sub_1418fb3d0
// 地址: 0x1418fb3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x2c))
uint32_t rdx_1 = *(arg1 + 0x20) u>> arg2
int64_t r9 = rsi * 5
uint32_t rdi = *((r9 << 3) + &data_1439c85ec)
uint32_t r11 = *((r9 << 3) + 0x1439c85e8)
uint32_t rax = r11
uint32_t r8_1 = *(arg1 + 0x24) u>> arg2
uint32_t rcx_1 = rdi

if (rdx_1 u>= r11)
    rax = rdx_1

uint32_t r9_1 = divu.dp.d(0:(rax - 1 + r11), r11)

if (r8_1 u>= rdi)
    rcx_1 = r8_1

uint32_t rax_6 = divu.dp.d(0:(rdi - 1 + rcx_1), rdi)

if ((rsi - 0x1e).d u<= 1)
    uint32_t rdx_4 = 2
    uint32_t rcx_3 = 2
    
    if (r9_1 u>= 2)
        rcx_3 = r9_1
    
    r9_1 = rcx_3
    
    if (rax_6 u>= 2)
        rdx_4 = rax_6
    
    rax_6 = rdx_4

int32_t result = rax_6 * r9_1 * (&data_1439c85f4)[r9 * 2]
*arg3 = result
return result
