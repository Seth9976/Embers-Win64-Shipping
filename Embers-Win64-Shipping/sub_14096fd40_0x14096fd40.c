// 函数: sub_14096fd40
// 地址: 0x14096fd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0

if (arg3 != 0)
    do
        int64_t* r9_1 = *arg1
        
        if (r9_1 == 0)
            memset(arg2 + (zx.q(r14) << 2), 0, zx.q(arg3 - r14) << 2)
            arg1[2].d += arg3
            
            if (arg1[2].d u> arg1[3].d)
                *(arg1 + 0x14)
                *(arg1 + 0x14) = 1
            
            return 0
        
        int64_t rax_1 = r9_1[5]
        
        if (rax_1 u<= arg1[1])
            int32_t rcx = *(r9_1 + 0x14)
            int32_t rsi_2 = arg3 - r14
            
            if (rcx s> rsi_2)
                int64_t rdi_2 = sx.q(rsi_2)
                memcpy(arg2 + (zx.q(r14) << 2), *r9_1 + (sx.q(r9_1[2].d - rcx) << 2), 
                    (rdi_2 << 2).d)
                void* rax_12 = *arg1
                r14 = arg3
                *(rax_12 + 0x14) -= rsi_2
                arg1[1] += rdi_2
                arg1[2].d = 0
                *(arg1 + 0x14)
                *(arg1 + 0x14) = 0
            else
                *(arg1 + 0x14) = 0
                int64_t* rdx = *arg1
                uint64_t rsi_3 = zx.q(*(rdx + 0x14))
                memcpy(arg2 + (zx.q(r14) << 2), *rdx + (sx.q(rdx[2].d - rsi_3.d) << 2), 
                    (rsi_3 << 2).d)
                arg1[1] += rsi_3
                void* rdi_1 = *arg1
                r14 += rsi_3.d
                int64_t* rax_6 = j_sub_140a82f30(0x10)
                
                if (rax_6 != 0)
                    *rax_6 = 0
                    rax_6[1].d = *(rdi_1 + 0x20)
                    int64_t** rcx_4 = arg1[6]
                    arg1[6] = rax_6
                    *rcx_4 = rax_6
                
                *arg1 = *(*arg1 + 0x18)
        else
            arg1[1] = rax_1
    while (r14 u< arg3)

int32_t rbp_1 = arg3 - arg1[2].d
arg1[8].d
arg1[8].d += neg.d(rbp_1)
return zx.q(rbp_1)
