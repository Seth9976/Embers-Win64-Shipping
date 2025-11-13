// 函数: sub_141ba2150
// 地址: 0x141ba2150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
char rax_3

if ((*(arg1 + 0x294) & 2) != 0)
    rax_3 = (*(*arg1 + 0x6a8))()

void* result
int64_t* rbx_6

if ((*(arg1 + 0x294) & 2) == 0 || rax_3 == 0)
    void var_218
    _vfprintf_p_l(&var_218, 
        Only Local Player Controllers can be assigned to widgets. {PlayerController} is not a Local "
    "Player Controller.", &data_14306d0f0)
    int64_t var_280 = arg1[3]
    int64_t var_d8
    __builtin_memset(&var_d8, 0, 0x2c)
    int32_t var_ac_1 = 0x80
    int32_t var_a8_1 = 0xffffffff
    int32_t var_a4_1 = 0
    int64_t var_98_1 = 0
    int32_t var_90_1 = 0
    void var_1d0
    int64_t* rax_28 = sub_140aae2b0(&var_1d0, &var_280)
    int32_t var_58 = 4
    int64_t var_48_1 = *rax_28
    int64_t* rcx_30 = rax_28[1]
    
    if (rcx_30 != 0)
        rcx_30[1].d += 1
    
    int32_t var_38_1 = rax_28[2].d
    char var_30_1 = 1
    int64_t var_2a8 = 0
    int32_t var_2a0_1 = 0
    sub_1405947f0(&var_2a8, 0x11)
    int32_t rax_30 = var_2a0_1 + 0x11
    var_2a0_1 = rax_30
    
    if (rax_30 s> 0)
        sub_140594770(&var_2a8)
    
    UnDecorator::getReferenceType(var_2a8, u"PlayerController", 0x22)
    int64_t* var_260 = &var_2a8
    int32_t* var_258_1 = &var_58
    void var_294
    sub_140b91dc0(&var_d8, &var_294, &var_260, nullptr)
    int64_t rcx_35 = var_2a8
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    if (var_30_1 != 0)
        char var_30_2 = 0
        
        if (rcx_30 != 0)
            rcx_30[1].d -= 1
            
            if (rcx_30[1].d == 1)
                (**rcx_30)(rcx_30)
                int32_t rax_33 = *(rcx_30 + 0xc)
                *(rcx_30 + 0xc) -= 1
                
                if (rax_33 == 1)
                    (*(*rcx_30 + 8))(rcx_30, 1)
    
    int64_t* var_1c8
    
    if (var_1c8 != 0)
        var_1c8[1].d -= 1
        
        if (var_1c8[1].d == 1)
            (**var_1c8)(var_1c8)
            int32_t rax_37 = *(var_1c8 + 0xc)
            *(var_1c8 + 0xc) -= 1
            
            if (rax_37 == 1)
                (*(*var_1c8 + 8))(var_1c8, 1)
    
    void var_278
    sub_140b58170(&var_278, "PIE", 1)
    void var_1b8
    char* var_190
    int64_t* rax_40 = sub_140aaca20(&var_1b8, sub_140a96390(&var_190, &var_218), &var_d8)
    void var_240
    void var_158
    sub_140ad3d20(sub_140accdf0(&var_158, &var_278), &var_240, rax_40)
    int64_t* var_238
    
    if (var_238 != 0)
        var_238[1].d -= 1
        
        if (var_238[1].d == 1)
            (**var_238)(var_238)
            int32_t temp2_1 = *(var_238 + 0xc)
            *(var_238 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_238 + 8))(var_238, 1)
    
    sub_140acd9c0(&var_158)
    int64_t* var_1b0
    
    if (var_1b0 != 0)
        var_1b0[1].d -= 1
        
        if (var_1b0[1].d == 1)
            (**var_1b0)(var_1b0)
            int32_t rax_46 = *(var_1b0 + 0xc)
            *(var_1b0 + 0xc) -= 1
            
            if (rax_46 == 1)
                (*(*var_1b0 + 8))(var_1b0, 1)
    
    int32_t var_90_2 = 0
    
    if (var_98_1 != 0)
        sub_140a74f90(var_98_1)
    
    sub_140acd610(&var_d8)
    int64_t* var_210
    rbx_6 = var_210
label_141ba2765:
    
    if (rbx_6 == 0)
        result = nullptr
    else
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t rdi_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, zx.q(rdi_1))
        
        result = nullptr
