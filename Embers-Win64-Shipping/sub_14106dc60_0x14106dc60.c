// 函数: sub_14106dc60
// 地址: 0x14106dc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rdi = arg2
uint64_t result
wchar16 const* const rcx

if (arg1 != 0)
    void* rax_2 = sub_1425b6f00()
    arg2 = *(arg1 + 0x10)
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    uint32_t rax_6
    
    if (rax_3.d s<= arg2[7].d && *(arg2[6] + (rax_3 << 3)) == rax_2 + 0x30)
        char rax_5 = *(arg1 + 0xe0)
        
        if (rax_5 != 0)
            rax_6 = zx.d(rax_5)
        else
            rax_6, arg2 = sub_1405d9520(zx.d(*(arg1 + 0xdb)))
        
        goto label_14106dd27
    
    void* rax_7 = sub_1425b3af0()
    arg2 = *(arg1 + 0x10)
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rax_8.d s> arg2[7].d || *(arg2[6] + (rax_8 << 3)) != rax_7 + 0x30)
    label_14106ded8:
        rcx = u"Unsupported texture format."
        int64_t var_d8_1 = 0
        goto label_14106dee6
    
    void* rcx_4 = *(arg1 + 0xd0)
    
    if (rcx_4 == 0)
        goto label_14106ded8
    
    rax_6 = sub_1423c1990(rcx_4, 0)
label_14106dd27:
    
    if (rax_6 u> 0x25 || not(test_bit(0x2000000406, sx.q(rax_6))))
        goto label_14106ded8
    
    int64_t var_b8 = *(arg1 + 0x78)
    int64_t rax_12 = *rdi
    void* var_98 = nullptr
    
    if (rax_12 != 0)
        void* rax_13 = rdi[2]
        void* rcx_5 = &rdi[4]
        
        if (rax_13 != 0)
            rcx_5 = rax_13
        
        (**rcx_5)(rcx_5, &var_98)
    
    void var_88
    
    if (sub_140a80f40() == 0)
        uint32_t rax_16
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_16.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_16.b == 0))
            void var_d0
            int64_t* rax_23 = sub_14106c090(&var_d0, nullptr, 0xff)
            void* r8_3 = *rax_23
            *(r8_3 + 0x10) = var_b8
            *(r8_3 + 0x20) = rax_12
            *(r8_3 + 0x30) = 0
            
            if (*(r8_3 + 0x20) != 0)
                void* r8_4 = var_98
                void* rcx_13 = &var_88
                
                if (r8_4 != 0)
                    rcx_13 = r8_4
                
                (**rcx_13)(rcx_13)
            
            void* rcx_14 = *rax_23
            int32_t r8_5 = rax_23[2].d
            int64_t* rdx_3 = rax_23[1]
            int64_t* rbx_1 = *(rcx_14 + 0x68)
            int64_t* var_e0_1 = rbx_1
            int32_t* rdi_2 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_2 += 1
                rbx_1 = var_e0_1
            
            sub_14106e0b0(rcx_14, rdx_3, r8_5, 1)
            
            if (rbx_1 != 0)
                int32_t rax_25 = *rdi_2
                *rdi_2 -= 1
                
                if (rax_25 == 1)
                    sub_140a2f6e0(var_e0_1)
        else
            int64_t var_68 = var_b8
            void* var_48 = nullptr
            
            if (rax_12 != 0)
                void* rax_19 = var_98
                void* rcx_7 = &var_88
                
                if (rax_19 != 0)
                    rcx_7 = rax_19
                
                (**rcx_7)(rcx_7, &var_48)
            
            sub_14106aea0(&var_68, &data_143f02b98, arg3, arg4)
            
            if (rax_12 != 0)
                void* rax_21 = var_48
                void var_38
                void* rcx_9 = &var_38
                
                if (rax_21 != 0)
                    rcx_9 = rax_21
                
                (*(*rcx_9 + 0x10))(rcx_9)
    else
        sub_14106aea0(&var_b8, &data_143f02b98, arg3, arg4)
    
    if (rax_12 != 0)
        void* rax_26 = var_98
        void* rcx_16 = &var_88
        
        if (rax_26 != 0)
            rcx_16 = rax_26
        
        (*(*rcx_16 + 0x10))(rcx_16)
    
    result.b = 1
else
    void* var_e8_1 = arg1
    rcx = u"Invalid texture supplied."
label_14106dee6:
    arg2.b = 2
    sub_140d23f50(rcx, arg2.b)
    result.b = 0
__security_check_cookie(rax_1 ^ &var_108)
return result
