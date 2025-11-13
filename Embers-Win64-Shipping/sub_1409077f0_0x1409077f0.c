// 函数: sub_1409077f0
// 地址: 0x1409077f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int16_t* var_128 = nullptr
int32_t var_120 = 0
int64_t var_108 = 0
int64_t var_100 = 0
int64_t* i_1 = nullptr
int32_t var_130 = 0
sub_1405947f0(&i_1, 4)
int32_t rax_2 = var_130 + 4
var_130 = rax_2

if (rax_2 s> 0)
    sub_140594770(&i_1)

int64_t* i = i_1
UnDecorator::getReferenceType(i, &data_142d62df8, 8)
int64_t* rsi
rsi.b = sub_14060a620(arg2, &i_1, &var_128, &var_108, 0, 0) == 0

if (i != 0)
    sub_140a74f90(i)

int64_t* rdi_2

if (rsi.b == 0)
    i = *(arg1 + 0x30)
    
    for (void* rdi_5 = &i[sx.q(*(arg1 + 0x38)) * 2]; i != rdi_5; i = &i[2])
        int16_t* const rdx_4 = &data_142d40450
        
        if (var_120 != 0)
            rdx_4 = var_128
        
        int16_t* const rcx_9
        
        if (i[1].d == 0)
            rcx_9 = &data_142d40450
        else
            rcx_9 = *i
        
        if (sub_140a54510(rcx_9, rdx_4) == 0)
            i.b = 1
            goto label_140907c89
    
    if (arg3 != 0)
        void var_88
        int64_t* rax_9 = sub_140aae420(&var_88, &var_128)
        void var_b0
        char* var_98
        char** rax_11 = sub_140a96390(&var_98, 
            _vfprintf_p_l(&var_b0, The URI scheme '{0}' is not supported", FImgMediaFactoryModule"))
        int64_t rcx_13 = *rax_9
        int64_t* rcx_14 = rax_9[1]
        int32_t var_70_1 = 4
        
        if (rcx_14 != 0)
            rcx_14[1].d += 1
        
        int32_t rcx_15 = rax_9[2].d
        char var_48_1 = 1
        int32_t* var_118 = nullptr
        int32_t var_110_1 = 1
        sub_1405a4b40(&var_118, 1, 0)
        int32_t* rcx_17 = var_118
        *rcx_17 = var_70_1
        int64_t var_68
        *(rcx_17 + 8) = var_68
        *(rcx_17 + 8) = var_68
        rcx_17[2] = var_68.d
        *(rcx_17 + 8) = var_68
        rcx_17[0xa].b = 0
        
        if (var_48_1 != 0)
            *(rcx_17 + 0x10) = rcx_13
            *(rcx_17 + 0x18) = rcx_14
            
            if (rcx_14 != 0)
                rcx_14[1].d += 1
            
            rcx_17[8] = rcx_15
            rcx_17[0xa].b = 1
        
        char* var_f0 = *rax_11
        void* rax_19 = rax_11[1]
        void* var_e8_1 = rax_19
        
        if (rax_19 != 0)
            *(rax_19 + 8) += 1
        
        void var_c8
        int64_t* rax_20 = sub_140aac870(&var_c8, &var_f0, &var_118)
        int64_t* rdi_6 = rax_20[1]
        int64_t rcx_19 = *rax_20
        
        if (rdi_6 != 0)
            rdi_6[1].d += 1
        
        int32_t r13_1 = rax_20[2].d
        int64_t* var_c0
        
        if (var_c0 != 0)
            var_c0[1].d -= 1
            
            if (var_c0[1].d == 1)
                (**var_c0)(var_c0)
                int32_t rax_23 = *(var_c0 + 0xc)
                *(var_c0 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*var_c0 + 8))(var_c0, 1)
        
        sub_140596f50(&var_118)
        
        if (var_48_1 != 0)
            char var_48_2 = 0
            
            if (rcx_14 != 0)
                rcx_14[1].d -= 1
                
                if (rcx_14[1].d == 1)
                    (**rcx_14)(rcx_14)
                    int32_t rax_27 = *(rcx_14 + 0xc)
                    *(rcx_14 + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        (*(*rcx_14 + 8))(rcx_14, 1)
        
        int64_t* rsi_3 = rax_11[1]
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t rax_31 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (rax_31 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
        
        int64_t* rsi_4 = rax_9[1]
        
        if (rsi_4 != 0)
            rsi_4[1].d -= 1
            
            if (rsi_4[1].d == 1)
                (**rsi_4)(rsi_4)
                int32_t rax_35 = *(rsi_4 + 0xc)
                *(rsi_4 + 0xc) -= 1
                
                if (rax_35 == 1)
                    (*(*rsi_4 + 8))(rsi_4, 1)
        
        int64_t rsi_5 = sx.q(arg3[1].d)
        int32_t rax_37 = (rsi_5 + 1).d
        arg3[1].d = rax_37
        
        if (rax_37 s> *(arg3 + 0xc))
            sub_1405a4df0(arg3)
        
        int64_t rax_38 = *arg3
        int64_t rdx_9 = rsi_5 * 3
        *(rax_38 + (rdx_9 << 3)) = rcx_19
        *(rax_38 + (rdx_9 << 3) + 8) = rdi_6
        
        if (rdi_6 != 0)
            rdi_6[1].d += 1
        
        *(rax_38 + (rdx_9 << 3) + 0x10) = r13_1
        
        if (rdi_6 != 0)
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                (**rdi_6)(rdi_6)
                int32_t rax_42 = *(rdi_6 + 0xc)
                *(rdi_6 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*(*rdi_6 + 8))(rdi_6, 1)
        
        int64_t* var_a8
        rdi_2 = var_a8
        
        if (rdi_2 != 0)
            goto label_140907c5f
else if (arg3 != 0)
    void var_e0
    int64_t* rax_4 = _vfprintf_p_l(&var_e0, u"No URI scheme found", u"FImgMediaFactoryModule")
    int64_t rdi_1 = sx.q(arg3[1].d)
    int32_t rcx_6 = (rdi_1 + 1).d
    arg3[1].d = rcx_6
    
    if (rcx_6 s> *(arg3 + 0xc))
        sub_1405a4df0(arg3)
    
    int64_t rdx_3 = rdi_1 * 3
    int64_t rcx_8 = *arg3
    *(rcx_8 + (rdx_3 << 3)) = *rax_4
    void* rax_6 = rax_4[1]
    *(rcx_8 + (rdx_3 << 3) + 8) = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    *(rcx_8 + (rdx_3 << 3) + 0x10) = rax_4[2].d
    int64_t* var_d8
    rdi_2 = var_d8
    
    if (rdi_2 != 0)
    label_140907c5f:
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rbx = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rbx == 1)
                (*(*rdi_2 + 8))(rdi_2, zx.q(rbx))
i.b = 0
label_140907c89:
int64_t rcx_35 = var_108

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

int16_t* rcx_36 = var_128

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

__security_check_cookie(rax_1 ^ &var_168)
return zx.q(i.b)
