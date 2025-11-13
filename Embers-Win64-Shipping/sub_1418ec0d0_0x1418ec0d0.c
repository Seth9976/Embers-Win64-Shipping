// 函数: sub_1418ec0d0
// 地址: 0x1418ec0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
int64_t rax_2 = sx.q(arg1[9].d) - 1
int32_t r12 = 0
void* r13 = &arg1[7]
int64_t r15 = sx.q(*arg2)
void* rax_3 = r13

if (r8 != 0)
    rax_3 = r8

int32_t i = *(rax_3 + ((r15 & rax_2) << 2))

if (i != 0xffffffff)
    int64_t rsi_1 = *arg1
    
    do
        int64_t rcx_2 = sx.q(i) * 5
        int64_t rbp_1 = rcx_2 << 3
        
        if (*(rsi_1 + (rcx_2 << 3)) == r15.d)
            int64_t* rcx_3 = *(rsi_1 + rbp_1 + 8)
            int64_t* rdx = *(arg2 + 8)
            int64_t count = sx.q(rcx_3[1].d)
            
            if (count.d == rdx[1].d && memcmp(*rcx_3, *rdx, count) == 0)
                void* rax_6 = *(r13 + 8)
                
                if (rax_6 != 0)
                    r13 = rax_6
                
                void* rdx_3 = ((sx.q(*(rsi_1 + rbp_1 + 0x24)) & rax_2) << 2) + r13
                int32_t j = *rdx_3
                
                while (j != 0xffffffff)
                    if (j == i)
                        *rdx_3 = *(rsi_1 + rbp_1 + 0x20)
                        break
                    
                    int64_t j_1 = sx.q(j)
                    int64_t rdx_5 = j_1 + ((j_1 + 1) << 2)
                    j = *(rsi_1 + (rdx_5 << 3))
                    rdx_3 = rsi_1 + (rdx_5 << 3)
                
                int64_t* rsi_2 = *(*arg1 + rbp_1 + 0x10)
                
                if (rsi_2 != 0)
                    int64_t rcx_7 = *rsi_2
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    j_sub_140a74f90(rsi_2)
                
                r12 = 1
                sub_1405c3590(arg1, i, 1)
                break
        
        i = *(rsi_1 + rbp_1 + 0x20)
    while (i != 0xffffffff)

return zx.q(r12)
