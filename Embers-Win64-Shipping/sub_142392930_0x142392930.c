// 函数: sub_142392930
// 地址: 0x142392930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
uint64_t result = __security_cookie ^ &var_118
uint64_t result_2 = result

if (data_143de5480 != 0)
    result.b = GetCurrentThreadId().d == data_143de5470

if ((data_143de5480 == 0 || result.b != 0) && *(arg1 + 0x358) != 0 && arg2 != 0
        && (*(arg2 + 0x208) & 0x40) == 0)
    EnterCriticalSection(arg1 + 0x580)
    char rcx_1 = *(arg2 + 0x88)
    result.b = rcx_1 & 3
    char result_1
    
    if (result.b != 3 || (rcx_1 & 0x20) != 0)
        result_1 = 0
        result.b = 0
    else
        result_1 = 1
        result.b = 1
    
    char rcx_2 = *(arg2 + 0x208)
    
    if ((rcx_2 & 0x20) != 0)
    label_142392b48:
        
        if (result.b != 0)
            void var_e8
            sub_1423a5060(&var_e8, 3, arg2)
            sub_142384930(arg1 + 0x210, arg2)
            result = sub_1423a6360(&var_e8)
    else if ((rcx_2 & 8) != 0)
        EnterCriticalSection(arg1 + 0x580)
        
        if ((*(arg2 + 0x208) & 8) != 0)
            int64_t rbp_1 = 0
            int64_t var_58_1 = 0
            int32_t var_50_1 = 0
            int32_t var_4c_1 = 0xc
            int64_t rax_1 = sub_141ee26c0(arg2)
            int64_t* r14_1 = *(arg1 + 0x340)
            uint64_t r12_2 = sx.q(*(arg1 + 0x348)) << 3 u>> 3
            
            if (r14_1 u> &r14_1[sx.q(*(arg1 + 0x348))])
                r12_2 = 0
            
            if (r12_2 != 0)
                do
                    int64_t* rdi_1 = *r14_1
                    
                    if (rdi_1 != 0 && (rax_1 == 0 || *rdi_1 == rax_1))
                        void* var_f0 = arg2
                        sub_14239a450(&rdi_1[4])
                        void* rcx_8 = rdi_1[3]
                        void var_b8
                        
                        if (rdi_1[6] == 0)
                            sub_1423b40c0(rcx_8, arg2, &var_b8)
                        else
                            sub_1423b4300(rcx_8, arg2)
                        sub_140838b90(&rdi_1[9], &var_f0, 1)
                        sub_140838b90(&rdi_1[0xb], &var_f0, 1)
                    
                    r14_1 = &r14_1[1]
                    rbp_1 += 1
                while (rbp_1 != r12_2)
            
            *(arg2 + 0x208) &= 0xf7
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
        
        if (arg1 != -0x580)
            LeaveCriticalSection(arg1 + 0x580)
        
        *(arg2 + 0x208) |= 0x20
        result = zx.q(result_1)
        goto label_142392b48
    
    if (arg1 != -0x580)
        result = LeaveCriticalSection(arg1 + 0x580)

__security_check_cookie(result_2 ^ &var_118)
return result
