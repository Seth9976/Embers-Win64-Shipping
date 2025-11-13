// 函数: sub_1429146a0
// 地址: 0x1429146a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rdi = *(arg1 + 0x28)
void* rsi = *(*(arg1 + 0x10) + 0x28)
char* rcx = *(rdi + 0x20)
uint64_t count

if (rcx == 0)
    if (sub_142915950(rdi, arg1) == 0)
        return 0xffffffff
    
    int32_t count_1 = sub_1428975a0(zx.q(arg3.d), arg2, *(rdi + 0x38), rsi, *(rdi + 0x1c))
    count = sx.q(count_1)
    
    if (count_1 != 0)
        goto label_142914958
else
    if (*(rdi + 0x1c) == 1)
        return sub_14294eed0(zx.q(sub_1406938b0(rcx)), arg4, zx.q(arg5.d), arg2, arg3.d, rsi)
    
    if (arg5 != sx.q(sub_1428916c0(rcx)))
        sub_1428a5670(4, 0x95, 0x8f, "crypto\rsa\rsa_pmeth.c", 0xfc)
        return 0xffffffff
    
    int32_t rax_4 = *(rdi + 0x1c)
    
    if (rax_4 != 5)
        if (rax_4 != 6)
            return 0xffffffff
        
        if (sub_142915950(rdi, arg1) == 0)
            return 0xffffffff
        
        int32_t var_38_4 = 3
        
        if (sub_1428975a0(zx.q(arg3.d), arg2, *(rdi + 0x38), rsi, 3) s> 0)
            var_38_4.q = *(rdi + 0x38)
            
            if (sub_14294f860(rsi, arg4, *(rdi + 0x20), *(rdi + 0x28), 3, *(rdi + 0x30)) s> 0)
                return 1
    else
        void* rsi_1 = *(arg1 + 0x28)
        char* rcx_3 = *(rsi_1 + 0x20)
        int32_t rax_5 = *(rsi_1 + 0x1c)
        int32_t count_2
        
        if (rcx_3 == 0)
            count_2 = sub_1428975a0(zx.q(arg3.d), arg2, 0, *(*(arg1 + 0x10) + 0x28), rax_5)
        label_1429148a0:
            
            if (count_2 s>= 0)
                count = sx.q(count_2)
            label_142914958:
                
                if (count == arg5 && memcmp(arg4, *(rdi + 0x38), count) == 0)
                    return 1
        else if (rax_5 == 5)
            if (sub_142915950(rsi_1, arg1) != 0)
                int32_t rax_7 =
                    sub_1428975a0(zx.q(arg3.d), arg2, *(rsi_1 + 0x38), *(*(arg1 + 0x10) + 0x28), 5)
                
                if (rax_7 s>= 1)
                    count_2 = rax_7 - 1
                    int32_t rax_9 = sub_142924880(sub_1406938b0(*(rsi_1 + 0x20)))
                    
                    if (zx.d(*(sx.q(count_2) + *(rsi_1 + 0x38))) == rax_9)
                        if (count_2 == sub_1428916c0(*(rsi_1 + 0x20)))
                            goto label_1429148a0
                        
                        sub_1428a5670(4, 0x8d, 0x8f, "crypto\rsa\rsa_pmeth.c", 0xd5)
                    else
                        sub_1428a5670(4, 0x8d, 0x64, "crypto\rsa\rsa_pmeth.c", 0xd0)
        else if (rax_5 == 1)
            int32_t var_38
            int32_t count_3
            var_38.q = &count_3
            
            if (sub_14294f040(sub_1406938b0(rcx_3), nullptr, 0, nullptr, var_38, arg2, arg3, 
                    *(*(arg1 + 0x10) + 0x28)) s> 0)
                count_2 = count_3
                goto label_1429148a0
return 0
