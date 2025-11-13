// 函数: sub_142c20300
// 地址: 0x142c20300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const r11
int32_t** rax_1

if (arg2 == 0x47504f53)
    rax_1 = sub_142c1f7b0(arg1 + 0xc8)
label_142c20356:
    int32_t* rcx_2 = *rax_1
    int32_t* r11_1 = &data_14369a5d0
    
    if (rcx_2 != 0)
        r11_1 = rcx_2
    
    if (r11_1[6] u>= 0xa)
        r11 = *(r11_1 + 0x10)
    else
        r11 = &data_14369a5d0
else
    if (arg2 == 0x47535542)
        rax_1 = sub_142c1f860(arg1 + 0xc0)
        goto label_142c20356
    
    r11 = &data_14369a5d0
uint16_t rdx = zx.w(*(r11 + 6))
uint64_t r8 = zx.q(*(r11 + 7))
int128_t* const rcx_5

if (0 != rdx * 0x100 + r8.w)
    rcx_5 = &r11[zx.q(rdx.b) * 0x10] + r8
else
    rcx_5 = &data_14369a5d0

int32_t i = 0
uint32_t result = zx.d(*(rcx_5 + 1))
uint32_t rbx_1 = zx.d(*rcx_5) << 8

if (rbx_1 != neg.d(result))
    do
        uint32_t rcx_9
        
        if (i != 0xffff)
            uint16_t r8_1 = zx.w(*(r11 + 6))
            uint64_t r9 = zx.q(*(r11 + 7))
            void* r8_2
            
            if (0 != r8_1 * 0x100 + r9.w)
                r8_2 = &r11[zx.q(r8_1.b) * 0x10] + r9
            else
                r8_2 = &data_14369a5d0
            
            void* r8_6
            
            if (i u< zx.d(*(r8_2 + 1)) + (zx.d(*r8_2) << 8))
                r8_6 = r8_2 + zx.q(i) * 6 + 2
            else
                r8_6 = &data_14369a5d0
            
            rcx_9 = (zx.d(*(r8_6 + 1)) << 0x10) + (zx.d(*(r8_6 + 2)) << 8) + (zx.d(*r8_6) << 0x18)
                + zx.d(*(r8_6 + 3))
        else
            rcx_9 = 0
        
        if (arg3 == rcx_9)
            if (arg4 != 0)
                *arg4 = i
            
            result.b = 1
            goto label_142c2047c
        
        i += 1
    while (i u< rbx_1 + result)

if (arg4 != 0)
    *arg4 = 0xffff

result.b = 0
label_142c2047c:
return result
