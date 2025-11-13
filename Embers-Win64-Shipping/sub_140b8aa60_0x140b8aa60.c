// 函数: sub_140b8aa60
// 地址: 0x140b8aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t var_128 = 0
int64_t var_120 = 0
void*** var_f0
sub_14093d6b0(&var_f0, &var_128, 0)
int64_t var_e0
int64_t* rax_2 = sub_140b1a780(&var_e0, arg2)
void*** r14 = var_f0
sub_140b8fa50(arg1, r14, rax_2)
int64_t rcx_3 = var_e0

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

(*r14)[1](r14)
int16_t* const rbx_1

if (arg2[1].d == 0)
    rbx_1 = &data_142d40450
else
    rbx_1 = *arg2

sub_140a464c0()
int64_t* rdi

if (sub_140b27210(&var_128, rbx_1, 0, &data_14399ea08, 0) == 0)
    void var_90
    int64_t* rax_5 = sub_140aae420(&var_90, arg2)
    void var_b8
    char* var_a0
    char** rax_7 = sub_140a96390(&var_a0, 
        _vfprintf_p_l(&var_b8, Failed to write output file '{0}'. Perhaps the file is Read-Only?", 
        ProjectDescriptor"))
    int64_t rcx_9 = *rax_5
    int64_t* rcx_10 = rax_5[1]
    int32_t var_78_1 = 4
    
    if (rcx_10 != 0)
        rcx_10[1].d += 1
    
    int32_t rcx_11 = rax_5[2].d
    char var_50_1 = 1
    int32_t* var_138 = nullptr
    int32_t var_130_1 = 1
    sub_1405a4b40(&var_138, 1, 0)
    int32_t* rcx_13 = var_138
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
    
    char* var_100 = *rax_7
    void* rax_15 = rax_7[1]
    void* var_f8_1 = rax_15
    
    if (rax_15 != 0)
        *(rax_15 + 8) += 1
    
    void var_d0
    int64_t* rax_16 = sub_140aac870(&var_d0, &var_100, &var_138)
    int64_t rcx_15 = *rax_16
    void* rcx_16 = rax_16[1]
    
    if (rcx_16 != 0)
        *(rcx_16 + 8) += 1
    
    int32_t rax_17 = rax_16[2].d
    int64_t* var_c8
    
    if (var_c8 != 0)
        var_c8[1].d -= 1
        
        if (var_c8[1].d == 1)
            (**var_c8)(var_c8)
            int32_t rax_20 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (rax_20 == 1)
                (*(*var_c8 + 8))(var_c8, 1)
    
    sub_140596f50(&var_138)
    
    if (var_50_1 != 0)
        char var_50_2 = 0
        
        if (rcx_10 != 0)
            rcx_10[1].d -= 1
            
            if (rcx_10[1].d == 1)
                (**rcx_10)(rcx_10)
                int32_t rax_24 = *(rcx_10 + 0xc)
                *(rcx_10 + 0xc) -= 1
                
                if (rax_24 == 1)
                    (*(*rcx_10 + 8))(rcx_10, 1)
    
    int64_t* rdi_3 = rax_7[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_28 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_28 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rdi_4 = rax_5[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_32 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t rcx_26 = *arg3
    *arg3 = rcx_15
    int64_t* rdi_5 = arg3[1]
    arg3[1] = rcx_16
    arg3[2].d = rax_17
    int64_t var_118_2 = rcx_26
    int64_t* var_110_2 = rdi_5
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t rax_40 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (rax_40 == 1)
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
    
    rdi.b = 0
else
    rdi.b = 1

int64_t* var_e8

if (var_e8 != 0)
    var_e8[1].d -= 1
    
    if (var_e8[1].d == 1)
        (**var_e8)(var_e8)
        int32_t temp2_1 = *(var_e8 + 0xc)
        *(var_e8 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_2 = *var_e8
            (*(r8_2 + 8))(var_e8, 1, r8_2)

int64_t rcx_33 = var_128

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

__security_check_cookie(rax_1 ^ &var_168)
return zx.q(rdi.b)
