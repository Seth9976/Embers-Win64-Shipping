// 函数: sub_140b82330
// 地址: 0x140b82330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t var_1e8 = 0
int32_t var_1e0 = 0
sub_1405947f0(&var_1e8, 5)
int32_t rax_2 = var_1e0 + 5
var_1e0 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_1e8)

int64_t rbx = var_1e8
UnDecorator::getReferenceType(rbx, u"Name", 0xa)
int64_t* var_178
sub_140b75db0(arg2, &var_178, &var_1e8)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rcx_5 = var_178
int64_t* rdi

if (rcx_5 == 0 || rcx_5[1].d != 2)
    void var_108
    int64_t* rax_66 =
        _vfprintf_p_l(&var_108, Found a 'Localization Target' entry with a missing 'Name' field", 
        LocalizationDescriptor")
    int64_t rdx_15 = *arg3
    *arg3 = *rax_66
    *rax_66 = rdx_15
    int64_t rdx_16 = arg3[1]
    arg3[1] = rax_66[1]
    rax_66[1] = rdx_16
    arg3[2].d = rax_66[2].d
    int64_t* var_100
    
    if (var_100 != 0)
        var_100[1].d -= 1
        
        if (var_100[1].d == 1)
            (**var_100)(var_100)
            int32_t rdi_2 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_100 + 8))(var_100, zx.q(rdi_2))
    
    rdi.b = 0
