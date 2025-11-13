// 函数: sub_142ba2450
// 地址: 0x142ba2450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x20)
int64_t* i_2 = *(arg1 + 0x30)
int64_t rax_1 = sx.q(*(arg1 + 0x2c))
void* r13_2 = sx.q(*(arg1 + 0x1c)) * 0x30 + rdx
void* arg_8 = rdx
void* r9 = &i_2[rax_1]
void* arg_18 = r9
int32_t rsi

if (arg2 != 0)
    rsi = 8
    
    if (rdx u< r13_2)
        void* r8_2 = rdx + 0x18
        int64_t i_6 = (r13_2 - rdx - 1) u/ 0x30 + 1
        int64_t i
        
        do
            *r8_2 = *(r8_2 - 4)
            rax_1 = zx.q(*(r8_2 - 0x10))
            *(r8_2 + 4) = rax_1.d
            r8_2 += 0x30
            i = i_6
            i_6 -= 1
        while (i != 1)
        rdx = arg_8
else
    rsi = arg2 + 4
    
    if (rdx u< r13_2)
        int32_t* r8_1 = rdx + 0x18
        int64_t i_5 = (r13_2 - rdx - 1) u/ 0x30 + 1
        int64_t i_1
        
        do
            *r8_1 = r8_1[-2]
            rax_1 = zx.q(r8_1[-5])
            r8_1[1] = rax_1.d
            r8_1 = &r8_1[0xc]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        rdx = arg_8

for (; i_2 u< r9; i_2 = &i_2[1])
    void* j = *i_2
    void* j_5 = j
    
    for (int64_t rdi_1 = *(j + 0x28); j u<= rdi_1; j += 0x30)
        rax_1 = zx.q(*j)
        
        if ((rsi & rax_1.d) != 0)
            void* j_4 = j
        label_142ba2590:
            
            if (j u< rdi_1)
                void* j_1
                
                do
                    rax_1 = zx.q(*(j + 0x30))
                    j_1 = j + 0x30
                    
                    if ((rsi & rax_1.d) == 0)
                        break
                    
                    j = j_1
                while (j_1 u< rdi_1)
            
            void* j_3 = j
            j += 0x30
            void* j_2 = j
            
            for (; j u<= rdi_1; j += 0x30)
                rax_1 = zx.q(*j)
                
                if ((rsi & rax_1.d) != 0)
                    rax_1 = sub_142ba32b0(j_2, j - 0x30, j_3, j)
                    goto label_142ba2590
            
            if (j_3 != j_4)
                if (j_3 u< rdi_1)
                    rax_1 = sub_142ba32b0(j_3 + 0x30, rdi_1, j_3, j_4)
                
                rdx = arg_8
                
                if (j_4 u> rdx)
                    rax_1 = sub_142ba32b0(j_5, j_4 - 0x30, j_3, j_4)
                    rdx = arg_8
            else
                int32_t r9_2 = *(j_4 + 0x18)
                int32_t r9_3 = r9_2 - *(j_4 + 0x1c)
                
                if (r9_2 != *(j_4 + 0x1c))
                    if (j_5 u< j_4)
                        void* r8_4 = j_5 + 0x18
                        int64_t rdx_6
                        rdx_6:rax_1 = mulu.dp.q(-0x5555555555555555, j_4 - j_5 - 1)
                        int64_t k_2 = (j_4 - j_5 - 1) u/ 0x30 + 1
                        int64_t k
                        
                        do
                            int32_t rcx_9 = *(r8_4 + 4)
                            r8_4 += 0x30
                            *(r8_4 - 0x30) = rcx_9 + r9_3
                            k = k_2
                            k_2 -= 1
                        while (k != 1)
                    
                    for (void* k_1 = j_4 + 0x30; k_1 u<= rdi_1; k_1 += 0x30)
                        *(k_1 + 0x18) = *(k_1 + 0x1c) + r9_3
                
                rdx = arg_8
            
            r9 = arg_18
            break

if (arg2 != 0)
    if (rdx u< r13_2)
        int32_t* rcx_16 = rdx + 0x14
        int64_t i_8 = (r13_2 - rdx - 1) u/ 0x30 + 1
        int64_t i_3
        
        do
            rax_1 = zx.q(rcx_16[1])
            *rcx_16 = rax_1.d
            rcx_16 = &rcx_16[0xc]
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
else if (rdx u< r13_2)
    void* rcx_15 = rdx + 0x10
    int64_t i_7 = (r13_2 - rdx - 1) u/ 0x30 + 1
    int32_t rax_7
    int64_t i_4
    
    do
        rax_7 = *(rcx_15 + 8)
        *rcx_15 = rax_7
        rcx_15 += 0x30
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)
    return rax_7

return rax_1
