// 函数: sub_142b17820
// 地址: 0x142b17820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char* rdi = arg2
uint64_t result

if (arg4 != 0)
    uint32_t result_7
    int512_t zmm2
    result_7, zmm2 = sub_142aa0ce0(arg1, arg2, arg3, 1, arg5)
    uint32_t result_4 = result_7
    uint32_t result_5 = result_7
    
    if (result_7 != arg3)
        void var_5c
        void* r11_1 = &var_5c
        void* var_c8_1 = &var_5c
        void* var_70_1 = &var_5c
        int32_t r12_1 = 0
        int64_t var_68_1 = 0
        int32_t var_60_1 = 0
        int32_t r8 = arg4
        
        if (r8 == 1)
            int64_t rbx_1 = sx.q(*(arg1 + 0xf8))
            
            if (rbx_1.d s> 0x10)
                void* rax_2 = sub_142a7dd00(rbx_1)
                r11_1 = rax_2
                
                if (rax_2 == 0)
                    rbx_1 = zx.q(var_68_1.d)
                    r11_1 = var_70_1
                else
                    var_70_1 = rax_2
                    var_68_1.d = rbx_1.d
            else
                rbx_1 = 0x10
                var_68_1.d = 0x10
            
            memset(r11_1, 0, sx.q(rbx_1.d))
            r12_1 = var_68_1.d
            r11_1 = var_70_1
            var_c8_1 = r11_1
            result_4 = result_5
            r8 = arg4
        
        uint32_t result_1 = result_4
        uint32_t result_2 = result_1
        uint32_t r13_2 = arg3 - result_4
        uint32_t var_d8_1 = r13_2
        void* rcx_2 = arg1
        int64_t rdx = sx.q(*(*(rcx_2 + 0xd0) + 8))
        void* r9 = *(rcx_2 + 0xe0)
        void* var_b8_1 = r9
        
        if (*(rcx_2 + 0xfc) != 0)
            r9 += sx.q((rdx * 2).d)
            var_b8_1 = r9
            rcx_2 = arg1
        
        int64_t rsi_1 = rdx
        void* r8_8
        
        while (true)
            char* r15_1 = *(rcx_2 + 0xe8)
            char* var_98_1 = r15_1
            int64_t result_3 = sx.q(result_1)
            int64_t result_6 = result_3
            
            if (r8 == 1)
                void* r14_1 = nullptr
                
                if (rsi_1 s> 0)
                    while (true)
                        int64_t rsi_2 = sx.q(*(*(rcx_2 + 0xd8) + (r14_1 << 2)))
                        
                        if (rsi_2.d != 0)
                            uint32_t result_10 = zx.d(*(r14_1 + r9))
                            
                            if (result_10 != 0xff)
                                if (result_10 u>= 0xfe)
                                    result_10 = (rsi_2 - 1).d
                                    
                                    if (r15_1[sx.q(result_10)] s< 0xc0)
                                        result_10 = sub_142a9bab0(r15_1, 0, result_10)
                                        r12_1 = var_68_1.d
                                        r11_1 = var_70_1
                                        var_c8_1 = r11_1
                                        result_3 = result_6
                                        result_4 = result_5
                                
                                if (result_10 s> result_4)
                                    result_10 = result_4
                                
                                int32_t rbx_3 = rsi_2.d - result_10
                                
                                if (rbx_3 s<= r13_2)
                                    void* rdi_3 = &arg2[result_3 - sx.q(result_10)]
                                    
                                    while (true)
                                        if (*rdi_3 s>= 0xc0)
                                            int32_t r10_2 = var_60_1 + rbx_3
                                            int32_t rax_9 = r10_2
                                            
                                            if (r10_2 s>= r12_1)
                                                rax_9 -= r12_1
                                            
                                            if (*(sx.q(rax_9) + r11_1) == 0)
                                                int32_t i = rsi_2.d
                                                char* rax_11 = r15_1
                                                
                                                do
                                                    char rdx_3 = *(arg2 + result_3 - sx.q(result_10)
                                                        - r15_1 + rax_11)
                                                    char rcx_6 = *rax_11
                                                    rax_11 = &rax_11[1]
                                                    
                                                    if (rdx_3 != rcx_6)
                                                        r11_1 = var_c8_1
                                                        goto label_142b17a9a
                                                    
                                                    i -= 1
                                                while (i s> 0)
                                                
                                                if (rbx_3 == r13_2)
                                                    goto label_142b17d9c
                                                
                                                if (r10_2 s>= r12_1)
                                                    r10_2 -= r12_1
                                                
                                                *(sx.q(r10_2) + var_c8_1) = 1
                                                var_68_1:4.d += 1
                                                r12_1 = var_68_1.d
                                                r11_1 = var_70_1
                                                var_c8_1 = r11_1
                                            label_142b17a9a:
                                                result_3 = result_6
                                        
                                        if (result_10 != 0)
                                            result_10 -= 1
                                            rdi_3 += 1
                                            rbx_3 += 1
                                            
                                            if (rbx_3 s<= r13_2)
                                                continue
                                        
                                        result_4 = result_5
                                        break
                                
                                rcx_2 = arg1
                            
                            r9 = var_b8_1
                            r15_1 = &r15_1[rsi_2]
                        
                        r14_1 += 1
                        rsi_1 = rdx
                        
                        if (r14_1 s>= rsi_1)
                            break
                    
                    rdi = arg2
                    result_1 = result_2
                
                goto label_142b17c43
            
            int32_t r15_2 = 0
            uint32_t result_13 = 0
            uint32_t result_11 = 0
            int64_t r13_3 = 0
            
            if (rsi_1 s> 0)
                int32_t* rcx_7 = *(rcx_2 + 0xd8)
                int32_t* var_80_1 = rcx_7
                char* r8_4 = var_98_1
                
                while (true)
                    int64_t r14_2 = sx.q(*rcx_7)
                    
                    if (r14_2.d != 0)
                        uint32_t result_9 = zx.d(*(r9 + r13_3))
                        
                        if (result_9 u>= 0xfe)
                            result_9 = r14_2.d
                        
                        if (result_9 s> result_4)
                            result_9 = result_4
                        
                        int32_t r10_4 = r14_2.d - result_9
                        uint32_t rax_13 = var_d8_1
                        
                        if (r10_4 s<= rax_13)
                            int64_t result_14 = sx.q(result_9)
                            int64_t result_15 = sx.q(result_13)
                            int64_t result_12 = result_6
                            void* rdi_6 = &arg2[result_12 - result_14]
                            
                            while (true)
                                if (result_14 s>= result_15)
                                    if (*rdi_6 s>= 0xc0
                                            && (result_14 s> result_15 || r10_4 s> r15_2))
                                        int32_t i_1 = r14_2.d
                                        char* r8_5 = var_98_1
                                        void* r9_2 = arg2 + result_12 - sx.q(result_9) - r8_5
                                        
                                        do
                                            char rcx_10 = *(r8_5 + r9_2)
                                            char rax_15 = *r8_5
                                            r8_5 = &r8_5[1]
                                            
                                            if (rcx_10 != rax_15)
                                                rax_13 = var_d8_1
                                                result_12 = result_6
                                                goto label_142b17ba0
                                            
                                            i_1 -= 1
                                        while (i_1 s> 0)
                                        
                                        r15_2 = r10_4
                                        result_13 = result_9
                                        result_11 = result_9
                                        break
                                    
                                label_142b17ba0:
                                    result_9 -= 1
                                    result_14 -= 1
                                    rdi_6 += 1
                                    r10_4 += 1
                                    
                                    if (r10_4 s<= rax_13)
                                        continue
                                
                                result_13 = result_11
                                break
                            
                            rcx_7 = var_80_1
                            r8_4 = var_98_1
                            rsi_1 = rdx
                            r9 = var_b8_1
                        
                        r8_4 = &r8_4[r14_2]
                        var_98_1 = r8_4
                        result_4 = result_5
                    
                    r13_3 += 1
                    rcx_7 = &rcx_7[1]
                    var_80_1 = rcx_7
                    
                    if (r13_3 s>= rsi_1)
                        break
                
                if (r15_2 != 0 || result_13 != 0)
                    result_1 = result_2 + r15_2
                    result_2 = result_1
                    r13_2 = var_d8_1 - r15_2
                    bool cond:0_1 = var_d8_1 == r15_2
                    var_d8_1 = r13_2
                    
                    if (cond:0_1)
                    label_142b17d9c:
                        result_1 = arg3
                    else
                        result_4 = 0
                        result_5 = 0
                        r11_1 = var_c8_1
                        rdi = arg2
                        rcx_2 = arg1
                        r8 = arg4
                        continue
                    
                    r8_8 = var_c8_1
                    break
                    break
                
                rdi = arg2
                result_1 = result_2
            
            r13_2 = var_d8_1
        label_142b17c43:
            void* r8_7
            
            if (result_4 != 0 || result_1 == 0)
                if (var_68_1:4.d == 0)
                    r8_8 = var_c8_1
                    break
                    break
                
                r8_7 = var_c8_1
            label_142b17d31:
                int32_t rcx_13 = var_60_1 + 1
                int32_t rax_20
                
                if (rcx_13 s>= r12_1)
                label_142b17d67:
                    rcx_13 = 0
                    char* rax_21 = nullptr
                    
                    if (*r8_7 == 0)
                        do
                            rcx_13 += 1
                            rax_21 = &rax_21[1]
                        while (*(rax_21 + r8_7) == 0)
                    
                    *(rax_21 + r8_7) = 0
                    var_68_1:4.d -= 1
                    rax_20 = r12_1 - var_60_1 + rcx_13
                else
                    void* rdx_9 = sx.q(rcx_13) + r8_7
                    
                    while (*rdx_9 == 0)
                        rcx_13 += 1
                        rdx_9 += 1
                        
                        if (rcx_13 s>= r12_1)
                            goto label_142b17d67
                    
                    *(sx.q(rcx_13) + r8_7) = 0
                    var_68_1:4.d -= 1
                    rax_20 = rcx_13 - var_60_1
                
                var_60_1 = rcx_13
                result_1 += rax_20
                r13_2 -= rax_20
                result_4 = 0
                result_5 = 0
            else
                char* rdx_5 = &rdi[result_6]
                
                if (var_68_1:4.d != result_4)
                    int32_t rax_16 = sub_142b176a0(arg1, rdx_5, r13_2, zmm2)
                    
                    if (rax_16 s<= 0)
                        r12_1 = var_68_1.d
                        r8_7 = var_70_1
                    else
                        if (rax_16 == r13_2)
                            r8_8 = var_70_1
                            result_1 = arg3
                            break
                        
                        result_1 += rax_16
                        result_2 = result_1
                        r13_2 -= rax_16
                        var_d8_1 = r13_2
                        int32_t rdx_7 = var_60_1 + rax_16
                        r12_1 = var_68_1.d
                        
                        if (rdx_7 s>= r12_1)
                            rdx_7 -= r12_1
                        
                        int64_t rax_17 = sx.q(rdx_7)
                        r11_1 = var_70_1
                        var_c8_1 = r11_1
                        
                        if (*(rax_17 + r11_1) != 0)
                            *(rax_17 + r11_1) = 0
                            var_68_1:4.d -= 1
                            r12_1 = var_68_1.d
                            r11_1 = var_70_1
                            var_c8_1 = r11_1
                        
                        var_60_1 = rdx_7
                        result_4 = 0
                        result_5 = 0
                        rcx_2 = arg1
                        r9 = var_b8_1
                        r8 = arg4
                        continue
                    
                    goto label_142b17d31
                
                uint32_t result_8
                result_8, zmm2 = sub_142aa0ce0(arg1, rdx_5, r13_2, result_4 + 1, zmm2)
                result_4 = result_8
                result_5 = result_8
                
                if (result_8 == r13_2 || result_8 == 0)
                    result_1 += result_8
                    r8_8 = var_70_1
                    break
                
                result_1 += result_8
                r13_2 -= result_8
            var_d8_1 = r13_2
            result_2 = result_1
            r12_1 = var_68_1.d
            r11_1 = var_70_1
            var_c8_1 = r11_1
            rcx_2 = arg1
            r9 = var_b8_1
            r8 = arg4
        
        if (r8_8 != &var_5c)
            sub_142a7dcd0(r8_8)
        
        result = zx.q(result_1)
    else
        result = zx.q(arg3)
else
    result = sub_142b173b0(arg1, arg2, arg3, arg5)

__security_check_cookie(rax_1 ^ &var_f8)
return result
