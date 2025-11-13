// 函数: sub_1403dba20
// 地址: 0x1403dba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rbx_1 = *(arg1 + 0x200) + 1
int32_t rax_2 = *(arg1 + 0x15c)
uint64_t rdi = zx.q(*(arg1 + 0x228))
int32_t j = *(&data_1436aff60 + (zx.q(*(arg1 + 0x25c)) << 2))
uint64_t rdx_2 = zx.q(j * rdi.d)
uint64_t rdi_1 = zx.q(*(arg1 + 0x23b))
void* var_60_1
uint64_t var_58_1

if (rdi_1 == 4)
    var_60_1 = arg1
    int32_t r8_4 = rdi.d & 1
    var_58_1 = rdx_2
    int32_t rdx_7
    int32_t r10_1
    int32_t r11_2
    int32_t r14_2
    
    if ((rax_2 & 0x10000) != 0)
        r8_4 ^= 1
        rdx_7 = not.d((rdx_2 << 2).d) & 4
        r14_2 = -4
        r10_1 = 0
        r11_2 = 4
        
        if (rdi.d != 0)
        label_1403dbc3a:
            char* rbp_7 = zx.q((rdi.d - 1) u>> 1) + rbx_1
            char* rsi_6 = zx.q((var_58_1.d - 1) u>> 1) + rbx_1
            int32_t r8_9 = r8_4 << 2
            int32_t i = 0
            
            do
                char* r12_2 = rbp_7
                int32_t rbx_6 = zx.d(*rbp_7) u>> r8_9.b & 0xf
                rdi_1 = 0
                
                do
                    int32_t rcx_2
                    rcx_2.b = 4
                    rcx_2.b = 4 - rdx_7.b
                    char* rax_5 = rsi_6
                    *rax_5 = (rbx_6 << rdx_7.b).b | ((0xf0f u>> rcx_2.b).b & *rsi_6)
                    rsi_6 = &rax_5[-1]
                    bool cond:4_1 = rdx_7 == r10_1
                    
                    if (rdx_7 != r10_1)
                        rsi_6 = rax_5
                    
                    rdx_7 += r14_2
                    
                    if (cond:4_1)
                        rdx_7 = r11_2
                    
                    rdi_1 = zx.q(rdi_1.d + 1)
                while (rdi_1.d s< j)
                
                rbp_7 = r12_2
                int32_t rcx_4 = r8_9 + r14_2
                
                if (r8_9 == r10_1)
                    rbp_7 = &r12_2[-1]
                
                if (r8_9 == r10_1)
                    rcx_4 = r11_2
                
                i += 1
                r8_9 = rcx_4
            while (i u< *(var_60_1 + 0x228))
    else
        rdx_7 = (rdx_2 << 2).d & 4
        r10_1 = 4
        r11_2 = 0
        r14_2 = 4
        
        if (rdi.d != 0)
            goto label_1403dbc3a
label_1403dbe52:
    arg1 = var_60_1
    rdi_1.b = *(arg1 + 0x23b)
    rdx_2 = var_58_1
