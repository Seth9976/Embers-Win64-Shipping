// 函数: sub_1414fd230
// 地址: 0x1414fd230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg1 + 0x90))
int64_t* r14 = nullptr

if (rbp.d s> 0)
    int64_t* r11_1 = *(arg1 + 0x88)
    int64_t rdi_1 = 0
    
    do
        int64_t* r10_1 = *r11_1
        
        if (r10_1 != 0 && r10_1[2].d == *arg2)
            char rcx = *(r10_1 + 0x15)
            
            if (rcx == *(arg2 + 5) && *(r10_1 + 0x14) == arg2[1].b
                    && *(r10_1 + 0x1e) == *(arg2 + 0xe))
                if (rcx == 0)
                    return r10_1
                
                void* rdx = arg2 + 6
                
                while (*(&r10_1[2] - arg2 + rdx) == *rdx)
                    void* rax_5 = rdx - arg2
                    rdx += 1
                    
                    if (rax_5 - 5 s>= zx.q(rcx))
                        return r10_1
        
        rdi_1 += 1
        r11_1 = &r11_1[1]
    while (rdi_1 s< rbp)

int32_t rsi_1 = rbp.d
int32_t rdx_1 = 0

if (rbp.d s> 0)
    int64_t* rax_7 = *(arg1 + 0x88)
    int64_t rcx_2 = 0
    
    do
        if (*rax_7 == 0)
            rsi_1 = rdx_1
            break
        
        rdx_1 += 1
        rcx_2 += 1
        rax_7 = &rax_7[1]
    while (rcx_2 s< rbp)

if (rsi_1 == rbp.d)
    int64_t rbp_1 = sx.q(*(arg1 + 0x90))
    int32_t rax_8 = (rbp_1 + 1).d
    *(arg1 + 0x90) = rax_8
    
    if (rax_8 s> *(arg1 + 0x94))
        sub_1405a4d70(arg1 + 0x88)
    
    *(*(arg1 + 0x88) + (rbp_1 << 3)) = 0

void*** rax_10 = j_sub_140a82f30(0x1c8)

if (rax_10 != 0)
    r14 = sub_1414fab00(rax_10, arg2, rsi_1.w)

*(*(arg1 + 0x88) + (sx.q(rsi_1) << 3)) = r14
sub_141997e80(r14)
return r14
