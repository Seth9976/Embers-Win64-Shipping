// 函数: sub_1413d1970
// 地址: 0x1413d1970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s<= 0x14)
    return 

void var_158
int64_t rax_2 = __security_cookie ^ &var_158
int64_t var_128
sub_140a96170(&var_128)
int64_t* var_120_1
int64_t* var_120

if (arg2 == 0)
    void var_a8
    int64_t* rax_44 = _vfprintf_p_l(&var_a8, u"Building reflection captures...", u"Engine")
    int64_t rdx_6 = var_128
    var_128 = *rax_44
    *rax_44 = rdx_6
    var_120_1 = rax_44[1]
    rax_44[1] = var_120
    int32_t var_118_2 = rax_44[2].d
    int64_t* var_a0
    
    if (var_a0 != 0)
        var_a0[1].d -= 1
        
        if (var_a0[1].d == 1)
            (**var_a0)(var_a0)
            int32_t rax_48 = *(var_a0 + 0xc)
            *(var_a0 + 0xc) -= 1
            
            if (rax_48 == 1)
                (*(*var_a0 + 8))(var_a0, 1)
else
    int32_t rdx = 0
    int32_t rcx_1 = 0
    int64_t var_138 = 0
    int64_t var_130_1 = 0
    
    if (*arg2 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (arg2[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_138, rdi_1.d + 1)
            rcx_1 = var_130_1:4.d
            rdx = var_130_1.d
        
        int32_t rax_3 = rdx + rdi_1.d + 1
        var_130_1.d = rax_3
        
        if (rax_3 s> rcx_1)
            sub_140594770(&var_138)
        
        UnDecorator::getReferenceType(var_138, arg2, (rdi_1.d + 1) * 2)
    
    void var_80
    int64_t* rax_4 = sub_140aae2f0(&var_80, &var_138)
    void var_c0
    char* var_90
    char** rax_6 = sub_140a96390(&var_90, 
        _vfprintf_p_l(&var_c0, Building reflection captures for {0}", Engine"))
    int64_t rcx_8 = *rax_4
    int64_t* rcx_9 = rax_4[1]
    int32_t var_68_1 = 4
    
    if (rcx_9 != 0)
        rcx_9[1].d += 1
    
    int32_t rcx_10 = rax_4[2].d
    char var_40_1 = 1
    int32_t* var_110 = nullptr
    int32_t var_108_1 = 1
    sub_1405a4b40(&var_110, 1, 0)
    int32_t* rcx_12 = var_110
    *rcx_12 = var_68_1
    int64_t var_60
    *(rcx_12 + 8) = var_60
    *(rcx_12 + 8) = var_60
    rcx_12[2] = var_60.d
    *(rcx_12 + 8) = var_60
    rcx_12[0xa].b = 0
    
    if (var_40_1 != 0)
        *(rcx_12 + 0x10) = rcx_8
        *(rcx_12 + 0x18) = rcx_9
        
        if (rcx_9 != 0)
            rcx_9[1].d += 1
        
        rcx_12[8] = rcx_10
        rcx_12[0xa].b = 1
    
    char* var_e8 = *rax_6
    void* rax_14 = rax_6[1]
    void* var_e0_1 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    void var_d8
    int64_t* rax_15 = sub_140aac870(&var_d8, &var_e8, &var_110)
    int64_t rcx_14 = *rax_15
    int64_t* rcx_15 = rax_15[1]
    
    if (rcx_15 != 0)
        rcx_15[1].d += 1
    
    int32_t rax_16 = rax_15[2].d
    int64_t* var_d0
    
    if (var_d0 != 0)
        var_d0[1].d -= 1
        
        if (var_d0[1].d == 1)
            (**var_d0)(var_d0)
            int32_t rax_19 = *(var_d0 + 0xc)
            *(var_d0 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_d0 + 8))(var_d0, 1)
    
    sub_140596f50(&var_110)
    
    if (var_40_1 != 0)
        char var_40_2 = 0
        
        if (rcx_9 != 0)
            rcx_9[1].d -= 1
            
            if (rcx_9[1].d == 1)
                (**rcx_9)(rcx_9)
                int32_t rax_23 = *(rcx_9 + 0xc)
                *(rcx_9 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*rcx_9 + 8))(rcx_9, 1)
    
    int64_t* rdi_5 = rax_6[1]
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t rax_27 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (rax_27 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
    
    int64_t* rdi_6 = rax_4[1]
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t rax_31 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*rdi_6 + 8))(rdi_6, 1)
    
    int64_t rcx_25 = var_128
    var_128 = rcx_14
    var_120_1 = rcx_15
    int32_t var_118_1 = rax_16
    int64_t var_100_2 = rcx_25
    int64_t* var_f8_2 = var_120
    
    if (var_120 != 0)
        var_120[1].d -= 1
        
        if (var_120[1].d == 1)
            (**var_120)(var_120)
            int32_t rax_38 = *(var_120 + 0xc)
            *(var_120 + 0xc) -= 1
            
            if (rax_38 == 1)
                (*(*var_120 + 8))(var_120, 1)
    
    int64_t* var_b8
    
    if (var_b8 != 0)
        var_b8[1].d -= 1
        
        if (var_b8[1].d == 1)
            (**var_b8)(var_b8)
            int32_t rax_42 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (rax_42 == 1)
                (*(*var_b8 + 8))(var_b8, 1)
    
    int64_t rcx_30 = var_138
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
sub_140b0e800(data_143ddb418, &var_128, 1, 0)
sub_140b283e0(data_143ddb418, 0, arg1, &var_128)

if (var_120_1 != 0)
    var_120_1[1].d -= 1
    
    if (var_120_1[1].d == 1)
        (**var_120_1)(var_120_1)
        int32_t rbx_1 = *(var_120_1 + 0xc)
        *(var_120_1 + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*(*var_120_1 + 8))(var_120_1, zx.q(rbx_1))

__security_check_cookie(rax_2 ^ &var_158)
