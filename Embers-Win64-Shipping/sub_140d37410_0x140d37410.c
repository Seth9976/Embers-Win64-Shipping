// 函数: sub_140d37410
// 地址: 0x140d37410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rax_2 = *(arg2 + 0x20)
int64_t* rbx = *rax_2
*(arg2 + 0x20) = &rax_2[1]
*(arg2 + 0x30) = 0
*(arg2 + 0x38) = 0
uint32_t rcx = zx.d(rax_2[1].b)
*(arg2 + 0x20) = rax_2 + 9
int32_t result = (&data_143e1cd60)[zx.q(rcx)](*(arg2 + 0x18), arg4, 0, &data_143e1cd60)

if (*(arg2 + 0x30) == 0)
    int64_t var_128
    
    if (rbx == 0)
        var_128 = 0
        int32_t var_120_1 = 0
        sub_1405947f0(&var_128, 5)
        int32_t rax_7 = var_120_1 + 5
        var_120_1 = rax_7
        
        if (rax_7 s> 0)
            sub_140594770(&var_128)
        
        UnDecorator::getReferenceType(var_128, u"None", 0xa)
    else
        sub_140b63b70(&rbx[5], &var_128)
    
    void var_88
    int64_t* rax_8 = sub_140aae2f0(&var_88, &var_128)
    void var_b0
    char* var_98
    char** rax_10 = sub_140a96390(&var_98, 
        _vfprintf_p_l(&var_b0, Accessed None reading structure {0}", ScriptCore"))
    int64_t rcx_10 = *rax_8
    int64_t* rcx_11 = rax_8[1]
    int32_t var_70_1 = 4
    
    if (rcx_11 != 0)
        rcx_11[1].d += 1
    
    int32_t rcx_12 = rax_8[2].d
    char var_48_1 = 1
    int32_t* var_118 = nullptr
    int32_t var_110_1 = 1
    sub_1405a4b40(&var_118, 1, 0)
    int32_t* rcx_14 = var_118
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
    int64_t* rax_19 = sub_140aac870(&var_c8, &var_f8, &var_118)
    int64_t* rdi_1 = rax_19[1]
    int64_t rcx_16 = *rax_19
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int32_t r13_1 = rax_19[2].d
    int64_t* var_c0
    
    if (var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t rax_22 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (rax_22 == 1)
                (*(*var_c0 + 8))(var_c0, 1)
    
    sub_140596f50(&var_118)
    
    if (var_48_1 != 0)
        char var_48_2 = 0
        
        if (rcx_11 != 0)
            rcx_11[1].d -= 1
            
            if (rcx_11[1].d == 1)
                (**rcx_11)(rcx_11)
                int32_t rax_26 = *(rcx_11 + 0xc)
                *(rcx_11 + 0xc) -= 1
                
                if (rax_26 == 1)
                    (*(*rcx_11 + 8))(rcx_11, 1)
    
    int64_t* rsi_3 = rax_10[1]
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t rax_30 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (rax_30 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)
    
    int64_t* rsi_4 = rax_8[1]
    
    if (rsi_4 != 0)
        rsi_4[1].d -= 1
        
        if (rsi_4[1].d == 1)
            (**rsi_4)(rsi_4)
            int32_t rax_34 = *(rsi_4 + 0xc)
            *(rsi_4 + 0xc) -= 1
            
            if (rax_34 == 1)
                (*(*rsi_4 + 8))(rsi_4, 1)
    
    int64_t var_e0_1 = rcx_16
    int32_t var_e8 = 3
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int32_t var_d0_1 = r13_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_39 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_39 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_a8
    
    if (var_a8 != 0)
        var_a8[1].d -= 1
        
        if (var_a8[1].d == 1)
            (**var_a8)(var_a8)
            int32_t rax_43 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*var_a8 + 8))(var_a8, 1)
    
    int64_t rcx_30 = var_128
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    sub_140d30680(arg1, arg2, &var_e8)
    result = 0
    *(arg2 + 0x38) = 0
    *(arg2 + 0x30) = 0
    
    if (rdi_1 != 0)
        result = rdi_1[1].d
        rdi_1[1].d -= 1
        
        if (result == 1)
            result = (**rdi_1)(rdi_1)
            int32_t rbx_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_1))
else
    *(arg2 + 0x38) += sx.q(*(rbx + 0x4c))
    *(arg2 + 0x30) = rbx
    
    if (arg3 != 0)
        result = (*(*rbx + 0xc8))(rbx, arg3)

__security_check_cookie(rax_1 ^ &var_148)
return result
