// 函数: sub_141e2ce80
// 地址: 0x141e2ce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* rax_2 = *(arg2 + 0xa8)

if (rax_2 == 0)
    rax_2 = sub_141ee69e0(arg2)

int32_t result = sub_14243ac50(rax_2)

if (result != 1)
    void* i_1 = nullptr
    int32_t var_48_1 = 0
    int32_t var_44_1 = 8
    void var_90
    sub_141e22a40(arg2, &var_90)
    void* i = &var_90
    
    if (i_1 != 0)
        i = i_1
    
    for (void* r14_1 = i + (sx.q(var_48_1) << 3); i != r14_1; i += 8)
        int64_t* rcx_3 = *i
        
        if ((*(rcx_3 + 0x8a) & 1) != 0)
            void* var_a0_1 = nullptr
            int32_t var_98_1 = 0
            int32_t var_94_1 = 8
            void var_e0
            (*(*rcx_3 + 0x958))(rcx_3, &var_e0, arg1, 0, arg3)
            void* rcx_4 = var_a0_1
            void* rbx_1 = &var_e0
            int64_t rdi_1 = 0
            
            if (rcx_4 != 0)
                rbx_1 = rcx_4
            
            int64_t rbp_1 = sx.q(var_98_1) << 3
            uint64_t rbp_2 = rbp_1 u>> 3
            
            if (rbx_1 u> rbx_1 + rbp_1)
                rbp_2 = 0
            
            if (rbp_2 != 0)
                do
                    int64_t* rcx_5 = *rbx_1
                    (*(*rcx_5 + 0x200))(rcx_5)
                    rdi_1 += 1
                    rbx_1 += 8
                while (rdi_1 != rbp_2)
                
                rcx_4 = var_a0_1
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
    
    result = sub_14246c310(arg1, arg2)
    
    if (i_1 != 0)
        result = sub_140a74f90(i_1)

__security_check_cookie(rax_1 ^ &var_108)
return result
