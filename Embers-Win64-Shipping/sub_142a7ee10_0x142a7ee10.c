// 函数: sub_142a7ee10
// 地址: 0x142a7ee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 0

do
    char* string = arg1[1]
    
    if (string == 0)
        break
    
    uint64_t rbx_1
    
    if (string != arg1[6])
        char* rax_3 = strchr(string, 0x3b)
        arg1[1] = rax_3
        
        if (rax_3 != 0)
            rbx_1 = zx.q(rax_3.d - string.d)
            arg1[1] = &rax_3[1]
        else
            rbx_1 = -1
            
            do
                rbx_1 += 1
            while (string[rbx_1] != 0)
    else
        rbx_1 = -1
        arg1[1] = *arg1
        
        do
            rbx_1 += 1
        while (string[rbx_1] != 0)
    
    if (rbx_1.d != 0)
        arg1[0x15].d = 0
        *arg1[0xe] = 0
        sub_142a8cbd0(&arg1[0xe], string, rbx_1.d, arg2)
        void* string_1 = arg1[0xe]
        char* rax_6 = strrchr(string_1, 0x5c)
        
        if (rax_6 != 0)
            string_1 = &rax_6[1]
        
        if (arg1[0x1e].b == 1 && rbx_1.d s>= 4)
            int32_t rax_8 = strncmp(sx.q((rbx_1 - 4).d) + arg1[0xe], arg1[3], 4)
            
            if (rax_8 == 0)
                void* rbp_1 = arg1[0xe]
                char* rax_9 = strrchr(rbp_1, rax_8 + 0x5c)
                
                if (rax_9 != 0)
                    rbp_1 = &rax_9[1]
                
                if (strncmp(rbp_1, arg1[2], zx.q(arg1[5].d)) == 0)
                    int64_t rcx_7 = -1
                    
                    do
                        rcx_7 += 1
                    while (*(string_1 + rcx_7) != 0)
                    
                    if (rcx_7 == zx.q(arg1[5].d + 4))
                        return arg1[0xe]
        
        char* rdx_4 = arg1[0xe]
        
        if (rdx_4[sx.q((rbx_1 - 1).d)] == 0x5c)
        label_142a7f04d:
            sub_142a8cbd0(&arg1[0xe], arg1[0x16] + 1, arg1[0x1d].d - 1, arg2)
            int32_t rax_17 = arg1[4].d
            
            if (rax_17 != 0)
                if (rax_17 s> 4)
                    sub_142a8cef0(&arg1[0xe], arg2)
                
                uint128_t zmm1 = *(arg1 + 0x18)
                sub_142a8cbd0(&arg1[0xe], zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg2)
            
            return arg1[0xe]
        
        int32_t rax_15
        
        if (rbx_1.d s>= 4)
            rax_15, rdx_4 = strncmp(&rdx_4[sx.q((rbx_1 - 4).d)], ".dat", 4)
        
        if (rbx_1.d s< 4 || rax_15 != 0)
            int64_t r10_1 = sx.q(arg1[0x1d].d)
            
            if (r10_1.d != 0 && rbx_1.d s> r10_1.d)
                rdx_4 = sx.q(rbx_1.d) - r10_1 + arg1[0xe]
                void* r9_3 = arg1[0x16] - rdx_4
                uint32_t i
                uint32_t r8_3
                
                do
                    r8_3 = zx.d(*rdx_4)
                    i = zx.d(*(rdx_4 + r9_3))
                    
                    if (r8_3 != i)
                        break
                    
                    rdx_4 = &rdx_4[1]
                while (i != 0)
                
                if (r8_3 - i == 0)
                    sub_142a8cfb0(&arg1[0xe], rbx_1.d - r10_1.d)
            
            rdx_4.b = 0x5c
            sub_142a8cb30(&arg1[0xe], rdx_4.b, arg2)
            goto label_142a7f04d
while (*arg1 != 0)

return 0
