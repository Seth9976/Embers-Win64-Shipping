// 函数: sub_140d34930
// 地址: 0x140d34930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* rax_2 = *(arg2 + 0x20)
int64_t* r9 = *rax_2
*(arg2 + 0x20) = &rax_2[1]
*(arg2 + 0x30) = r9
int64_t var_138

if (r9 == 0)
    var_138 = 0
    int32_t var_130_1 = 0
    sub_1405947f0(&var_138, 5)
    int32_t rax_6 = var_130_1 + 5
    var_130_1 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_138)
    
    UnDecorator::getReferenceType(var_138, u"none", 0xa)
    goto label_140d34a42

void* rdx = *(arg1 + 0x10)
void* r8_1 = r9[2] + 0x30
int64_t rax_4 = sx.q(*(r8_1 + 8))
uint64_t result

if (rax_4.d s<= *(rdx + 0x38))
    result = *(rdx + 0x30)

if (rax_4.d s> *(rdx + 0x38) || *(result + (rax_4 << 3)) != r8_1)
    sub_140b63b70(&r9[5], &var_138)
label_140d34a42:
    void var_90
    int64_t* rax_7 = sub_140aae2f0(&var_90, &var_138)
    void var_b8
    char* var_a0
    char** rax_9 = sub_140a96390(&var_a0, 
        _vfprintf_p_l(&var_b8, 
            Attempted to access missing property '{0}'. If this is a packaged/cooked build, are you "
    "attempting to use an editor-only property?", 
        ScriptCore"))
    int64_t rcx_9 = *rax_7
    int64_t* rcx_10 = rax_7[1]
    int32_t var_78_1 = 4
    
    if (rcx_10 != 0)
        rcx_10[1].d += 1
    
    int32_t rcx_11 = rax_7[2].d
    char var_50_1 = 1
    int32_t* var_128 = nullptr
    int32_t var_120_1 = 1
    sub_1405a4b40(&var_128, 1, 0)
    int32_t* rcx_13 = var_128
    *rcx_13 = var_78_1
    int64_t var_70
    *(rcx_13 + 8) = var_70
    *(rcx_13 + 8) = var_70
    rcx_13[2] = var_70.d
    *(rcx_13 + 8) = var_70
    rcx_13[0xa].b = 0
    
    if (var_50_1 != 0)
        *(rcx_13 + 0x10) = rcx_9
        *(rcx_13 + 0x18) = rcx_10
        
        if (rcx_10 != 0)
            rcx_10[1].d += 1
        
        rcx_13[8] = rcx_11
        rcx_13[0xa].b = 1
    
    char* var_118 = *rax_9
    void* rax_17 = rax_9[1]
    void* var_110_1 = rax_17
    
    if (rax_17 != 0)
        *(rax_17 + 8) += 1
    
    void var_d0
    int64_t* rax_18 = sub_140aac870(&var_d0, &var_118, &var_128)
    int64_t* rdi_1 = rax_18[1]
    int64_t rcx_15 = *rax_18
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int32_t rax_19 = rax_18[2].d
    int64_t* var_c8
    
    if (var_c8 != 0)
        var_c8[1].d -= 1
        
        if (var_c8[1].d == 1)
            (**var_c8)(var_c8)
            int32_t rax_22 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (rax_22 == 1)
                (*(*var_c8 + 8))(var_c8, 1)
    
    sub_140596f50(&var_128)
    
    if (var_50_1 != 0)
        char var_50_2 = 0
        
        if (rcx_10 != 0)
            rcx_10[1].d -= 1
            
            if (rcx_10[1].d == 1)
                (**rcx_10)(rcx_10)
                int32_t rax_26 = *(rcx_10 + 0xc)
                *(rcx_10 + 0xc) -= 1
                
                if (rax_26 == 1)
                    (*(*rcx_10 + 8))(rcx_10, 1)
    
    int64_t* rsi_3 = rax_9[1]
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t rax_30 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (rax_30 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)
    
    int64_t* rsi_4 = rax_7[1]
    
    if (rsi_4 != 0)
        rsi_4[1].d -= 1
        
        if (rsi_4[1].d == 1)
            (**rsi_4)(rsi_4)
            int32_t rax_34 = *(rsi_4 + 0xc)
            *(rsi_4 + 0xc) -= 1
            
            if (rax_34 == 1)
                (*(*rsi_4 + 8))(rsi_4, 1)
    
    int64_t var_100_1 = rcx_15
    int32_t var_108 = 3
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int32_t var_f0_1 = rax_19
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_40 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_40 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t rax_44 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rax_44 == 1)
                (*(*var_b0 + 8))(var_b0, 1)
    
    int64_t rcx_29 = var_138
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    result = sub_140d30680(arg1, arg2, &var_108)
    *(arg2 + 0x38) = 0
    
    if (rdi_1 != 0)
        result = zx.q(rdi_1[1].d)
        rdi_1[1].d -= 1
        
        if (result.d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t rbx_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_1))
else
    *(arg2 + 0x38) = sx.q(*(r9 + 0x4c)) + arg1
    
    if (arg3 != 0)
        result = (*(*r9 + 0xc8))(r9, arg3)

__security_check_cookie(rax_1 ^ &var_158)
return result
