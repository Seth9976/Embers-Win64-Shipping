// 函数: sub_141966c10
// 地址: 0x141966c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t rbx = sx.q(arg1)
int32_t var_220 = rbx.d
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
            label_141966d20:
                ReleaseSRWLockShared(&data_143f01fc8)
                AcquireSRWLockExclusive(&data_143f01fc8)
                
                if (data_1439c7f88 == data_1439c7fb4)
                label_141966d9f:
                    void var_1d0
                    sub_1419620f0(&var_1d0)
                    int128_t zmm0_1 = *(arg2 + 0x18)
                    int64_t var_1d8_1 = 0
                    int64_t var_1e8 = 0
                    int32_t var_30_1 = 0
                    var_1e8:4.o = zmm0_1
                    var_1d8_1:4.d = *(arg2 + 0x28)
                    int32_t var_30_2 = 0
                    int32_t rax_14 = sub_141973920(&var_1e8)
                    void* rdi_2 = data_143f0f148
                    int64_t rsi_1 = sx.q(rax_14)
                    int64_t r14_1 = 0
                    int32_t var_238 = rsi_1.d
                    int64_t var_230_1 = 0
                    int16_t var_228_1 = 0
                    int32_t rax_15
                    int64_t r8_3
                    rax_15, r8_3 = sub_141973920(&var_1e8)
                    int64_t r10_1 = sx.q(rax_15)
                    
                    if (*(rdi_2 + 0x90) == *(rdi_2 + 0xbc))
                    label_141966e67:
                        int32_t rdx_7
                        
                        if (data_1439c80c8 != data_1439c80f4)
                            void* rdx_6 = data_1439c8100
                            void* rax_20 = &data_1439c80f8
                            
                            if (rdx_6 != 0)
                                rax_20 = rdx_6
                            
                            rdx_7 = *(rax_20 + ((sx.q(data_1439c8108 - 1) & rsi_1) << 2))
                        
                        if (data_1439c80c8 == data_1439c80f4 || rdx_7 == 0xffffffff)
                        label_141966eb8:
                            rdx_7 = -1
                        else
                            r8_3 = data_1439c80c0
                            
                            while (true)
                                int64_t rcx_17 = sx.q(rdx_7) * 3
                                
                                if (*(r8_3 + (rcx_17 << 2)) == rsi_1.d)
                                    break
                                
                                rdx_7 = *(r8_3 + (rcx_17 << 2) + 4)
                                
                                if (rdx_7 == 0xffffffff)
                                    goto label_141966eb8
                        
                        if (rdx_7 == 0xffffffff)
                            sub_140b44040(data_143f01ef8, u"Encountered new compute PSO", r8_3)
                            int32_t var_218
                            
                            if (sub_141978390() != 0)
                                sub_14195c130(&data_1439c8070, &var_218, &var_1e8, nullptr)
                            int32_t var_208
                            sub_1409afd50(&data_1439c80c0, &var_208)
                            int32_t rax_23 = var_208
                            char* var_240_1 = nullptr
                            int32_t* var_200
                            *var_200 = rsi_1.d
                            var_200[1] = 0xffffffff
                            void var_214
                            sub_140752f60(&data_1439c80c0, &var_214, rsi_1.d, var_200, rax_23, 
                                var_240_1)
                            data_143f01cc8 += 1
                            
                            if (sub_141983200() != 0)
                                for (int64_t* i = data_1439c8110; 
                                        i != &i[sx.q(data_1439c8118) * 2]; i = &i[2])
                                    if (i[1].d != 0 && *i != 0)
                                        sub_141966b00(&data_1439c8110, &var_1e8)
                                        break
                    else
                        void* r9_1 = rdi_2 + 0xc0
                        void* rdx_4 = *(r9_1 + 8)
                        r8_3 = (sx.q(*(rdi_2 + 0xd0)) - 1) & r10_1
                        
                        if (rdx_4 != 0)
                            r9_1 = rdx_4
                        
                        int32_t rax_16 = *(r9_1 + (r8_3 << 2))
                        
                        if (rax_16 == 0xffffffff)
                            goto label_141966e67
                        
                        r8_3 = *(rdi_2 + 0x88)
                        int64_t rdx_5
                        
                        while (true)
                            rdx_5 = sx.q(rax_16)
                            int32_t* rcx_14 = rdx_5 * 0xb8
                            
                            if (*(rcx_14 + r8_3) == r10_1.d)
                                break
                            
                            rax_16 = *(rcx_14 + r8_3 + 0xb0)
                            
                            if (rax_16 == 0xffffffff)
                                goto label_141966e67
                        
                        if (rax_16 == 0xffffffff)
                            goto label_141966e67
                        
                        void* rax_28 = rdx_5 * 0xb8
                        void* rax_29 = rax_28 + r8_3
                        
                        if (rax_28 == neg.q(r8_3) || rax_29 == -8)
                            goto label_141966e67
                        
                        r14_1 = *(rax_29 + 0xa0)
                        var_228_1 = *(rax_29 + 0xa8)
                        int64_t var_230_2 = r14_1
                    
                    int64_t rcx_24 = data_143f0f158
                    
                    if ((rcx_24 & r14_1) != rcx_24)
                        void* rax_34 = sub_14195cd10(&data_1439c7fd0, rsi_1.d, &var_238)
                        *rax_34 = var_238
                        *(rax_34 + 8) |= r14_1 | rcx_24
                        *(rax_34 + 0x10) |= var_228_1
                    
                    int32_t var_1f8
                    sub_14098dfb0(&data_1439c7f80, &var_1f8)
                    int32_t rax_35 = var_1f8
                    int32_t* var_1f0
                    *(var_1f0 + 8) = var_238.o
                    *var_1f0 = rbx.d
                    *(var_1f0 + 0x18) = var_228_1.q
                    var_1f0[8] = 0xffffffff
                    void var_210
                    sub_14196bc70(&data_1439c7f80, &var_210, rbx.d, var_1f0, rax_35, nullptr)
                    result = ReleaseSRWLockExclusive(&data_143f01fc8)
                else
                    void* rdx_2 = data_1439c7fc0
                    
                    if (rdx_2 != 0)
                        rdi_1 = rdx_2
                    
                    int32_t rax_12 = *(rdi_1 + ((sx.q(data_1439c7fc8 - 1) & rbx) << 2))
                    
                    if (rax_12 == 0xffffffff)
                        goto label_141966d9f
                    
                    int64_t r8_2 = data_1439c7f80
                    int64_t rdx_3
                    
                    while (true)
                        rdx_3 = sx.q(rax_12)
                        int64_t rcx_9 = rdx_3 * 5
                        
                        if (*(r8_2 + (rcx_9 << 3)) == rbx.d)
                            break
                        
                        rax_12 = *(r8_2 + (rcx_9 << 3) + 0x20)
                        
                        if (rax_12 == 0xffffffff)
                            goto label_141966d9f
                    
                    if (rax_12 == 0xffffffff)
                        goto label_141966d9f
                    
                    void* rcx_22 = r8_2 + rdx_3 * 0x28
                    
                    if (rcx_22 == 0 || rcx_22 == -8)
                        goto label_141966d9f
                    
                    int64_t r8_8 = data_143f0f158
                    int64_t rdx_12 = *(rcx_22 + 0x10)
                    
                    if ((rdx_12 & r8_8) == r8_8)
                        result = ReleaseSRWLockExclusive(&data_143f01fc8)
                    else
                        *(rcx_22 + 0x10) = rdx_12 | r8_8
                        sub_141981870(rcx_22 + 8)
                        result = ReleaseSRWLockExclusive(&data_143f01fc8)
            else
                void* rdx = data_1439c7fc0
                void* rax_6 = &data_1439c7fb8
                
                if (rdx != 0)
                    rax_6 = rdx
                
                int32_t rax_7 = *(rax_6 + ((sx.q(data_1439c7fc8 - 1) & rbx) << 2))
                
                if (rax_7 == 0xffffffff)
                    goto label_141966d20
                
                int64_t r8_1 = data_1439c7f80
                int64_t rdx_1
                
                while (true)
                    rdx_1 = sx.q(rax_7)
                    int64_t rcx_2 = rdx_1 * 5
                    
                    if (*(r8_1 + (rcx_2 << 3)) == rbx.d)
                        break
                    
                    rax_7 = *(r8_1 + (rcx_2 << 3) + 0x20)
                    
                    if (rax_7 == 0xffffffff)
                        goto label_141966d20
                
                if (rax_7 == 0xffffffff)
                    goto label_141966d20
                
                void* rcx_3 = r8_1 + rdx_1 * 0x28
                
                if (rcx_3 == 0 || rcx_3 == -8
                        || (*(rcx_3 + 0x10) & data_143f0f158) != data_143f0f158)
                    goto label_141966d20
                
                result = ReleaseSRWLockShared(&data_143f01fc8)

__security_check_cookie(rax_1 ^ &var_268)
return result
