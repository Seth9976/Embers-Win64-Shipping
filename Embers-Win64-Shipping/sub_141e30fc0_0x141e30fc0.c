// 函数: sub_141e30fc0
// 地址: 0x141e30fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t r9 = 0
int64_t r11 = sx.q(*(rbx + 0x150))

if (r11.d s<= 0)
label_141e31004:
    r9 = -1
else
    int64_t rdx = 0
    int64_t* rcx_1 = *(rbx + 0x148) + 0x30
    
    while (*rcx_1 != *arg2)
        r9 += 1
        rdx += 1
        rcx_1 = &rcx_1[0xb]
        
        if (rdx s>= r11)
            goto label_141e31004

int32_t rdx_1 = 0

if (r11.d s<= 0)
label_141e31035:
    rdx_1 = -1
else
    int64_t r8 = 0
    int64_t* rcx_3 = *(rbx + 0x148) + 0x30
    
    while (*rcx_3 != *arg3)
        rdx_1 += 1
        r8 += 1
        rcx_3 = &rcx_3[0xb]
        
        if (r8 s>= r11)
            goto label_141e31035

if (r9 s< 0 || r9 s>= arg1[0x1e].d)
    r11.b = 0
else
    r11.b = 1
    int64_t r8_1 = sx.q(*(arg1[0x1d] + (sx.q(r9) << 2)))
    
    if (r8_1.d != 0xffffffff && r8_1.d s>= 0 && r8_1.d s< arg1[0x20].d)
        *(arg1[0x1f] + (r8_1 << 2)) = 0xffffffff

if (rdx_1 s>= 0 && rdx_1 s< arg1[0x20].d)
    *(arg1[0x1f] + (sx.q(rdx_1) << 2)) = r9

if (r11.b == 0)
    int64_t rax_1
    rax_1.b = 0
    return rax_1

*(arg1[0x1d] + (sx.q(r9) << 2)) = rdx_1
void* r8_2 = *arg1
int64_t arg_8

if (r8_2 != 0 && rdx_1 s>= 0 && rdx_1 s< *(r8_2 + 0x150))
    arg_8 = *(sx.q(rdx_1) * 0x58 + *(r8_2 + 0x148) + 0x30)
    sub_141e2d5e0(arg1)
    int64_t rax_5
    rax_5.b = 1
    return rax_5

arg_8 = 0
sub_141e2d5e0(arg1)
int64_t rax_6
rax_6.b = 1
return rax_6
