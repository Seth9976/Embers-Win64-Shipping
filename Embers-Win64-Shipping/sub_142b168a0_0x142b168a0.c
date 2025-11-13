// 函数: sub_142b168a0
// 地址: 0x142b168a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t r14 = arg3
void* rdi = arg2
void* rsi = arg1
int32_t result

if (arg4 != 0)
    result = sub_142aa0b30(arg1, arg2, arg3, 1)
    int32_t result_3 = result
    int32_t result_1 = result
    
    if (result != 0)
        uint32_t rbx_2 = r14 - result
        uint32_t var_d8_1 = rbx_2
        void var_5c
        void* r13_1 = &var_5c
        void* var_b8_1 = &var_5c
        void* var_70_1 = &var_5c
        int32_t r15_1 = 0
        int32_t var_d0_1 = 0
        int32_t var_68_1 = 0
        int64_t var_64_1 = 0
        
        if (arg4 == 1)
            int64_t rbx_3 = sx.q(*(rsi + 0xf8))
            
            if (rbx_3.d s> 0x10)
                void* rax_2 = sub_142a7dd00(rbx_3)
                r13_1 = rax_2
                
                if (rax_2 == 0)
                    rbx_3 = zx.q(var_68_1)
                    r13_1 = var_70_1
                else
                    var_70_1 = rax_2
                    var_68_1 = rbx_3.d
            else
                rbx_3 = 0x10
                var_68_1 = 0x10
            
            memset(r13_1, 0, sx.q(rbx_3.d))
            r15_1 = var_68_1
            var_d0_1 = r15_1
            r13_1 = var_70_1
            var_b8_1 = r13_1
            rbx_2 = var_d8_1
        
        int64_t rdx = sx.q(*(*(rsi + 0xd0) + 8))
        int64_t r9 = *(rsi + 0xe0)
        int64_t var_b0_1 = r9
        
        if (*(rsi + 0xfc) != 0)
            r9 += sx.q((rdx * 3).d)
            var_b0_1 = r9
        
        int64_t r8_1 = rdx
        int32_t result_2
        void* r9_7
        
        while (true)
            char* r11_1 = *(rsi + 0xe8)
            char* var_c8_1 = r11_1
            int64_t result_6 = sx.q(result_3)
            
            if (arg4 == 1)
                void* r14_1 = nullptr
                
                if (r8_1 s> 0)
                    do
                        int64_t rsi_1 = sx.q(*(*(rsi + 0xd8) + (r14_1 << 2)))
                        
                        if (rsi_1.d != 0)
                            uint32_t rbx_4 = zx.d(*(r14_1 + r9))
                            
                            if (rbx_4 != 0xff)
                                if (rbx_4 u>= 0xfe)
                                    char r8_2 = *r11_1
                                    int32_t rdx_1 = 1
                                    
                                    if (r8_2 + 0x3e u<= 0x32 && rsi_1.d != 1)
                                        char r9_1 = r11_1[1]
                                        int32_t rdx_2
                                        
                                        if (r8_2 u< 0xe0)
                                            rdx_2.b = r9_1 s< 0xc0
                                            rdx_1 = rdx_2 + 1
                                        else if (r8_2 u>= 0xf0)
                                            if (r8_2 u< 0xe0)
                                                rdx_2.b = r9_1 s< 0xc0
                                                rdx_1 = rdx_2 + 1
                                            else if (test_bit(
                                                    sx.d(*((zx.q(r9_1) u>> 4) + 0x14363c6e8)), 
                                                    zx.d(r8_2) & 7))
                                                rdx_1 = 2
                                                
                                                if (rsi_1.d != 2 && r11_1[2] s< 0xc0)
                                                    rdx_1 = 3
                                                    
                                                    if (rsi_1.d != 3 && r11_1[3] s< 0xc0)
                                                        rdx_1 = 4
                                        else if (test_bit(
                                                sx.d(*((zx.q(r8_2) & 0xf) + " 000000000000")), 
                                                zx.d(r9_1 u>> 5)))
                                            rdx_1 = 2
                                            
                                            if (rsi_1.d != 2 && r11_1[2] s< 0xc0)
                                                rdx_1 = 3
                                    
                                    rbx_4 = rsi_1.d - rdx_1
                                    result_6 = sx.q(result_3)
                                
                                if (rbx_4 s> var_d8_1)
                                    rbx_4 = var_d8_1
                                
                                int32_t r9_3 = rsi_1.d - rbx_4
                                
                                if (r9_3 s<= result_3)
                                    void* rdi_3 = result_6 - sx.q(r9_3) + arg2
                                    
                                    do
                                        if (*rdi_3 s>= 0xc0)
                                            int32_t r10_2 = var_64_1:4.d + r9_3
                                            int32_t rax_16 = r10_2
                                            
                                            if (r10_2 s>= r15_1)
                                                rax_16 -= r15_1
                                            
                                            if (*(sx.q(rax_16) + r13_1) == 0)
                                                int32_t i = rsi_1.d
                                                char* rax_18 = r11_1
                                                
                                                do
                                                    char rdx_5 = *(rax_18 + arg2 + result_6
                                                        - sx.q(r9_3) - r11_1)
                                                    char rcx_7 = *rax_18
                                                    rax_18 = &rax_18[1]
                                                    
                                                    if (rdx_5 != rcx_7)
                                                        goto label_142b16ba4
                                                    
                                                    i -= 1
                                                while (i s> 0)
                                                
                                                if (r9_3 == result_3)
                                                    goto label_142b16ed3
                                                
                                                if (r10_2 s>= r15_1)
                                                    r10_2 -= r15_1
                                                
                                                *(sx.q(r10_2) + r13_1) = 1
                                                var_64_1.d += 1
                                                r15_1 = var_68_1
                                                var_d0_1 = r15_1
                                                r13_1 = var_70_1
                                                var_b8_1 = r13_1
                                            label_142b16ba4:
                                                result_6 = sx.q(result_3)
                                                r11_1 = var_c8_1
                                        
                                        if (rbx_4 == 0)
                                            break
                                        
                                        rbx_4 -= 1
                                        r9_3 += 1
                                        rdi_3 -= 1
                                    while (r9_3 s<= result_3)
                                
                                r8_1 = rdx
                                r9 = var_b0_1
                            
                            r11_1 = &r11_1[rsi_1]
                            var_c8_1 = r11_1
                        
                        r14_1 += 1
                        rsi = arg1
                    while (r14_1 s< r8_1)
                    
                    rdi = arg2
                
                goto label_142b16d4a
            
            int32_t rcx_8 = 0
            int32_t var_a8_1 = 0
            uint32_t rsi_2 = 0
            void* r12_1 = nullptr
            int32_t result_8
            
            if (r8_1 s<= 0)
                result_3 = result_1
                rsi = arg1
            label_142b16d4e:
                int32_t r8_5
                void* r9_6
                
                if (var_d8_1 == 0 && result_3 != r14)
                    if (var_64_1.d == 0)
                        int32_t result_7 = result_3
                        int32_t result_5 = sub_142aa0b30(rsi, rdi, result_3, 1)
                        result_3 = result_5
                        result_1 = result_5
                        rbx_2 = result_7 - result_5
                        var_d8_1 = rbx_2
                        
                        if (result_5 != 0 && rbx_2 != 0)
                            r15_1 = var_68_1
                            var_d0_1 = r15_1
                            r13_1 = var_70_1
                            var_b8_1 = r13_1
                            r8_1 = rdx
                            r9 = var_b0_1
                            continue
                        
                        r9_7 = var_70_1
                        result_2 = result_3
                        break
                        break
                    
                    int32_t rax_22 = sub_142b17610(rsi, rdi, result_3)
                    
                    if (rax_22 s<= 0)
                        r8_5 = var_68_1
                        r9_6 = var_70_1
                    else
                        if (rax_22 == result_3)
                            r9_7 = var_70_1
                            result_2 = 0
                            break
                        
                        result_3 -= rax_22
                        result_1 = result_3
                        int32_t rdx_9 = var_64_1:4.d + rax_22
                        r15_1 = var_68_1
                        var_d0_1 = r15_1
                        
                        if (rdx_9 s>= r15_1)
                            rdx_9 -= r15_1
                        
                        int64_t rax_23 = sx.q(rdx_9)
                        r13_1 = var_70_1
                        var_b8_1 = r13_1
                        
                        if (*(rax_23 + r13_1) != 0)
                            *(rax_23 + r13_1) = 0
                            var_64_1.d -= 1
                            r15_1 = var_68_1
                            var_d0_1 = r15_1
                            r13_1 = var_70_1
                            var_b8_1 = r13_1
                        
                        var_64_1:4.d = rdx_9
                        rbx_2 = 0
                        var_d8_1 = 0
                        r8_1 = rdx
                        r9 = var_b0_1
                        continue
                    
                    goto label_142b16e49
                
                if (var_64_1.d == 0)
                    result_8 = result_3
                else
                    r8_5 = var_d0_1
                    r9_6 = var_b8_1
                label_142b16e49:
                    int32_t rcx_14 = var_64_1:4.d + 1
                    int32_t rax_26
                    
                    if (rcx_14 s>= r8_5)
                    label_142b16e7c:
                        int32_t r8_6 = r8_5 - var_64_1:4.d
                        rcx_14 = 0
                        int64_t rax_27 = 0
                        
                        if (*r9_6 == 0)
                            do
                                rcx_14 += 1
                                rax_27 += 1
                            while (*(r9_6 + rax_27) == 0)
                        
                        *(r9_6 + rax_27) = 0
                        var_64_1.d -= 1
                        rax_26 = r8_6 + rcx_14
                    else
                        void* rdx_11 = sx.q(rcx_14) + r9_6
                        
                        while (*rdx_11 == 0)
                            rcx_14 += 1
                            rdx_11 += 1
                            
                            if (rcx_14 s>= r8_5)
                                goto label_142b16e7c
                        
                        *(sx.q(rcx_14) + r9_6) = 0
                        var_64_1.d -= 1
                        rax_26 = rcx_14 - var_64_1:4.d
                    
                    var_64_1:4.d = rcx_14
                    result_3 -= rax_26
                    result_1 = result_3
                    rbx_2 = 0
                    var_d8_1 = 0
                    r15_1 = var_68_1
                    var_d0_1 = r15_1
                    r13_1 = var_70_1
                    var_b8_1 = r13_1
                    r8_1 = rdx
                    r9 = var_b0_1
                    continue
            else
                int32_t* r13_3 = *(arg1 + 0xd8)
                char* rdx_6 = r11_1
                
                while (true)
                    int64_t r14_2 = sx.q(*r13_3)
                    
                    if (r14_2.d != 0)
                        uint32_t r10_3 = zx.d(*(r12_1 + r9))
                        
                        if (r10_3 u>= 0xfe)
                            r10_3 = r14_2.d
                        
                        if (r10_3 s> rbx_2)
                            r10_3 = rbx_2
                        
                        int32_t r11_5 = r14_2.d - r10_3
                        int64_t result_4 = sx.q(result_1)
                        
                        if (r11_5 s<= result_4.d)
                            int64_t rdi_4 = sx.q(r11_5)
                            int64_t result_9 = result_4
                            void* rbx_8 = result_4 - rdi_4 + arg2
                            
                            while (true)
                                if (r10_3 s>= rsi_2)
                                    if (*rbx_8 s>= 0xc0 && (r10_3 s> rsi_2 || rdi_4 s> sx.q(rcx_8)))
                                        int32_t i_1 = r14_2.d
                                        char* r8_3 = var_c8_1
                                        char* r9_5 = arg2 + result_9 - sx.q(r11_5) - r8_3
                                        
                                        do
                                            char rcx_11 = *(r9_5 + r8_3)
                                            char rax_21 = *r8_3
                                            r8_3 = &r8_3[1]
                                            
                                            if (rcx_11 != rax_21)
                                                result_4 = zx.q(result_1)
                                                result_9 = result_6
                                                goto label_142b16cb0
                                            
                                            i_1 -= 1
                                        while (i_1 s> 0)
                                        
                                        rcx_8 = r11_5
                                        var_a8_1 = rcx_8
                                        rsi_2 = r10_3
                                        break
                                    
                                label_142b16cb0:
                                    r10_3 -= 1
                                    r11_5 += 1
                                    rdi_4 += 1
                                    rbx_8 -= 1
                                    
                                    if (r11_5 s<= result_4.d)
                                        continue
                                
                                rcx_8 = var_a8_1
                                break
                            
                            rdx_6 = var_c8_1
                            rbx_2 = var_d8_1
                            r8_1 = rdx
                            r9 = var_b0_1
                        
                        rdx_6 = &rdx_6[r14_2]
                        var_c8_1 = rdx_6
                    
                    r12_1 += 1
                    r13_3 = &r13_3[1]
                    
                    if (r12_1 s>= r8_1)
                        break
                
                if (rcx_8 == 0 && rsi_2 == 0)
                    result_3 = result_1
                    rdi = arg2
                    rsi = arg1
                label_142b16d4a:
                    r14 = arg3
                    goto label_142b16d4e
                
                result_3 = result_1 - rcx_8
                bool cond:1_1 = result_1 == rcx_8
                result_1 = result_3
                
                if (cond:1_1)
                label_142b16ed3:
                    result_8 = 0
                else
                    rbx_2 = 0
                    var_d8_1 = 0
                    r15_1 = var_d0_1
                    r13_1 = var_b8_1
                    rdi = arg2
                    rsi = arg1
                    r14 = arg3
                    continue
            
            r9_7 = var_b8_1
            result_2 = result_8
            break
        
        if (r9_7 != &var_5c)
            sub_142a7dcd0(r9_7)
        
        result = result_2
else
    result = sub_142b17240(arg1, arg2, arg3)

__security_check_cookie(rax_1 ^ &var_f8)
return result
