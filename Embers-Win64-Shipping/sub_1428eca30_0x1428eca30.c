// 函数: sub_1428eca30
// 地址: 0x1428eca30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rsi = 0
int64_t count = sx.q(arg3)
int32_t r8 = *arg1
int32_t r15 = 0
int32_t result
void var_59
void buffer1

if (r8 == 0)
    int32_t* rdi_2 = *(arg1 + 8)
    int64_t rsi_2 = sx.q(*rdi_2)
    
    if (rsi_2.d s>= 0 && rsi_2.d s<= count.d)
        if (rsi_2.d s> 0)
            memcpy(&buffer1, *(rdi_2 + 8), rsi_2.d)
            int32_t rcx_7 = rdi_2[4] & 7
            
            if (rcx_7 != 0)
                *(&var_59 + rsi_2) &= not.b((0xff s>> (8 - rcx_7.b)).b)
        
        memset(&buffer1 + rsi_2, 0, sx.q(count.d - rsi_2.d))
        rsi = (rsi_2 << 3).d - (rdi_2[4] & 7)
        goto label_1428ecb55
    
    result = -1
else if (r8 != 1)
label_1428ecb55:
    int32_t rcx_10 = *arg2
    void var_69
    void buffer2
    
    if (rcx_10 == 0)
        int32_t* r14_2 = *(arg2 + 8)
        int64_t rdi_4 = sx.q(*r14_2)
        
        if (rdi_4.d s>= 0 && rdi_4.d s<= count.d)
            if (rdi_4.d s> 0)
                memcpy(&buffer2, *(r14_2 + 8), rdi_4.d)
                int32_t rax_17 = r14_2[4] & 7
                
                if (rax_17 != 0)
                    *(&var_69 + rdi_4) &= not.b((0xff s>> (8 - rax_17.b)).b)
            
            memset(&buffer2 + rdi_4, 0, sx.q(count.d - rdi_4.d))
            r15 = (rdi_4 << 3).d - (r14_2[4] & 7)
            goto label_1428ecc41
        
        result = -1
    else if (rcx_10 != 1)
    label_1428ecc41:
        result = memcmp(&buffer1, &buffer2, count)
        
        if (result == 0)
            result = rsi - r15
    else
        int32_t* r14_1 = **(arg2 + 8)
        int64_t rdi_3 = sx.q(*r14_1)
        
        if (rdi_3.d s>= 0 && rdi_3.d s<= count.d)
            if (rdi_3.d s> 0)
                memcpy(&buffer2, *(r14_1 + 8), rdi_3.d)
                int32_t rax_13 = r14_1[4] & 7
                
                if (rax_13 != 0)
                    *(&var_69 + rdi_3) &= not.b((0xff s>> (8 - rax_13.b)).b)
            
            memset(&buffer2 + rdi_3, 0, sx.q(count.d - rdi_3.d))
            r15 = (count << 3).d
            goto label_1428ecc41
        
        result = -1
else
    int32_t* rsi_1 = **(arg1 + 8)
    int64_t rdi_1 = sx.q(*rsi_1)
    
    if (rdi_1.d s>= 0 && rdi_1.d s<= count.d)
        if (rdi_1.d s> 0)
            memcpy(&buffer1, *(rsi_1 + 8), rdi_1.d)
            int32_t rcx_2 = rsi_1[4] & 7
            
            if (rcx_2 != 0)
                *(&var_59 + rdi_1) &= not.b((0xff s>> (8 - rcx_2.b)).b)
        
        memset(&buffer1 + rdi_1, 0, sx.q(count.d - rdi_1.d))
        rsi = (count << 3).d
        goto label_1428ecb55
    
    result = -1
__security_check_cookie(rax_1 ^ &var_88)
return result
