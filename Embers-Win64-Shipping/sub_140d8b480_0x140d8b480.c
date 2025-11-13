// 函数: sub_140d8b480
// 地址: 0x140d8b480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg2 + 0x128)
void* rbx = arg2
void* rdi = arg1

if (i_2 == 0)
    return 

int32_t r8_1 = *(arg1 + 0x128)
int32_t rdx = r8_1 + i_2

if (rdx s> *(arg1 + 0x12c))
    sub_140dbd360(arg1, rdx)
    r8_1 = *(arg1 + 0x128)

void* rax_1 = *(rbx + 0x120)
int32_t i_1 = i_2
void* rcx = *(rdi + 0x120)

if (rax_1 != 0)
    rbx = rax_1

if (rcx != 0)
    rdi = rcx

int64_t rcx_2 = sx.q(r8_1) * 0x48
void* rax = rdi + 0x38 + rcx_2
void* r8_4 = rbx - rcx_2 - rdi
int32_t i

do
    *(rax - 0x38) = *rbx
    *(rax - 0x28) = *(rbx + 0x10)
    *(rax - 0x18) = *(rbx + 0x20)
    *(rax - 8) = *(rbx + 0x30)
    *rax = *(r8_4 + rax)
    void* rcx_4 = *(r8_4 + rax + 8)
    *(rax + 8) = rcx_4
    
    if (rcx_4 != 0)
        *(rcx_4 + 8) += 1
    
    rbx += 0x48
    rax += 0x48
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x128) += i_2
