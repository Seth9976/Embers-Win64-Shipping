// 函数: sub_142c90db0
// 地址: 0x142c90db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
int64_t rdx = arg2[0xd]
int64_t* rsi = *(r10 + 0x4ed8)
void* r9 = *rsi
*arg2 = *(r9 + 0x28) + rdx
int64_t rax = *(r9 + 0x38)

if (rax != 0)
    rax += rdx

arg2[0xa] = rax
int64_t rax_1 = *(r9 + 0x48)

if (rax_1 != 0)
    rax_1 += rdx

arg2[8] = rax_1
int64_t rax_2 = *(r9 + 0x50)
int64_t rcx

if (rax_2 == 0)
    rcx = 0
else
    rcx = rax_2 + rdx

arg2[0xb] = rcx
arg2[7] = *(r9 + 0x40) + rdx
int64_t rax_3 = *(r9 + 0x30)
int64_t rcx_3

if (rax_3 == 0)
    rcx_3 = 0
else
    rcx_3 = rax_3 + rdx

arg2[9] = rcx_3
void* rcx_4 = *arg1
int64_t (* rax_4)(int64_t arg1, char* arg2, char* arg3) = *(rcx_4 + 0x820)

if (rax_4 == 0)
    rax_4 = sub_142c924f0

if (rax_4(*(rcx_4 + 0x828), *(r10 + 0x4eb0)) != 0)
    sub_142c8cc00(0, arg2)
else if (arg2[1].d != 2)
    sub_142c69f60(r10 + 0x4eb8, *(r10 + 0x4ec0), arg2, &arg2[0x10])
else
    char* str1 = arg2[0xb]
    
    if (str1 == 0)
        sub_142c69f60(r10 + 0x4eb8, *(r10 + 0x4ec0), arg2, &arg2[0x10])
    else if (strstr(str1, " -> ") != 0)
        sub_142c8cc00(0, arg2)
    else
        sub_142c69f60(r10 + 0x4eb8, *(r10 + 0x4ec0), arg2, &arg2[0x10])

*(*rsi + 0x10) = 0
return 0
