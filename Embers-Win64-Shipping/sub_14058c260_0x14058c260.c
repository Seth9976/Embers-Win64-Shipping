// 函数: sub_14058c260
// 地址: 0x14058c260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3
void* rbx = -ffffffffffffffff

do
    rbx += 1
while (*(arg2 + rbx) != 0)

int64_t rcx = rdi[3]
void* r8 = arg3[2]

if (rbx u> rcx - r8)
    rdi = sub_14058c800(rdi, rbx, 0, nullptr, arg2, rbx)
else
    rdi[2] = r8 + rbx
    int64_t* r14_1 = rdi
    
    if (rcx u>= 0x10)
        r14_1 = *rdi
    
    void* r15_1
    
    if (rbx + arg2 u<= r14_1 || arg2 u> r14_1 + r8)
        r15_1 = rbx
    else if (r14_1 u> arg2)
        r15_1 = r14_1 - arg2
    else
        r15_1 = nullptr
    
    memmove(r14_1 + rbx, r14_1, r8.d + 1)
    memcpy(r14_1, arg2, r15_1.d)
    memcpy(r14_1 + r15_1, r15_1 + rbx + arg2, rbx.d - r15_1.d)

arg1[1].q = 0
*(arg1 + 0x18) = 0
*arg1 = *rdi
arg1[1] = *(rdi + 0x10)
rdi[2] = 0
rdi[3] = 0xf
*rdi = 0
return arg1
