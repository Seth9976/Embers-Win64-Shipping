// 函数: sub_1428d3020
// 地址: 0x1428d3020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0x20)
int64_t rbp_1 = *(arg1 + 0x28)
int64_t i = arg3
*arg1 |= 0x40
char* rdi_1 = arg2
rbp_1(arg4, &arg1[0x10], *(arg1 + 0x30))
*(arg1 + 0x20) += 1
char rdx_1 = arg1[0x10]
char rcx = arg1[0x11]
int32_t rdx_2

if (i u>= 0xff00)
    char r9_1 = arg1[0x12]
    char r10_1 = arg1[0x13]
    char r11_1 = arg1[0x14]
    char r8_1 = arg1[0x15]
    arg1[0x10] = not.b(rdx_1)
    
    if (i u< 0x100000000)
        rcx ^= 0xfe
        rdx_2 = 6
        arg1[0x12] = (i u>> 0x18).b ^ r9_1
        arg1[0x13] = (i u>> 0x10).b ^ r10_1
        arg1[0x14] = (i u>> 8).b ^ r11_1
        arg1[0x15] = r8_1 ^ i.b
    else
        rcx = not.b(rcx)
        rdx_2 = 0xa
        arg1[0x12] = (i u>> 0x38).b ^ r9_1
        arg1[0x13] = (i u>> 0x30).b ^ r10_1
        arg1[0x14] = (i u>> 0x28).b ^ r11_1
        arg1[0x15] = (i u>> 0x20).b ^ r8_1
        arg1[0x16] ^= (i u>> 0x18).b
        arg1[0x17] ^= (i u>> 0x10).b
        arg1[0x18] ^= (i u>> 8).b
        arg1[0x19] ^= i.b
else
    rdx_2 = 2
    arg1[0x10] = (i u>> 8).b ^ rdx_1
    rcx ^= i.b

arg1[0x11] = rcx

do
    void* rax_24 = zx.q(rdx_2) + 0x10 + arg1
    
    while (i != 0)
        rdx_2 += 1
        *rax_24 ^= *rdi_1
        rdi_1 = &rdi_1[1]
        rax_24 += 1
        i -= 1
        
        if (rdx_2 u>= 0x10)
            break
    
    rbp_1(&arg1[0x10], &arg1[0x10], *(arg1 + 0x30))
    *(arg1 + 0x20) += 1
    rdx_2 = 0
while (i != 0)
