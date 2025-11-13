// 函数: sub_142a5e760
// 地址: 0x142a5e760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = *(arg1 + 0x170)

if (r11 == 0)
    return 

int32_t r10_1 = 1

if (arg2 != 0)
    r10_1 = arg2

int32_t r8_1 = 0
int32_t rcx = r10_1

if (r10_1 != 1)
    uint64_t rdx_2
    
    do
        r8_1 += 1
        rdx_2 = zx.q(rcx s/ 0xa)
        
        if ((rdx_2 * 5).d * 2 != rcx)
            goto label_142a5e7bd
        
        rcx = rdx_2.d
    while (rdx_2.d != 1)

if (r10_1 == 1 || r8_1 != 0xffffffff)
    *(*r11 + 0x50) = r8_1
    *(**(arg1 + 0x170) + 0x74) = 1
else
label_142a5e7bd:
    *(*r11 + 0x50) = 0
    *(**(arg1 + 0x170) + 0x74) = r10_1

int32_t arg_8 = 0
sub_142a5f4f0(arg1, &arg_8)
