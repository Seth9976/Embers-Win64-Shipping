// 函数: sub_141ecf620
// 地址: 0x141ecf620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t* r12 = nullptr
int32_t rbx = 0
int32_t var_118 = 0
uint64_t result_2 = 0
int64_t* var_148
sub_1424365b0((*(*arg1 + 0x150))(), &var_148)
int32_t result_1
uint64_t result = zx.q(result_1)
int16_t* rdi
int16_t* arg_18 = rdi

while (result.d s>= 0)
    int64_t* rdx_1 = var_148
    
    if (result.d s>= rdx_1[1].d)
        break
    
    result = sub_140d3c6e0(*rdx_1 + (sx.q(result.d) << 3))
    result_2 = result
    int64_t* rcx_3 = *(result + 0x228)
    int64_t var_e8
    
    if (rcx_3 != 0)
        rbx |= 1
        
        if (arg2[1].d == 0)
            rdi = &data_142d40450
        else
            rdi = *arg2
        
        int64_t* rax_5 = sub_1422a12b0(rcx_3, &var_e8)
        int16_t* const rcx_4
        
        if (rax_5[1].d == 0)
            rcx_4 = &data_142d40450
        else
            rcx_4 = *rax_5
        
        result = sub_140a54510(rcx_4, rdi)
    
    if (rcx_3 == 0 || result.d != 0)
        rdi.b = 0
    else
        rdi.b = 1
    
    if ((rbx.b & 1) != 0)
        int64_t rcx_5 = var_e8
        rbx &= 0xfffffffe
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
    
    if (rdi.b != 0)
        break
    
    result = zx.q(result_1 + 1)
    result_1 = result.d

if (result_2 != 0 && *(result_2 + 0x250) != 0)
    int64_t var_d8
    void var_88
    int64_t* rax_8 = sub_140aae2f0(&var_88, sub_1422a12b0(*(result_2 + 0x228), &var_d8))
    void var_b0
    char* var_98
    char** rax_10 = sub_140a96390(&var_98, _vfprintf_p_l(&var_b0, Viewing from {0}", CheatManager"))
    int64_t rcx_10 = *rax_8
    int64_t* rcx_11 = rax_8[1]
    int32_t var_70_1 = 4
    
    if (rcx_11 != 0)
        rcx_11[1].d += 1
    
    int32_t rcx_12 = rax_8[2].d
    char var_48_1 = 1
    int32_t* var_158 = nullptr
    int32_t var_150_1 = 1
    sub_1405a4b40(&var_158, 1, 0)
    int32_t* rcx_14 = var_158
    *rcx_14 = var_70_1
    int64_t var_68
    *(rcx_14 + 8) = var_68
    *(rcx_14 + 8) = var_68
    rcx_14[2] = var_68.d
    *(rcx_14 + 8) = var_68
    rcx_14[0xa].b = 0
    
    if (var_48_1 != 0)
        *(rcx_14 + 0x10) = rcx_10
        *(rcx_14 + 0x18) = rcx_11
        
        if (rcx_11 != 0)
            rcx_11[1].d += 1
        
        rcx_14[8] = rcx_12
        rcx_14[0xa].b = 1
    
    char* var_f8 = *rax_10
    void* rax_18 = rax_10[1]
    void* var_f0_1 = rax_18
    
    if (rax_18 != 0)
        *(rax_18 + 8) += 1
    
    void var_c8
    int64_t* rax_19 = sub_140aac870(&var_c8, &var_f8, &var_158)
    int64_t var_110 = *rax_19
    int64_t* rcx_17 = rax_19[1]
    
    if (rcx_17 != 0)
        rcx_17[1].d += 1
    
    int32_t var_100_1 = rax_19[2].d
    int64_t* var_c0
    
    if (var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t rax_23 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (rax_23 == 1)
                (*(*var_c0 + 8))(var_c0, 1)
    
    sub_140596f50(&var_158)
    
    if (var_48_1 != 0)
        char var_48_2 = 0
        
        if (rcx_11 != 0)
            rcx_11[1].d -= 1
            
            if (rcx_11[1].d == 1)
                (**rcx_11)(rcx_11)
                int32_t rax_27 = *(rcx_11 + 0xc)
                *(rcx_11 + 0xc) -= 1
                
                if (rax_27 == 1)
                    (*(*rcx_11 + 8))(rcx_11, 1)
    
    int64_t* rbx_3 = rax_10[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t rax_31 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rbx_4 = rax_8[1]
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t rax_35 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rax_35 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* rsi_2 = nullptr
    
    if (((arg1[1].d u>> 4).b & 1) == 0)
        rsi_2 = arg1[4]
    
    int64_t* rax_39 = sub_140b58260(&var_118, u"Event", 1)
    sub_1425692d0(rsi_2, sub_140ac6680(&var_110), *rax_39, zx.o(0))
    
    if (rcx_17 != 0)
        rcx_17[1].d -= 1
        
        if (rcx_17[1].d == 1)
            (**rcx_17)(rcx_17)
            int32_t rax_43 = *(rcx_17 + 0xc)
            *(rcx_17 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*rcx_17 + 8))(rcx_17, 1)
    
    int64_t* var_a8
    
    if (var_a8 != 0)
        var_a8[1].d -= 1
        
        if (var_a8[1].d == 1)
            (**var_a8)(var_a8)
            int32_t rdi_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_a8 + 8))(var_a8, zx.q(rdi_1))
    
    int64_t rcx_34 = var_d8
    
    if (rcx_34 != 0)
        sub_140a74f90(rcx_34)
    
    if (((arg1[1].d u>> 4).b & 1) == 0)
        r12 = arg1[4]
    
    int64_t rax_50 = *r12
    int64_t rdx_10 = *(result_2 + 0x250)
    int32_t var_124_1 = 1.d
    int32_t var_12c
    int32_t var_11c_1 = var_12c & 0xfffffffe
    int32_t var_120_1 = 0x40000000
    int32_t var_128 = 0
    result = (*(rax_50 + 0xd10))(r12, rdx_10, &var_128)

__security_check_cookie(rax_1 ^ &var_178)
return result
