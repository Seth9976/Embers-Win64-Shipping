// 函数: sub_142054390
// 地址: 0x142054390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9 = *arg1
int32_t i = 0
char* arg_8 = r9

if (*(arg1 + 0xc) u<= 0)
    return 

int32_t j = arg1[1].d

do
    char* rsi_1 = arg2 + (zx.q(j * i) << 2)
    uint64_t rax
    
    if (j - 8 u> 0x7ff7)
        int32_t r10_3 = 0
        char* rdx_4 = rsi_1
        
        if (j != 0)
            do
                char rcx_4 = *r9
                char r11_2 = r9[1]
                char rbx_1 = r9[2]
                char r8_4 = r9[3]
                r9 = &r9[4]
                *rdx_4 = rcx_4
                rdx_4[1] = r11_2
                rdx_4[2] = rbx_1
                rdx_4[3] = r8_4
                rdx_4 = &rdx_4[4]
                
                if (rcx_4 != 1 || r11_2 != rcx_4 || rbx_1 != rcx_4)
                    r10_3 = 0
                    j -= 1
                else
                    rax = zx.q(zx.d(r8_4) << r10_3.b)
                    
                    while (rax.d s> 0)
                        *rdx_4 = 0x101
                        j -= 1
                        rdx_4[2] = 1
                        rax = zx.q(rax.d - 1)
                        rdx_4[3] = r8_4
                        rdx_4 = &rdx_4[4]
                    
                    r10_3 += 8
            while (j != 0)
            
            arg_8 = r9
    else if (*r9 == 2)
        char r8_2 = r9[1]
        char rdx_1 = r9[2]
        char r10_1 = r9[3]
        r9 = &r9[4]
        arg_8 = r9
        
        if (r8_2 != 2 || rdx_1 s< 0)
            *rsi_1 = 2
            rsi_1[1] = r8_2
            rsi_1[2] = rdx_1
            rsi_1[3] = r10_1
            sub_1420626c0(&rsi_1[4], &arg_8, j - 1)
            r9 = arg_8
        else
            char* r11_1 = rsi_1
            int64_t j_2 = 4
            int64_t j_1
            
            do
                int32_t r10_2 = 0
                rax = r11_1
                
                if (j != 0)
                    do
                        uint32_t k_5 = zx.d(*r9)
                        r9 = &r9[1]
                        arg_8 = r9
                        uint64_t k_4 = zx.q(k_5)
                        
                        if (k_5.b u> 0x80)
                            char rdx_2 = *r9
                            r9 = &r9[1]
                            arg_8 = r9
                            k_4 = zx.q(k_4.d) & 0x7f
                            
                            if (k_4.d u> 0)
                                uint64_t k_2 = zx.q(k_4.d)
                                uint64_t k
                                
                                do
                                    *rax = rdx_2
                                    rax += 4
                                    k = k_2
                                    k_2 -= 1
                                while (k != 1)
                        else if (k_5.b != 0)
                            uint64_t k_3 = k_4
                            uint64_t k_1
                            
                            do
                                char rcx_1 = *r9
                                r9 = &r9[1]
                                *rax = rcx_1
                                rax += 4
                                k_1 = k_3
                                k_3 -= 1
                            while (k_1 != 1)
                            arg_8 = r9
                        
                        r10_2 += k_4.d
                    while (r10_2 u< j)
                
                r11_1 = &r11_1[1]
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
    else
        sub_1420626c0(rsi_1, &arg_8, j)
        r9 = arg_8
    j = arg1[1].d
    uint64_t r10_4 = 0
    
    if (j != 0)
        do
            int32_t rcx_6 = (r10_4 << 2).d
            r10_4 = zx.q(r10_4.d + 1)
            uint64_t rax_4 = zx.q(rcx_6 + 2)
            void* rdx_6 = &rsi_1[zx.q(rcx_6)]
            char r8_5 = *rdx_6
            *rdx_6 = rsi_1[rax_4]
            *(zx.q(rax_4.d) + rsi_1) = r8_5
            j = arg1[1].d
        while (r10_4.d u< j)
    
    i += 1
while (i u< *(arg1 + 0xc))
