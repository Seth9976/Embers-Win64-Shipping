// 函数: sub_140db4940
// 地址: 0x140db4940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int32_t r12 = -1
int32_t rcx = *(arg1 + 0x130)

if (arg3 == 4)
    r12 = 1

int32_t result
void var_2c8
char var_2c0
void var_2b8

if (arg2 != rcx - 1)
    if (rcx s<= 1)
        result.b = 0
    else
        void* rcx_7 = &arg1[8]
        var_2c0 = data_1439ae51c
        void* rax_8 = *(arg1 + 0x128)
        int64_t r14_1 = sx.q(arg2)
        void* var_198_2 = nullptr
        
        if (rax_8 != 0)
            rcx_7 = rax_8
        
        int32_t var_190_2 = 0
        int32_t var_18c_2 = 4
        char var_188_2 = 0
        void* rcx_8 = rcx_7 + r14_1 * 0x48
        sub_140de8410(*(rcx_8 + 0x38), rcx_8, &var_2c0)
        int64_t r9_1 = sx.q(var_190_2)
        
        if (r9_1.d s<= 0)
        label_140db4c8a:
            sub_140d94d20(&var_2b8)
            result.b = 0
        else
            int32_t rsi_1 = 0
            
            if (arg3 != 4)
                rsi_1 = (r9_1 - 1).d
            
            void* r8_2 = var_198_2
            
            if (arg4 != 0)
                void* r11_1 = *(arg1 + 0x128)
                void* rbx_2 = &var_2b8
                
                if (r8_2 != 0)
                    rbx_2 = r8_2
                
                void* rdx_5 = rbx_2
                void* r10_1 = rbx_2 + r9_1 * 0x48
                int32_t rdx_6
                
                if (rbx_2 == r10_1)
                label_140db4b20:
                    rdx_6 = -1
                else
                    void* rcx_11 = &arg1[8]
                    
                    if (r11_1 != 0)
                        rcx_11 = r11_1
                    
                    while (*(rdx_5 + 0x38) != *(rcx_11 + r14_1 * 0x48 + 0x80))
                        rdx_5 += 0x48
                        
                        if (rdx_5 == r10_1)
                            goto label_140db4b20
                    
                    rdx_6 = ((rdx_5 - rbx_2) s/ 0x48).d
                
                rsi_1 = r12 + mods.dp.d(sx.q(rdx_6), r9_1.d)
            
            if (rsi_1 s>= r9_1.d)
                goto label_140db4c8a
            
            int64_t r14_3 = sx.q(rsi_1) * 0x48
            
            while (true)
                if (rsi_1 s< 0)
                    goto label_140db4c8a
                
                void* rax_15 = &var_2b8
                
                if (r8_2 != 0)
                    rax_15 = r8_2
                
                char* rbx_4 = *(rax_15 + r14_3 + 0x38) + 0x190
                
                if (*(rbx_4 + 0x10) != 0)
                    int64_t* rcx_13 = *(rbx_4 + 8)
                    
                    if (rcx_13 != 0)
                        if ((*(*rcx_13 + 0x28))(rcx_13) != 0)
                            int64_t* rcx_14
                            
                            if (*(rbx_4 + 0x10) == 0)
                                rcx_14 = nullptr
                            else
                                rcx_14 = *(rbx_4 + 8)
                            
                            *rbx_4 = (*(*rcx_14 + 0x48))(rcx_14)
                        
                        r8_2 = var_198_2
                        r9_1 = zx.q(var_190_2)
                
                if (*rbx_4 != 0)
                    char r9_2 = data_1439ae51c
                    void* rdx_12 = &var_2b8
                    void* rcx_15 = &var_2c8
                    char var_180 = r9_2
                    int64_t var_58_1 = 0
                    int32_t var_50_1 = 0
                    int32_t var_4c_1 = 4
                    int64_t rbx_6 = sx.q(rsi_1) * 0x48
                    char var_48_1 = 0
                    
                    if (r8_2 != 0)
                        rdx_12 = r8_2
                    
                    char* r8_3 = &var_180
                    void* rdx_13 = rdx_12 + rbx_6
                    
                    if (arg3 != 4)
                        sub_140d90d50(rcx_15, rdx_13, r8_3, r9_2, arg5)
                    else
                        sub_140d90a70(rcx_15, rdx_13, r8_3, r9_2, arg5)
                    
                    sub_140dbd470(&var_180)
                    void var_178
                    
                    if (var_50_1 s> 0)
                    label_140db4cd5:
                        sub_140dbaf40(&arg1[8], arg2 + 1, *(arg1 + 0x130) - arg2 - 1, 1)
                        void* rdx_16 = &var_2b8
                        
                        if (var_198_2 != 0)
                            rdx_16 = var_198_2
                        
                        sub_140d99900(arg1, rdx_16 + rbx_6)
                        sub_140d8b480(&arg1[8], &var_178)
                        sub_140d94d20(&var_178)
                        sub_140d94d20(&var_2b8)
                        result.b = 1
                        break
                    
                    void* rcx_17 = &var_2b8
                    
                    if (var_198_2 != 0)
                        rcx_17 = var_198_2
                    
                    int64_t* rcx_18 = *(rcx_17 + r14_3 + 0x38)
                    
                    if ((*(*rcx_18 + 0x198))(rcx_18) != 0)
                        goto label_140db4cd5
                    
                    arg5 = sub_140d94d20(&var_178)
                    r9_1 = zx.q(var_190_2)
                    r8_2 = var_198_2
                
                rsi_1 += r12
                r14_3 += sx.q(r12) * 0x48
                
                if (rsi_1 s>= r9_1.d)
                    goto label_140db4c8a
else if (arg3 != 4)
    result.b = 0
else
    void* rax_2 = *(arg1 + 0x128)
    void* rdx = &arg1[8]
    char r9 = data_1439ae51c
    int32_t rdi_1 = 0
    var_2c0 = r9
    void* var_198_1 = nullptr
    int32_t var_190_1 = 0
    
    if (rax_2 != 0)
        rdx = rax_2
    
    int32_t var_18c_1 = 4
    char var_188_1 = 0
    sub_140d90a70(&var_2c8, rdx + sx.q(rcx - 1) * 0x48, &var_2c0, r9, arg5)
    sub_140dbd470(&var_2c0)
    int32_t rbx_1 = var_190_1
    
    if (rbx_1 s> 0)
        do
            void* rdx_2 = &var_2b8
            
            if (var_198_1 != 0)
                rdx_2 = var_198_1
            
            sub_140d99900(arg1, rdx_2 + sx.q(rdi_1) * 0x48)
            rbx_1 = var_190_1
            rdi_1 += 1
        while (rdi_1 s< rbx_1)
    
    sub_140d94d20(&var_2b8)
    result.b = rbx_1 s> 0
__security_check_cookie(rax_1 ^ &var_2e8)
return result
