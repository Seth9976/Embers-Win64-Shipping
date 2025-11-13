// 函数: sub_141e7b230
// 地址: 0x141e7b230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t* result = __security_cookie ^ &var_108
int64_t* result_1 = result

if (arg1[6].d != 0)
    int64_t* rax_1 = arg1[4]
    int64_t* rbx_1 = arg1
    
    if (rax_1 != 0)
        rbx_1 = rax_1
    
    int64_t* rbx_2 = *rbx_1
    
    if (rbx_2 != 0)
        rbx_2[9].d += 1
        rbx_2[9].d += 1
    
    void** const var_58 = &data_143251988
    int64_t* var_50_1 = rbx_2
    int64_t (* var_d8_1)(int64_t* arg1) = sub_141e76780
    int64_t var_c8_1 = 0
    void*** var_68_1 = nullptr
    int128_t var_b8 = var_58.o
    void var_98
    int64_t* rax_3 = sub_140958c20(&var_98, nullptr, 0xff)
    void* rdx_1 = *rax_3
    *(rdx_1 + 0x10) = var_d8_1
    *(rdx_1 + 0x20) = var_c8_1
    int128_t* var_c8_2 = nullptr
    *(rdx_1 + 0x30) = var_b8
    int128_t var_48
    *(rdx_1 + 0x40) = var_48
    int64_t (* rax_4)(int64_t* arg1) = var_d8_1
    
    if (*(rdx_1 + 0x10) != 0)
        rax_4 = nullptr
    
    *(rdx_1 + 0x50) = 1
    void* rcx_3 = *rax_3
    int64_t* rdi_1 = *(rcx_3 + 0x68)
    int64_t* var_e0_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[9].d += 1
        rdi_1 = var_e0_1
    
    int64_t* r9_1
    r9_1.b = 1
    sub_1409787e0(rcx_3, rax_3[1], rax_3[2].d, r9_1.b)
    
    if (rax_4 != 0)
        int128_t* rcx_4 = &var_b8
        
        if (var_c8_2 != 0)
            rcx_4 = var_c8_2
        
        (*(*rcx_4 + 0x10))(rcx_4)
    
    if (rdi_1 != 0)
        rdi_1[9].d -= 1
        
        if (rdi_1[9].d == 1)
            sub_140a2f6e0(var_e0_1)
    
    result = arg1[4]
    int64_t* result_2 = arg1
    int32_t i_1 = arg1[5].d
    
    if (result != 0)
        result_2 = result
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rcx_6 = *result_2
            
            if (rcx_6 != 0)
                result = zx.q(rcx_6[9].d)
                rcx_6[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_6)
            
            result_2 = &result_2[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg1[5].d = 0
    
    if (*(arg1 + 0x2c) != 0)
        result = sub_14085a940(arg1, 0)
    
    arg1[6].d = 0
    
    if (nullptr != 0)
        void** const* rcx_8 = &var_58
        
        if (var_68_1 != 0)
            rcx_8 = var_68_1
        
        result = (*rcx_8)[2](rcx_8)
    
    if (rbx_2 != 0)
        rbx_2[9].d -= 1
        
        if (rbx_2[9].d == 1)
            result = sub_140a2f6e0(rbx_2)

__security_check_cookie(result_1 ^ &var_108)
return result
