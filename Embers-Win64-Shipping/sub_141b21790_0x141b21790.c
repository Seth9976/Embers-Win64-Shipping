// 函数: sub_141b21790
// 地址: 0x141b21790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rbx = *(arg3 + 0x18)
int64_t rsi = *(arg3 + 0x20)
uint32_t rdi_1 = (rbx u>> 0x20).d
int32_t rcx
rcx.b = sub_140b5b8a0(rsi.d, 0) == 0
uint32_t rax_4
rax_4.b = (rsi u>> 0x20).d != 0
rcx.b |= rax_4.b
int32_t rcx_1 = rbx.d
void var_108
int64_t* result
void* i_1

if (rcx.b == 0)
    rcx_1.b = sub_140b5b8a0(rcx_1, 0) == 0
    rcx_1.b |= rdi_1 != 0
    
    if (rcx_1.b == 0)
        goto label_141b218e5
    
    i_1 = nullptr
    int32_t var_3c_2 = 0x18
    void* i_3 = nullptr
    int32_t var_40_2 = 0
    
    if (arg2 != 0)
        void* i_5 = sub_1425881f0()
        
        if (i_5 != 0)
            void* rax_19 = sub_142459c10()
            
            if (rax_19 != 0)
                int64_t rax_20 = sx.q(*(rax_19 + 0x38))
                
                if (rax_20.d s<= *(i_5 + 0x38) && *(*(i_5 + 0x30) + (rax_20 << 3)) == rax_19 + 0x30)
                    i_1 = i_5
        
        void* r8_1 = &var_108
        
        if (i_1 != sub_142459c10())
            sub_1419f71f0(arg2, i_5, r8_1)
        else
            sub_1419f6fe0(arg2, i_5, r8_1)
        
        i_1 = i_3
    
    int64_t** i = &var_108
    
    if (i_1 != 0)
        i = i_1
    
    for (; i != &i[sx.q(var_40_2)]; i = &i[1])
        int64_t* result_1 = *i
        
        if (result_1[3] == rbx)
            if (i_1 != 0)
                sub_140a74f90(i_1)
            
            result = result_1
            goto label_141b2193e
    
    goto label_141b218d2

rcx_1.b = sub_140b5b8a0(rcx_1, 0) == 0
rcx_1.b |= rdi_1 != 0

if (rcx_1.b == 0)
    int64_t* rcx_9 = arg2[0x26]
    
    if ((*(*rcx_9 + 0x428))(rcx_9, rsi) == 0)
        goto label_141b218e5
    
    result = arg2[0x26]
else
    i_1 = nullptr
    int32_t var_3c_1 = 0x18
    void* i_2 = nullptr
    int32_t var_40_1 = 0
    
    if (arg2 != 0)
        void* i_4 = sub_1425881f0()
        
        if (i_4 != 0)
            void* rax_6 = sub_142459c10()
            
            if (rax_6 != 0)
                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_7.d s<= *(i_4 + 0x38) && *(*(i_4 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
                    i_1 = i_4
        
        void* r8 = &var_108
        
        if (i_1 != sub_142459c10())
            sub_1419f71f0(arg2, i_4, r8)
        else
            sub_1419f6fe0(arg2, i_4, r8)
        
        i_1 = i_2
    
    void* i_6 = &var_108
    
    if (i_1 != 0)
        i_6 = i_1
    
    void* r12_1 = i_6 + (sx.q(var_40_1) << 3)
    
    if (i_6 == r12_1)
    label_141b218d2:
        
        if (i_1 == 0)
            goto label_141b218e5
        
        sub_140a74f90(i_1)
    label_141b218e5:
        
        if ((*(*arg2 + 0x3a8))(arg2) == 0)
            result = arg2[0x26]
        else
            result = (*(*arg2 + 0x3a8))(arg2)
    else
        while (true)
            int64_t* result_2 = *i_6
            
            if (result_2[3] == rbx && (*(*result_2 + 0x428))(result_2, rsi) != 0)
                if (i_2 != 0)
                    sub_140a74f90(i_2)
                
                result = result_2
                break
            
            i_6 += 8
            
            if (i_6 == r12_1)
                i_1 = i_2
                goto label_141b218d2

label_141b2193e:
__security_check_cookie(rax_1 ^ &var_128)
return result
