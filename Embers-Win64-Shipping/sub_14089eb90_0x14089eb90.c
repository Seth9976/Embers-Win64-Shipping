// 函数: sub_14089eb90
// 地址: 0x14089eb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* r15 = arg3
int64_t* r14 = arg1
int64_t* var_f0 = arg2
int32_t exceptionObject = arg5
int64_t* i_3 = *arg1
int64_t* i_1 = i_3
int32_t exceptionObject_1

if (i_3 == 0)
label_14089eca7:
    
    if (i_1 != 0)
        goto label_14089ecac
    
label_14089ecfe:
    var_f0 = nullptr
    exceptionObject_1 = exceptionObject
    int32_t var_cc_1 = arg6
    int32_t var_c8_1 = 0
    int32_t var_c4_1 = 1
    int32_t var_c0_1 = arg4
    int64_t var_bc
    __builtin_memcpy(&var_bc, 
        "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00", 
        0x18)
    int32_t exceptionObject_2 = (*(*r15 + 0x28))(r15, &exceptionObject_1, 0, &var_f0)
    
    if (exceptionObject_2 s< 0)
        exceptionObject = exceptionObject_2
        _CxxThrowException(&exceptionObject, &data_143948c48)
        noreturn
    
    int64_t* var_e0_1 = r14
    int64_t var_d8_1 = 0
    int64_t* rax_22 = j_sub_140a82f30(0x18)
    rax_22[1] = nullptr
    
    if (&rax_22[1] != &var_f0)
        rax_22[1] = var_f0
        var_f0 = nullptr
    
    rax_22[2].d = 0
    *rax_22 = *r14
    *r14 = rax_22
    int64_t* rcx_15 = rax_22[1]
    *arg2 = rcx_15
    
    if (rcx_15 != 0)
        int64_t rdx_5 = *rcx_15
        (*(rdx_5 + 8))(rcx_15, rdx_5)
    
    int64_t* rcx_16 = var_f0
    
    if (rcx_16 != 0)
        var_f0 = nullptr
        int64_t rdx_6 = *rcx_16
        (*(rdx_6 + 0x10))(rcx_16, rdx_6)
else
    int64_t* i_2 = *i_3
    
    if (i_2 != 0)
        int64_t* i = i_2
        
        do
            int64_t* rbx = i_2[1]
            (*(*rbx + 8))(rbx)
            r14.b = (*(*rbx + 0x10))(rbx) == 1
            int64_t* rbx_1 = i_3[1]
            (*(*rbx_1 + 8))(rbx_1)
            int32_t rax_8
            rax_8.b = (*(*rbx_1 + 0x10))(rbx_1) == 1
            
            if (r14.b == rax_8.b)
                int64_t* rcx_4 = i_2[1]
                int32_t var_a0
                (*(*rcx_4 + 0x50))(rcx_4, &var_a0)
                int64_t* rcx_5 = i_3[1]
                (*(*rcx_5 + 0x50))(rcx_5, &exceptionObject_1)
                int32_t var_c0
                int32_t var_90
                int32_t var_cc
                int32_t var_9c
                
                if (var_90 == var_c0)
                    r14.b = var_9c * var_a0 u< var_cc * exceptionObject_1
                else
                    r14.b = var_90 == arg4
            
            i_1 = i
            
            if (r14.b == 0)
                i_1 = i_3
            
            i = *i_2
            i_2 = i
            i_3 = i_1
        while (i != 0)
        
        r14 = arg1
        r15 = arg3
        goto label_14089eca7
    
label_14089ecac:
    int64_t* rdi = i_1[1]
    (*(*rdi + 8))(rdi)
    
    if ((*(*rdi + 0x10))(rdi) != 1)
        goto label_14089ecfe
    
    int64_t* rcx_10 = i_1[1]
    void var_70
    (*(*rcx_10 + 0x50))(rcx_10, &var_70)
    int32_t var_60
    
    if (var_60 != arg4)
        goto label_14089ecfe
    
    i_1[2].d = 0
    int64_t* rcx_11 = i_1[1]
    *arg2 = rcx_11
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 8))()
__security_check_cookie(rax_1 ^ &var_118)
return arg2
