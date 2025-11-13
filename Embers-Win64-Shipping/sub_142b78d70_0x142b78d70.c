// 函数: sub_142b78d70
// 地址: 0x142b78d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
uint64_t rdi = zx.q(arg2)
int64_t i = 0
char* result = arg3
int32_t rcx_4

do
    char rax_1
    
    if ((rdi.d & 0xfffffffa) != 0 || rdi.d == 1)
        rax_1 = *result
    else
        rax_1 = sub_142a86220(zx.d(*result))
    
    result = &result[1]
    char* rcx_3 = (rdi << 5) + i
    i += 1
    rcx_3[arg1] = rax_1
    rcx_4 = rbp + 1
    char rax_2 = *result
    
    if (rax_2 == 0x5f)
        break
    
    if (rax_2 == 0)
        break
    
    rbp = rcx_4
while (i s< 0x20)

if (rcx_4 s>= 0x20)
    *arg4 = 0xf

return result
