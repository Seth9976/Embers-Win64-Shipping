// 函数: sub_140be5310
// 地址: 0x140be5310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void var_1a8
int64_t rax_2 = __security_cookie ^ &var_1a8
int32_t i_1 = arg3
int64_t* r12_1 = arg2
int32_t i_2 = arg3
int32_t i

do
    char* r14_1 = *r12_1
    char* r15_1 = nullptr
    char* var_68_1 = nullptr
    char* rdx_5
    
    if (r14_1 == 0)
        rdx_5 = nullptr
        int64_t var_60_2 = 0
        int32_t var_58_2 = 0
    else
        int64_t rsi_1 = -1
        
        do
            rsi_1 += 1
        while (r14_1[rsi_1] != 0)
        
        int32_t rbx_1 = 0
        void* rbp_2 = &r14_1[sx.q(rsi_1.d)]
        char* rax_3 = r14_1
        char* var_180 = rax_3
        int32_t j = 0x7fffffff
        
        if (r14_1 u< rbp_2)
            while (j s> 0)
                int32_t rax_6
                int32_t rcx_1
                
                if (sub_14060e800(&var_180, rbp_2.d - rax_3.d) - 0x10000 u> 0xfffff || j s< 2)
                    rcx_1 = 1
                    rax_6 = -1
                else
                    rcx_1 = 2
                    rax_6 = -2
                
                j += rax_6
                rbx_1 += rcx_1
                rax_3 = var_180
                
                if (rax_3 u>= rbp_2)
                    break
        
        int32_t var_58_1 = rbx_1
        
        if (rbx_1 + 1 u> 0x80 && rbx_1 != 0xffffffff)
            char* rax_7 = sub_140a84c80(0, sx.q(rbx_1 + 1) * 2, 0)
            r15_1 = rax_7
            var_68_1 = rax_7
        
        void var_168
        char* rcx_2 = &var_168
        
        if (r15_1 != 0)
            rcx_2 = r15_1
        
        var_180 = rcx_2
        sub_140917060(&var_180, rbx_1 + 1, r14_1, (rsi_1 + 1).d)
        rdx_5 = rcx_2
        i_1 = i_2
    
    int64_t rdi_1 = r12_1[1]
    uint64_t var_178
    sub_140b58260(&var_178, rdx_5, 1)
    int64_t rbx_3 = sx.q(*(arg1 + 0x228))
    uint64_t rax = zx.q((rbx_3 + 1).d)
    *(arg1 + 0x228) = rax.d
    
    if (rax.d s> *(arg1 + 0x22c))
        sub_1405a4f90(arg1 + 0x220)
    
    int64_t rcx_7 = rbx_3 << 4
    uint64_t* rcx_8 = rcx_7 + *(arg1 + 0x220)
    
    if (rcx_7 != neg.q(*(arg1 + 0x220)))
        *rcx_8 = var_178
        rcx_8[1] = rdi_1
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    r12_1 = &r12_1[2]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
__security_check_cookie(rax_2 ^ &var_1a8)
