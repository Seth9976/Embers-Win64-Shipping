// 函数: sub_14131f840
// 地址: 0x14131f840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi_3 = ((sx.q(arg2) + 0xa) << 4) + arg1

if (*rsi_3 == arg3)
    return 

int32_t rdx = 0
int32_t rbx_2

if (arg3 == 0 || *arg3 == 0)
    rbx_2 = 0
else
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    rbx_2 = rbx_1.d + 1

rsi_3[1].d = 0

if (*(rsi_3 + 0xc) != rbx_2)
    sub_1405947f0(rsi_3, rbx_2)
    rdx = rsi_3[1].d

int32_t rax = rdx + rbx_2
rsi_3[1].d = rax

if (rax s> *(rsi_3 + 0xc))
    sub_140594770(rsi_3)

if (rbx_2 != 0)
    memcpy(*rsi_3, arg3, rbx_2 * 2)
