// 函数: sub_140951ab0
// 地址: 0x140951ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_190 = 0
int64_t arg_8 = 0
int64_t var_148 = 0
int64_t* var_140 = nullptr
sub_1423de540(data_143f5b298, *(arg1 + 0x58), 0)
int64_t* rax = sub_14093f850(&var_190)
wchar16 const* const var_130 = u"EndTurn"
int16_t* const r15 = &data_142d40450

if (rax == 0)
    int64_t arg_10 = 0
    int16_t* var_188
    sub_140a2e390(&var_188, u"%s - Invalid or uninitialized OnlineSubsystem", u"EndTurn")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_180
    
    if (var_180 != 0)
        rcx_3 = var_188
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_188
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_148, sub_140d3c6e0(arg1 + 0x50))
int32_t result

if (var_148 == 0 || rax == 0)
    result = sub_1405a9f90(arg1 + 0x40, 0)
else
    int64_t* var_1a0
    (*(*rax + 0xf8))(rax, &var_1a0)
    int64_t* rcx_8 = var_1a0
    int64_t* var_198
    
    if (rcx_8 == 0)
        int64_t var_1a8_1 = 0
        sub_140d23f50(u"Turn based games not supported by online subsystem", 3)
        
        if (var_198 != 0)
            var_198[1].d -= 1
            
            if (var_198[1].d == 1)
                (**var_198)(var_198)
                int32_t rsi_2 = *(var_198 + 0xc)
                *(var_198 + 0xc) -= 1
                
                if (rsi_2 == 1)
                    (*(*var_198 + 8))(var_198, zx.q(rsi_2))
        
        result = sub_1405a9f90(arg1 + 0x40, 0)
    else
        if (*(arg1 + 0x70) == 0)
            int64_t arg_20 = 0
            result = sub_140d23f50(u"No match data passed in to End Turn.", 3)
        else
            void var_f8
            sub_140b4c4f0(&var_f8, sx.q((*(*rcx_8 + 0x58))(rcx_8)), 0)
            void*** var_128
            void**** rax_6
            int512_t zmm0_1
            int512_t zmm1_1
            rax_6, zmm0_1, zmm1_1 = sub_1422c0730(&var_128, *(*(arg1 + 0x70) + 0x10), 0, 0)
            sub_1422d1620(*rax_6, *(arg1 + 0x70), &var_f8, zmm0_1, zmm1_1)
            int64_t* var_120
            
            if (var_120 != 0)
                var_120[1].d -= 1
                
                if (var_120[1].d == 1)
                    (**var_120)(var_120)
                    int32_t temp4_1 = *(var_120 + 0xc)
                    *(var_120 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_120 + 8))(var_120, 1)
            
            int64_t* var_1b8 = nullptr
            int32_t var_1b0_1 = 0
            void*** rax_9 = sub_140a84c80(0, 0x30, 0)
            void*** var_118_1 = rax_9
            
            if (rax_9 != 0)
                *rax_9 = &data_142e344d8
                sub_140d3a3a0(&rax_9[1], arg1)
                rax_9[2] = sub_14095d7c0
                rax_9[4] = sub_140a387b0()
                *rax_9 = &data_142e34530
                sub_140956e00(rax_9, &var_1b8)
            else if (var_1b0_1 != 0)
                int64_t* rcx_16 = var_1b8
                
                if (rcx_16 != 0)
                    (*(*rcx_16 + 0x38))(rcx_16, 0)
                    int64_t* rcx_17 = var_1b8
                    
                    if (rcx_17 != 0)
                        var_1b8 = sub_140a84c80(rcx_17, 0, 0)
            
            if (rax_9 != 0)
                (*rax_9)[7](rax_9, 0)
                int64_t rax_14 = sub_140a84c80(rax_9, 0, 0)
                int64_t var_118_2 = rax_14
                
                if (rax_14 != 0)
                    sub_140a74f90(rax_14)
            
            int64_t* rdi_1 = var_1a0
            int64_t* var_158
            void var_108
            (*(*rdi_1 + 0x38))(rdi_1, &var_158, sub_140596d10(&var_108, arg1 + 0x60))
            int64_t* rbx_4 = var_158
            int64_t var_68
            
            if (rbx_4 == 0)
                int16_t* const r8_4
                
                if (*(arg1 + 0x68) == 0)
                    r8_4 = &data_142d40450
                else
                    r8_4 = *(arg1 + 0x60)
                
                int16_t* var_168
                sub_140a2e390(&var_168, u"Match ID %s not found", r8_4)
                int64_t arg_18 = 0
                int32_t var_160
                
                if (var_160 != 0)
                    r15 = var_168
                
                sub_140d23f50(r15, 3)
                int16_t* rcx_27 = var_168
                
                if (rcx_27 != 0)
                    sub_140a74f90(rcx_27)
            else
                int64_t var_178 = 0
                int32_t var_170_1 = 0
                
                if (var_1b0_1 != 0)
                    int64_t* rcx_23 = var_1b8
                    
                    if (rcx_23 != 0)
                        (*(*rcx_23 + 0x40))(rcx_23, &var_178)
                
                (*(*rbx_4 + 0x58))(rbx_4, &var_68, 0, &var_178)
            
            int64_t* var_150
            
            if (var_150 != 0)
                var_150[1].d -= 1
                
                if (var_150[1].d == 1)
                    (**var_150)(var_150)
                    int32_t rax_20 = *(var_150 + 0xc)
                    *(var_150 + 0xc) -= 1
                    
                    if (rax_20 == 1)
                        (*(*var_150 + 8))(var_150, 1)
            
            int64_t* rax_23
            
            if (var_1b0_1 == 0)
                rax_23 = var_1b8
            label_140951e2a:
                
                if (rax_23 != 0)
                    sub_140a74f90(rax_23)
            else
                int64_t* rcx_30 = var_1b8
                
                if (rcx_30 != 0)
                    (*(*rcx_30 + 0x38))(rcx_30, 0)
                    rax_23 = var_1b8
                    
                    if (rax_23 != 0)
                        rax_23 = sub_140a84c80(rax_23, 0, 0)
                        var_1b8 = rax_23
                    
                    int32_t var_1b0_2 = 0
                    goto label_140951e2a
            int64_t rcx_33 = var_68
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
            
            result = sub_140b4cb40(&var_f8)
        
        if (var_198 != 0)
            result = var_198[1].d
            var_198[1].d -= 1
            
            if (result == 1)
                result = (**var_198)(var_198)
                int32_t rsi_1 = *(var_198 + 0xc)
                *(var_198 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    result = (*(*var_198 + 8))(var_198, zx.q(rsi_1))

if (var_140 != 0)
    var_140[1].d -= 1
    
    if (var_140[1].d == 1)
        result = (**var_140)(var_140)
        int32_t temp2_1 = *(var_140 + 0xc)
        *(var_140 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_140 + 8))(var_140, 1)

return result
