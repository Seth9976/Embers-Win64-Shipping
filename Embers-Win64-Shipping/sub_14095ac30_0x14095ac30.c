// 函数: sub_14095ac30
// 地址: 0x14095ac30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[1].d)
int32_t rax = 0

if (arg3 s>= 0)
    rax = arg3

if (rax s> rbx.d)
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
    
    memset(rbx + *arg2, 0, sx.q(rax - rbx.d))
else if (rax s< rbx.d && rax != rbx.d)
    arg2[1].d = rax

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t rax_1 = 0
arg2[5] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

if (0 == *(arg1 + 0x24))
    *(arg1 + 0x24) = 0
else
    rax_1 = *(arg1 + 0x24)

int64_t rdx_1 = sx.q(rax_1)
int32_t rbx_2 = (rdx_1 + 1).d & *(arg1 + 8)
int32_t rax_2 = 0

if (0 == *(arg1 + 0x20))
    *(arg1 + 0x20) = 0
else
    rax_2 = *(arg1 + 0x20)

if (rbx_2 == rax_2)
    rax_2.b = 0
    return rax_2

sub_14094de10((sx.q(*(arg1 + 8)) & rdx_1) * 0x30 + *(arg1 + 0x10), arg2)
*(arg1 + 0x24) = rbx_2
int64_t* rax_4
rax_4.b = 1
return rax_4
