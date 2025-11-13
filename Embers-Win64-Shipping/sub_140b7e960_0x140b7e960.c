// 函数: sub_140b7e960
// 地址: 0x140b7e960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t var_108 = 0
int64_t var_100 = 0
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

uint32_t rbx_1

if (sub_140b1f370(&var_108, rdx, 0, 0) != 0)
    rbx_1 = zx.d(sub_140b84f50(arg1, &var_108, arg3))
else
    void var_90
    int64_t* rax_3 = sub_140aae420(&var_90, arg2)
    void var_b8
    char* var_a0
    char** rax_5 = sub_140a96390(&var_a0, 
        _vfprintf_p_l(&var_b8, Failed to open descriptor file '{0}'", PluginDescriptor"))
    int64_t rcx_4 = *rax_3
    int64_t* rcx_5 = rax_3[1]
    int32_t var_78_1 = 4
    
    if (rcx_5 != 0)
        rcx_5[1].d += 1
    
    int32_t rcx_6 = rax_3[2].d
    char var_50_1 = 1
    int32_t* var_118 = nullptr
    int32_t var_110_1 = 1
    sub_1405a4b40(&var_118, 1, 0)
    int32_t* rcx_8 = var_118
    *rcx_8 = var_78_1
    int64_t var_70
    *(rcx_8 + 8) = var_70
    *(rcx_8 + 8) = var_70
    rcx_8[2] = var_70.d
    *(rcx_8 + 8) = var_70
    rcx_8[0xa].b = 0
    
    if (var_50_1 != 0)
        *(rcx_8 + 0x10) = rcx_4
        *(rcx_8 + 0x18) = rcx_5
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        rcx_8[8] = rcx_6
        rcx_8[0xa].b = 1
    
    char* var_e0 = *rax_5
    void* rax_13 = rax_5[1]
    void* var_d8_1 = rax_13
    
    if (rax_13 != 0)
        *(rax_13 + 8) += 1
    
    void var_d0
    int64_t* rax_14 = sub_140aac870(&var_d0, &var_e0, &var_118)
    int64_t rcx_10 = *rax_14
    void* rcx_11 = rax_14[1]
    
    if (rcx_11 != 0)
        *(rcx_11 + 8) += 1
    
    int32_t rax_15 = rax_14[2].d
    int64_t* var_c8
    
    if (var_c8 != 0)
        var_c8[1].d -= 1
        
        if (var_c8[1].d == 1)
            (**var_c8)(var_c8)
            int32_t rax_18 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (rax_18 == 1)
                (*(*var_c8 + 8))(var_c8, 1)
    
    sub_140596f50(&var_118)
    
    if (var_50_1 != 0)
        char var_50_2 = 0
        
        if (rcx_5 != 0)
            rcx_5[1].d -= 1
            
            if (rcx_5[1].d == 1)
                (**rcx_5)(rcx_5)
                int32_t rax_22 = *(rcx_5 + 0xc)
                *(rcx_5 + 0xc) -= 1
                
                if (rax_22 == 1)
                    (*(*rcx_5 + 8))(rcx_5, 1)
    
    int64_t* rdi_3 = rax_5[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_26 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_26 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rdi_4 = rax_3[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_30 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_30 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t rcx_21 = *arg3
    *arg3 = rcx_10
    int64_t* rdi_5 = arg3[1]
    arg3[1] = rcx_11
    arg3[2].d = rax_15
    int64_t var_f8_2 = rcx_21
    int64_t* var_f0_2 = rdi_5
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t rax_38 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (rax_38 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
    
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t rbx_2 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rbx_2 == 1)
                (*(*var_b0 + 8))(var_b0, zx.q(rbx_2))
    
    rbx_1.b = 0

int64_t rcx_27 = var_108

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

__security_check_cookie(rax_1 ^ &var_138)
return zx.q(rbx_1.b)
