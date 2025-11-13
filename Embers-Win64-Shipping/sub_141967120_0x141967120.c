// 函数: sub_141967120
// 地址: 0x141967120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int64_t rbx = sx.q(arg1)
int32_t var_230 = rbx.d
char result = sub_141976740()

if (result != 0)
    char rax_2 = sub_141978390()
    
    if (rax_2 == 0)
        result = sub_141983200()
    
    if (rax_2 != 0 || result != 0)
        AcquireSRWLockShared(&data_143f01fc8)
        
        if (data_143f0f148 == 0)
            result = ReleaseSRWLockShared(&data_143f01fc8)
        else
            void* rdi_1 = &data_1439c7fb8
            
            if (data_1439c7f88 == data_1439c7fb4)
            label_141967230:
                ReleaseSRWLockShared(&data_143f01fc8)
                AcquireSRWLockExclusive(&data_143f01fc8)
                
                if (data_1439c7f88 == data_1439c7fb4)
                label_1419672a9:
                    int64_t var_1f4
                    __builtin_memset(&var_1f4, 0, 0x14)
                    void var_1e0
                    sub_1419620f0(&var_1e0)
                    int32_t var_40_1 = 0
                    void var_1f8
                    sub_141974660(&var_1f8, arg2)
                    int32_t rax_13 = sub_141973920(&var_1f8)
                    void* rdi_2 = data_143f0f148
                    int64_t rsi_1 = sx.q(rax_13)
                    int64_t r14_1 = 0
                    int32_t var_248 = rsi_1.d
                    int64_t var_240_1 = 0
                    int16_t var_238_1 = 0
                    int32_t rax_14
                    int64_t r8_3
                    rax_14, r8_3 = sub_141973920(&var_1f8)
                    int64_t r10_1 = sx.q(rax_14)
                    
                    if (*(rdi_2 + 0x90) == *(rdi_2 + 0xbc))
                    label_141967377:
                        int32_t rdx_8
                        
                        if (data_1439c80c8 != data_1439c80f4)
                            void* rdx_7 = data_1439c8100
                            void* rax_19 = &data_1439c80f8
                            
                            if (rdx_7 != 0)
                                rax_19 = rdx_7
                            
                            rdx_8 = *(rax_19 + ((sx.q(data_1439c8108 - 1) & rsi_1) << 2))
                        
                        if (data_1439c80c8 == data_1439c80f4 || rdx_8 == 0xffffffff)
                        label_1419673c8:
                            rdx_8 = -1
                        else
                            r8_3 = data_1439c80c0
                            
                            while (true)
                                int64_t rcx_18 = sx.q(rdx_8) * 3
                                
                                if (*(r8_3 + (rcx_18 << 2)) == rsi_1.d)
                                    break
                                
                                rdx_8 = *(r8_3 + (rcx_18 << 2) + 4)
                                
                                if (rdx_8 == 0xffffffff)
                                    goto label_1419673c8
                        
                        rdi_2.b = rdx_8 == 0xffffffff
                        
                        if (rdx_8 == 0xffffffff)
                            if (sub_141976710(data_143f0f1a0) != 0)
                                char rax_22
                                rax_22, r8_3 = sub_141975ec0(data_143f0f148, &var_1f8)
                                rdi_2.b = rax_22 == 0
                            
                            if (rdi_2.b != 0)
                                sub_140b44040(data_143f01ef8, u"Encountered new graphics PSO", r8_3)
                                int32_t var_228
                                
                                if (sub_141978390() != 0)
                                    sub_14195c130(&data_1439c8070, &var_228, &var_1f8, nullptr)
                                int32_t var_218
                                sub_1409afd50(&data_1439c80c0, &var_218)
                                int32_t rax_24 = var_218
                                char* var_250_1 = nullptr
                                int32_t* var_210
                                *var_210 = rsi_1.d
                                var_210[1] = 0xffffffff
                                void var_224
                                sub_140752f60(&data_1439c80c0, &var_224, rsi_1.d, var_210, rax_24, 
                                    var_250_1)
                                data_143f01cc8 += 1
                                
                                if (sub_141983200() != 0)
                                    for (int64_t* i = data_1439c8110; 
                                            i != &i[sx.q(data_1439c8118) * 2]; i = &i[2])
                                        if (i[1].d != 0 && *i != 0)
                                            sub_141966b00(&data_1439c8110, &var_1f8)
                                            break
                    else
                        void* r9_1 = rdi_2 + 0xc0
                        void* rdx_5 = *(r9_1 + 8)
                        r8_3 = (sx.q(*(rdi_2 + 0xd0)) - 1) & r10_1
                        
                        if (rdx_5 != 0)
                            r9_1 = rdx_5
                        
                        int32_t rax_15 = *(r9_1 + (r8_3 << 2))
                        
                        if (rax_15 == 0xffffffff)
                            goto label_141967377
                        
                        r8_3 = *(rdi_2 + 0x88)
                        int64_t rdx_6
                        
                        while (true)
                            rdx_6 = sx.q(rax_15)
                            int32_t* rcx_15 = rdx_6 * 0xb8
                            
                            if (*(rcx_15 + r8_3) == r10_1.d)
                                break
                            
                            rax_15 = *(rcx_15 + r8_3 + 0xb0)
                            
                            if (rax_15 == 0xffffffff)
                                goto label_141967377
                        
                        if (rax_15 == 0xffffffff)
                            goto label_141967377
                        
                        void* rax_29 = rdx_6 * 0xb8
                        void* rax_30 = rax_29 + r8_3
                        
                        if (rax_29 == neg.q(r8_3) || rax_30 == -8)
                            goto label_141967377
                        
                        r14_1 = *(rax_30 + 0xa0)
                        var_238_1 = *(rax_30 + 0xa8)
                        int64_t var_240_2 = r14_1
                    
                    int64_t rcx_27 = data_143f0f158
                    
                    if ((rcx_27 & r14_1) != rcx_27)
                        void* rax_35 = sub_14195cd10(&data_1439c7fd0, rsi_1.d, &var_248)
                        *rax_35 = var_248
                        *(rax_35 + 8) |= r14_1 | rcx_27
                        *(rax_35 + 0x10) |= var_238_1
                    
                    int32_t var_208
                    sub_14098dfb0(&data_1439c7f80, &var_208)
                    int32_t rax_36 = var_208
                    int32_t* var_200
                    *(var_200 + 8) = var_248.o
                    *var_200 = rbx.d
                    *(var_200 + 0x18) = var_238_1.q
                    var_200[8] = 0xffffffff
                    void var_220
                    sub_14196bc70(&data_1439c7f80, &var_220, rbx.d, var_200, rax_36, nullptr)
                    result = ReleaseSRWLockExclusive(&data_143f01fc8)
                else
                    void* rdx_2 = data_1439c7fc0
                    
                    if (rdx_2 != 0)
                        rdi_1 = rdx_2
                    
                    int32_t rax_12 = *(rdi_1 + ((sx.q(data_1439c7fc8 - 1) & rbx) << 2))
                    
                    if (rax_12 == 0xffffffff)
                        goto label_1419672a9
                    
                    int64_t r8_2 = data_1439c7f80
                    int64_t rdx_3
                    
                    while (true)
                        rdx_3 = sx.q(rax_12)
                        int64_t rcx_9 = rdx_3 * 5
                        
                        if (*(r8_2 + (rcx_9 << 3)) == rbx.d)
                            break
                        
                        rax_12 = *(r8_2 + (rcx_9 << 3) + 0x20)
                        
                        if (rax_12 == 0xffffffff)
                            goto label_1419672a9
                    
                    if (rax_12 == 0xffffffff)
                        goto label_1419672a9
                    
                    void* rcx_25 = r8_2 + rdx_3 * 0x28
                    
                    if (rcx_25 == 0 || rcx_25 == -8)
                        goto label_1419672a9
                    
                    int64_t r8_8 = data_143f0f158
                    int64_t rdx_14 = *(rcx_25 + 0x10)
                    
                    if ((rdx_14 & r8_8) == r8_8)
                        result = ReleaseSRWLockExclusive(&data_143f01fc8)
                    else
                        *(rcx_25 + 0x10) = rdx_14 | r8_8
                        sub_141981870(rcx_25 + 8)
                        result = ReleaseSRWLockExclusive(&data_143f01fc8)
            else
                void* rdx = data_1439c7fc0
                void* rax_6 = &data_1439c7fb8
                
                if (rdx != 0)
                    rax_6 = rdx
                
                int32_t rax_7 = *(rax_6 + ((sx.q(data_1439c7fc8 - 1) & rbx) << 2))
                
                if (rax_7 == 0xffffffff)
                    goto label_141967230
                
                int64_t r8_1 = data_1439c7f80
                int64_t rdx_1
                
                while (true)
                    rdx_1 = sx.q(rax_7)
                    int64_t rcx_2 = rdx_1 * 5
                    
                    if (*(r8_1 + (rcx_2 << 3)) == rbx.d)
                        break
                    
                    rax_7 = *(r8_1 + (rcx_2 << 3) + 0x20)
                    
                    if (rax_7 == 0xffffffff)
                        goto label_141967230
                
                if (rax_7 == 0xffffffff)
                    goto label_141967230
                
                void* rcx_3 = r8_1 + rdx_1 * 0x28
                
                if (rcx_3 == 0 || rcx_3 == -8
                        || (*(rcx_3 + 0x10) & data_143f0f158) != data_143f0f158)
                    goto label_141967230
                
                result = ReleaseSRWLockShared(&data_143f01fc8)

__security_check_cookie(rax_1 ^ &var_278)
return result
