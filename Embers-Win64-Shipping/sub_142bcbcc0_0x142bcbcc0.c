// 函数: sub_142bcbcc0
// 地址: 0x142bcbcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rsi = *(arg2 + 0x98)
int64_t rbp = 0
int32_t r9 = *(arg2 + 0x13c)
int32_t* r10 = *(arg2 + 0x140)
int32_t result_2 = 3
int32_t r8 = 0

if (r9 == 0)
    goto label_142bcbd9b

int32_t* rax_2 = r10

while (*rax_2 != 8)
    r8 += 1
    rax_2 = &rax_2[4]
    
    if (r8 u>= r9)
        goto label_142bcbd9b

int32_t rax_3 = *(arg1 + 0xc)
void* rbx_3 = &r10[zx.q(r8) * 4]
int32_t rdx = *(rbx_3 + 0xc)
int32_t rax_4

if (rax_3 u<= rdx)
    rax_4 = sub_142b970b0(arg1, rdx - rax_3)

int32_t result
int32_t result_1
int32_t r12

if (rax_3 u> rdx || rax_4 != 0)
    result_2 = 0x53
label_142bcbd9b:
    result_1 = result_2
    r12 = 0
    
    if (result_2 == 0)
        goto label_142bcbd57
    
    result = result_2
else
    r12 = *(rbx_3 + 8)
    result_1 = 0
label_142bcbd57:
    result = sub_142b96500(arg1, 8)
    result_1 = result
    
    if (result == 0)
        int32_t rax_5 = sub_142b96770(arg1)
        int32_t r14_2 = rax_5 & 4
        int32_t i_6
        
        if (r14_2 == 0)
            i_6 = sub_142b96770(arg1)
        else
            i_6 = sub_142b96720(arg1)
        
        int32_t i_5 = i_6
        sub_142b96620(arg1)
        
        if ((rax_5 & 0xffffff00) == 0 && i_5 u> 0x10000)
            i_5 = 0x10000
        
        if ((rax_5 & 0xffffff00) == 0 && i_5 == *(arg2 + 0x1a8))
            int32_t* rax_6 = sub_142b99a90(rsi, 4, 0, i_5, 0, &result_1)
            result = result_1
            
            if (result == 0)
                if (i_5 != 0)
                    int32_t* rbx_5 = rax_6
                    uint64_t i_3 = zx.q(i_5)
                    uint64_t i
                    
                    do
                        int32_t* rdx_2 = &result_1
                        int32_t rax_7
                        
                        if (r14_2 == 0)
                            rax_7 = sub_142b96dd0(arg1, rdx_2)
                        else
                            rax_7 = sub_142b96d30(arg1, rdx_2)
                        
                        *rbx_5 = rax_7
                        rbx_5 = &rbx_5[1]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                
                int32_t* r10_1
                
                if (i_5 != 0 && result_1 != 0)
                label_142bcbed3:
                    r10_1 = rax_6
                else
                    int32_t i_1 = 0
                    void var_58
                    void* rbx_6 = &var_58
                    
                    do
                        int32_t* rdx_3 = &result_1
                        
                        if (r14_2 == 0)
                            sub_142b96dd0(arg1, rdx_3)
                        else
                            sub_142b96d30(arg1, rdx_3)
                        
                        if (result_1 != 0)
                            goto label_142bcbed3
                        
                        i_1 += 1
                        rbx_6 += 4
                    while (i_1 u< 4)
                    
                    r10_1 = rax_6
                    
                    if (i_5 != 0)
                        int32_t* r8_1 = r10_1
                        uint64_t i_4 = zx.q(i_5)
                        uint64_t i_2
                        
                        do
                            int32_t rcx_9 = *r8_1
                            
                            if (rcx_9 u<= r12)
                                *(*(arg2 + 0x1b0) + rbp + 0xc) = *(arg1 + 0xc) + rcx_9
                            
                            r8_1 = &r8_1[1]
                            rbp += 0x10
                            i_2 = i_4
                            i_4 -= 1
                        while (i_2 != 1)
                    
                    *(arg2 + 0x1d0) = rax_5
                
                sub_142b99980(rsi, r10_1)
                result = result_1
        else
            result = 3
__security_check_cookie(rax_1 ^ &var_a8)
return result