else
    if (arg1[0x53] == 0)
        void var_230
        _vfprintf_p_l(&var_230, 
            CreateWidget cannot be used on Player Controller with no attached player. {PlayerController} "
        "has no Player attached.", &data_14306d0f0)
        int64_t var_290 = arg1[3]
        int64_t var_128
        __builtin_memset(&var_128, 0, 0x2c)
        int32_t var_fc_1 = 0x80
        int32_t var_f8_1 = 0xffffffff
        int32_t var_f4_1 = 0
        int64_t var_e8_1 = 0
        int32_t var_e0_1 = 0
        void var_200
        int64_t* rax_5 = sub_140aae2b0(&var_200, &var_290)
        int32_t var_88 = 4
        int64_t var_78_1 = *rax_5
        int64_t* rcx_3 = rax_5[1]
        
        if (rcx_3 != 0)
            rcx_3[1].d += 1
        
        int32_t var_68_1 = rax_5[2].d
        char var_60_1 = 1
        int64_t var_2b8 = 0
        int32_t var_2b0_1 = 0
        sub_1405947f0(&var_2b8, 0x11)
        int32_t rax_7 = var_2b0_1 + 0x11
        var_2b0_1 = rax_7
        
        if (rax_7 s> 0)
            sub_140594770(&var_2b8)
        
        UnDecorator::getReferenceType(var_2b8, u"PlayerController", 0x22)
        int64_t* var_270 = &var_2b8
        int32_t* var_268_1 = &var_88
        void var_298
        sub_140b91dc0(&var_128, &var_298, &var_270, nullptr)
        int64_t rcx_8 = var_2b8
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        if (var_60_1 != 0)
            char var_60_2 = 0
            
            if (rcx_3 != 0)
                rcx_3[1].d -= 1
                
                if (rcx_3[1].d == 1)
                    (**rcx_3)(rcx_3)
                    int32_t rax_10 = *(rcx_3 + 0xc)
                    *(rcx_3 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        (*(*rcx_3 + 8))(rcx_3, 1)
        
        int64_t* var_1f8
        
        if (var_1f8 != 0)
            var_1f8[1].d -= 1
            
            if (var_1f8[1].d == 1)
                (**var_1f8)(var_1f8)
                int32_t rax_14 = *(var_1f8 + 0xc)
                *(var_1f8 + 0xc) -= 1
                
                if (rax_14 == 1)
                    (*(*var_1f8 + 8))(var_1f8, 1)
        
        void var_288
        sub_140b58170(&var_288, "PIE", 1)
        void var_1e8
        char* var_1a0
        int64_t* rax_17 = sub_140aaca20(&var_1e8, sub_140a96390(&var_1a0, &var_230), &var_128)
        void var_250
        void var_180
        sub_140ad3d20(sub_140accdf0(&var_180, &var_288), &var_250, rax_17)
        int64_t* var_248
        
        if (var_248 != 0)
            var_248[1].d -= 1
            
            if (var_248[1].d == 1)
                (**var_248)(var_248)
                int32_t temp4_1 = *(var_248 + 0xc)
                *(var_248 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_248 + 8))(var_248, 1)
        
        sub_140acd9c0(&var_180)
        int64_t* var_1e0
        
        if (var_1e0 != 0)
            var_1e0[1].d -= 1
            
            if (var_1e0[1].d == 1)
                (**var_1e0)(var_1e0)
                int32_t rax_23 = *(var_1e0 + 0xc)
                *(var_1e0 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*var_1e0 + 8))(var_1e0, 1)
        
        int32_t var_e0_2 = 0
        
        if (var_e8_1 != 0)
            sub_140a74f90(var_e8_1)
        
        sub_140acd610(&var_128)
        int64_t* var_228
        rbx_6 = var_228
        goto label_141ba2765
    
    void* rax_26 = (*(*arg1 + 0x150))(arg1)
    
    if (rax_26 == 0)
        result = nullptr
    else
        void* rdx_7 = *(rax_26 + 0x188)
        void* rcx_26 = rax_26
        
        if (rdx_7 != 0)
            rcx_26 = rdx_7
        
        result = sub_141ba1140(rcx_26, arg2, arg3, rax_26, arg1[0x53])
__security_check_cookie(rax_1 ^ &var_2e8)
return result
