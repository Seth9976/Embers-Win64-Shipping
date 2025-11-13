// 函数: sub_140fef470
// 地址: 0x140fef470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_298
int64_t var_50_1 = __security_cookie ^ &var_298
int64_t* var_240 = arg2

if (arg3 != 0 && arg2 != arg3)
    sub_140ffa600(arg1, 0, &var_240, 1)
    int32_t rsi_1 = 0
    void* const rdi_1 = arg1
    
    if (arg1 == 0x18)
        rdi_1 = nullptr
    
    void var_218
    sub_141961860(&var_218, (1 << (data_1439c7a34).b) - 1)
    void* const var_1f8_1 = rdi_1
    void* const var_1f0_1 = rdi_1
    char var_190_1 = 0
    void* rax_4 = (*(*arg2 + 0x48))(arg2)
    int64_t rdx_2 = *arg3
    int64_t* rax_5 = (*(rdx_2 + 0x48))(arg3, rdx_2)
    int64_t* r11_1 = rax_5
    var_240 = rax_5
    
    if (*(arg1 + 0x17d00) != 0)
        void* rcx_4 = *(arg1 + 0x17d18)
        
        if (rcx_4 != 0)
            *(rcx_4 + 0x10) += 1
    
    if (*arg4 != data_143dbb188 || arg4[1] != data_143dbb18c || arg4[2] != data_143dbb190)
        int32_t i = 0
        int32_t var_230 = arg4[3]
        int32_t var_22c_1 = arg4[4]
        int32_t var_228_1 = arg4[5]
        int32_t i_1 = 0
        
        if (arg4[0xb] u> 0)
            int32_t rcx_7 = arg4[0xe]
            
            do
                int32_t r12_2 = arg4[9] + i
                int32_t r13_2 = arg4[0xa] + i
                
                if (rcx_7 != 0)
                    do
                        char rcx_8 = rsi_1.b
                        int32_t rax_12 = 1
                        int32_t rdx_5 = *arg4 s>> rcx_8
                        
                        if (rdx_5 s>= 1)
                            rax_12 = rdx_5
                        
                        int32_t var_224_1 = rax_12 + arg4[3]
                        int32_t rax_14 = 1
                        int32_t rdx_7 = arg4[1] s>> rcx_8
                        
                        if (rdx_7 s>= 1)
                            rax_14 = rdx_7
                        
                        int32_t var_220_1 = rax_14 + arg4[4]
                        int32_t rax_16 = 1
                        int32_t rdx_9 = arg4[2] s>> rcx_8
                        int64_t* rcx_9 = *(arg1 + 0x138)
                        
                        if (rdx_9 s>= 1)
                            rax_16 = rdx_9
                        
                        int32_t var_21c_1 = rax_16 + arg4[5]
                        (*(*rcx_9 + 0x170))(rcx_9, r11_1[7], 
                            zx.q(r13_2 * *(arg3 + 0x34) + rsi_1 + arg4[0xd]), zx.q(arg4[6]), 
                            arg4[7], arg4[8], *(rax_4 + 0x38), 
                            *(arg2 + 0x34) * r12_2 + arg4[0xc] + rsi_1, &var_230)
                        rcx_7 = arg4[0xe]
                        rsi_1 += 1
                        r11_1 = var_240
                    while (rsi_1 u< rcx_7)
                    
                    i = i_1
                
                i += 1
                rsi_1 = 0
                i_1 = i
            while (i u< arg4[0xb])
    else
        int64_t* rcx_6 = *(arg1 + 0x138)
        (*(*rcx_6 + 0x178))(rcx_6, r11_1[7], *(rax_4 + 0x38))
    
    sub_1419628c0(&var_218)

__security_check_cookie(var_50_1 ^ &var_298)
