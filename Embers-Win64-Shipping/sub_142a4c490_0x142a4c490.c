// 函数: sub_142a4c490
// 地址: 0x142a4c490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_578
int64_t rax_1 = __security_cookie ^ &var_578
int32_t r12 = 0
char* string = arg1
int64_t r15 = 0
int32_t var_520 = 0
int32_t var_51c = 0
uint64_t result

if (arg2 != 0x40)
    result = 0
else
    int64_t r11_1 = 0
    int64_t var_510_1 = 0
    
    while (true)
        while (*string == 0x20)
            string = &string[1]
        
        char var_4f8[0x1c]
        void var_4dc
        
        if (*string != 0)
            if (r11_1 == 0x4b0)
            label_142a4c826:
                *arg9 = 5
                result = 0
                break
            
            char* rax_3 = strchr(string, 0x3d)
            char* string_1 = strchr(string, 0x3b)
            
            if (rax_3 == 0 || (string_1 != 0 && string_1 u< rax_3))
            label_142a4c7da:
                *arg9 = 3
                result = 0
                break
            
            int64_t i = rax_3 - string
            
            if (i s>= 0x19)
                goto label_142a4c826
            
            int32_t r15_1 = 0
            int64_t r14_1 = 0
            int32_t rsi_1 = 0
            
            if (i s<= 0)
                goto label_142a4c7da
            
            do
                uint32_t rcx_3 = zx.d(*string)
                
                if (rcx_3.b != 0x20)
                    r15_1 += 1
                    var_4f8[var_510_1 + r14_1] = sub_142a86220(rcx_3)
                    r14_1 += 1
                
                rsi_1 += 1
                string = &string[1]
            while (sx.q(rsi_1) s< i)
            
            r12 = 0
            
            if (r15_1 == 0)
                goto label_142a4c7da
            
            r11_1 = var_510_1
            void* rbx_2 = &rax_3[1]
            var_4f8[r11_1 + r14_1] = 0
            *(&var_4dc + r11_1) = r15_1
            
            while (*rbx_2 == 0x20)
                rbx_2 += 1
            
            if (*rbx_2 == 0 || rbx_2 == string_1)
                goto label_142a4c7da
            
            void var_4d8
            *(&var_4d8 + r11_1) = rbx_2
            string = string_1
            int32_t rcx_5 = 0
            uint64_t rax_10
            
            if (string_1 == 0)
                rax_10 = -1
                
                do
                    rax_10 += 1
                while (*(rbx_2 + rax_10) != 0)
                
                int64_t rcx_6 = sx.q(rax_10.d)
                
                if (rax_10.d != 0)
                    while (*(rbx_2 + rcx_6 - 1) == 0x20)
                        rax_10 = zx.q(rax_10.d - 1)
                        int64_t temp1_1 = rcx_6
                        rcx_6 -= 1
                        
                        if (temp1_1 == 1)
                            break
            else
                void* rax_7 = &string_1[-1]
                
                if (string_1[-1] == 0x20)
                    do
                        rcx_5 += 1
                        rax_7 -= 1
                    while (*rax_7 == 0x20)
                
                string = &string_1[1]
                rax_10 = zx.q(string_1.d - rbx_2.d - rcx_5)
            
            r15 = sx.q(var_520)
            int32_t r9 = 0
            void var_4d0
            *(&var_4d0 + r11_1) = rax_10.d
            
            if (r15.d s<= 0)
            label_142a4c6ef:
                r15 = zx.q(r15.d + 1)
                r11_1 += 0x30
                var_520 = r15.d
                var_510_1 = r11_1
            else
                while (true)
                    void* rax_12 = &var_4f8[sx.q(r9) * 0x30]
                    void* r8_1 = &var_4f8[r15 * 0x30] - rax_12
                    uint32_t i_1
                    uint32_t rdx
                    
                    do
                        rdx = zx.d(*rax_12)
                        i_1 = zx.d(*(rax_12 + r8_1))
                        
                        if (rdx != i_1)
                            break
                        
                        rax_12 += 1
                    while (i_1 != 0)
                    
                    if (rdx - i_1 == 0)
                        break
                    
                    r9 += 1
                    
                    if (r9 s>= r15.d)
                        goto label_142a4c6ef
            
            if (string != 0)
                continue
        
        int32_t* r14_3 = arg9
        int32_t* var_548_1 = r14_3
        sub_142a94ab0(&var_4f8, r15.d, 0x30, sub_142a4ca60, 0, 0)
        int32_t r13_2 = var_51c
        int32_t rdi = 0
        int64_t r8_2 = arg5
        int64_t i_3 = sx.q(r15.d)
        int64_t r10_2
        
        if (r15.d s<= 0)
            r10_2 = arg3
        else
            void* rbx_3 = &var_4dc
            int64_t i_2
            
            do
                int32_t rdx_4 = arg4
                
                if (r12 + 1 + *rbx_3 s< rdx_4)
                    void* rdx_3 = &var_4f8[sx.q(rdi) * 0x30]
                    void* rcx_18 = sx.q(r12) - rdx_3 + arg3
                    char j
                    
                    do
                        j = *rdx_3
                        *(rcx_18 + rdx_3) = j
                        rdx_3 += 1
                    while (j != 0)
                    rdx_4 = arg4
                    int64_t rax_16 = sx.q(*rbx_3 + r12)
                    
                    if (arg8 == 0)
                        *(rax_16 + arg3) = 0
                    else
                        *(rax_16 + arg3) = 0x3d
                
                r12 = r12 + 1 + *rbx_3
                
                if (arg8 == 0)
                    r10_2 = arg3
                else
                    int64_t _Count = sx.q(*(rbx_3 + 0xc))
                    
                    if (_Count.d + r12 s<= rdx_4)
                        strncpy(sx.q(r12) + arg3, *(rbx_3 + 4), _Count)
                        rdx_4 = arg4
                    
                    r12 += *(rbx_3 + 0xc)
                    r10_2 = arg3
                    
                    if (rdi s< (r15 - 1).d)
                        if (r12 s< rdx_4)
                            *(sx.q(r12) + r10_2) = 0x3b
                        
                        r12 += 1
                    
                    r8_2 = arg5
                
                if (r8_2 != 0)
                    if (*(rbx_3 + 0xc) + 1 + r13_2 s< arg6)
                        char* rdx_6 = *(rbx_3 + 4)
                        char* rcx_27 = sx.q(r13_2) + r8_2
                        char j_1
                        
                        do
                            j_1 = *rdx_6
                            rdx_6 = &rdx_6[1]
                            *rcx_27 = j_1
                            rcx_27 = &rcx_27[1]
                        while (j_1 != 0)
                        *(sx.q(*(rbx_3 + 0xc) + r13_2) + r8_2) = 0
                    
                    r13_2 = r13_2 + 1 + *(rbx_3 + 0xc)
                
                rdi += 1
                rbx_3 += 0x30
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            r14_3 = arg9
        
        if (r8_2 != 0)
            *(sx.q(r13_2) + r8_2) = 0
            
            if (arg7 != 0)
                *arg7 = r13_2
        
        result = sub_142a8c3f0(r10_2, arg4, r12, r14_3)
        break

__security_check_cookie(rax_1 ^ &var_578)
return result
