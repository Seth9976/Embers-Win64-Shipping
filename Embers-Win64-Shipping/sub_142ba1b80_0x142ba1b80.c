// 函数: sub_142ba1b80
// 地址: 0x142ba1b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg1
int32_t i_4 = 0
int16_t* r14 = arg1[2]
int32_t i = 0
int64_t* rbx = *(r15 + 0x88)

if (arg1[1].d u> 0)
    do
        uint64_t i_5 = zx.q(i)
        i += 1
        r14[i_5] = 0x3fff
    while (i u< arg1[1].d)

if (sub_142b96180(r15, 0x756e6963) == 0)
    uint64_t rbp_1 = 0
    void** const rax_2 = &data_143680ad0
    
    do
        void* rcx_1 = *rax_2
        void* r13_1 = (&data_1436800f0)[sx.q(*(rcx_1 + 8))]
        int32_t* rdi_1 = *(r13_1 + 8)
        
        if (rdi_1 != 0 && *(rcx_1 + 0x10) == 0xa)
            int32_t i_1 = *rdi_1
            
            while (i_1 != 0)
                int32_t rax_4 = sub_142b91fc0(r15)
                int32_t arg_8 = rax_4
                
                if (rax_4 != 0 && rax_4 u< arg1[1].d)
                    uint64_t rax_5 = zx.q(rax_4)
                    
                    if ((r14[rax_5] & 0x3fff) == 0x3fff)
                        r14[rax_5] = rbp_1.w
                
                int32_t j_2 = sub_142b92420(r15, i_1, &arg_8)
                uint64_t rcx_5 = zx.q(arg_8)
                int32_t j = j_2
                
                if (rcx_5.d != 0)
                    while (j u<= rdi_1[1])
                        if (rcx_5.d u< arg1[1].d && (r14[rcx_5] & 0x3fff) == 0x3fff)
                            r14[rcx_5] = rbp_1.w
                        
                        int32_t j_3 = sub_142b92420(r15, j, &arg_8)
                        rcx_5 = zx.q(arg_8)
                        j = j_3
                        
                        if (rcx_5.d == 0)
                            break
                
                i_1 = rdi_1[2]
                rdi_1 = &rdi_1[2]
            
            int32_t* rdi_2 = *(r13_1 + 0x10)
            int32_t i_2 = *rdi_2
            
            while (i_2 != 0)
                int32_t rax_8 = sub_142b91fc0(r15)
                int32_t arg_10 = rax_8
                
                if (rax_8 != 0 && rax_8 u< arg1[1].d)
                    uint64_t rax_9 = zx.q(rax_8)
                    int16_t rcx_8 = r14[rax_9]
                    
                    if ((rcx_8 & 0x3fff) == rbp_1.w)
                        r14[rax_9] = rcx_8 | 0x4000
                
                int32_t j_4 = sub_142b92420(r15, i_2, &arg_10)
                uint64_t rcx_10 = zx.q(arg_10)
                int32_t j_1 = j_4
                
                if (rcx_10.d != 0)
                    while (j_1 u<= rdi_2[1])
                        if (rcx_10.d u< arg1[1].d)
                            int16_t rax_11 = r14[rcx_10]
                            
                            if ((rax_11 & 0x3fff) == rbp_1.w)
                                r14[rcx_10] = rax_11 | 0x4000
                        
                        int32_t j_5 = sub_142b92420(r15, j_1, &arg_10)
                        rcx_10 = zx.q(arg_10)
                        j_1 = j_5
                        
                        if (rcx_10.d == 0)
                            break
                
                i_2 = rdi_2[2]
                rdi_2 = &rdi_2[2]
        
        rbp_1 = zx.q(rbp_1.d + 1)
        rax_2 = &(&data_143680ad0)[rbp_1]
    while ((&data_143680ad0)[rbp_1] != 0)
    
    i_4 = 0
    uint64_t rcx_13 = 0
    
    do
        rcx_13 = zx.q((rcx_13 + 1).d)
    while ((&data_143680ad0)[rcx_13] != 0)
    
    for (int32_t i_3 = 0x30; i_3 u<= 0x39; i_3 += 1)
        int32_t rax_12 = sub_142b91fc0(r15)
        
        if (rax_12 != 0 && rax_12 u< arg1[1].d)
            uint64_t rax_13 = zx.q(rax_12)
            r14[rax_13] |= 0x8000

if (*(arg1[0x5b] + 0x18) != 0x3fff && arg1[1].d s> 0)
    do
        int16_t r9_1 = *r14
        
        if ((r9_1 & 0x3fff) == 0x3fff)
            r9_1 &= 0xc000
            *r14 = r9_1
            *r14 = *(arg1[0x5b] + 0x18) | r9_1
        
        i_4 += 1
        r14 = &r14[1]
    while (i_4 s< arg1[1].d)

sub_142b96390(r15, rbx)
return 0
