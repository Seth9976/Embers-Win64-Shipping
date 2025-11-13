// 函数: sub_141d5b790
// 地址: 0x141d5b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0xa8) s<= 1)
    sub_140597df0(arg1 + 0xa0, arg1 + 0x88)
    result = sub_140b1d530(arg1 + 0x88)
    
    if (result.b != 0)
        int32_t r14_1 = 0
        uint64_t var_78
        void* var_68
        int32_t result_3
        int32_t result_1
        void* var_48
        
        if (sub_140a32ae0(arg1 + 0xa0, &data_142e1ac80, 1) == 0)
        label_141d5b9ba:
            void* var_58
            sub_140a46930(&var_58)
            int32_t result_2 = *(arg1 + 0xa8)
            void* r12_1 = nullptr
            int64_t rbx_4 = *(arg1 + 0xa0)
            var_48 = nullptr
            
            if (result_2 != 0)
                sub_1405a4c70(&var_48, result_2, 0)
                r12_1 = var_48
                memcpy(r12_1, rbx_4, result_2 * 2)
            
            result = sub_140a32a50(arg1 + 0xa0, sub_140b1ad00(), 1)
            
            if (result.b != 0)
                void* rax_11 = sub_140b1ad00()
                int32_t r9_1 = *(arg1 + 0xa8)
                int32_t rcx_24 = *(rax_11 + 8)
                int32_t rbx_5 = r9_1 - 1
                int32_t rax_12 = rcx_24 - 1
                
                if (rcx_24 == 0)
                    rax_12 = 0
                
                if (r9_1 == 0)
                    rbx_5 = 0
                
                int32_t rcx_25
                
                if (rax_12 s>= 0)
                    rcx_25 = rbx_5
                    
                    if (rax_12 s< rbx_5)
                        rcx_25 = rax_12
                else
                    rcx_25 = 0
                
                int64_t r8_6 = sx.q(rcx_25)
                
                if (sx.q(rax_12) + 0x7fffffff s< r8_6)
                    rbx_5 = rcx_25
                else if (sx.q(rax_12) + 0x7fffffff s< sx.q(rbx_5))
                    rbx_5 = rax_12 + 0x7fffffff
                
                int16_t* const rax_14
                
                if (r9_1 == 0)
                    rax_14 = &data_142d40450
                else
                    rax_14 = *(arg1 + 0xa0)
                
                int16_t* r14_2 = &rax_14[r8_6]
                int32_t rbx_6 = rbx_5 - rcx_25
                result = nullptr
                var_68 = nullptr
                void* rsi_2 = nullptr
                result_3 = 0
                result_2 = 0
                
                if (r14_2 != 0 && *r14_2 != 0 && rbx_6 s> 0)
                    if (rbx_6 + 1 s> 0)
                        sub_1405947f0(&var_68, rbx_6 + 1)
                        result = zx.q(result_1)
                        result_2 = result_3
                        rsi_2 = var_68
                    
                    result_2 += rbx_6 + 1
                    result_3 = result_2
                    
                    if (result_2 s> result.d)
                        sub_140594770(&var_68)
                        result_2 = result_3
                        rsi_2 = var_68
                    
                    UnDecorator::getReferenceType(rsi_2, r14_2, rbx_6 * 2)
                    result = sx.q(result_2)
                    *(rsi_2 + (result << 1) - 2) = 0
                
                if (r12_1 != 0)
                    result = sub_140a74f90(r12_1)
                
                r12_1 = rsi_2
            
            void* rbx_7 = var_58
            int32_t i_2
            void* r13_3 = (sx.q(i_2) << 4) + rbx_7
            
            if (rbx_7 != r13_3)
                do
                    void* rax_16
                    
                    if (*(rbx_7 + 8) == 0)
                        rax_16 = &data_142d40450
                        var_48 = &data_142d40450
                    else
                        var_48 = *rbx_7
                        rax_16 = &data_142d40450
                    
                    var_78 = 0
                    int64_t var_70_3 = 0
                    
                    if (result_2 != 0)
                        rax_16 = r12_1
                    
                    int32_t var_40_1
                    var_40_1.q = rax_16
                    sub_140b0f5f0(&var_78, &var_48, 2)
                    sub_140b11a30(&var_68, &var_78)
                    uint64_t rcx_32 = var_78
                    
                    if (rcx_32 != 0)
                        sub_140a74f90(rcx_32)
                    
                    result = sub_140b16090(&var_68)
                    void* rsi_3
                    
                    if (result.b == 0)
                        rsi_3 = var_68
                    else
                        result = &var_68
                        
                        if (arg1 + 0xa0 == &var_68)
                            rsi_3 = var_68
                        else
                            rsi_3 = var_68
                            int32_t r8_9 = *(arg1 + 0xac)
                            *(arg1 + 0xa8) = result_3
                            
                            if (result_3 != 0 || r8_9 != 0)
                                sub_1405a4c70(arg1 + 0xa0, result_3, r8_9)
                                result = memcpy(*(arg1 + 0xa0), rsi_3, result_3 * 2)
                                rsi_3 = var_68
                            else
                                *(arg1 + 0xac) = 0
                    
                    if (rsi_3 != 0)
                        result = sub_140a74f90(rsi_3)
                    
                    rbx_7 += 0x10
                while (rbx_7 != r13_3)
                
                rbx_7 = var_58
            
            if (r12_1 != 0)
                result = sub_140a74f90(r12_1)
                rbx_7 = var_58
            
            int32_t i_1 = i_2
            
            if (i_1 != 0)
                int32_t i
                
                do
                    int64_t rcx_38 = *rbx_7
                    
                    if (rcx_38 != 0)
                        result = sub_140a74f90(rcx_38)
                    
                    rbx_7 += 0x10
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                rbx_7 = var_58
            
            if (rbx_7 != 0)
                return sub_140a74f90(rbx_7)
        else
            int32_t rax_1 = *(arg1 + 0x90)
            int32_t rcx_3 = rax_1 - 1
            
            if (rax_1 == 0)
                rcx_3 = 0
            
            int16_t* const r8_1
            
            if (rax_1 == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *(arg1 + 0x88)
            
            int32_t rax_2
            
            if (rcx_3 - 2 s>= 0)
                rax_2 = rcx_3
                
                if (rcx_3 - 2 s< rcx_3)
                    rax_2 = rcx_3 - 2
            else
                rax_2 = 0
            
            void* r15_1 = nullptr
            var_68 = nullptr
            int32_t result_4 = 0
            int32_t var_60 = 0
            int16_t* rsi_1 = &r8_1[sx.q(rcx_3) - sx.q(rax_2)]
            
            if (rsi_1 != 0 && *rsi_1 != 0)
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while (rsi_1[rbx_2] != 0)
                
                if (rbx_2.d + 1 s> 0)
                    sub_1405947f0(&var_68, rbx_2.d + 1)
                    result_4 = result_1
                    r14_1 = var_60
                    r15_1 = var_68
                
                r14_1 += rbx_2.d + 1
                
                if (r14_1 s> result_4)
                    sub_140594770(&var_68)
                    r15_1 = var_68
                
                UnDecorator::getReferenceType(r15_1, rsi_1, (rbx_2.d + 1) * 2)
            
            int64_t var_38
            int64_t* rax_4 = sub_140b25050(&var_38)
            
            if (rax_4[1].d == 0)
                var_68 = &data_142d40450
            else
                var_68 = *rax_4
            
            int32_t result_5 = 0x42d40450
            
            if (r14_1 != 0)
                result_5 = r15_1.d
            
            result_3 = result_5
            var_78 = 0
            int64_t var_70_1 = 0
            sub_140b0f5f0(&var_78, &var_68, 2)
            
            if (arg1 + 0xa0 == &var_78)
                uint64_t rcx_12 = var_78
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
            else
                int64_t rcx_11 = *(arg1 + 0xa0)
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                *(arg1 + 0xa0) = var_78
                *(arg1 + 0xa8) = var_70_1.d
                *(arg1 + 0xac) = var_70_1:4.d
                int64_t var_70_2 = 0
                var_78 = 0
            
            int64_t rcx_13 = var_38
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
            
            sub_140b11c80(&var_48, arg1 + 0xa0)
            
            if (sub_140b16090(&var_48) == 0)
                void* rcx_19 = var_48
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                goto label_141d5b9ba
            
            result = sub_140597df0(arg1 + 0xa0, &var_48)
            void* rcx_18 = var_48
            
            if (rcx_18 != 0)
                return sub_140a74f90(rcx_18)

return result
