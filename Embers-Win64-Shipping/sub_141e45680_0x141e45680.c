// 函数: sub_141e45680
// 地址: 0x141e45680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143a2d2a0 != 1)
    return 

int128_t* r10_1 = *(arg2 + 0x370)
int128_t* rax = r10_1
void* r9_3 = &r10_1[sx.q(*(arg2 + 0x378))]

if (r10_1 == r9_3)
    return 

int32_t rdx = data_143a2d2a4

while (true)
    if (arg3 s>= data_143a2d2a8)
        int64_t rcx = (*rax):8.q
        
        if (rcx.b != 0)
            bool cond:1_1
            
            if (rdx s< 0)
                cond:1_1 = arg3 s>= (rcx u>> 0x20).d
            else
                cond:1_1 = arg3 s>= rdx
            
            if (cond:1_1)
                break
    
    rax = &rax[1]
    
    if (rax == r9_3)
        return 

rax = (rax - r10_1) s>> 4

if (rax.d == 0xffffffff)
    return 

int64_t rbx_2 = sx.q(rax.d) * 2
sub_141e3b060(arg1, *arg1, r10_1 + (rbx_2 << 3))
arg1[0x16].w = 0x101
*(arg1 + 0xb4) = *(*(arg2 + 0x370) + (rbx_2 << 3))
