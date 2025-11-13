// 函数: sub_141981240
// 地址: 0x141981240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t rbx = sx.q(arg1)
int32_t var_200 = rbx.d
char result = sub_141976740()

if (result != 0)
    result = sub_141978390()
    
    if (result != 0)
    label_141981289:
        
        if (arg2[0x14].w s< 0)
            AcquireSRWLockShared(&data_143f01fc8)
            
            if (data_143f0f148 == 0)
                result = ReleaseSRWLockShared(&data_143f01fc8)
            else
                void* rdi_1 = &data_1439c7fb8
                
                if (data_1439c7f88 == data_1439c7fb4)
                label_141981342:
                    ReleaseSRWLockShared(&data_143f01fc8)
                    AcquireSRWLockExclusive(&data_143f01fc8)
                    
                    if (data_1439c7f88 == data_1439c7fb4)
                    label_1419813bd:
                        int64_t var_1dc
                        __builtin_memset(&var_1dc, 0, 0x14)
                        void var_1c8
                        sub_1419620f0(&var_1c8)
                        int32_t var_28_1 = 0
                        void var_1e0
                        sub_141974660(&var_1e0, arg2)
                        int32_t rax_14 = sub_141973920(&var_1e0)
                        void* rdi_2 = data_143f0f148
                        int32_t var_218 = rax_14
                        int64_t var_210_1 = 0
                        int16_t rsi_1 = 0
                        int64_t r10_1 = sx.q(sub_141973920(&var_1e0))
                        
                        if (*(rdi_2 + 0x90) != *(rdi_2 + 0xbc))
                            void* r9_1 = rdi_2 + 0xc0
                            void* rdx_5 = *(r9_1 + 8)
                            
                            if (rdx_5 != 0)
                                r9_1 = rdx_5
                            
                            int32_t i = *(r9_1 + (((sx.q(*(rdi_2 + 0xd0)) - 1) & r10_1) << 2))
                            
                            if (i != 0xffffffff)
                                int64_t r8_6 = *(rdi_2 + 0x88)
                                
                                do
                                    int64_t i_1 = sx.q(i)
                                    int32_t* rcx_11 = i_1 * 0xb8
                                    
                                    if (*(rcx_11 + r8_6) == r10_1.d)
                                        if (i != 0xffffffff)
                                            void* rcx_14 = i_1 * 0xb8
                                            void* rcx_15 = rcx_14 + r8_6
                                            
                                            if (rcx_14 != neg.q(r8_6) && rcx_15 != -8)
                                                rsi_1 = *(rcx_15 + 0xa8)
                                                var_210_1 = *(rcx_15 + 0xa0)
                                        
                                        break
                                    
                                    i = *(rcx_11 + r8_6 + 0xb0)
                                while (i != 0xffffffff)
                        
                        rsi_1 |= 1
                        void* rax_18 = sub_14195cd10(&data_1439c7fd0, rax_14, &var_218)
                        *rax_18 = var_218
                        *(rax_18 + 8) |= var_210_1
                        *(rax_18 + 0x10) |= rsi_1
                        int32_t var_1f0
                        sub_14098dfb0(&data_1439c7f80, &var_1f0)
                        int32_t rax_19 = var_1f0
                        int32_t* var_1e8
                        *(var_1e8 + 8) = var_218.o
                        *var_1e8 = rbx.d
                        *(var_1e8 + 0x18) = rsi_1.q
                        var_1e8[8] = 0xffffffff
                        void var_1f8
                        sub_14196bc70(&data_1439c7f80, &var_1f8, rbx.d, var_1e8, rax_19, nullptr)
                        result = ReleaseSRWLockExclusive(&data_143f01fc8)
                    else
                        void* rdx_2 = data_1439c7fc0
                        
                        if (rdx_2 != 0)
                            rdi_1 = rdx_2
                        
                        int32_t rax_13 = *(rdi_1 + ((sx.q(data_1439c7fc8 - 1) & rbx) << 2))
                        
                        if (rax_13 == 0xffffffff)
                            goto label_1419813bd
                        
                        int64_t r8_2 = data_1439c7f80
                        int64_t rdx_3
                        
                        while (true)
                            rdx_3 = sx.q(rax_13)
                            int64_t rcx_5 = rdx_3 * 5
                            
                            if (*(r8_2 + (rcx_5 << 3)) == rbx.d)
                                break
                            
                            rax_13 = *(r8_2 + (rcx_5 << 3) + 0x20)
                            
                            if (rax_13 == 0xffffffff)
                                goto label_1419813bd
                        
                        if (rax_13 == 0xffffffff)
                            goto label_1419813bd
                        
                        void* rcx_12 = r8_2 + rdx_3 * 0x28
                        
                        if (rcx_12 == 0 || rcx_12 == -8)
                            goto label_1419813bd
                        
                        if ((*(rcx_12 + 0x18) & 1) != 0)
                            result = ReleaseSRWLockExclusive(&data_143f01fc8)
                        else
                            *(rcx_12 + 0x18) |= 1
                            sub_141981870(rcx_12 + 8)
                            result = ReleaseSRWLockExclusive(&data_143f01fc8)
                else
                    void* rdx = data_1439c7fc0
                    void* rax_5 = &data_1439c7fb8
                    
                    if (rdx != 0)
                        rax_5 = rdx
                    
                    int32_t rax_6 = *(rax_5 + ((sx.q(data_1439c7fc8 - 1) & rbx) << 2))
                    
                    if (rax_6 == 0xffffffff)
                        goto label_141981342
                    
                    int64_t r8_1 = data_1439c7f80
                    int64_t rdx_1
                    
                    while (true)
                        rdx_1 = sx.q(rax_6)
                        int64_t rcx_2 = rdx_1 * 5
                        
                        if (*(r8_1 + (rcx_2 << 3)) == rbx.d)
                            break
                        
                        rax_6 = *(r8_1 + (rcx_2 << 3) + 0x20)
                        
                        if (rax_6 == 0xffffffff)
                            goto label_141981342
                    
                    if (rax_6 == 0xffffffff)
                        goto label_141981342
                    
                    void* rax_8 = r8_1 + rdx_1 * 0x28
                    
                    if (rax_8 == 0 || rax_8 == -8 || (*(rax_8 + 0x18) & 1) == 0)
                        goto label_141981342
                    
                    result = ReleaseSRWLockShared(&data_143f01fc8)
    else
        result = sub_141983200()
        
        if (result != 0)
            goto label_141981289

__security_check_cookie(rax_1 ^ &var_248)
return result
