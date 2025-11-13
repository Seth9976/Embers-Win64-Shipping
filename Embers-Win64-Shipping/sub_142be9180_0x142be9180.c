// 函数: sub_142be9180
// 地址: 0x142be9180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int32_t rbx = *arg2
uint32_t rdi = 0
int32_t var_64 = 0
int32_t* rsi = arg2
int64_t rcx_1 = zx.q(*(rax + 0x298)) + *(rax + 0x290)
void* rbp = arg1[3]
int32_t r10_2 = (zx.d(*(rbp + 7)) | zx.d(*(rbp + 6)) << 8) & 0xfffffffe

if (r10_2 == 0)
    return 0

uint32_t r11 = 0xffff
uint32_t i_8 = r10_2 u>> 1
uint32_t i_3 = i_8

if (arg3 != 0)
    rbx += 1

int32_t rdx = 0
uint32_t i_7 = i_8
char rdx_1

if (i_8 == 0)
    rdx_1 = arg3
else
    uint64_t r14_1 = zx.q(r10_2 + 2)
    uint64_t var_60_1 = r14_1
    
    while (true)
        i_3 = (i_7 + rdx) u>> 1
        void* rax_5 = rbp + 0xe + zx.q(i_3 * 2)
        void* rax_6 = rax_5 + r14_1
        r11 = zx.d(*(rax_5 + 1)) | zx.d(*rax_5) << 8
        uint32_t rsi_2 = zx.d(*(rax_6 + 1)) | zx.d(*rax_6) << 8
        
        if (rbx u>= rsi_2)
            if (rbx u<= r11)
                uint64_t r13_1 = zx.q(r10_2)
                void* rax_8 = rax_6 + r13_1
                void* rax_9 = rax_8 + r13_1
                int32_t r10_4 = sx.d(zx.w(*rax_8) << 8) | zx.d(*(rax_8 + 1))
                uint32_t r9_2 = zx.d(*(rax_9 + 1)) | zx.d(*rax_9) << 8
                
                if (i_3 u>= i_8 - 1 && rsi_2 == 0xffff && r11 == rsi_2 && r9_2 != 0
                        && rax_9 + 2 + zx.q(r9_2) u> rcx_1)
                    r10_4 = 1
                    r9_2 = 0
                
                if ((arg1[4].b & 2) != 0)
                    uint32_t i_5 = i_3 + 1
                    uint32_t i_4 = i_3
                    uint32_t i_9 = i_5
                    uint32_t i_2 = i_3
                    
                    if (r9_2 != 0xffff)
                        i_5 = i_3
                    
                    i_3 = i_5
                    
                    if (i_2 != 0)
                        uint32_t i
                        
                        do
                            i = i_2 - 1
                            void* rax_11 = rbp + 0xe + zx.q(i * 2)
                            uint32_t rbp_2 = zx.d(*(rax_11 + 1)) | zx.d(*rax_11) << 8
                            
                            if (rbx u> rbp_2)
                                rbp = arg1[3]
                                break
                            
                            void* rax_12 = rax_11 + var_60_1
                            r11 = rbp_2
                            rbp = arg1[3]
                            i_2 = i
                            void* rax_13 = rax_12 + r13_1
                            rsi_2 = zx.d(*(rax_12 + 1)) | zx.d(*rax_12) << 8
                            rax_9 = rax_13 + r13_1
                            r10_4 = sx.d(zx.w(*rax_13) << 8) | zx.d(*(rax_13 + 1))
                            r9_2 = zx.d(*(rax_9 + 1)) | zx.d(*rax_9) << 8
                            uint32_t i_1 = i
                            
                            if (r9_2 == 0xffff)
                                i_1 = i_3
                            
                            i_3 = i_1
                        while (i != 0)
                        r14_1 = var_60_1
                    
                    uint32_t i_10 = i_9
                    
                    if (i_3 == i_10)
                        i_3 = i_4
                        
                        if (i_2 != i_3)
                            void* rax_16 = zx.q(i_3 * 2) + 0xe + rbp
                            void* rax_17 = rax_16 + r14_1
                            r11 = zx.d(*(rax_16 + 1)) | zx.d(*rax_16) << 8
                            void* rax_18 = rax_17 + r13_1
                            rsi_2 = zx.d(*(rax_17 + 1)) | zx.d(*rax_17) << 8
                            rax_9 = rax_18 + r13_1
                            r10_4 = sx.d(zx.w(*rax_18) << 8) | zx.d(*(rax_18 + 1))
                            r9_2 = zx.d(*(rax_9 + 1)) | zx.d(*rax_9) << 8
                            i_10 = i_9
                        
                        uint32_t i_6 = i_10
                        
                        if (i_10 u< i_8)
                            uint32_t r15_1 = i_10 * 2
                            
                            do
                                void* rax_21 = zx.q(r15_1) + 0xe + rbp
                                rax_9 = rax_21 + var_60_1
                                uint32_t rbp_4 = zx.d(*(rax_9 + 1)) | zx.d(*rax_9) << 8
                                
                                if (rbx u< rbp_4)
                                    break
                                
                                void* rax_22 = rax_9 + r13_1
                                rsi_2 = rbp_4
                                rbp = arg1[3]
                                r11 = zx.d(*(rax_21 + 1)) | zx.d(*rax_21) << 8
                                rax_9 = rax_22 + r13_1
                                r10_4 = sx.d(zx.w(*rax_22) << 8) | zx.d(*(rax_22 + 1))
                                r9_2 = zx.d(*(rax_9 + 1)) | zx.d(*rax_9) << 8
                                
                                if (r9_2 != 0xffff)
                                    i_3 = i_6
                                
                                i_6 += 1
                                r15_1 += 2
                            while (i_6 u< i_8)
                            
                            rdi = 0
                        
                        i_2 = i_6 - 1
                        
                        if (i_3 == i_4)
                            i_3 = i_2
                            goto label_142be9276
                    
                    if (i_3 != i_2)
                        char* rax_25 = arg1[3] + 0xe + zx.q(i_3 * 2)
                        void* rax_26 = &rax_25[var_60_1]
                        r11 = zx.d(rax_25[1]) | zx.d(*rax_25) << 8
                        void* rax_27 = rax_26 + r13_1
                        rsi_2 = zx.d(*(rax_26 + 1)) | zx.d(*rax_26) << 8
                        rax_9 = rax_27 + r13_1
                        r10_4 = sx.d(zx.w(*rax_27) << 8) | zx.d(*(rax_27 + 1))
                        r9_2 = zx.d(*(rax_9 + 1)) | zx.d(*rax_9) << 8
                else if (r9_2 == 0xffff)
                    goto label_142be9276
                
                if (r9_2 != 0)
                    void* rax_28 = rax_9 + zx.q(r9_2 + ((rbx - rsi_2) << 1))
                    rdx_1 = arg3
                    
                    if (rdx_1 != 0 && rax_28 u> rcx_1)
                        goto label_142be927e
                    
                    rdi = zx.d(*(rax_28 + 1)) | zx.d(*rax_28) << 8
                    
                    if (rdi == 0)
                        goto label_142be927e
                    
                    rsi = arg2
                    rdi = zx.d(r10_4.w + rdi.w)
                    
                    if (rdi u>= *(*arg1 + 0x10))
                        rdi = 0
                    
                    goto label_142be9286
                
                rdx_1 = arg3
                int32_t rcx_51 = r10_4 + rbx
                rdi = zx.d(rcx_51.w)
                
                if (rdx_1 == 0)
                    goto label_142be9671
                
                if (rdi u< *(*arg1 + 0x10))
                    goto label_142be927e
                
                rdi = 0
                
                if (rcx_51 s< 0 && r10_4 + r11 s>= 0)
                    rbx = neg.d(r10_4)
                    goto label_142be927e
                
                if (rcx_51 s>= 0x10000)
                    goto label_142be927e
                
                rsi = arg2
                
                if (r10_4 + r11 s>= 0x10000)
                    rbx = 0x10000 - r10_4
                
                goto label_142be9286
            
            rdx = i_3 + 1
        else
            i_7 = i_3
        
        if (rdx u>= i_7)
        label_142be9276:
            rdx_1 = arg3
        label_142be927e:
            rsi = arg2
            break

label_142be9286:

if (rdx_1 != 0)
    if (rbx u> r11)
        i_3 += 1
        
        if (i_3 == i_8)
            return 0
    
    if (sub_142be97d0(arg1, i_3) == 0)
        arg1[5].d = rbx
        
        if (rdi == 0)
            arg1[5].d = rbx
            sub_142be9690(arg1)
            rdi = *(arg1 + 0x2c)
        else
            *(arg1 + 0x2c) = rdi
        
        if (rdi != 0)
            *rsi = arg1[5].d
    else if (rdi != 0)
        *rsi = rbx

label_142be9671:
return zx.q(rdi)
