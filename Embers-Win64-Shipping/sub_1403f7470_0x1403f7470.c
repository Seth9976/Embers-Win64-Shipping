// 函数: sub_1403f7470
// 地址: 0x1403f7470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg1[4].d

if (i u> 0x800000)
    return 

int32_t r11_1 = arg1[3].d
uint32_t rdx_1 = *(arg1 + 0x2c)
int32_t r8_1 = *(arg1 + 0x1c)
int32_t rbx_1 = *(arg1 + 0x24)
int32_t rdi_1 = arg1[1].d

do
    r11_1 += 8
    i <<= 8
    uint32_t r10_1 = rdx_1
    arg1[3].d = r11_1
    arg1[4].d = i
    
    if (r8_1 u>= rdi_1)
        rdx_1 = 0
    else
        uint64_t rdx_2 = zx.q(r8_1)
        r8_1 += 1
        rdx_1 = zx.d(*(rdx_2 + *arg1))
        *(arg1 + 0x1c) = r8_1
    
    *(arg1 + 0x2c) = rdx_1
    rbx_1 = ((rbx_1 << 8) + zx.d((not.d((r10_1 << 8 | rdx_1) s>> 1)).b)) & 0x7fffffff
    *(arg1 + 0x24) = rbx_1
while (i u<= 0x800000)
