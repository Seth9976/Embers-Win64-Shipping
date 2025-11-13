// 函数: sub_14175a890
// 地址: 0x14175a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg1[8]

if (r8 != 0)
    int32_t i_3 = *(r8 + 0x18)
    int32_t i_1 = 0
    int32_t r9_2 = 0
    int32_t r14_1 = 0
    int32_t rbp_1 = 0
    int32_t rsi_1 = 0
    
    if (i_3 s> 0)
        int64_t* r8_2 = *(r8 + 0xc8)
        uint64_t i_2 = zx.q(i_3)
        uint64_t i
        
        do
            int64_t* rax_2 = *r8_2
            
            if (rax_2 != 0)
                int64_t rcx_1 = sx.q(rax_2[1].d)
                void* rdx_1 = *rax_2
                
                if (*(rcx_1 + *(rdx_1 + 0x368)) == 0)
                    char rcx_2 = *(rcx_1 + *(rdx_1 + 0x398))
                    
                    if (rcx_2 == 1)
                        rcx_2 = 1
                    
                    int32_t rdx_2 = sx.d(rcx_2)
                    
                    if (rdx_2 == 1)
                        rbp_1 += 1
                    else if (rdx_2 == 2)
                        r14_1 += 1
                    else if (rdx_2 == 3)
                        r9_2 += 1
                    else if (rdx_2 == 4)
                        rsi_1 += 1
            
            r8_2 = &r8_2[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int64_t rbx
    
    if (arg1[0xa].d != r9_2 || arg1[0xc].d != r14_1 || arg1[0xe].d != rbp_1
            || arg1[0x10].d != rsi_1)
        int32_t rax_5 = arg1[0xa].d
        rbx = 1
        
        if (r9_2 s> rax_5)
            arg1[0xa].d = r9_2
            
            if (r9_2 s> *(arg1 + 0x54))
                sub_1405a4d70(&arg1[9])
        else if (r9_2 s< rax_5 && r9_2 != rax_5)
            arg1[0xa].d = r9_2
            sub_1405c53d0(&arg1[9])
        
        int32_t rax_6 = arg1[0xc].d
        
        if (r14_1 s> rax_6)
            arg1[0xc].d = r14_1
            
            if (r14_1 s> *(arg1 + 0x64))
                sub_1405a4d70(&arg1[0xb])
        else if (r14_1 s< rax_6 && r14_1 != rax_6)
            arg1[0xc].d = r14_1
            sub_1405c53d0(&arg1[0xb])
        
        int32_t rax_7 = arg1[0xe].d
        
        if (rbp_1 s> rax_7)
            arg1[0xe].d = rbp_1
            
            if (rbp_1 s> *(arg1 + 0x74))
                sub_1405a4d70(&arg1[0xd])
        else if (rbp_1 s< rax_7 && rbp_1 != rax_7)
            arg1[0xe].d = rbp_1
            sub_1405c53d0(&arg1[0xd])
        
        int32_t rax_8 = arg1[0x10].d
        
        if (rsi_1 s> rax_8)
            arg1[0x10].d = rsi_1
            
            if (rsi_1 s> *(arg1 + 0x84))
                sub_1405a4d70(&arg1[0xf])
        else if (rsi_1 s< rax_8 && rsi_1 != rax_8)
            arg1[0x10].d = rsi_1
            sub_1405c53d0(&arg1[0xf])
    else
        rbx.b = 0
    
    void* rax = arg1[8]
    
    if (*(rax + 0x18) s> 0)
        int64_t r10_2 = 0
        int64_t r11_2 = 0
        int64_t rsi_2 = 0
        int64_t rbp_2 = 0
        int64_t* r9_3 = nullptr
        
        do
            int64_t* rdx_10 = *(r9_3 + *(rax + 0xc8))
            
            if (rdx_10 != 0)
                void* r8_3 = *rdx_10
                int64_t rcx_7 = sx.q(rdx_10[1].d)
                
                if (*(rcx_7 + *(r8_3 + 0x368)) == 0)
                    char rcx_8 = *(rcx_7 + *(r8_3 + 0x398))
                    
                    if (rcx_8 == 1)
                        rcx_8 = 1
                    
                    int32_t r8_4 = sx.d(rcx_8)
                    int64_t rax_11
                    
                    if (r8_4 == 1)
                        int64_t** rcx_12 = arg1[0xd]
                        bool cond:9_1 = *(rcx_12 + r10_2) != rdx_10
                        *(rcx_12 + r10_2) = rdx_10
                        rax_11.b = cond:9_1
                        rbx.b |= rax_11.b
                        r10_2 += 8
                    else if (r8_4 == 2)
                        int64_t** rcx_11 = arg1[0xb]
                        bool cond:10_1 = *(rcx_11 + r11_2) != rdx_10
                        *(rcx_11 + r11_2) = rdx_10
                        rax_11.b = cond:10_1
                        rbx.b |= rax_11.b
                        r11_2 += 8
                    else if (r8_4 == 3)
                        int64_t** rcx_10 = arg1[9]
                        bool cond:11_1 = *(rcx_10 + rsi_2) != rdx_10
                        *(rcx_10 + rsi_2) = rdx_10
                        rax_11.b = cond:11_1
                        rbx.b |= rax_11.b
                        rsi_2 += 8
                    else if (r8_4 == 4)
                        int64_t** rcx_9 = arg1[0xf]
                        bool cond:12_1 = *(rcx_9 + rbp_2) != rdx_10
                        *(rcx_9 + rbp_2) = rdx_10
                        rax_11.b = cond:12_1
                        rbx.b |= rax_11.b
                        rbp_2 += 8
            
            rax = arg1[8]
            i_1 += 1
            r9_3 = &r9_3[1]
        while (i_1 s< *(rax + 0x18))
    
    if (rbx.b != 0 || arg2 != 0)
        sub_14175b460(arg1)
    
    arg1[0x11].b = 0
else if (arg2 != 0)
    return sub_14175b460(arg1) __tailcall
