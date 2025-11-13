// 函数: sub_14283e128
// 地址: 0x14283e128
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa0) = 0x20000000
int64_t i = 0
void* rcx = arg1 + 0x1bc

do
    *rcx = 0
    rcx += 4
    *(arg1 + i + 0x2ac) = 0
    i += 1
while (i s< 0x3c)

void* rdi = arg1 + 0xa6

if (arg2 == 0)
    __builtin_memset(rdi, 0, 0x100)
else
    for (int64_t i_1 = 0; i_1 s< 0x78; )
        if ((i_1 - 0x20 u> 0x3f || not(test_bit(-0x7ff003ffffffb7f, i_1 - 0x20)))
                && (i_1 u> 0xa || not(test_bit(0x481, i_1))))
            *rdi = 0
        
        i_1 += 1
        rdi += 2

memset(arg1 + 0x20, 0, 0x80)
*(arg1 + 0x16e) = 0x7f007f
int16_t result = 0x7f
*(arg1 + 0xbc) = 0x7f
*(arg1 + 0xfc) = 0x7f
*(arg1 + 0x16a) = 0x7f007f

if (arg2 == 0)
    *(arg1 + 0xa4) = 2
    int64_t rcx_4
    int64_t rdi_2
    rdi_2, rcx_4 = __memfill_u16(arg1 + 0x132, 0x40, zx.q(arg2 + 0xa))
    result = arg2.w + 0x64
    *(arg1 + 0xf4) = 0
    *(arg1 + 0xb4) = result
    *(arg1 + 0xba) = 0x40
    *(arg1 + 0xfa) = 0

return result
