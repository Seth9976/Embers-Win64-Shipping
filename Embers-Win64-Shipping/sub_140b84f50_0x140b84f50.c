// 函数: sub_140b84f50
// 地址: 0x140b84f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int128_t var_e0 = zx.o(0)
void* var_f0
sub_1406cbc00(&var_f0, arg2)
char rax_2 = sub_1409173d0(&var_f0, &var_e0, 0)
int64_t* rdx_1

if (rax_2 != 0)
    rdx_1 = var_e0.q

uint64_t rdi

if (rax_2 == 0 || rdx_1 == 0)
    void var_80
    int64_t* rax_4 = sub_140aae420(&var_80, var_f0 + 0x38)
    void var_a8
    char* var_90
    char** rax_6 =
        sub_140a96390(&var_90, _vfprintf_p_l(&var_a8, Failed to read file. {0}", PluginDescriptor"))
    int64_t rcx_6 = *rax_4
    int64_t* rcx_7 = rax_4[1]
    int32_t var_68_1 = 4
    
    if (rcx_7 != 0)
        rcx_7[1].d += 1
    
    int32_t rcx_8 = rax_4[2].d
    char var_40_1 = 1
    int32_t* var_118 = nullptr
    int32_t var_110_1 = 1
    sub_1405a4b40(&var_118, 1, 0)
    int32_t* rcx_10 = var_118
    *rcx_10 = var_68_1
    int64_t var_60
    *(rcx_10 + 8) = var_60
    *(rcx_10 + 8) = var_60
    rcx_10[2] = var_60.d
    *(rcx_10 + 8) = var_60
    rcx_10[0xa].b = 0
    
    if (var_40_1 != 0)
        *(rcx_10 + 0x10) = rcx_6
        *(rcx_10 + 0x18) = rcx_7
        
        if (rcx_7 != 0)
            rcx_7[1].d += 1
        
        rcx_10[8] = rcx_8
        rcx_10[0xa].b = 1
    
    char* var_d0 = *rax_6
    void* rax_14 = rax_6[1]
    void* var_c8_1 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    void var_c0
    int64_t* rax_15 = sub_140aac870(&var_c0, &var_d0, &var_118)
    int64_t rcx_12 = *rax_15
    void* rcx_13 = rax_15[1]
    
    if (rcx_13 != 0)
        *(rcx_13 + 8) += 1
    
    int32_t rax_16 = rax_15[2].d
    int64_t* var_b8
    
    if (var_b8 != 0)
        var_b8[1].d -= 1
        
        if (var_b8[1].d == 1)
            (**var_b8)(var_b8)
            int32_t rax_19 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_b8 + 8))(var_b8, 1)
    
    sub_140596f50(&var_118)
    
    if (var_40_1 != 0)
        char var_40_2 = 0
        
        if (rcx_7 != 0)
            rcx_7[1].d -= 1
            
            if (rcx_7[1].d == 1)
                (**rcx_7)(rcx_7)
                int32_t rax_23 = *(rcx_7 + 0xc)
                *(rcx_7 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*rcx_7 + 8))(rcx_7, 1)
    
    int64_t* rdi_3 = rax_6[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_27 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_27 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rdi_4 = rax_4[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_31 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t rcx_23 = *arg3
    *arg3 = rcx_12
    int64_t* rdi_5 = arg3[1]
    arg3[1] = rcx_13
    arg3[2].d = rax_16
    int64_t var_108_2 = rcx_23
    int64_t* var_100_2 = rdi_5
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t rax_39 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (rax_39 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
    
    uint64_t var_a0
    
    if (var_a0 != 0)
        int32_t rax_42 = *(var_a0 + 8)
        *(var_a0 + 8) -= 1
        
        if (rax_42 == 1)
            (**var_a0)(var_a0)
            int32_t rbx_1 = *(var_a0 + 0xc)
            *(var_a0 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*var_a0 + 8))(var_a0, zx.q(rbx_1))
    
    rdi.b = 0
else
    rdi = zx.q(sub_140b83b20(arg1, rdx_1, arg3))

int64_t* var_e8

if (var_e8 != 0)
    var_e8[1].d -= 1
    
    if (var_e8[1].d == 1)
        (**var_e8)(var_e8)
        int32_t temp3_1 = *(var_e8 + 0xc)
        *(var_e8 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_e8 + 8))(var_e8, 1)

int64_t* rbx_3 = var_e0:8.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

__security_check_cookie(rax_1 ^ &var_138)
return zx.q(rdi.b)
