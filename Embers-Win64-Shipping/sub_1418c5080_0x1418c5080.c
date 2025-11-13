// 函数: sub_1418c5080
// 地址: 0x1418c5080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efb2d0)
int64_t* r10 = *(arg1 + 0x48)
uint64_t rdx = sx.q(*(arg1 + 0x50))
int64_t* r9 = r10
void* rcx = &r10[rdx]

if (r10 != rcx)
    do
        if (*r9 == arg2)
            int32_t r9_2 = ((r9 - r10) s>> 3).d
            
            if (r9_2 != 0xffffffff)
                int32_t rax_3 = rdx.d - r9_2 - 1
                
                if (rax_3 s>= 1)
                    rax_3 = 1
                
                if (rax_3 != 0)
                    memcpy(&r10[sx.q(r9_2)], &r10[sx.q(rdx.d - rax_3)], rax_3 << 3)
                    rdx = zx.q(*(arg1 + 0x50))
                
                *(arg1 + 0x50) = (rdx - 1).d
            
            break
        
        r9 = &r9[1]
    while (r9 != rcx)

int32_t arg_8 = *(arg2 + 0x1c)
int32_t arg_c = *(arg2 + 0x18)
sub_1418bace0(arg1 + 0x38, &arg_8)
*(arg1 + 0x30) -= zx.q(*(arg2 + 0x18))
LeaveCriticalSection(&data_143efb2d0)
int64_t rsi = *(arg1 + 8)
EnterCriticalSection(&data_143efb2a8)
EnterCriticalSection(&data_143efb2d0)

if (*(arg1 + 0x40) != 1 || *(arg1 + 0x50) != 0)
    LeaveCriticalSection(&data_143efb2d0)
else
    LeaveCriticalSection(&data_143efb2d0)
    void* rdi_3 = (sx.q(*(arg1 + 0x6c)) << 4) + rsi
    int64_t* r10_1 = *(rdi_3 + 0x28)
    uint64_t r9_3 = sx.q(*(rdi_3 + 0x30))
    int64_t* rcx_3 = r10_1
    void* rdx_4 = &r10_1[r9_3]
    
    if (r10_1 != rdx_4)
        do
            if (*rcx_3 == arg1)
                int32_t rcx_5 = ((rcx_3 - r10_1) s>> 3).d
                
                if (rcx_5 != 0xffffffff)
                    int32_t rax_12 = r9_3.d - rcx_5 - 1
                    
                    if (rax_12 s>= 1)
                        rax_12 = 1
                    
                    if (rax_12 != 0)
                        memcpy(&r10_1[sx.q(rcx_5)], &r10_1[sx.q(r9_3.d - rax_12)], rax_12 << 3)
                        r9_3 = zx.q(*(rdi_3 + 0x30))
                    
                    *(rdi_3 + 0x30) = (r9_3 - 1).d
                
                break
            
            rcx_3 = &rcx_3[1]
        while (rcx_3 != rdx_4)
    
    int64_t rdi_4 = sx.q(*(arg1 + 0x6c))
    *(arg1 + 0x28) = data_14399fa54
    void* rdi_6 = (rdi_4 << 4) + rsi
    int64_t rsi_1 = sx.q(*(rdi_6 + 0xb0))
    int32_t rax_17 = (rsi_1 + 1).d
    *(rdi_6 + 0xb0) = rax_17
    
    if (rax_17 s> *(rdi_6 + 0xb4))
        sub_1405a4d70(rdi_6 + 0xa8)
    
    *(*(rdi_6 + 0xa8) + (rsi_1 << 3)) = arg1

return LeaveCriticalSection(&data_143efb2a8) __tailcall
