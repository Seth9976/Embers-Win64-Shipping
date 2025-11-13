// 函数: sub_1427f36e0
// 地址: 0x1427f36e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = arg3
int32_t* i = arg1

if (arg2 u<= arg1)
    return 

if (arg2 - arg1 + 0x1b u>= 0x70)
    int32_t* r8 = &arg3[6]
    void* rdx = &arg1[0xd]
    
    do
        if (i != 0)
            *i = *r10
            *(rdx - 0x30) = r8[-5]
            *(rdx - 0x2c) = r8[-4]
            *(rdx - 0x28) = r8[-3]
            *(rdx - 0x24) = r8[-2]
            *(rdx - 0x20) = r8[-1]
            *(rdx - 0x1c) = *r8
        
        if (rdx != 0x18)
            *(rdx - 0x18) = r8[1]
            *(rdx - 0x14) = r8[2]
            *(rdx - 0x10) = r8[3]
            *(rdx - 0xc) = r8[4]
            *(rdx - 8) = r8[5]
            *(rdx - 4) = r8[6]
            *rdx = r8[7]
        
        if (rdx != -4)
            *(rdx + 4) = r8[8]
            *(rdx + 8) = r8[9]
            *(rdx + 0xc) = r8[0xa]
            *(rdx + 0x10) = r8[0xb]
            *(rdx + 0x14) = r8[0xc]
            *(rdx + 0x18) = r8[0xd]
            *(rdx + 0x1c) = r8[0xe]
        
        if (rdx != -0x20)
            *(rdx + 0x20) = r8[0xf]
            *(rdx + 0x24) = r8[0x10]
            *(rdx + 0x28) = r8[0x11]
            *(rdx + 0x2c) = r8[0x12]
            *(rdx + 0x30) = r8[0x13]
            *(rdx + 0x34) = r8[0x14]
            *(rdx + 0x38) = r8[0x15]
        
        r10 = &r10[0x1c]
        r8 = &r8[0x1c]
        i = &i[0x1c]
        rdx += 0x70
    while (i u< arg2 - 0x54)

if (i u>= arg2)
    return 

void* rdx_1 = &i[6]
int64_t r9 = i - r10
void* rcx_3 = &r10[6]

do
    if (rcx_3 - 0x18 != neg.q(r9))
        *(rcx_3 - 0x18 + r9) = *(rcx_3 - 0x18)
        *(rdx_1 - 0x14) = *(rcx_3 - 0x14)
        *(rdx_1 - 0x10) = *(rcx_3 - 0x10)
        *(rdx_1 - 0xc) = *(rcx_3 - 0xc)
        *(rdx_1 - 8) = *(rcx_3 - 8)
        *(rdx_1 - 4) = *(rcx_3 - 4)
        *rdx_1 = *rcx_3
    
    rcx_3 += 0x1c
    rdx_1 += 0x1c
while (rcx_3 - 0x18 + r9 u< arg2)
