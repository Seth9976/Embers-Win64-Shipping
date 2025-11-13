// 函数: sub_1418ba3e0
// 地址: 0x1418ba3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[2]
*arg1 = &data_142febd80
EnterCriticalSection(&data_143efb1e0)
int64_t* r10 = rdi[2]
uint64_t rdx = sx.q(rdi[3].d)
int64_t* r9 = r10
void* rcx = &r10[rdx]

if (r10 != rcx)
    do
        if (*r9 == arg1)
            int32_t r9_2 = ((r9 - r10) s>> 3).d
            
            if (r9_2 != 0xffffffff)
                int32_t rax_3 = rdx.d - r9_2 - 1
                
                if (rax_3 s>= 1)
                    rax_3 = 1
                
                if (rax_3 != 0)
                    memcpy(&r10[sx.q(r9_2)], &r10[sx.q(rdx.d - rax_3)], rax_3 << 3)
                    rdx = zx.q(rdi[3].d)
                
                rdi[3].d = (rdx - 1).d
            
            break
        
        r9 = &r9[1]
    while (r9 != rcx)

int32_t arg_8 = *(arg1 + 0x1c)
int32_t arg_c = arg1[3].d
sub_1418bace0(&rdi[7], &arg_8)
LeaveCriticalSection(&data_143efb1e0)
*(rdi + 0x24) -= arg1[3].d
EnterCriticalSection(&data_143efb1e0)

if (rdi[8].d != 1 || rdi[3].d != 0)
    LeaveCriticalSection(&data_143efb1e0)
else
    LeaveCriticalSection(&data_143efb1e0)
    sub_1418bec60(*rdi, rdi)

*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
