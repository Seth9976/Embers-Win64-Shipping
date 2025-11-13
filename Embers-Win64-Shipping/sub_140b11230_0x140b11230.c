// 函数: sub_140b11230
// 地址: 0x140b11230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
char* i_6

if (*arg1 != 0)
    char* i_5 = *(arg3 + 0x20)
    int64_t rcx = *(arg3 + 0x10)
    
    if (i_5 u>= rcx)
        int64_t rdx = *(arg3 + 0x18)
        
        if (i_5 u<= rdx - 2)
            char var_198 = 0
            int64_t rax_2
            
            if (i_5 u< rcx || i_5 u> rdx - 2)
            label_140b11327:
                rax_2.b = 0
            else
                i_6 = i_5
                int32_t var_158_1 = 0
                char* i = i_5
                char* i_3 = i
                int32_t var_154_1 = ((i_5 - rcx) s>> 1).d
                
                if (i_5 == rdx)
                label_140b11327_1:
                    rax_2.b = 0
                else
                    do
                        int16_t var_190 = *i
                        rax_2 = sub_140b0ee20(&var_198, &var_190)
                        
                        if (rax_2.d == 3)
                            goto label_140b11327_2
                        
                        if (rax_2.d u<= 1)
                            i = &i[2]
                            char* i_4 = i
                            
                            if (rax_2.d == 1)
                                break
                        
                        if (rax_2.d == 2)
                            break
                    while (i != *(arg3 + 0x18))
                    
                    if (i == i_5)
                    label_140b11327_2:
                        rax_2.b = 0
                    else
                        rax_2.b = 1
                        arg4 = var_158_1.q
                        int128_t var_b8_1 = i_6.o
                        int64_t var_a8_1 = arg4
            
            char var_a0_1 = rax_2.b
            int64_t var_b0
            
            if (rax_2.b != 0 && var_b0 u>= *(arg3 + 0x10) && var_b0 u<= *(arg3 + 0x18))
                *(arg3 + 0x20) = var_b0

int64_t r13 = *(arg3 + 0x20)

if (r13 == *(arg3 + 0x18))
label_140b117f1:
    arg2[3].b = 0
