// 函数: sub_142a9ebe0
// 地址: 0x142a9ebe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg2 + 0x1c)

if (r8 s> 0)
    int32_t* rdx = *(arg2 + 0x10)
    
    if (rdx != 0)
        sub_142a9e420(arg1, rdx, r8, 0)

void* rax = *(arg2 + 0x50)

if (rax == 0)
    return arg1

int32_t i = 0

if (*(rax + 8) s<= 0)
    return arg1

do
    void* rax_1 = sub_142ae72d0(rax, i)
    void* rcx_1 = *(arg1 + 0x50)
    int32_t rax_2
    
    if (rcx_1 != 0)
        rax_2 = sub_142ae7470(rcx_1, rax_1, 0)
    
    if (rcx_1 == 0 || rax_2 s< 0)
        sub_142a9de00(arg1, rax_1)
    
    rax = *(arg2 + 0x50)
    i += 1
while (i s< *(rax + 8))

return arg1
