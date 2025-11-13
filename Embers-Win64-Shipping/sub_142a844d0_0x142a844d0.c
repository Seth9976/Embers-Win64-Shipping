// 函数: sub_142a844d0
// 地址: 0x142a844d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rdi = *(arg1 + 8)
int32_t* rbx = *(arg1 + 0x30)
int64_t rdx = *(arg1 + 0x10)
int64_t r14 = *(arg1 + 0x20)
int32_t r15 = 0
int64_t var_68 = rdx
void* rcx = *(*(rdi + 0x30) + 0x20)
int64_t var_78_1
int64_t r13_1

if (rbx == 0)
    r13_1 = *(rcx + 0x30)
    var_78_1 = r13_1
else
    r13_1 = *(rcx + 0x38)
    var_78_1 = r13_1
    
    if (r13_1 == 0)
        r15 = -1
        r13_1 = *(rcx + 0x30)
        var_78_1 = r13_1

char rax_3 = *(rdi + 0x11a)
char var_88
int32_t var_84
int64_t var_80
int64_t var_70
void var_60

if (rax_3 s< 0)
    var_80 = rdx
    var_88 = *(arg1 + 2)
    var_70 = *(arg1 + 0x18)
    var_84 = r15
    memcpy(&var_60, rdi + 0xfa, neg.d(sx.d(rax_3)))
    r15 = -1
    *(arg1 + 0x10) = &var_60
    void* rcx_3 = &var_60 - sx.q(*(rdi + 0x11a))
    *(arg1 + 2) = 0
    *(arg1 + 0x18) = rcx_3
    *(rdi + 0x11a) = 0
else
    var_80 = 0
    var_88 = 0
    var_70 = 0
    var_84 = 0

