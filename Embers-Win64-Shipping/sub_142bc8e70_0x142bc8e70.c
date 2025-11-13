// 函数: sub_142bc8e70
// 地址: 0x142bc8e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *(arg1 + 0x2a0)
void* rsi = &arg2[0x2f]
int64_t r14 = arg2[4]
void* rdi = &arg2[0x23]
int64_t i = arg2[2]
void* r13 = &arg2[0x3b]
int64_t rbp = 0
int32_t arg_10 = 0
char arg_8 = 0
arg2[7](arg2)
char* rax = *arg2
uint32_t result

if (rax u>= i)
label_142bc92c7:
    result = 3
labelid_5:
    arg2[3].d = result
else
    uint32_t rcx_1 = zx.d(*rax)
    
    if (rcx_1 - 0x30 u>= 0xa)
        if (rcx_1.b != 0x3c)
            goto label_142bc92c7
        
        int32_t rdi_1 = 0
        result = arg2[8](arg2)
        
        if (arg2[3].d == 0)
            arg2[7](arg2)
            int64_t rsi_1 = *arg2
            
            if (rsi_1 u>= i)
                goto label_142bc92c7
            
            do
                char rcx_8 = **arg2
                
                if (rcx_8 == 0x2f)
                    rdi_1 += 1
                else if (rcx_8 == 0x3e)
                    arg2[0x22].d = rdi_1
                    *arg2 = rsi_1
                    break
                
                result = arg2[8](arg2)
                
                if (arg2[3].d != 0)
                    return result
                
                arg2[7](arg2)
            while (*arg2 u< i)
            
            rsi = &arg2[0x2f]
            rdi = &arg2[0x23]
            goto label_142bc8f7c
    else
        result = arg2[9](arg2)
        arg2[0x22].d = result
        
        if (arg2[3].d == 0)
            if (result s< 0)
                goto label_142bc92c7
            
            int64_t rcx_5 = (i - *arg2) s>> 2
            
            if (sx.q(result) s> rcx_5)
                arg2[0x22].d = rcx_5.d
            
        label_142bc8f7c:
            
            if (*arg2 u>= i || *(r13 + 0x18) != 0)
                goto label_142bc92c7
            
            result = (**r15)(rsi, zx.q(arg2[0x22].d), r14)
            
            if (result != 0)
            labelid_5:
                arg2[3].d = result
            else
                result = (**r15)(rdi, zx.q(arg2[0x22].d), r14)
                
                if (result != 0)
                labelid_5:
                    arg2[3].d = result
                else
                    result = (**r15)(r13, 4, r14)
                    
                    if (result != 0)
                    labelid_5:
                        arg2[3].d = result
                    else
                        int32_t r15_1 = 0
                        arg2[7](arg2)
                        char* rdi_2 = *arg2
                        
                        if (rdi_2 u< i)
                            int64_t r13_1 = 0
                            
                            while (true)
                                char rcx_15 = *rdi_2
                                char rax_8
                                
                                if (rcx_15 == 0x65 && &rdi_2[3] u< i && rdi_2[1] == 0x6e
                                        && rdi_2[2] == 0x64)
                                    rax_8 = rdi_2[3]
                                
                                if ((rcx_15 != 0x65 || &rdi_2[3] u>= i || rdi_2[1] != 0x6e
                                        || rdi_2[2] != 0x64 || rax_8 u> 0x20
                                        || not(test_bit(0x100003601, zx.q(rax_8)))) && rcx_15 != 0x3e)
                                    result = arg2[8](arg2)
                                    
                                    if (*arg2 u>= i)
                                        goto label_142bc92c7
                                    
                                    if (arg2[3].d != 0)
                                        return result
                                    
                                    char r14_1 = *rdi_2
                                    
                                    if (r14_1 == 0x2f || r14_1 == 0x28)
                                        void* rax_10
                                        rax_10.b = r14_1 == 0x28
                                        
                                        if (rax_10 + 2 + rdi_2 u>= i)
                                            goto label_142bc92c7
                                        
                                        uint64_t rsi_3 = zx.q(*arg2 - (&rdi_2[1]).d)
                                        
                                        if (r14_1 == 0x28)
                                            rsi_3 = zx.q(rsi_3.d - 1)
                                        
                                        result = arg2[0x2d](&arg2[0x23], zx.q(r15_1), &rdi_2[1], 
                                            zx.q((rsi_3 + 1).d))
                                        
                                        if (result != 0)
                                            goto label_142bc92cc_2
                                        
                                        *(rsi_3 + *(arg2[0x28] + r13_1)) = 0
                                        
                                        if (rdi_2[1] == 0x2e)
                                            int64_t rcx_18 = 0
                                            
                                            while (true)
                                                char rax_16 = (*".notdef")[rcx_18]
                                                rcx_18 += 1
                                                
                                                if (rax_16 != *(*(arg2[0x28] + r13_1) + rcx_18 - 1))
                                                    break
                                                
                                                if (rcx_18 == 8)
                                                    arg_10 = r15_1
                                                    arg_8 = 1
                                                    break
                                        
                                        arg2[7](arg2)
                                        
                                        if (r14_1 == 0x28)
                                            arg2[8](arg2)
                                        
                                        int64_t rsi_4 = *arg2
                                        arg2[9](arg2)
                                        
                                        if (*arg2 u>= i)
                                            goto label_142bc92c7
                                        
                                        uint64_t rdi_5 = zx.q(*arg2 - rsi_4.d)
                                        rsi = &arg2[0x2f]
                                        result = (*(rsi + 0x50))(rsi, zx.q(r15_1), rsi_4, 
                                            zx.q((rdi_5 + 1).d))
                                        
                                        if (result != 0)
                                            goto label_142bc92cc_2
                                        
                                        r15_1 += 1
                                        int64_t rax_18 = *(*(rsi + 0x28) + r13_1)
                                        r13_1 += 8
                                        *(rdi_5 + rax_18) = 0
                                        
                                        if (r15_1 s< arg2[0x22].d)
                                            goto label_142bc915c
                                    else
                                    label_142bc915c:
                                        arg2[7](arg2)
                                        rdi_2 = *arg2
                                        
                                        if (rdi_2 u< i)
                                            continue
                                
                                r13 = &arg2[0x3b]
                                break
                        
                        arg2[0x22].d = r15_1
                        
                        if (arg_8 == 0)
                            goto label_142bc92c7
                        
                        int64_t r8_6 = *arg2[0x28]
                        
                        while (true)
                            result = zx.d((*".notdef")[rbp])
                            rbp += 1
                            
                            if (result.b != *(r8_6 + rbp - 1))
                                break
                            
                            if (rbp == 8)
                                return result
                        
                        result = (*(r13 + 0x50))(r13, 0, r8_6, zx.q(*arg2[0x29]))
                        
                        if (result != 0)
                        labelid_5:
                            arg2[3].d = result
                        else
                            result = (*(r13 + 0x50))(r13, 1, **(rsi + 0x28), zx.q(**(rsi + 0x30)))
                            
                            if (result != 0)
                            labelid_5:
                                arg2[3].d = result
                            else
                                int64_t r15_2 = sx.q(arg_10)
                                int64_t rdi_6 = r15_2 << 2
                                int64_t rsi_5 = r15_2 << 3
                                result = (*(r13 + 0x50))(r13, 2, *(rsi_5 + arg2[0x28]), 
                                    zx.q(*(rdi_6 + arg2[0x29])))
                                
                                if (result != 0)
                                labelid_5:
                                    arg2[3].d = result
                                else
                                    result = (*(r13 + 0x50))(r13, 3, *(rsi_5 + arg2[0x34]), 
                                        zx.q(*(rdi_6 + arg2[0x35])))
                                    
                                    if (result != 0)
                                    labelid_5:
                                        arg2[3].d = result
                                    else
                                        result = arg2[0x2d](&arg2[0x23], zx.q(r15_2.d), 
                                            **(r13 + 0x28), zx.q(**(r13 + 0x30)))
                                        
                                        if (result != 0)
                                        labelid_5:
                                            arg2[3].d = result
                                        else
                                            result = arg2[0x39](&arg2[0x2f], zx.q(r15_2.d), 
                                                *(*(r13 + 0x28) + 8), zx.q(*(*(r13 + 0x30) + 4)))
                                            
                                            if (result != 0)
                                            label_142bc92cc:
                                                arg2[3].d = result
                                            else
                                                result = arg2[0x2d](&arg2[0x23], 0, 
                                                    *(*(r13 + 0x28) + 0x10), 
                                                    zx.q(*(*(r13 + 0x30) + 8)))
                                                
                                                if (result != 0)
                                                label_142bc92cc_1:
                                                    arg2[3].d = result
                                                else
                                                    result = arg2[0x39](&arg2[0x2f], 0, 
                                                        *(*(r13 + 0x28) + 0x18), 
                                                        zx.q(*(*(r13 + 0x30) + 0xc)))
                                                    
                                                    if (result != 0)
                                                    label_142bc92cc_2:
                                                        arg2[3].d = result

return result
