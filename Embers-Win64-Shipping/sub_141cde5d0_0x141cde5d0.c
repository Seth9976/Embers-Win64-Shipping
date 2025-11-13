// 函数: sub_141cde5d0
// 地址: 0x141cde5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

void var_88
uint64_t var_40_1 = __security_cookie ^ &var_88

if (arg2 s< *(arg1 + 0xd8))
    void* r8 = arg1 + 0xe0
    void* rax_2 = *(r8 + 0x10)
    
    if (rax_2 != 0)
        r8 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    
    if (test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg2 & 0x1f))
        int64_t* rbx_1 = arg1 + 0x28
        arg3[1].d = 0
        int64_t* var_58_1 = rbx_1
        
        if (*(arg3 + 0xc) s<= 0xffffffff)
            sub_1405dadb0(arg3, 0)
        
        int32_t rax_7 = data_143a1c6b0
        int32_t var_60_1 = 3
        int32_t var_50 = rax_7
        int32_t var_4c_1 = rax_7
        int32_t var_48_1 = rax_7
        int32_t* var_68 = &var_50
        var_68.o = var_68.o
        sub_141cde780(rbx_1, arg2, &var_68)
        int32_t* i = &var_50
        void var_44
        
        do
            int64_t r12_1 = 0
            int64_t rcx_4 = sx.q(*i) * 3
            int64_t rax_9 = rbx_1[0xe]
            int32_t* r15_1 = *(rax_9 + (rcx_4 << 3) + 8)
            uint64_t r13_2 = sx.q(*(rax_9 + (rcx_4 << 3) + 0x10)) << 2 u>> 2
            
            if (r15_1 u> &r15_1[sx.q(*(rax_9 + (rcx_4 << 3) + 0x10))])
                r13_2 = 0
            
            if (r13_2 != 0)
                do
                    int32_t rbx_2 = *r15_1
                    
                    if (rbx_2 != arg2)
                        int64_t rbp_1 = sx.q(arg3[1].d)
                        int32_t rax_12 = (rbp_1 + 1).d
                        arg3[1].d = rax_12
                        
                        if (rax_12 s> *(arg3 + 0xc))
                            sub_1405a4cf0(arg3)
                        
                        *(*arg3 + (rbp_1 << 2)) = rbx_2
                    
                    r15_1 = &r15_1[1]
                    r12_1 += 1
                while (r12_1 != r13_2)
                
                rbx_1 = var_58_1
            
            i = &i[1]
        while (i != &var_44)

__security_check_cookie(var_40_1 ^ &var_88)