while (true)
    if (*arg2 s<= 0)
        r13_1(arg1, arg2)
    
    char var_87_1
    
    if (*arg2 s> 0 || *arg2 s> 0 || *(arg1 + 2) == 0 || *(arg1 + 0x10) != *(arg1 + 0x18)
            || *(rdi + 0x40) != 0)
        var_87_1 = 0
    else
        var_87_1 = 1
    
    r13_1.b = 0
    uint32_t count_2 = 0
    
    while (true)
        if (rbx != 0)
            int32_t rax_10 = ((*(arg1 + 0x20) - r14) s>> 1).d
            
            if (rax_10 s> 0)
                int32_t rdx_5
                
                if (r15 s< 0)
                    rdx_5 = -1
                else
                    rdx_5 = r15 - count_2
                
                int64_t r8_2 = sx.q(rax_10) << 2
                void* r9_1 = &rbx[sx.q(rax_10)]
                
                if (rdx_5 != 0)
                    if (rdx_5 s<= 0)
                        int64_t rax_14 = 0
                        uint64_t rcx_7 = (r8_2 + 3) u>> 2
                        
                        if (rbx u> r9_1)
                            rcx_7 = 0
                        
                        if (rcx_7 != 0)
                            do
                                rax_14 += 1
                                *rbx = 0xffffffff
                                rbx = &rbx[1]
                            while (rax_14 u< rcx_7)
                    else
                        int64_t rcx_5 = 0
                        uint64_t r8_4 = (r8_2 + 3) u>> 2
                        
                        if (rbx u> r9_1)
                            r8_4 = 0
                        
                        if (r8_4 != 0)
                            do
                                int32_t rax_12 = *rbx
                                
                                if (rax_12 s>= 0)
                                    *rbx = rax_12 + rdx_5
                                
                                rbx = &rbx[1]
                                rcx_5 += 1
                            while (rcx_5 u< r8_4)
                
                rbx = r9_1
                *(arg1 + 0x30) = rbx
            
            if (r15 s>= 0)
                r15 += *(arg1 + 0x10) - var_68.d
        
        uint64_t result = zx.q(*(rdi + 0x11a))
        int64_t rbp_1 = var_80
        
        if (result.b s< 0)
            if (rbp_1 != 0)
                *arg2 = 5
            else
                rbp_1 = *(arg1 + 0x10)
                var_70 = *(arg1 + 0x18)
                var_88 = *(arg1 + 2)
                var_80 = rbp_1
                var_84 = r15
                memcpy(&var_60, rdi + 0xfa, neg.d(sx.d(result.b)))
                *(arg1 + 0x10) = &var_60
                void* rcx_11 = &var_60 - sx.q(*(rdi + 0x11a))
                *(arg1 + 2) = 0
                *(arg1 + 0x18) = rcx_11
                int32_t rax_20 = sx.d(*(rdi + 0x11a))
                int32_t temp0_1 = r15
                r15 += rax_20
                *(rdi + 0x11a) = 0
                result = 0xffffffff
                
                if (temp0_1 + rax_20 s< 0)
                    r15 = -1
        
        int64_t rdx_7 = *(arg1 + 0x10)
        r14 = *(arg1 + 0x20)
        var_68 = rdx_7
        
        if (*arg2 s> 0)
            if (r13_1.b == 0)
                goto label_142a847b1
            
        label_142a848b1:
            
            if (rbp_1 != 0)
                uint32_t count_1 = *(arg1 + 0x18) - *(arg1 + 0x10)
                
                if (count_1 s> 0)
                    result = memcpy(rdi + 0xfa, *(arg1 + 0x10), count_1)
                    count_1.b = neg.b(count_1.b)
                    *(rdi + 0x11a) = count_1.b
                
                *(arg1 + 0x18) = var_70
                *(arg1 + 2) = var_88
                *(arg1 + 0x10) = rbp_1
        else
            r13_1 = var_78_1
            
            if (rdx_7 u< *(arg1 + 0x18))
                break
            
            if (rbp_1 != 0)
                r15 = var_84
                *(arg1 + 0x18) = var_70
                *(arg1 + 2) = var_88
                *(arg1 + 0x10) = rbp_1
                var_80 = 0
                break
            
            if (*(arg1 + 2) != rbp_1.b)
                if (*(rdi + 0x40) s> rbp_1.b)
                    *arg2 = 0xb
                label_142a847b1:
                    int32_t rcx_12 = *arg2
                    
                    if (rcx_12 - 0xa u> 2)
                        result = zx.q(rcx_12 - 0x12)
                    
                    if (rcx_12 - 0xa u> 2 && result.d u> 1)
                        goto label_142a848b1
                    
                    uint32_t count = sx.d(*(rdi + 0x40))
                    *(rdi + 0x5a) = count.b
                    count_2 = count
                    
                    if (count.b s> 0)
                        memcpy(rdi + 0x60, rdi + 0x41, count)
                    
                    bool cond:3_1 = *(rdi + 0x11c) != 1
                    *(rdi + 0x40) = 0
                    
                    if (not(cond:3_1) && *arg2 == 0xa)
                        *(rdi + 0x11c) = 0
                    
                    (*(rdi + 8))(*(rdi + 0x20), arg1, rdi + 0x60, zx.q(count_2), *(rdi + 0x11c), 
                        arg2, var_88, var_80, var_78_1, var_70, var_68)
                    *(rdi + 0x11c) = 1
                    r13_1.b = 1
                    continue
                
                if (*(arg1 + 2) != 0)
                    if (var_87_1 == 0)
                        break
                    
                    void* r8_8 = *(rdi + 0x30)
                    *(rdi + 0x48) = *(r8_8 + 0x28)
                    *(rdi + 0x4c) = 0
                    *(rdi + 0x40) = 0
                    *(rdi + 0x5d) = 0
                    *(rdi + 0x5a) = 0
                    *(rdi + 0x11a) = 0
                    result = *(r8_8 + 0x20)
                    int64_t r8_9 = *(result + 0x28)
                    
                    if (r8_9 != 0)
                        result = r8_9(rdi, 1)
        
        __security_check_cookie(rax_1 ^ &var_b8)
        return result
