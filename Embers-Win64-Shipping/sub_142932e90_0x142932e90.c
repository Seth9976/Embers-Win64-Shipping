// 函数: sub_142932e90
// 地址: 0x142932e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rbx = zx.q(arg2)

if (arg2 == 0xffffffff)
    rbx = -1
    
    do
        rbx += 1
    while (arg1[rbx] != 0)

char const (** const rax)[0x5] = &data_1435387a0
int32_t i = 0
data_143fecfd8 = &data_1435387a0

do
    if (rbx.d == rax[1].d)
        bool cond:0_1 = strncmp(*rax, arg1, sx.q(rbx.d)) == 0
        rax = data_143fecfd8
        
        if (cond:0_1)
            return zx.q(*(rax + 0xc))
    
    rax = &rax[2]
    i += 1
    data_143fecfd8 = rax
while (i u< 0x31)

return 0xffffffff
