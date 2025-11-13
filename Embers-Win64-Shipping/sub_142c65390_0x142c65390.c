// 函数: sub_142c65390
// 地址: 0x142c65390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int128_t var_48
uint64_t* rax = sub_142c59600(&var_48)
int64_t r8 = sx.q(*(rbp + 0x380))
int64_t rdx = sx.q(*(rbp + 0x384))
int64_t rsi = 0x493e0
int32_t rcx_1
rcx_1.b = r8.d s> 0
int32_t rdi = 7

if (rdx.d s> 0)
    rcx_1 |= 2

if (rcx_1 == 1)
    rsi = r8
else if (rcx_1 == 2)
    rsi = rdx
else if (rcx_1 == 3)
    if (r8.d s< rdx.d)
        rdx = zx.q(r8.d)
    
    rsi = sx.q(rdx.d)

int128_t var_38 = *(rbp + 0x950)
var_48 = *rax
int64_t rax_1
int64_t r8_1
rax_1, r8_1 = sub_142c595d0(&var_48, &var_38)
int64_t rsi_1 = rsi - rax_1

if (rsi_1 s<= 0)
    sub_142c64760(rbp, "Connection time-out", r8_1, arg3)
    return 0x1c

arg1[0x85].d = sub_142c5a510(*arg2)
arg1[0xf] = *arg2
arg1[0x10] = 0
arg1[0x49] = -1
arg1[0x4a] = -1
int512_t zmm2 = sub_142c52ab0(*arg1, 0xc8, 4, arg3)

if (*(arg1[0xf] + 0x28) != 0)
    int64_t rax_7
    int64_t rdx_2
    rdx_2:rax_7 = sx.o(rsi_1)
    rsi_1 = (rax_7 - rdx_2) s>> 1

arg1[0x86] = rsi_1

if (arg1[0xf] != 0)
    int64_t i
    
    do
        int32_t rax_10
        rax_10, zmm2 = sub_142c66690(arg1, arg1[0xf], &arg1[0x49], zmm2)
        rdi = rax_10
        
        if (rax_10 == 0)
            break
        
        i = *(arg1[0xf] + 0x28)
        arg1[0xf] = i
    while (i != 0)

if (arg1[0x49] != -1)
    *(rbp + 0x4f14) += 1
    return 0

if (rdi == 0)
    rdi = 7

return zx.q(rdi)
