// 函数: sub_140ab60d0
// 地址: 0x140ab60d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int64_t var_188
sub_140b24bd0(&arg3[2], &var_188, *(arg2 + 0x16), nullptr)
char var_170

if (var_170 == 0)
    *(arg1 + 0x18) = 0
else
    char var_258 = 0
    char* var_200_1 = &var_258
    int64_t (* var_208)(int64_t arg1, int16_t* arg2) = sub_140aa3890
    char* _String2_2
    sub_140b24d50(&arg3[2], &_String2_2, &var_208, &var_188)
    char var_f0
    void var_a8
    
    if (var_f0 == 0)
        *(arg1 + 0x18) = 0
    else if (*(sub_140b24bd0(&arg3[2], &var_a8, 0x28, &var_188) + 0x18) == 0)
        *(arg1 + 0x18) = 0
    else
        char* _String2 = _String2_2
        char* _String2_1 = _String2
        int64_t var_100
        int32_t rsi_3 = ((var_100 - _String2) s>> 1).d
        int32_t var_1d0_1 = rsi_3
        int64_t rbx_1 = sx.q(sub_140b21160(_String2, rsi_3 * 2, 0))
        int64_t var_1c8_1 = 0
        int64_t var_1c0_1 = 0
        int32_t var_1cc_1 = rbx_1.d
        TEB* gsbase
        
        if (data_143dba018
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143dba018)
            
            if (data_143dba018 == 0xffffffff)
                std::numpunct<wchar_t>::_Init(&data_143db9fa0)
                atexit(sub_142cbdec0)
                _Init_thread_footer(&data_143dba018)
        
        EnterCriticalSection(&data_143db9ff0)
        int64_t var_168_1
        void* var_158
        
        if (data_143db9fa8 == data_143db9fd4)
        label_140ab627d:
            var_168_1 = 0
            var_158 = nullptr
        else
            void* rcx_6 = data_143db9fe0
            void* rax_5 = &data_143db9fd8
            
            if (rcx_6 != 0)
                rax_5 = rcx_6
            
            int32_t rbx_2 = *(rax_5 + (((sx.q(data_143db9fe8) - 1) & rbx_1) << 2))
            
            if (rbx_2 == 0xffffffff)
                goto label_140ab627d
            
            int64_t rcx_7 = data_143db9fa0
            void* rdi_1
            
            while (true)
                rdi_1 = sx.q(rbx_2) * 0x70
                uint64_t _MaxCount = sx.q(*(rdi_1 + rcx_7 + 8))
                
                if (_MaxCount.d == rsi_3)
                    if (wcsncmp(*(rdi_1 + rcx_7), _String2, _MaxCount) == 0)
                        break
                    
                    rcx_7 = data_143db9fa0
                
                rbx_2 = *(rdi_1 + rcx_7 + 0x60)
                
                if (rbx_2 == 0xffffffff)
                    goto label_140ab627d
            
            if (rbx_2 == 0xffffffff)
                goto label_140ab627d
            
            void* rcx_12 = data_143db9fa0
            void* rcx_13 = rcx_12 + rdi_1
            
            if (rcx_12 == neg.q(rdi_1))
                goto label_140ab627d
            
            int64_t rax_13 = *(rcx_13 + 0x20)
            var_168_1 = rax_13
            var_158 = nullptr
            
            if (rax_13 != 0)
                void* rax_14 = *(rcx_13 + 0x30)
                void* rcx_14 = rcx_13 + 0x40
                
                if (rax_14 != 0)
                    rcx_14 = rax_14
                
                (**rcx_14)(rcx_14, &var_158)
        
        LeaveCriticalSection(&data_143db9ff0)
        
        if (var_168_1 == 0)
            *(arg1 + 0x18) = 0
        else
            int16_t var_254 = 0
            int16_t* var_1f8 = &var_254
            int32_t var_250 = 0
            int32_t* var_1f0_1 = &var_250
            int16_t** var_1e0_1 = &var_1f8
            int64_t (* var_1e8)(int64_t* arg1, int16_t* arg2) = sub_140aa3ab0
            void var_88
            int128_t* rax_9 = sub_140b24d50(&arg3[2], &var_88, &var_1e8, &var_188)
            int128_t var_128
            void var_148
            
            if (rax_9 == &var_128 || *(rax_9 + 0x18) == 0)
            label_140ab657f:
                *(arg1 + 0x18) = 0
                
                if (var_168_1 != 0)
                    void* rdx_19 = var_158
                    void* rcx_32 = &var_148
                    
                    if (rdx_19 != 0)
                        rcx_32 = rdx_19
                    
                    int64_t rdx_20 = *rcx_32
                    (*(rdx_20 + 0x10))(rcx_32, rdx_20)
            else
                int64_t var_118_1 = rax_9[1].q
                var_128 = *rax_9
                void var_68
                
                if (*(sub_140b24bd0(&arg3[2], &var_68, 0x29, &var_188) + 0x18) == 0)
                    goto label_140ab657f
                
                int64_t* rdx_12 = arg2[1]
                int64_t r8_4 = 0
                
                if (rdx_12 != 0)
                    int32_t rax_11 = 0
                    bool z_1
                    
                    if (0 == rdx_12[1].d)
                        rdx_12[1].d = 0
                        z_1 = true
                    else
                        rax_11 = rdx_12[1].d
                        z_1 = false
                    
                    if (z_1)
                    label_140ab6355:
                        rdx_12 = nullptr
                    else
                        while (true)
                            bool z_2
                            
                            if (rax_11 == rdx_12[1].d)
                                rdx_12[1].d = rax_11 + 1
                                z_2 = true
                            else
                                rdx_12[1].d
                                z_2 = false
                            
                            if (z_2)
                                if (rdx_12 != 0)
                                    r8_4 = *arg2
                                
                                break
                            
                            rax_11 = 0
                            bool z_3
                            
                            if (0 == rdx_12[1].d)
                                rdx_12[1].d = 0
                                z_3 = true
                            else
                                rax_11 = rdx_12[1].d
                                z_3 = false
                            
                            if (z_3)
                                goto label_140ab6355
                
                char* rcx_15 = var_128.q
                void* rax_17 = var_128:8.q - rcx_15
                int64_t var_218 = r8_4
                int32_t rax_18 = (rax_17 s>> 1).d
                char* var_248 = rcx_15
                int32_t var_240_1 = rax_18
                int32_t var_23c_1 = sub_140b21160(rcx_15, rax_18 * 2, 0)
                void* rcx_16 = &var_148
                int64_t var_238_1 = 0
                int64_t var_230_1 = 0
                void* rax_20 = var_158
                
                if (rax_20 != 0)
                    rcx_16 = rax_20
                
                void var_198
                int64_t* rax_23 = var_168_1(&var_198, (*(*rcx_16 + 8))(rcx_16), &var_248, &var_218)
                int64_t r15_1 = *rax_23
                int64_t* rbx_3 = rax_23[1]
                rax_23[1] = 0
                *rax_23 = 0
                int64_t* var_190
                
                if (var_190 != 0)
                    var_190[1].d -= 1
                    
                    if (var_190[1].d == 1)
                        (**var_190)(var_190)
                        int32_t temp3_1 = *(var_190 + 0xc)
                        *(var_190 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*var_190 + 8))(var_190, 1)
                
                if (rdx_12 != 0)
                    rdx_12[1].d -= 1
                    
                    if (rdx_12[1].d == 1)
                        (**rdx_12)(rdx_12)
                        int32_t rsi_4 = *(rdx_12 + 0xc)
                        *(rdx_12 + 0xc) -= 1
                        
                        if (rsi_4 == 1)
                            (*(*rdx_12 + 8))(rdx_12, zx.q(rsi_4))
                
                if (var_238_1 != 0)
                    sub_140a74f90(var_238_1)
                
                if (r15_1 != 0)
                    if (rbx_3 != 0)
                        rbx_3[1].d += 1
                    
                    int64_t rcx_26 = var_188
                    int64_t var_1a8_1 = r15_1
                    int64_t* var_1a0_1 = rbx_3
                    int64_t var_1b8 = rcx_26 + 2
                    int64_t var_180
                    int32_t var_1b0_1 = ((var_180 - rcx_26) s>> 1).d - 1
                    
                    if (rbx_3 != 0)
                        int32_t rax_38 = rbx_3[1].d
                        rbx_3[1].d = rax_38
                        
                        if (rax_38 == 0)
                            (**rbx_3)(rbx_3)
                            int32_t temp6_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    void var_e8
                    sub_140a8f820(&var_e8, &var_1b8)
                    sub_140b0e240(arg3, &var_188, &var_e8)
                    sub_140b0bbf0(&var_e8)
                
                *(arg1 + 0x18) = 0
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp5_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                if (var_168_1 != 0)
                    void* rax_31 = var_158
                    void* rcx_25 = &var_148
                    
                    if (rax_31 != 0)
                        rcx_25 = rax_31
                    
                    (*(*rcx_25 + 0x10))(rcx_25)

__security_check_cookie(rax_1 ^ &var_278)
return arg1
