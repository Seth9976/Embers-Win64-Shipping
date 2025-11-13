// 函数: sub_142b3ae30
// 地址: 0x142b3ae30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)

if (arg3 == 0)
    return zx.q(r9.d)

if (arg3 == r9.d)
    *arg1 = 0
    return 1

char* rax_2 = arg1
uint32_t rdx

if (arg3 s> 0x31)
    rdx = arg3
else
    rdx = zx.d(*(sx.q(arg3) + &data_14366c490))

if (arg3 - rdx == 0)
    if (arg3 s<= 0x31)
        arg3 = zx.d(*(sx.q(arg3) + &data_14366c490))
    
    void* rdx_1 = &arg1[r9]
    int64_t r10_3 = sx.q(arg3)
    void* r8 = &arg1[r10_3]
    void* r9_2 = rdx_1 - r8
    
    if (r8 u> rdx_1)
        r9_2 = nullptr
    
    if (r9_2 != 0)
        int64_t rdx_4 = r8 - r10_3 - arg1
        
        do
            rdx_4 += 1
            *rax_2 = *(r8 - arg1 + rax_2)
            rax_2 = &rax_2[1]
        while (rdx_4 u< r9_2)
    
    return rax_2 - arg1

uint32_t rcx_4 = arg3 - (arg3 - rdx + 1)

if (rcx_4 s<= 0x31)
    rcx_4 = zx.d(*(sx.q(rcx_4) + &data_14366c490))

void* rdi_1 = &arg1[sx.q(rcx_4)]
char r14 = (arg3 - rdx + 1).b
int64_t r11 = sx.q(arg3 - rdx + 1) << 2
int32_t r15 = *(r11 + 0x14366c4c8)
int32_t i = r9.d - 1 + arg3 - rdx + 1 - arg3
*arg1 = (((zx.d(*rdi_1) u>> r14) * r15) u>> 0x11).b

while (i s> 0)
    uint32_t r8_2 = zx.d(*(rdi_1 + 1))
    rdi_1 += 1
    int32_t r9_4 = i - (arg3 - rdx + 1)
    uint8_t r11_4 = (((r8_2 u>> r14) * r15) u>> 0x11).b
    r8_2.b -= *(&data_14366c468 + r11) * r11_4
    *rax_2 += r8_2.b * *((sx.q(0 - (arg3 - rdx)) << 2) + &data_14366c468)
    
    if (r9_4 s<= 0)
        break
    
    rax_2 = &rax_2[1]
    i = r9_4 - 1 + arg3 - rdx + 1
    *rax_2 = r11_4

return rax_2 - arg1 + 1
