// 函数: sub_141f4e980
// 地址: 0x141f4e980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
uint64_t result = __security_cookie ^ &var_1c8
uint64_t result_1 = result
int64_t r13 = arg2
void* rdi = arg1

if (*(arg1 + 0x1b0) != 0)
    void* rdx = data_143f56338
    
    if (rdx != 0)
        if (*(rdx + 0x68) s> 0 || *(rdx + 0xa0) - *(rdx + 0xcc) s> 0 || *(rdx + 0x10) s> 0
                || *(rdx + 0x6c) s> 0)
            result.b = 1
        else
            result.b = 0
    
    if (rdx == 0 || result.b == 0)
        int64_t r15
        int64_t var_38_1 = r15
        sub_1420ec790(arg1)
        
        if (*data_143f3b458 != 0)
            void* rax_3 = sub_142452380()
            int32_t var_170 = 5
            char var_118_1 = 0
            void* var_168
            sub_1405ab0f0(&var_168, rdi, rax_3)
            char var_118_2 = 1
            sub_1405b0c60(&var_170)
            void** var_160
            char var_14c
            int64_t var_138
            
            if (var_14c == 0)
                void* var_140
                void* const rdi_1 = var_140
                uint32_t rax_15
                
                do
                    void* var_50_1 = nullptr
                    int32_t var_44_1 = 0x18
                    int32_t var_48_1 = 0
                    void* rax_4 = sub_142580450()
                    void* rsi_1
                    
                    if (rax_4 == 0)
                        rsi_1 = nullptr
                    else
                        void* rax_5 = sub_142459c10()
                        
                        if (rax_5 == 0)
                            rsi_1 = nullptr
                        else
                            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                            
                            if (rax_6.d s> *(rax_4 + 0x38)
                                    || *(*(rax_4 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                                rsi_1 = nullptr
                            else
                                rsi_1 = rax_4
                    
                    void var_110
                    void* r8_1 = &var_110
                    
                    if (rsi_1 != sub_142459c10())
                        sub_1419f71f0(rdi_1, rax_4, r8_1)
                    else
                        sub_1419f6fe0(rdi_1, rax_4, r8_1)
                    
                    int32_t rdx_4 = var_48_1
                    int32_t rsi_2 = 0
                    void* rcx_4 = var_50_1
                    
                    if (rdx_4 s> 0)
                        int64_t r14_1 = 0
                        
                        do
                            void* rax_9 = &var_110
                            
                            if (rcx_4 != 0)
                                rax_9 = rcx_4
                            
                            void* i = *(rax_9 + r14_1)
                            
                            if ((*(i + 0x14c) & 0x20) != 0)
                                sub_140d25500(i)
                                void var_180
                                *(i + 0x21c) = *sub_140b214c0(&var_180)
                                int64_t* r8_2 = data_143f3b460
                                int64_t rdi_2 = sx.q(data_143f3b468)
                                int64_t* rax_11 = r8_2
                                void* rdx_5 = &r8_2[rdi_2]
                                
                                if (r8_2 != rdx_5)
                                    while (*rax_11 != i)
                                        rax_11 = &rax_11[1]
                                        
                                        if (rax_11 == rdx_5)
                                            goto label_141f4eb7e
                                
                                if (r8_2 == rdx_5 || ((rax_11 - r8_2) s>> 3).d == 0xffffffff)
                                label_141f4eb7e:
                                    int32_t rax_14 = (rdi_2 + 1).d
                                    bool cond:3_1 = rax_14 s<= data_143f3b46c
                                    data_143f3b468 = rax_14
                                    
                                    if (not(cond:3_1))
                                        sub_1405a4d70(&data_143f3b460)
                                        r8_2 = data_143f3b460
                                    
                                    r8_2[rdi_2] = i
                                
                                *(i + 0x238) = 1
                                rdx_4 = var_48_1
                                rcx_4 = var_50_1
                            
                            rsi_2 += 1
                            r14_1 += 8
                        while (rsi_2 s< rdx_4)
                    
                    if (rcx_4 != 0)
                        sub_140a74f90(rcx_4)
                    
                    int32_t var_130
                    int32_t r8_3 = var_130
                    int32_t var_158
                    int32_t rdx_7 = var_158
                    void* r13_1 = var_168
                    int32_t var_150
                    int32_t r14_3 = var_150 + 1
                    
                    if (r14_3 s>= r8_3 + rdx_7)
                    label_141f4ed86:
                        rax_15.b = 1
                        rdi_1 = nullptr
                        var_14c = 1
                    else
                        int64_t r12_1 = sx.q(r14_3) << 3
                        
                        while (true)
                            if (r14_3 s>= rdx_7)
                                rdi_1 = *(var_138 + (sx.q(r14_3 - rdx_7) << 3))
                            else
                                rdi_1 = *(var_160 + r12_1)
                            
                            int32_t var_148 = var_148 + 1
                            
                            if (rdi_1 != 0)
                                void* rax_21 = sub_141dc9840(rdi_1)
                                
                                if (rax_21 != 0)
                                    void* const rax_28
                                    
                                    if ((var_170.b & 1) != 0)
                                        int32_t rax_22 = *(rdi_1 + 0xc)
                                        
                                        if (rax_22 s>= data_143e1d9b4)
                                            rax_28 = nullptr
                                        else
                                            int16_t temp6_1
                                            int32_t temp7_1
                                            temp6_1:temp7_1 = sx.q(rax_22)
                                            uint32_t rdx_9 = zx.d(temp6_1)
                                            int32_t rax_24 = temp7_1 + rdx_9
                                            rax_28 =
                                                *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3))
                                                + sx.q(zx.d(rax_24.w) - rdx_9) * 0x18
                                    
                                    if ((var_170.b & 1) == 0
                                            || ((*(rax_28 + 8) u>> 0x1d).b & 1) == 0)
                                        int32_t rcx_14 = var_170
                                        
                                        if (((rcx_14 u>> 1).b & 1) == 0)
                                            goto label_141f4ecaf
                                        
                                        uint64_t rax_32 = sub_1405949a0()
                                        
                                        if (rax_32.b != 0)
                                            rcx_14 = var_170
                                        label_141f4ecaf:
                                            
                                            if (((rcx_14 u>> 2).b & 1) == 0)
                                            label_141f4ed2b:
                                                
                                                if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                        rax_21) == r13_1)
                                                    void* rax_34
                                                    int64_t rax_35
                                                    void* rdx_11
                                                    
                                                    if (rax_21 != *(r13_1 + 0x30))
                                                        rax_34 = sub_1425bd0d0()
                                                        rdx_11 = *(rdi_1 + 0x10)
                                                        rax_35 = sx.q(*(rax_34 + 0x38))
                                                    
                                                    if (rax_21 == *(r13_1 + 0x30)
                                                            || rax_35.d s> *(rdx_11 + 0x38)
                                                            || *(*(rdx_11 + 0x30) + (rax_35 << 3))
                                                            != rax_34 + 0x30)
                                                        rax_15 = zx.d(var_14c)
                                                        var_150 = r14_3
                                                        break
                                            else
                                                if ((*(rax_21 + 0x1f4) & 0x20) == 0
                                                        || (*(rax_21 + 0x1f6) & 8) != 0)
                                                    rax_32 = zx.q(*(rax_21 + 0x1f5))
                                                
                                                if (((*(rax_21 + 0x1f4) & 0x20) != 0
                                                        && (*(rax_21 + 0x1f6) & 8) == 0)
                                                        || (rax_32.b & 0x40) != 0 || rax_32.b s< 0)
                                                    r15.b = 1
                                                else
                                                    r15.b = 0
                                                
                                                void* rcx_16 = *(rax_21 + 0xb8)
                                                char* rsi_3 = *(rax_21 + 0x248)
                                                
                                                if (rcx_16 != 0)
                                                    rax_32 = sub_1424359b0(rcx_16)
                                                
                                                if (rcx_16 == 0 || rax_32 == 0 || rsi_3 == rax_32)
                                                    rcx_16.b = 1
                                                else
                                                    rcx_16.b = 0
                                                
                                                if (rsi_3 == 0 || *rsi_3 == 2)
                                                    rax_32.b = 1
                                                else
                                                    rax_32.b = 0
                                                
                                                if (rcx_16.b != 0 || rax_32.b != 0)
                                                    rax_32.b = 1
                                                
                                                if (r15.b != 0 && rax_32.b != 0)
                                                    goto label_141f4ed2b
                                
                                r8_3 = var_130
                                rdx_7 = var_158
                            
                            r14_3 += 1
                            r12_1 += 8
                            
                            if (r14_3 s>= r8_3 + rdx_7)
                                goto label_141f4ed86
                    
                    void* const var_140_1 = rdi_1
                while (rax_15.b == 0)
                rdi = arg1
                r13 = arg2
            
            if (var_118_2 != 0)
                char var_118_3 = 0
                int64_t var_120
                sub_142441560(var_168, var_120)
                
                if (var_138 != 0)
                    sub_140a74f90(var_138)
                
                if (var_160 != 0)
                    sub_140a74f90(var_160)
        
        int32_t rbx_3 = data_143f3b468
        int32_t rbx_4 = rbx_3 - 1
        int64_t var_1a0 = 0
        int64_t var_198_1 = 0
        
        if (rbx_3 - 1 s>= 0)
            int64_t r15_1 = sx.q(rbx_4) << 3
            int64_t r12_2 = r15_1
            int64_t r14_5 = sx.q(rbx_4 + 1) << 3
            int32_t temp2_1
            
            do
                void* rsi_4 = *(r15_1 + data_143f3b460)
                void* rax_40 = *(rsi_4 + 0xa8)
                
                if (rax_40 == 0)
                    rax_40 = sub_141ee69e0(rsi_4)
                
                if (rax_40 == rdi)
                    int64_t rdi_3 = sx.q(var_198_1.d)
                    int32_t rax_41 = (rdi_3 + 1).d
                    var_198_1.d = rax_41
                    
                    if (rax_41 s> var_198_1:4.d)
                        sub_1405a4d70(&var_1a0)
                    
                    *(var_1a0 + (rdi_3 << 3)) = rsi_4
                    int32_t rax_43 = data_143f3b468
                    int32_t rcx_25 = rax_43 - rbx_4
                    
                    if (rcx_25 != 1)
                        int64_t rax_44 = data_143f3b460
                        memmove(r12_2 + rax_44, r14_5 + rax_44, (rcx_25 - 1) << 3)
                        rax_43 = data_143f3b468
                    
                    data_143f3b468 = rax_43 - 1
                    sub_1405c53d0(&data_143f3b460)
                    rdi = arg1
                
                r14_5 -= 8
                r12_2 -= 8
                r15_1 -= 8
                temp2_1 = rbx_4
                rbx_4 -= 1
            while (temp2_1 - 1 s>= 0)
        
        if (data_143f3b478 s> 0)
            EnterCriticalSection(&data_143f3b480)
            int32_t rbx_5 = data_143f3b478
            int32_t rbx_6 = rbx_5 - 1
            
            if (rbx_5 - 1 s>= 0)
                int64_t r15_2 = sx.q(rbx_6) << 3
                int64_t r12_3 = r15_2
                int64_t r14_7 = sx.q(rbx_6 + 1) << 3
                int32_t temp4_1
                
                do
                    void* rsi_5 = *(r15_2 + data_143f3b470)
                    void* rax_49 = *(rsi_5 + 0xa8)
                    
                    if (rax_49 == 0)
                        rax_49 = sub_141ee69e0(rsi_5)
                    
                    if (rax_49 == rdi)
                        int64_t rdi_4 = sx.q(var_198_1.d)
                        int32_t rax_50 = (rdi_4 + 1).d
                        var_198_1.d = rax_50
                        
                        if (rax_50 s> var_198_1:4.d)
                            sub_1405a4d70(&var_1a0)
                        
                        *(var_1a0 + (rdi_4 << 3)) = rsi_5
                        int32_t rax_52 = data_143f3b478
                        int32_t rcx_31 = rax_52 - rbx_6
                        
                        if (rcx_31 != 1)
                            int64_t rax_53 = data_143f3b470
                            memmove(r12_3 + rax_53, r14_7 + rax_53, (rcx_31 - 1) << 3)
                            rax_52 = data_143f3b478
                        
                        data_143f3b478 = rax_52 - 1
                        sub_1405c53d0(&data_143f3b470)
                        rdi = arg1
                    
                    r14_7 -= 8
                    r12_3 -= 8
                    r15_2 -= 8
                    temp4_1 = rbx_6
                    rbx_6 -= 1
                while (temp4_1 - 1 s>= 0)
            
            LeaveCriticalSection(&data_143f3b480)
        
        int64_t* rcx_34 = *(rdi + 0x1b0)
        result = (*(*rcx_34 + 0xd0))(rcx_34, &var_1a0, r13, zx.q(arg3), arg3)
        int64_t rcx_35 = var_1a0
        
        if (rcx_35 != 0)
            result = sub_140a74f90(rcx_35)

__security_check_cookie(result_1 ^ &var_1c8)
return result
