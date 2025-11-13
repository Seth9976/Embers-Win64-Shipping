// 函数: sub_140b8a670
// 地址: 0x140b8a670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t var_118 = 0
int64_t var_110 = 0
void*** var_f0
sub_14093d6b0(&var_f0, &var_118, 0)
void*** rbx = var_f0
sub_140944e70(rbx)
sub_140b8e230(arg1, rbx)
sub_1409399d0(rbx)
(*rbx)[1](rbx)
int64_t* var_e8

if (var_e8 != 0)
    var_e8[1].d -= 1
    
    if (var_e8[1].d == 1)
        (**var_e8)(var_e8)
        int32_t temp2_1 = *(var_e8 + 0xc)
        *(var_e8 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_e8 + 8))(var_e8, 1)

uint64_t rbx_2

if (arg2[1].d == 0)
    rbx_2 = &data_142d40450
else
    rbx_2 = *arg2

sub_140a464c0()

if (sub_140b27210(&var_118, rbx_2, 0, &data_14399ea08, 0) != 0)
    rbx_2.b = 1
else
    void var_90
    int64_t* rax_6 = sub_140aae420(&var_90, arg2)
    void var_b8
    char* var_a0
    char** rax_8 = sub_140a96390(&var_a0, 
        _vfprintf_p_l(&var_b8, Failed to write output file '{0}'. Perhaps the file is Read-Only?", 
        PluginDescriptor"))
    int64_t rcx_11 = *rax_6
    int64_t* rcx_12 = rax_6[1]
    int32_t var_78_1 = 4
    
    if (rcx_12 != 0)
        rcx_12[1].d += 1
    
    int32_t rcx_13 = rax_6[2].d
    char var_50_1 = 1
    int32_t* var_128 = nullptr
    int32_t var_120_1 = 1
    sub_1405a4b40(&var_128, 1, 0)
    int32_t* rcx_15 = var_128
    *rcx_15 = var_78_1
    int64_t var_70
    *(rcx_15 + 8) = var_70
    *(rcx_15 + 8) = var_70
    rcx_15[2] = var_70.d
    *(rcx_15 + 8) = var_70
    rcx_15[0xa].b = 0
    
    if (var_50_1 != 0)
        *(rcx_15 + 0x10) = rcx_11
        *(rcx_15 + 0x18) = rcx_12
        
        if (rcx_12 != 0)
            rcx_12[1].d += 1
        
        rcx_15[8] = rcx_13
        rcx_15[0xa].b = 1
    
    char* var_e0 = *rax_8
    void* rax_16 = rax_8[1]
    void* var_d8_1 = rax_16
    
    if (rax_16 != 0)
        *(rax_16 + 8) += 1
    
    void var_d0
    int64_t* rax_17 = sub_140aac870(&var_d0, &var_e0, &var_128)
    int64_t rcx_17 = *rax_17
    void* rcx_18 = rax_17[1]
    
    if (rcx_18 != 0)
        *(rcx_18 + 8) += 1
    
    int32_t rax_18 = rax_17[2].d
    int64_t* var_c8
    
    if (var_c8 != 0)
        var_c8[1].d -= 1
        
        if (var_c8[1].d == 1)
            (**var_c8)(var_c8)
            int32_t rax_21 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (rax_21 == 1)
                (*(*var_c8 + 8))(var_c8, 1)
    
    sub_140596f50(&var_128)
    
    if (var_50_1 != 0)
        char var_50_2 = 0
        
        if (rcx_12 != 0)
            rcx_12[1].d -= 1
            
            if (rcx_12[1].d == 1)
                (**rcx_12)(rcx_12)
                int32_t rax_25 = *(rcx_12 + 0xc)
                *(rcx_12 + 0xc) -= 1
                
                if (rax_25 == 1)
                    (*(*rcx_12 + 8))(rcx_12, 1)
    
    int64_t* rdi_3 = rax_8[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_29 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_29 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rdi_4 = rax_6[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_33 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_33 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t rcx_28 = *arg3
    *arg3 = rcx_17
    int64_t* rdi_5 = arg3[1]
    arg3[1] = rcx_18
    arg3[2].d = rax_18
    int64_t var_108_2 = rcx_28
    int64_t* var_100_2 = rdi_5
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t rax_41 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (rax_41 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
    
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t rbx_3 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rbx_3 == 1)
                (*(*var_b0 + 8))(var_b0, zx.q(rbx_3))
    
    rbx_2.b = 0

int64_t rcx_33 = var_118

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

__security_check_cookie(rax_1 ^ &var_158)
return zx.q(rbx_2.b)
