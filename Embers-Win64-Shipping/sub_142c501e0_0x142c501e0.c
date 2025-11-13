// 函数: sub_142c501e0
// 地址: 0x142c501e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = arg3
int64_t i_2 = (arg2 - arg1) s>> 2
int32_t* r14 = arg2
int32_t* rdi = arg1

if (i_2 s<= 0x20)
label_142c502a0:
    
    if (i_2 s>= 2 && rdi != r14)
        void* rsi_1 = &rdi[1]
        
        if (&rdi[1] != r14)
            do
                int64_t rbp_2 = sx.q(*rsi_1)
                void* r8_2 = rsi_1 - 4
                void* r11_1 = rsi_1
                int64_t rcx_8 = rbp_2 * 0x624
                int64_t rdx_3 = sx.q(*rdi) * 0x624
                int64_t r10_3 =
                    sx.q(*(rcx_8 + arg4 + 0x10c)) << 0x20 | sx.q(*(rcx_8 + arg4 + 0x108))
                
                if (r10_3 u>=
                        (sx.q(*(rdx_3 + arg4 + 0x10c)) << 0x20 | sx.q(*(rdx_3 + arg4 + 0x108))))
                    int64_t r9_5 = sx.q(*r8_2)
                    int64_t rcx_24 = r9_5 * 0x624
                    i_2 = sx.q(*(rcx_24 + arg4 + 0x108))
                    
                    if (r10_3 u< (sx.q(*(rcx_24 + arg4 + 0x10c)) << 0x20 | i_2))
                        int64_t r10_4 = rbp_2 * 0x624
                        int64_t rcx_25
                        
                        do
                            *r11_1 = r9_5.d
                            r11_1 = r8_2
                            r9_5 = sx.q(*(r8_2 - 4))
                            r8_2 -= 4
                            rcx_25 = r9_5 * 0x624
                            i_2 = sx.q(*(r10_4 + arg4 + 0x108))
                        while ((sx.q(*(r10_4 + arg4 + 0x10c)) << 0x20 | i_2) u< (
                            sx.q(*(rcx_25 + arg4 + 0x10c)) << 0x20
                            | sx.q(*(rcx_25 + arg4 + 0x108))))
                    
                    *r11_1 = rbp_2.d
                else
                    i_2 = memmove(&rdi[1], rdi, r8_2.d + 4 - rdi.d)
                    *rdi = rbp_2.d
                
                rsi_1 += 4
            while (rsi_1 != r14)
else
    while (i s> 0)
        int32_t* var_38
        sub_142c4fd70(&var_38, rdi, r14, arg4)
        int32_t* r15_1 = var_38
        i = (i s>> 1) + (i s>> 2)
        int32_t* var_30
        
        if (((r15_1 - rdi) & 0xfffffffffffffffc) s>= ((r14 - var_30) & 0xfffffffffffffffc))
            sub_142c501e0(var_30, r14, i, arg4)
            r14 = r15_1
        else
            sub_142c501e0(rdi, r15_1, i, arg4)
            rdi = var_30
        
        i_2 = (r14 - rdi) s>> 2
        
        if (i_2 s<= 0x20)
            goto label_142c502a0
    
    if (i_2 s<= 0x20)
        goto label_142c502a0
    
    int64_t i_4 = (r14 - rdi) s>> 2
    int64_t i_1 = i_4 s>> 1
    
    if (i_1 s> 0)
        int64_t r15_4 = (i_4 - 1) s>> 1
        
        do
            int64_t r12_2 = sx.q(rdi[i_1 - 1])
            i_1 -= 1
            int64_t i_5 = i_1
            int64_t i_3 = i_1
            
            if (i_1 s< r15_4)
                do
                    int64_t r9_2 = i_3 * 2
                    int64_t r8_4 = sx.q(rdi[r9_2 + 2]) * 0x624
                    int64_t rcx_13 = sx.q(rdi[r9_2 + 1]) * 0x624
                    int64_t rcx_16 =
                        sx.q(*(r8_4 + arg4 + 0x10c)) << 0x20 | sx.q(*(r8_4 + arg4 + 0x108))
                    i_3 = sbb.q(rcx_16, rcx_16, 
                        rcx_16 u< (sx.q(*(rcx_13 + arg4 + 0x10c)) << 0x20
                            | sx.q(*(rcx_13 + arg4 + 0x108)))) + 2 + r9_2
                    i_2 = zx.q(rdi[i_3])
                    rdi[i_5] = i_2.d
                    i_5 = i_3
                while (i_3 s< r15_4)
            
            if (i_3 == r15_4 && (i_4.b & 1) == 0)
                i_2 = zx.q(rdi[i_4 - 1])
                rdi[i_5] = i_2.d
                i_5 = i_4 - 1
            
            int64_t i_6 = (i_5 - 1) s>> 1
            
            if (i_1 s< i_5)
                int64_t rsi_2 = r12_2 * 0x624
                
                do
                    int64_t r9_3 = sx.q(rdi[i_6])
                    int64_t rcx_19 = r9_3 * 0x624
                    i_2 = sx.q(*(rsi_2 + arg4 + 0x108))
                    
                    if ((sx.q(*(rcx_19 + arg4 + 0x10c)) << 0x20 | sx.q(*(rcx_19 + arg4 + 0x108)))
                            u>= (sx.q(*(rsi_2 + arg4 + 0x10c)) << 0x20 | i_2))
                        break
                    
                    rdi[i_5] = r9_3.d
                    i_5 = i_6
                    i_6 = (i_6 - 1) s>> 1
                while (i_1 s< i_5)
            
            rdi[i_5] = r12_2.d
        while (i_1 s> 0)
    
    if (i_4 s>= 2)
        void* rsi_3 = &r14[-1]
        
        do
            if (i_4 s>= 2)
                int32_t arg_8 = *rsi_3
                *rsi_3 = *rdi
                sub_142c50090(rdi, 0, (rsi_3 - rdi) s>> 2, &arg_8, arg4)
            
            rsi_3 -= 4
            i_2 = (4 - rdi + rsi_3) s>> 2
            i_4 = i_2
        while (i_2 s>= 2)

return i_2
