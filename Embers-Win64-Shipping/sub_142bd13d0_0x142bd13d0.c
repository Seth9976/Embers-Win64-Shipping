// 函数: sub_142bd13d0
// 地址: 0x142bd13d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142bd1440(arg1)

if (arg1[3].d s>= 2)
    return 0

int64_t r8 = *arg1
int64_t rdx = arg1[2]
uint32_t i

do
    char* rax_2 = *arg1
    
    if (rax_2 u>= rdx)
        break
    
    i = zx.d(*rax_2)
    *arg1 = &rax_2[1]
    
    if (i == 0xd || i == 0xa)
        arg1[3].d = 2
        return r8 - 1
    
    if (i == 0xffffffff)
        break
while (i != 0x1a)
arg1[3].d = 3
return r8 - 1
