// 函数: sub_140d76bb0
// 地址: 0x140d76bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1[2]
int32_t* rax_1
int32_t* r8

if (*arg1[3] != 0)
    rax_1 = rdx + 0xc
    r8 = 0x34
else
    rax_1 = rdx + 8
    r8 = 0x30

if (rdx == 0)
    rax_1 = r8

void* r8_1 = *arg1
int32_t rdx_1 = *rax_1
void* result

if (*arg1[1] != 0)
    *(r8_1 + 0x34) = rdx_1
    result = *arg1
    int32_t rcx_1 = *(result + 0x34)
    
    if (*(result + 0x30) s> rcx_1)
        *(result + 0x30) = rcx_1
else
    *(r8_1 + 0x30) = rdx_1
    result = *arg1
    int32_t rcx = *(result + 0x30)
    
    if (rcx s> *(result + 0x34))
        *(result + 0x34) = rcx

return result
