// 函数: sub_1423c7030
// 地址: 0x1423c7030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rbx = arg2
int64_t* var_c0
int64_t* result

if (sub_140b011d0() == 0)
    result = sub_1423bec60(arg1, 2, rbx)
else if (sub_140b70ca0() s< 3)
    result = sub_1423bec60(arg1, 2, rbx)
else if (sub_140a54810() == 0 || *data_143f5a608 == 0)
    result = sub_1423bec60(arg1, 2, rbx)
else
    void var_a8
    int64_t* rax_6 = sub_1423be5c0(&var_a8, nullptr, 2)
    void* rcx_1 = *rax_6
    *(rcx_1 + 0x10) = arg1
    *(rcx_1 + 0x18) = rbx
    void* rcx_2 = *rax_6
    int32_t r8 = rax_6[2].d
    int64_t* rdx = rax_6[1]
    int64_t* rbx_1 = *(rcx_2 + 0x28)
    var_c0 = rbx_1
    int32_t* r14_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *r14_1 += 1
        rbx_1 = var_c0
    
    sub_1423c9ef0(rcx_2, rdx, r8, 1)
    int64_t* rax_7 = sub_140a242a0()
    void** var_58_1 = nullptr
    int32_t var_4c_1 = 4
    int32_t i_4 = 1
    int64_t* var_78 = rbx_1
    
    if (rbx_1 != 0)
        *r14_1 += 1
        rbx_1 = var_c0
    
    int64_t r9_2 = *rax_7
    result = (*(r9_2 + 0x48))(rax_7, &var_78, 0xff, r9_2, arg2, var_c0)
    void** rcx_4 = var_58_1
    void** rdi_1 = &var_78
    int32_t i_2 = i_4
    
    if (rcx_4 != 0)
        rdi_1 = rcx_4
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx_5 = *rdi_1
            
            if (rcx_5 != 0)
                result = zx.q(rcx_5[9].d)
                rcx_5[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_5)
            
            rdi_1 = &rdi_1[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_1 = var_c0
        rcx_4 = var_58_1
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
    
    if (rbx_1 != 0)
        int32_t rbp_1 = *r14_1
        *r14_1 -= 1
        
        if (rbp_1 == 1)
            result = sub_140a2f6e0(var_c0)
    
    rbx = arg2

if (arg3 != 0)
label_1423c7202:
    int64_t rsi_1 = sx.q(*(arg1 + 0x9b0))
    int64_t r14_2 = sx.q(rbx)
    
    if (rsi_1 s<= r14_2)
        result = rsi_1 * 0x30
        int32_t* rbp_3 = arg1 + 0x28 + result
        int64_t i_3 = r14_2 - rsi_1 + 1
        int64_t i_1
        
        do
            if (*rbp_3 != 0)
                int64_t* rax_10 = sub_140a242a0()
                int64_t r9_3 = *rax_10
                void* rbx_4 = sx.q(rsi_1.d) * 0x30 + arg1
                (*(r9_3 + 0x48))(rax_10, rbx_4, 2, r9_3, arg2, var_c0)
                
                if (sub_140b011d0() == 0)
                    result = sub_141983280(rbx_4, 0)
                else if (sub_140b70ca0() s< 3)
                    result = sub_141983280(rbx_4, 0)
                else if (sub_140a54810() == 0 || rsi_1.d == 7 || *data_143f5a620 == 0
                        || *rbp_3 s< 0x32)
                    result = sub_141983280(rbx_4, 0)
                else
                    void var_90
                    void** rax_15 = sub_1423be740(&var_90, nullptr, 2)
                    void* rcx_12 = *rax_15
                    *(rcx_12 + 0x10) = arg1
                    *(rcx_12 + 0x18) = rsi_1.d
                    void* rcx_13 = *rax_15
                    int32_t r8_3 = rax_15[2].d
                    int64_t* rdx_3 = rax_15[1]
                    void* rbx_5 = *(rcx_13 + 0x28)
                    
                    if (rbx_5 != 0)
                        *(rbx_5 + 0x48) += 1
                    
                    sub_1423ca1b0(rcx_13, rdx_3, r8_3, 1)
                    int64_t* result_1 = arg1 + 0x980
                    int64_t r15_1 = sx.q(result_1[5].d)
                    int32_t rax_16 = (r15_1 + 1).d
                    result_1[5].d = rax_16
                    
                    if (rax_16 s> *(result_1 + 0x2c))
                        sub_14083a490(result_1, r15_1.d)
                    
                    result = result_1[4]
                    
                    if (result != 0)
                        result_1 = result
                    
                    result_1[r15_1] = rbx_5
            
            rsi_1 = zx.q(rsi_1.d + 1)
            rbp_3 = &rbp_3[0xc]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx = arg2
    
    int32_t r12
    r12.b = rbx != 7
    *(arg1 + 0x9b0) = r12 + rbx
else
    result = sub_140b011d0()
    
    if (result.b == 0)
        goto label_1423c7202
    
    result = sub_140b70ca0()
    
    if (result.d s< 3)
        goto label_1423c7202
    
    result = sub_140a54810()
    
    if (result.b == 0)
        goto label_1423c7202
    
    int64_t* rax_8 = sub_140a242a0()
    int64_t r8_1 = *rax_8
    result = (*(r8_1 + 0x30))(rax_8, 2, r8_1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