else
    int64_t var_168
    int64_t* rax_3 = sub_140b74df0(rcx_5, &var_168)
    
    if (arg1 != rax_3)
        int64_t rcx_6 = *arg1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *arg1 = *rax_3
        *rax_3 = 0
        arg1[1].d = rax_3[1].d
        *(arg1 + 0xc) = *(rax_3 + 0xc)
        rax_3[1] = 0
    
    int64_t rcx_8 = var_168
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t var_1d8 = 0
    int32_t var_1d0_1 = 0
    sub_1405947f0(&var_1d8, 0xe)
    int32_t rax_6 = var_1d0_1 + 0xe
    var_1d0_1 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_1d8)
    
    int64_t rbx_2 = var_1d8
    UnDecorator::getReferenceType(rbx_2, u"LoadingPolicy", 0x1c)
    int64_t* var_188
    sub_140b75db0(arg2, &var_188, &var_1d8)
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    int64_t* r14_1 = var_188
    int32_t i
    
    if (r14_1 != 0 && r14_1[1].d == 2)
        int64_t var_158
        int64_t* rax_7 = sub_140b74df0(r14_1, &var_158)
        int16_t* const rsi_1
        
        if (rax_7[1].d == 0)
            rsi_1 = &data_142d40450
        else
            rsi_1 = *rax_7
        
        for (i = 0; i s< 6; i += 1)
            wchar16 const* const rdx_6
            
            if (i u> 5)
                rdx_6 = nullptr
            else
                switch (i)
                    case 0
                        rdx_6 = u"Never"
                    case 1
                        rdx_6 = u"Always"
                    case 2
                        rdx_6 = u"Editor"
                    case 3
                        rdx_6 = u"Game"
                    case 4
                        rdx_6 = u"PropertyNames"
                    case 5
                        rdx_6 = u"ToolTips"
            
            if (sub_140a54510(rsi_1, rdx_6) == 0)
                break
        
        int64_t rcx_18 = var_158
        arg1[2].d = i
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
            i = arg1[2].d
    
    if (r14_1 == 0 || r14_1[1].d != 2 || i != 6)
        rdi.b = 1
    else
        int64_t var_148
        void var_e0
        int64_t* rax_11 = sub_140aae2f0(&var_e0, sub_140b74df0(r14_1, &var_148))
        void var_c8
        int64_t* rax_12 = sub_140aae420(&var_c8, arg1)
        void var_120
        char* var_f0
        char** rax_14 = sub_140a96390(&var_f0, 
            _vfprintf_p_l(&var_120, 
                Localization Target entry '{0}' specified an unrecognized target LoadingPolicy '{1}'", 
            LocalizationDescriptor"))
        int64_t var_98_1 = *rax_12
        void* rcx_25 = rax_12[1]
        int32_t var_a8_1 = 4
        void* var_90_1 = rcx_25
        
        if (rcx_25 != 0)
            *(rcx_25 + 8) += 1
        
        int32_t var_88_1 = rax_12[2].d
        int64_t var_68_1 = *rax_11
        void* rax_17 = rax_11[1]
        char var_80_1 = 1
        int32_t var_78_1 = 4
        void* var_60_1 = rax_17
        
        if (rax_17 != 0)
            *(rax_17 + 8) += 1
        
        int64_t i_2 = 2
        int32_t var_58_1 = rax_11[2].d
        char var_50_1 = 1
        void* var_1c8 = nullptr
        int32_t var_1c0_1 = 2
        sub_1405a4b40(&var_1c8, 2, 0)
        void var_a0
        void* rdx_11 = &var_a0
        int64_t* rcx_28 = var_1c8 + 8
        int32_t i_3 = 2
        int32_t i_1
        
        do
            rcx_28[-1].d = *(rdx_11 - 8)
            *rcx_28 = *rdx_11
            *rcx_28 = *rdx_11
            *rcx_28 = *rdx_11
            *rcx_28 = *rdx_11
            rcx_28[4].b = 0
            
            if (*(rdx_11 + 0x20) != 0)
                rcx_28[1] = *(rdx_11 + 8)
                void* rax_25 = *(rdx_11 + 0x10)
                rcx_28[2] = rax_25
                
                if (rax_25 != 0)
                    *(rax_25 + 8) += 1
                
                rcx_28[3].d = *(rdx_11 + 0x18)
                rcx_28[4].b = 1
            
            rcx_28 = &rcx_28[6]
            rdx_11 += 0x30
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        char* var_198 = *rax_14
        void* rax_28 = rax_14[1]
        void* var_190_1 = rax_28
        
        if (rax_28 != 0)
            *(rax_28 + 8) += 1
        
        void var_138
        int64_t* rax_29 = sub_140aac870(&var_138, &var_198, &var_1c8)
        int64_t rcx_30 = *rax_29
        void* rcx_31 = rax_29[1]
        
        if (rcx_31 != 0)
            *(rcx_31 + 8) += 1
        
        int32_t rax_30 = rax_29[2].d
        int64_t* var_130
        
        if (var_130 != 0)
            var_130[1].d -= 1
            
            if (var_130[1].d == 1)
                (**var_130)(var_130)
                int32_t rax_33 = *(var_130 + 0xc)
                *(var_130 + 0xc) -= 1
                
                if (rax_33 == 1)
                    (*(*var_130 + 8))(var_130, 1)
        
        sub_140596f50(&var_1c8)
        int64_t __saved_r12
        int64_t* rsi_2 = &__saved_r12
        
        do
            i_2 -= 1
            rsi_2 = &rsi_2[-6]
            
            if (*rsi_2 != 0)
                *rsi_2 = 0
                int64_t* rbx_5 = rsi_2[-2]
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t rax_37 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (rax_37 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
        while (i_2 != 0)
        
        int64_t* rbx_6 = rax_14[1]
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t rax_41 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rax_41 == 1)
                    (*(*rbx_6 + 8))(rbx_6, zx.q((i_2 + 1).d))
        
        int64_t* rbx_8 = rax_12[1]
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t rax_45 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (rax_45 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
        
        int64_t* rbx_9 = rax_11[1]
        
        if (rbx_9 != 0)
            rbx_9[1].d -= 1
            
            if (rbx_9[1].d == 1)
                (**rbx_9)(rbx_9)
                int32_t rax_49 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (rax_49 == 1)
                    (*(*rbx_9 + 8))(rbx_9, 1)
        
        int64_t rcx_43 = *arg3
        *arg3 = rcx_30
        int64_t* rbx_10 = arg3[1]
        arg3[1] = rcx_31
        arg3[2].d = rax_30
        int64_t var_1b8_2 = rcx_43
        int64_t* var_1b0_2 = rbx_10
        
        if (rbx_10 != 0)
            rbx_10[1].d -= 1
            
            if (rbx_10[1].d == 1)
                (**rbx_10)(rbx_10)
                int32_t rax_57 = *(rbx_10 + 0xc)
                *(rbx_10 + 0xc) -= 1
                
                if (rax_57 == 1)
                    (*(*rbx_10 + 8))(rbx_10, 1)
        
        int64_t* var_118
        
        if (var_118 != 0)
            var_118[1].d -= 1
            
            if (var_118[1].d == 1)
                (**var_118)(var_118)
                int32_t rdi_1 = *(var_118 + 0xc)
                *(var_118 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_118 + 8))(var_118, zx.q(rdi_1))
        
        int64_t rcx_48 = var_148
        
        if (rcx_48 != 0)
            sub_140a74f90(rcx_48)
        
        rdi.b = 0
    
    int64_t* var_180
    
    if (var_180 != 0)
        var_180[1].d -= 1
        
        if (var_180[1].d == 1)
            (**var_180)(var_180)
            int32_t temp6_1 = *(var_180 + 0xc)
            *(var_180 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_180 + 8))(var_180, 1)

int64_t* var_170

if (var_170 != 0)
    var_170[1].d -= 1
    
    if (var_170[1].d == 1)
        (**var_170)(var_170)
        int32_t temp4_1 = *(var_170 + 0xc)
        *(var_170 + 0xc) -= 1
        
        if (temp4_1 == 1)
            int64_t r8_4 = *var_170
            (*(r8_4 + 8))(var_170, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_208)
return zx.q(rdi.b)
