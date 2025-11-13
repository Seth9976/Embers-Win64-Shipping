// 函数: sub_142a83ee0
// 地址: 0x142a83ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rbp = *(arg1 + 8)
int32_t* rbx = *(arg1 + 0x30)
int64_t rdx = *(arg1 + 0x10)
int32_t r14 = (*(arg1 + 0x20)).d
int32_t r15 = 0
int64_t var_78 = rdx
void* rcx = *(*(rbp + 0x30) + 0x20)
int64_t var_88_1
int64_t r13_1

if (rbx == 0)
    r13_1 = *(rcx + 0x40)
    var_88_1 = r13_1
else
    r13_1 = *(rcx + 0x48)
    var_88_1 = r13_1
    
    if (r13_1 == 0)
        r15 = -1
        r13_1 = *(rcx + 0x40)
        var_88_1 = r13_1

char rax_3 = *(rbp + 0x119)
char var_98
int32_t var_94
int64_t var_90
int64_t var_80
void var_70

if (rax_3 s< 0)
    var_90 = rdx
    var_80 = *(arg1 + 0x18)
    var_98 = *(arg1 + 2)
    var_94 = r15
    memcpy(&var_70, rbp + 0xd4, neg.d(sx.d(rax_3)) * 2)
    r15 = -1
    *(arg1 + 0x10) = &var_70
    int64_t rcx_3 = sx.q(*(rbp + 0x119))
    *(arg1 + 2) = 0
    *(arg1 + 0x18) = &var_70 - rcx_3 * 2
    *(rbp + 0x119) = 0
else
    var_90 = 0
    var_98 = 0
    var_80 = 0
    var_94 = 0

while (true)
    if (*arg2 s<= 0)
        r13_1(arg1, arg2)
    
    char var_97_1
    
    if (*arg2 s> 0 || *arg2 s> 0 || *(arg1 + 2) == 0 || *(arg1 + 0x10) != *(arg1 + 0x18)
            || *(rbp + 0x54) != 0)
        var_97_1 = 0
    else
        var_97_1 = 1
    
    r13_1.b = 0
    int32_t rdi_1 = 0
    
    while (true)
        if (rbx != 0)
            int32_t rax_10 = *(arg1 + 0x20) - r14
            
            if (rax_10 s> 0)
                int32_t rdx_5
                
                if (r15 s< 0)
                    rdx_5 = -1
                else
                    rdx_5 = r15 - rdi_1
                
                int64_t r8_2 = sx.q(rax_10) << 2
                void* r9_1 = &rbx[sx.q(rax_10)]
                
                if (rdx_5 != 0)
                    if (rdx_5 s<= 0)
                        int64_t rax_14 = 0
                        uint64_t rcx_8 = (r8_2 + 3) u>> 2
                        
                        if (rbx u> r9_1)
                            rcx_8 = 0
                        
                        if (rcx_8 != 0)
                            do
                                rax_14 += 1
                                *rbx = 0xffffffff
                                rbx = &rbx[1]
                            while (rax_14 u< rcx_8)
                    else
                        int64_t rcx_6 = 0
                        uint64_t r8_4 = (r8_2 + 3) u>> 2
                        
                        if (rbx u> r9_1)
                            r8_4 = 0
                        
                        if (r8_4 != 0)
                            do
                                int32_t rax_12 = *rbx
                                
                                if (rax_12 s>= 0)
                                    *rbx = rax_12 + rdx_5
                                
                                rbx = &rbx[1]
                                rcx_6 += 1
                            while (rcx_6 u< r8_4)
                
                rbx = r9_1
                *(arg1 + 0x30) = rbx
            
            if (r15 s>= 0)
                r15 += ((*(arg1 + 0x10) - var_78) s>> 1).d
        
        uint64_t result = zx.q(*(rbp + 0x119))
        int64_t rdi_2 = var_90
        
        if (result.b s< 0)
            if (rdi_2 != 0)
                *arg2 = 5
            else
                rdi_2 = *(arg1 + 0x10)
                var_80 = *(arg1 + 0x18)
                var_98 = *(arg1 + 2)
                var_90 = rdi_2
                var_94 = r15
                memcpy(&var_70, rbp + 0xd4, neg.d(sx.d(result.b)) * 2)
                *(arg1 + 0x10) = &var_70
                int64_t rcx_12 = sx.q(*(rbp + 0x119))
                *(arg1 + 2) = 0
                *(arg1 + 0x18) = &var_70 - rcx_12 * 2
                result = zx.q(sx.d(*(rbp + 0x119)))
                int32_t temp0_1 = r15
                r15 += result.d
                *(rbp + 0x119) = 0
                
                if (temp0_1 + result.d s< 0)
                    r15 = -1
        
        int64_t rdx_7 = *(arg1 + 0x10)
        r14 = (*(arg1 + 0x20)).d
        var_78 = rdx_7
        
        if (*arg2 s> 0)
            if (r13_1.b == 0)
                goto label_142a841d3
            
        label_142a842d6:
            
            if (rdi_2 != 0)
                int64_t rdx_10 = *(arg1 + 0x10)
                int32_t rbx_3 = ((*(arg1 + 0x18) - rdx_10) s>> 1).d
                
                if (rbx_3 s> 0)
                    result = sub_142a8bca0(rbp + 0xd4, rdx_10, rbx_3)
                    rbx_3.b = neg.b(rbx_3.b)
                    *(rbp + 0x119) = rbx_3.b
                
                *(arg1 + 0x18) = var_80
                *(arg1 + 2) = var_98
                *(arg1 + 0x10) = rdi_2
        else
            r13_1 = var_88_1
            
            if (rdx_7 u< *(arg1 + 0x18))
                break
            
            if (rdi_2 != 0)
                r15 = var_94
                *(arg1 + 0x18) = var_80
                *(arg1 + 2) = var_98
                *(arg1 + 0x10) = rdi_2
                var_90 = 0
                break
            
            if (*(arg1 + 2) != rdi_2.b)
                if (*(rbp + 0x54) != rdi_2.d)
                    *arg2 = 0xb
                label_142a841d3:
                    result = zx.q(*arg2 - 0xa)
                    
                    if (result.d u> 2)
                        goto label_142a842d6
                    
                    int32_t rcx_14 = *(rbp + 0x54)
                    
                    if (rcx_14 u> 0xffff)
                        rdi_1 = 2
                        *(rbp + 0x8c) = (rcx_14 s>> 0xa).w - 0x2840
                        *(rbp + 0x8e) = (rcx_14.w & 0x3ff) | 0xdc00
                    else
                        *(rbp + 0x8c) = rcx_14.w
                        rdi_1 = 1
                    
                    *(rbp + 0x5c) = rdi_1.b
                    *(rbp + 0x54) = 0
                    int32_t rax_26
                    rax_26.b = *arg2 != 0xa
                    (*rbp)(*(rbp + 0x18), arg1, rbp + 0x8c, zx.q(rdi_1), rcx_14, rax_26, arg2)
                    r13_1.b = 1
                    continue
                
                if (*(arg1 + 2) != 0)
                    if (var_97_1 == 0)
                        break
                    
                    void* rax_27 = *(rbp + 0x30)
                    *(rbp + 0x50) = 0
                    *(rbp + 0x5b) = 0
                    *(rbp + 0xd0) = 0xffffffff
                    *(rbp + 0x119) = 0
                    result = *(*(rax_27 + 0x20) + 0x28)
                    
                    if (result != 0)
                        result = result(rbp, 2)
        
        __security_check_cookie(rax_1 ^ &var_d8)
        return result
