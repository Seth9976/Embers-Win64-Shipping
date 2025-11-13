// 函数: sub_142c60e50
// 地址: 0x142c60e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
char* rcx = *(arg2 + 0x10)
int64_t rax = -1
*(arg2 + 0x18) = rcx

do
    rax += 1
while (rcx[rax] != 0)

if (rax != 0 && rcx[rax - 1] == 0x2e)
    rcx[rax - 1] = 0

char* r8 = *(arg2 + 0x10)
char* rcx_1 = r8
char rax_1 = *r8

if (rax_1 == 0)
    return rax_1

while (true)
    rcx_1 = &rcx_1[1]
    
    if (rax_1 s< 0)
        break
    
    rax_1 = *rcx_1
    
    if (rax_1 == 0)
        return rax_1

CHAR* arg_8 = nullptr

if (sub_142c877f0(r8, &arg_8) == 0)
    return sub_142c64850(rdi, "Failed to convert %s to ACE;\n", *(arg2 + 0x10), arg3)

CHAR* rax_3 = arg_8
*(arg2 + 8) = rax_3
*(arg2 + 0x10) = rax_3
return rax_3
