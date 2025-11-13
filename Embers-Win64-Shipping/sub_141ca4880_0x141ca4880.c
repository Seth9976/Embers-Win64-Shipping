// 函数: sub_141ca4880
// 地址: 0x141ca4880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
sub_140b7c510()
int64_t r8 = data_143e19eb0
int64_t* var_200
uint64_t result = (*(r8 + 0x40))(&data_143e19eb0, &var_200, r8)
int64_t* r12 = var_200
int32_t i_5
int32_t i_2 = i_5
void* r13_2 = &r12[sx.q(i_2) * 2]
int64_t* var_208 = r12
void* var_1b0 = r13_2

if (r12 != r13_2)
    do
        int64_t* rsi_1 = r12[1]
        int64_t* r14_1 = *r12
        int64_t* var_1c0_1 = r14_1
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        int64_t* rax_3 = (*(*r14_1 + 8))(r14_1)
        int16_t* const rbx_1
        
        if (rax_3[1].d == 0)
            rbx_1 = &data_142d40450
        else
            rbx_1 = *rax_3
        
        void var_158
        sub_1405eb940(&var_158, "WindowsNoEditor")
        int64_t var_168
        int64_t* rax_4 = sub_140b17c60(&var_168)
        int16_t* const r8_1
        
        if (rax_4[1].d == 0)
            r8_1 = &data_142d40450
        else
            r8_1 = *rax_4
        
        int16_t* const var_268_1 = rbx_1
        int16_t* var_1e0
        sub_140a2e390(&var_1e0, u"%s%s/%s.ini", r8_1)
        int64_t rcx_4 = var_168
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t var_58
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        void* rcx_6 = data_143ddb400
        int16_t** var_268_2 = &var_1e0
        char var_258 = 0
        result = sub_140af2fd0(rcx_6, PluginSettings", RemapPluginContentToGame"
            , &var_258, var_268_2)
        
        if (result.b != 0 && var_258 != 0)
            int64_t* rax_6 = (*(*r14_1 + 8))(r14_1)
            int16_t* const r8_2
            
            if (rax_6[1].d == 0)
                r8_2 = &data_142d40450
            else
                r8_2 = *rax_6
            
            int16_t* var_1a8
            sub_140a2e390(&var_1a8, u"/%s/", r8_2)
            int16_t* const rdx_1 = &data_142d40450
            int32_t var_1a0
            
            if (var_1a0 != 0)
                rdx_1 = var_1a8
            
            int64_t var_1d0
            sub_140b58260(&var_1d0, rdx_1, 1)
            int16_t* rcx_10 = var_1a8
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            void* rdi_2 = arg1
            int64_t rax_7 = *(rdi_2 + 0x28)
            int64_t rdx_2 = var_1d0
            int64_t r9_3
            r9_3.b = 1
            void* var_240 = nullptr
            int32_t i_4 = 0
            var_268_2.b = 0
            (*(rax_7 + 0x20))(rdi_2 + 0x28, rdx_2, &var_240, r9_3, var_268_2)
            void* r15_1 = var_240
            void* rax_11 = sx.q(i_4) * 0x50 + r15_1
            
            if (r15_1 != rax_11)
                do
                    int64_t var_1f0
                    sub_140b63b70(r15_1 + 8, &var_1f0)
                    int64_t* rax_13 = (*(*r14_1 + 8))(r14_1)
                    int16_t* const r8_4
                    
                    if (rax_13[1].d == 0)
                        r8_4 = &data_142d40450
                    else
                        r8_4 = *rax_13
                    
                    int16_t* var_188
                    sub_140a2e390(&var_188, u"/%s/", r8_4)
                    int16_t* const r8_5 = &data_142d40450
                    var_268_2.d = 1
                    int32_t var_180
                    
                    if (var_180 != 0)
                        r8_5 = var_188
                    
                    int64_t var_198
                    sub_140a300d0(&var_1f0, &var_198, r8_5, u"/Game/", var_268_2.d)
                    uint64_t r13_3 = 0
                    int64_t rdi_3 = var_198
                    uint64_t var_230 = 0
                    int32_t var_224
                    int32_t var_190
                    
                    if (var_190 != 0)
                        sub_1405a4c70(&var_230, var_190, 0)
                        r13_3 = var_230
                        memcpy(r13_3, rdi_3, var_190 * 2)
                    else
                        var_224 = 0
                    
                    uint64_t r14_2 = 0
                    int64_t rdi_4 = var_1f0
                    uint64_t var_220 = 0
                    int32_t var_1e8
                    int32_t r12_1
                    
                    if (var_1e8 != 0)
                        sub_1405a4c70(&var_220, var_1e8, 0)
                        r14_2 = var_220
                        memcpy(r14_2, rdi_4, var_1e8 * 2)
                        int32_t var_214
                        r12_1 = var_214
                        r13_3 = var_230
                    else
                        r12_1 = 0
                    
                    int64_t rdi_5 = sx.q(*(rdi_2 + 0x770))
                    int32_t rax_14 = (rdi_5 + 1).d
                    *(rdi_2 + 0x770) = rax_14
                    
                    if (rax_14 s> *(rdi_2 + 0x774))
                        sub_1405c4e40(rdi_2 + 0x768)
                    
                    int64_t* rcx_23 = (rdi_5 << 5) + *(rdi_2 + 0x768)
                    *rcx_23 = r13_3
                    rcx_23[1].d = var_190
                    *(rcx_23 + 0xc) = var_224
                    rcx_23[2] = r14_2
                    rcx_23[3].d = var_1e8
                    *(rcx_23 + 0x1c) = r12_1
                    int64_t rcx_24 = var_198
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                    
                    int16_t* rcx_25 = var_188
                    
                    if (rcx_25 != 0)
                        sub_140a74f90(rcx_25)
                    
                    int64_t rcx_26 = var_1f0
                    
                    if (rcx_26 != 0)
                        sub_140a74f90(rcx_26)
                    
                    r14_1 = var_1c0_1
                    r15_1 += 0x50
                while (r15_1 != rax_11)
                
                r12 = var_208
                r13_2 = var_1b0
                rdi_2 = arg1
            
            uint64_t result_1 = 0
            int32_t var_248_1 = 0
            uint64_t (* var_178_1)(void* arg1, int64_t* arg2, int64_t* arg3) = sub_141cac6b0
            int32_t var_170_1 = 0
            int64_t* rax_17 = sub_140a84c80(0, 0x30, 0)
            
            if (rax_17 != 0)
                *rax_17 = &data_143211940
                sub_140d3a3a0(&rax_17[1], rdi_2)
                *(rax_17 + 0x10) = var_178_1.o
                rax_17[5] = sub_140a387b0()
                (*(*rax_17 + 0x40))(rax_17, &result_1)
                (*(*rax_17 + 0x38))(rax_17, 0)
                int64_t rax_21 = sub_140a84c80(rax_17, 0, 0)
                
                if (rax_21 != 0)
                    sub_140a74f90(rax_21)
            else if (var_248_1 != 0)
                uint64_t result_3 = result_1
                
                if (result_3 != 0)
                    (*(*result_3 + 0x38))(result_3, 0)
                    uint64_t result_4 = result_1
                    
                    if (result_4 != 0)
                        result_1 = sub_140a84c80(result_4, 0, 0)
                    
                    var_248_1 = 0
            
            int64_t rbx_5 = sx.q(data_143de5660)
            int32_t rax_24 = (rbx_5 + 1).d
            bool cond:1_1 = rax_24 s<= data_143de5664
            data_143de5660 = rax_24
            
            if (not(cond:1_1))
                sub_1405a4f90(&data_143de5658)
            
            result = &result_1
            int64_t* rdx_15 = (rbx_5 << 4) + data_143de5658
            *rdx_15 = 0
            rdx_15[1].d = 0
            uint64_t result_2 = result_1
            
            if (&result_1 == rdx_15)
            label_141ca4d3a:
                
                if (var_248_1 == 0)
                    goto label_141ca4d6f
                
                if (result_2 != 0)
                    result = (*(*result_2 + 0x38))(result_2, 0)
                    result_2 = result_1
                    
                    if (result_2 != 0)
                        result = sub_140a84c80(result_2, 0, 0)
                        result_2 = result
                        result_1 = result
                    
                    int32_t var_248_2 = 0
                    goto label_141ca4d6f
            else
                if (var_248_1 != 0)
                    if (result_2 != 0)
                        result = (*(*result_2 + 0x40))()
                        result_2 = result_1
                    
                    goto label_141ca4d3a
                
            label_141ca4d6f:
                
                if (result_2 != 0)
                    result = sub_140a74f90(result_2)
            
            int32_t i_3 = i_4
            
            if (i_3 != 0)
                void* rdi_7 = var_240 + 0x30
                int32_t i
                
                do
                    int64_t rcx_32 = *(rdi_7 + 8)
                    
                    if (rcx_32 != 0)
                        result = sub_140a74f90(rcx_32)
                    
                    int64_t* rbx_6 = *rdi_7
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            result = (**rbx_6)(rbx_6)
                            int32_t temp7_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                result = (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    rdi_7 += 0x50
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            void* rcx_35 = var_240
            
            if (rcx_35 != 0)
                result = sub_140a74f90(rcx_35)
        
        int16_t* rcx_36 = var_1e0
        
        if (rcx_36 != 0)
            result = sub_140a74f90(rcx_36)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                result = (**rsi_1)(rsi_1)
                int32_t temp4_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*rsi_1 + 8))(rsi_1, 1)
        
        r12 = &r12[2]
        var_208 = r12
    while (r12 != r13_2)
    
    i_2 = i_5
    r12 = var_200

if (i_2 != 0)
    void* rdi_8 = &r12[1]
    int32_t i_1
    
    do
        int64_t* rbx_7 = *rdi_8
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                result = (**rbx_7)(rbx_7)
                int32_t temp2_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_7 + 8))(rbx_7, 1)
        
        rdi_8 += 0x10
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    r12 = var_200

if (r12 != 0)
    result = sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_288)
return result
