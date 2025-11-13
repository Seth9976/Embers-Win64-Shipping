// 函数: sub_142bbc310
// 地址: 0x142bbc310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x20)
void* r14 = *(arg1 + 0x38)

if (*(arg1 + 0x28) u< &rsi[4])
    return 0xa1

char* rcx = *rsi
int64_t rdx = *(arg1 + 0x10)
int32_t rbx = 0x7fffffff
int32_t rax_1

if (*rcx != 0x1e)
    int32_t rax_2 = sub_142bc0c90(rcx, rdx)
    
    if (rax_2 s> 0x7fff)
        rax_1 = 0x7fffffff
    else if (rax_2 s>= 0xffff8001)
        rax_1 = rax_2 << 0x10
    else
        rax_1 = -0x7fffffff
else
    rax_1 = sub_142bc0db0(rcx, rdx, 0, nullptr)

*(r14 + 0x54) = sub_142b96160(rax_1)
char* rcx_2 = rsi[1]
int64_t rdx_1 = *(arg1 + 0x10)
int32_t rax_4

if (*rcx_2 != 0x1e)
    int32_t rax_5 = sub_142bc0c90(rcx_2, rdx_1)
    
    if (rax_5 s> 0x7fff)
        rax_4 = 0x7fffffff
    else if (rax_5 s>= 0xffff8001)
        rax_4 = rax_5 << 0x10
    else
        rax_4 = -0x7fffffff
else
    rax_4 = sub_142bc0db0(rcx_2, rdx_1, 0, nullptr)

*(r14 + 0x58) = sub_142b96160(rax_4)
char* rcx_4 = rsi[2]
int64_t rdx_2 = *(arg1 + 0x10)
int32_t rax_7

if (*rcx_4 != 0x1e)
    int32_t rax_8 = sub_142bc0c90(rcx_4, rdx_2)
    
    if (rax_8 s> 0x7fff)
        rax_7 = 0x7fffffff
    else if (rax_8 s>= 0xffff8001)
        rax_7 = rax_8 << 0x10
    else
        rax_7 = -0x7fffffff
else
    rax_7 = sub_142bc0db0(rcx_4, rdx_2, 0, nullptr)

*(r14 + 0x5c) = sub_142b96160(rax_7)
char* rcx_6 = rsi[3]
int64_t rdx_3 = *(arg1 + 0x10)

if (*rcx_6 != 0x1e)
    int32_t rax_11 = sub_142bc0c90(rcx_6, rdx_3)
    
    if (rax_11 s<= 0x7fff)
        if (rax_11 s>= 0xffff8001)
            rbx = rax_11 << 0x10
        else
            rbx = -0x7fffffff
else
    rbx = sub_142bc0db0(rcx_6, rdx_3, 0, nullptr)

*(r14 + 0x60) = sub_142b96160(rbx)
return 0