else
    if (rdi_1.b == 2)
        var_60_1 = arg1
        int32_t r8_6 = (rdi * 2 + 6).d & 6
        var_58_1 = rdx_2
        int32_t rdx_11
        int32_t r10_2
        int32_t r11_3
        int32_t r14_3
        
        if ((rax_2 & 0x10000) != 0)
            rdx_11 = ((rdx_2 * 2).d + 6) & 6
            r10_2 = -2
            r11_3 = 0
            r14_3 = 6
            
            if (rdi.d != 0)
            label_1403dbd10:
                char* rbp_11 = zx.q((rdi.d - 1) u>> 2) + rbx_1
                char* rsi_11 = zx.q((var_58_1.d - 1) u>> 2) + rbx_1
                int32_t i_1 = 0
                
                do
                    char* r12_3 = rbp_11
                    int32_t rbx_9 = zx.d(*rbp_11) u>> r8_6.b & 3
                    rdi_1 = 0
                    
                    do
                        int32_t rcx_5
                        rcx_5.b = 6
                        rcx_5.b = 6 - rdx_11.b
                        char* rax_9 = rsi_11
                        *rax_9 = (rbx_9 << rdx_11.b).b | ((0x3f3f u>> rcx_5.b).b & *rsi_11)
                        rsi_11 = &rax_9[-1]
                        bool cond:8_1 = rdx_11 == r11_3
                        
                        if (rdx_11 != r11_3)
                            rsi_11 = rax_9
                        
                        rdx_11 += r10_2
                        
                        if (cond:8_1)
                            rdx_11 = r14_3
                        
                        rdi_1 = zx.q(rdi_1.d + 1)
                    while (rdi_1.d s< j)
                    
                    rbp_11 = r12_3
                    int32_t rcx_7 = r8_6 + r10_2
                    
                    if (r8_6 == r11_3)
                        rbp_11 = &r12_3[-1]
                    
                    if (r8_6 == r11_3)
                        rcx_7 = r14_3
                    
                    i_1 += 1
                    r8_6 = rcx_7
                while (i_1 u< *(var_60_1 + 0x228))
        else
            r8_6 ^= 6
            rdx_11 = not.d((rdx_2 * 2).d + 6) & 6
            r10_2 = 2
            r11_3 = 6
            r14_3 = 0
            
            if (rdi.d != 0)
                goto label_1403dbd10
        goto label_1403dbe52
    
    if (rdi_1.b == 1)
        int32_t r9_1 = (rdi - 1).d
        int32_t rbp_1 = (rdx_2 - 1).d
        int32_t r8_2 = r9_1 & 7
        var_60_1 = arg1
        var_58_1 = rdx_2
        int32_t rdx_5
        int32_t r11_1
        int32_t r12_1
        int32_t r14_1
        
        if ((rax_2 & 0x10000) != 0)
            rdx_5 = rbp_1 & 7
            r11_1 = 7
            r12_1 = 0
            r14_1 = -1
            
            if (rdi.d != 0)
            label_1403dbdd2:
                char* r9_3 = zx.q(r9_1 u>> 3) + rbx_1
                uint64_t rbp_14 = zx.q(rbp_1 u>> 3) + rbx_1
                int32_t i_2 = 0
                
                do
                    int32_t rsi_16 = zx.d(*r9_3) u>> r8_2.b & 1
                    int32_t rbx_10 = 0
                    
                    do
                        rdi_1 = rbp_14
                        *rdi_1 = (rsi_16 << rdx_5.b).b | ((0x7f7f u>> (7 - rdx_5.b)).b & *rbp_14)
                        rbp_14 = rdi_1 - 1
                        bool cond:11_1 = rdx_5 == r12_1
                        bool cond:12_1 = rdx_5 != r12_1
                        rdx_5 += r14_1
                        
                        if (cond:11_1)
                            rdx_5 = r11_1
                        
                        if (cond:12_1)
                            rbp_14 = rdi_1
                        
                        rbx_10 += 1
                    while (rbx_10 s< j)
                    
                    int32_t rcx_9 = r8_2 + r14_1
                    
                    if (r8_2 == r12_1)
                        rcx_9 = r11_1
                    
                    if (r8_2 == r12_1)
                        r9_3 = &r9_3[-1]
                    
                    i_2 += 1
                    r8_2 = rcx_9
                while (i_2 u< *(var_60_1 + 0x228))
        else
            r8_2 ^= 7
            rdx_5 = not.d(rbp_1) & 7
            r11_1 = 0
            r12_1 = 7
            r14_1 = 1
            
            if (rdi.d != 0)
                goto label_1403dbdd2
        goto label_1403dbe52
    
    if (rdi.d != 0)
        var_60_1 = arg1
        rdi_1 u>>= 3
        var_58_1 = rdx_2
        int64_t rsi_3 = zx.q((rdx_2 - 1).d) * rdi_1 + rbx_1
        int64_t rbp_4 = zx.q(rdi.d - 1) * rdi_1 + rbx_1
        int64_t rbx_3 = neg.q(rdi_1)
        int32_t i_3 = 0
        
        do
            void var_50
            memcpy(&var_50, rbp_4, rdi_1.d)
            int32_t r14_4 = 0
            
            do
                memcpy(rsi_3, &var_50, rdi_1.d)
                rsi_3 += rbx_3
                r14_4 += 1
            while (r14_4 s< j)
            
            rbp_4 += rbx_3
            i_3 += 1
        while (i_3 u< *(var_60_1 + 0x228))
        
        goto label_1403dbe52
*(arg1 + 0x228) = rdx_2.d
uint64_t rdx_19 = zx.q(rdx_2.d)
uint64_t rax_16 = zx.q(rdi_1.b)
uint64_t result

if (rdi_1.b u< 8)
    result = (rax_16 * rdx_19 + 7) u>> 3
else
    result = (rax_16 u>> 3) * rdx_19

*(arg1 + 0x230) = result
__security_check_cookie(rax_1 ^ &var_88)
return result