else
    void* i_1 = *(arg1 + 8)
    
    for (void* r12_3 = (sx.q(*(arg1 + 0x10)) << 6) + i_1; i_1 != r12_3; i_1 += 0x40)
        void* rax_7 = *(i_1 + 0x10)
        void* rcx_2 = i_1 + 0x20
        
        if (rax_7 != 0)
            rcx_2 = rax_7
        
        void var_98
        int64_t* rax_10 = (*i_1)(&var_98, (*(*rcx_2 + 8))(rcx_2), arg3)
        char var_c0_1 = 0
        int64_t var_d8
        int64_t* var_d0
        int32_t var_c8
        
        if (rax_10[3].b != 0)
            int64_t* rcx_4 = rax_10[1]
            var_d8 = *rax_10
            var_d0 = rcx_4
            
            if (rcx_4 != 0)
                rcx_4[1].d += 1
            
            var_c8 = rax_10[2].d
            var_c0_1 = 1
        
        char var_80
        
        if (var_80 != 0)
            var_80 = 0
            int64_t* var_90
            
            if (var_90 != 0)
                var_90[1].d -= 1
                
                if (var_90[1].d == 1)
                    (**var_90)(var_90)
                    int32_t rax_15 = *(var_90 + 0xc)
                    *(var_90 + 0xc) -= 1
                    
                    if (rax_15 == 1)
                        (*(*var_90 + 8))(var_90, 1)
        
        if (var_c0_1 != 0)
            arg2[3].b = 0
            *arg2 = var_d8
            arg2[1] = var_d0
            
            if (var_d0 != 0)
                var_d0[1].d += 1
            
            arg2[2].d = var_c8
            arg2[3].b = 1
            
            if (var_d0 != 0)
                var_d0[1].d -= 1
                
                if (var_d0[1].d == 1)
                    int64_t r8_4 = *var_d0
                    (*r8_4)(var_d0, arg4, r8_4)
                    int32_t rdi_2 = *(var_d0 + 0xc)
                    *(var_d0 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        int64_t r8_5 = *var_d0
                        (*(r8_5 + 8))(var_d0, zx.q(rdi_2), r8_5)
            
            goto label_140b11808
        
        if (*(arg3 + 0x20) != r13)
            goto label_140b117f1
    
    int16_t* r12_4 = *(arg3 + 0x20)
    int64_t var_188 = 0
    void* rbx_2 = r12_4
    int32_t var_180_1 = 0
    
    if (iswspace(*r12_4) != 0)
        int32_t i_2
        
        do
            wint_t _C = *(rbx_2 + 2)
            rbx_2 += 2
            i_2 = iswspace(_C)
        while (i_2 != 0)
    
    if (iswspace(*rbx_2) == 0)
        while (*rbx_2 != 0)
            wint_t _C_1 = *(rbx_2 + 2)
            rbx_2 += 2
            
            if (iswspace(_C_1) != 0)
                break
    
    int64_t var_178 = 0
    int64_t rbx_4 = (rbx_2 - r12_4) s>> 1
    int32_t rsi_1 = 0x20
    int32_t rdx_4 = 0
    int32_t rcx_9 = 0
    int32_t var_170_1 = 0
    
    if (rbx_4.d s<= 0x20)
        rsi_1 = rbx_4.d
    
    int32_t var_16c_1 = 0
    
    if (*r12_4 != 0 && rsi_1 s> 0)
        if (rsi_1 + 1 s> 0)
            sub_1405947f0(&var_178, rsi_1 + 1)
            rcx_9 = var_16c_1
            rdx_4 = var_170_1
        
        int32_t rax_22 = rdx_4 + 1 + rsi_1
        
        if (rax_22 s> rcx_9)
            sub_140594770(&var_178)
        
        UnDecorator::getReferenceType(var_178, r12_4, rsi_1 * 2)
        *(var_178 + (sx.q(rax_22) << 1) - 2) = 0
    
    if (rbx_4 s> 0x20)
        sub_140a20ba0(&var_178, &data_142e1f8a0, 3)
    
    void var_150
    int64_t* rax_24 = sub_140aae2f0(&var_150, &var_178)
    int64_t* rbx_5 = rax_24[1]
    int64_t r13_1 = *rax_24
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    int64_t rsi_2 = sx.q(var_180_1)
    int32_t r12_5 = rax_24[2].d
    int32_t rax_25 = (rsi_2 + 1).d
    
    if (rax_25 s> 0)
        sub_1405c4f50(&var_188)
    
    int32_t* rcx_19 = rsi_2 * 0x30 + var_188
    int64_t var_70
    *(rcx_19 + 8) = var_70
    *rcx_19 = 4
    rcx_19[0xa].b = 0
    *(rcx_19 + 0x10) = r13_1
    *(rcx_19 + 0x18) = rbx_5
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    rcx_19[8] = r12_5
    rcx_19[0xa].b = 1
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t rax_28 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rax_28 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* var_148
    
    if (var_148 != 0)
        var_148[1].d -= 1
        
        if (var_148[1].d == 1)
            (**var_148)(var_148)
            int32_t rax_32 = *(var_148 + 0xc)
            *(var_148 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*var_148 + 8))(var_148, 1)
    
    int64_t rcx_24 = var_178
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t rbx_7 = sx.q(rax_25)
    int64_t rax_37 = sx.q(((*(arg3 + 0x20) - *(arg3 + 0x10)) s>> 1).d)
    int32_t rax_38 = (rbx_7 + 1).d
    var_180_1 = rax_38
    
    if (rax_38 s> 0)
        sub_1405c4f50(&var_188)
    
    int32_t* rcx_28 = rbx_7 * 0x30 + var_188
    *rcx_28 = 0
    *(rcx_28 + 8) = rax_37
    rcx_28[0xa].b = 0
    void var_138
    void var_120
    int64_t* rax_41 = sub_140aac8f0(&var_138, 
        sub_140a96390(&i_6, _vfprintf_p_l(&var_120, Unrecognized token '{0}' at character {1}", 
            ExpressionParser")), &var_188)
    int64_t* rbx_8 = rax_41[1]
    
    if (rbx_8 != 0)
        rbx_8[1].d += 1
    
    int32_t rax_42 = rax_41[2].d
    *arg2 = *rax_41
    arg2[1] = rbx_8
    
    if (rbx_8 != 0)
        rbx_8[1].d += 1
    
    arg2[2].d = rax_42
    arg2[3].b = 1
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t rax_45 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (rax_45 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
    
    int64_t* var_130
    
    if (var_130 != 0)
        var_130[1].d -= 1
        
        if (var_130[1].d == 1)
            (**var_130)(var_130)
            int32_t rax_49 = *(var_130 + 0xc)
            *(var_130 + 0xc) -= 1
            
            if (rax_49 == 1)
                (*(*var_130 + 8))(var_130, 1)
    
    int64_t* var_118
    
    if (var_118 != 0)
        var_118[1].d -= 1
        
        if (var_118[1].d == 1)
            (**var_118)(var_118)
            int32_t rdi_1 = *(var_118 + 0xc)
            *(var_118 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_118 + 8))(var_118, zx.q(rdi_1))
    
    sub_140596f50(&var_188)

label_140b11808:
__security_check_cookie(rax_1 ^ &var_1b8)
return arg2
