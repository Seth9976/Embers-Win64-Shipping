// 函数: sub_141b214d0
// 地址: 0x141b214d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
bool rax_2 = sub_140b5b8a0(*(arg1 + 0x18), 0)
int32_t rcx_1 = *(arg1 + 0x3c)
void var_f8
int64_t* result
void* i_1

if ((*(arg1 + 0x1c) != 0 | rax_2 == 0) == 0)
    rcx_1.b = sub_140b5b8a0(rcx_1, 0) == 0
    
    if ((*(arg1 + 0x40) != 0 | rcx_1.b) == 0)
        goto label_141b21625
    
    i_1 = nullptr
    int32_t var_2c_2 = 0x18
    void* i_3 = nullptr
    int32_t var_30_2 = 0
    
    if (arg2 != 0)
        void* i_5 = sub_1425881f0()
        
        if (i_5 != 0)
            void* rax_18 = sub_142459c10()
            
            if (rax_18 != 0)
                int64_t rax_19 = sx.q(*(rax_18 + 0x38))
                
                if (rax_19.d s<= *(i_5 + 0x38) && *(*(i_5 + 0x30) + (rax_19 << 3)) == rax_18 + 0x30)
                    i_1 = i_5
        
        void* r8_2 = &var_f8
        
        if (i_1 != sub_142459c10())
            sub_1419f71f0(arg2, i_5, r8_2)
        else
            sub_1419f6fe0(arg2, i_5, r8_2)
        
        i_1 = i_3
    
    int64_t** i = &var_f8
    
    if (i_1 != 0)
        i = i_1
    
    for (; i != &i[sx.q(var_30_2)]; i = &i[1])
        int64_t* result_1 = *i
        
        if (result_1[3] == *(arg1 + 0x3c))
            if (i_1 != 0)
                sub_140a74f90(i_1)
            
            result = result_1
            goto label_141b2167f
    
    goto label_141b21612

rcx_1.b = sub_140b5b8a0(rcx_1, 0) == 0

if ((*(arg1 + 0x40) != 0 | rcx_1.b) == 0)
    int64_t* rcx_9 = arg2[0x26]
    
    if ((*(*rcx_9 + 0x428))(rcx_9, *(arg1 + 0x18)) == 0)
        goto label_141b21625
    
    result = arg2[0x26]
else
    i_1 = nullptr
    int32_t var_2c_1 = 0x18
    void* i_2 = nullptr
    int32_t var_30_1 = 0
    
    if (arg2 != 0)
        void* i_4 = sub_1425881f0()
        
        if (i_4 != 0)
            void* rax_4 = sub_142459c10()
            
            if (rax_4 != 0)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s<= *(i_4 + 0x38) && *(*(i_4 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                    i_1 = i_4
        
        void* r8_1 = &var_f8
        
        if (i_1 != sub_142459c10())
            sub_1419f71f0(arg2, i_4, r8_1)
        else
            sub_1419f6fe0(arg2, i_4, r8_1)
        
        i_1 = i_2
    
    void* i_6 = &var_f8
    
    if (i_1 != 0)
        i_6 = i_1
    
    void* r14_1 = i_6 + (sx.q(var_30_1) << 3)
    
    if (i_6 == r14_1)
    label_141b21612:
        
        if (i_1 == 0)
            goto label_141b21625
        
        sub_140a74f90(i_1)
    label_141b21625:
        
        if ((*(*arg2 + 0x3a8))(arg2) == 0)
            result = arg2[0x26]
        else
            result = (*(*arg2 + 0x3a8))(arg2)
    else
        while (true)
            int64_t* result_2 = *i_6
            
            if (result_2[3] == *(arg1 + 0x3c)
                    && (*(*result_2 + 0x428))(result_2, *(arg1 + 0x18)) != 0)
                if (i_2 != 0)
                    sub_140a74f90(i_2)
                
                result = result_2
                break
            
            i_6 += 8
            
            if (i_6 == r14_1)
                i_1 = i_2
                goto label_141b21612

label_141b2167f:
__security_check_cookie(rax_1 ^ &var_118)
return result
