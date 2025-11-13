// 函数: sub_140bda4e0
// 地址: 0x140bda4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void var_1d8
int64_t rax_2 = __security_cookie ^ &var_1d8
int32_t i_1 = arg3
void* r13_1 = arg2
int64_t* rsi_1 = arg1 + 0x130
void* rbx_1 = arg1
int64_t* var_198_1 = rsi_1
int32_t i

do
    char* r14_1 = *(r13_1 + 8)
    void* rax_3 = (*r13_1)()
    char* r15_1 = nullptr
    char* var_68_1 = nullptr
    *(rax_3 + 0x28) = *(rbx_1 + 0x48)
    *(rbx_1 + 0x48) = rax_3
    char* rdx_5
    
    if (r14_1 == 0)
        rdx_5 = nullptr
        int64_t var_60_2 = 0
        int32_t var_58_2 = 0
    else
        int64_t rsi_2 = -1
        
        do
            rsi_2 += 1
        while (r14_1[rsi_2] != 0)
        
        int32_t rbx_2 = 0
        void* rbp_2 = &r14_1[sx.q(rsi_2.d)]
        char* rax_4 = r14_1
        char* var_1a8 = rax_4
        int32_t j = 0x7fffffff
        
        if (r14_1 u< rbp_2)
            while (j s> 0)
                int32_t rax_7
                int32_t rcx_2
                
                if (sub_14060e800(&var_1a8, rbp_2.d - rax_4.d) - 0x10000 u> 0xfffff || j s< 2)
                    rax_7 = 1
                    rcx_2 = -1
                else
                    rax_7 = 2
                    rcx_2 = -2
                
                rbx_2 += rax_7
                j += rcx_2
                rax_4 = var_1a8
                
                if (rax_4 u>= rbp_2)
                    break
        
        int32_t var_58_1 = rbx_2
        
        if (rbx_2 + 1 u> 0x80 && rbx_2 != 0xffffffff)
            char* rax_8 = sub_140a84c80(0, sx.q(rbx_2 + 1) * 2, 0)
            r15_1 = rax_8
            var_68_1 = rax_8
        
        void var_168
        char* rcx_3 = &var_168
        
        if (r15_1 != 0)
            rcx_3 = r15_1
        
        var_1a8 = rcx_3
        sub_140917060(&var_1a8, rbx_2 + 1, r14_1, (rsi_2 + 1).d)
        rdx_5 = rcx_3
        rsi_1 = var_198_1
    
    void var_170
    int64_t rbx_4 = *sub_140b58260(&var_170, rdx_5, 1)
    int32_t var_180
    sub_140598750(rsi_1, &var_180)
    int64_t* var_178
    *var_178 = rbx_4
    var_178[1] = rax_3
    var_178[2].d = 0xffffffff
    void var_1a0
    sub_1405b8140(rsi_1, &var_1a0, (rbx_4 u>> 0x20).d + sub_140b5ead0(rbx_4.d), var_178, var_180, 
        nullptr)
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    rbx_1 = arg1
    r13_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
__security_check_cookie(rax_2 ^ &var_1d8)
