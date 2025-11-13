// 函数: sub_141db9b80
// 地址: 0x141db9b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* rax_3 = (*(*arg1 + 0x150))()
void* r15 = rax_3
void* var_e8 = rax_3
int64_t* result

if ((*(rax_3 + 0x11d) & 0x20) == 0)
    void* const i = nullptr
    void* r12_1 = nullptr
    void* r14_1
    
    if (arg5 == 0)
        r14_1 = arg1[2]
    else
        r14_1 = *(arg5 + 0x10)
    
    if (r14_1 != 0)
        while (i == 0)
            if (r12_1 != 0)
                break
            
            if (r14_1 != 0)
                void* rax_4 = sub_14247bf70()
                void* rdx = *(r14_1 + 0x10)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                    void* rax_15 = sub_140bdf670()
                    void* rdx_6 = *(r14_1 + 0x10)
                    int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                    
                    if (rax_16.d s<= *(rdx_6 + 0x38)
                            && *(*(rdx_6 + 0x30) + (rax_16 << 3)) == rax_15 + 0x30)
                        void** rdi_1 = *(r14_1 + 0x270)
                        int64_t rbx_2 = arg_10
                        void* r15_1 = &rdi_1[sx.q(*(r14_1 + 0x278))]
                        
                        if (rdi_1 == r15_1)
                        label_141db9de1:
                            i = nullptr
                        else
                            while (true)
                                void* rsi_1 = *rdi_1
                                int64_t rax_18
                                
                                if (rsi_1 == 0)
                                    rax_18.b = 0
                                else
                                    void* rax_19 = sub_142459c10()
                                    void* rdx_7 = *(rsi_1 + 0x10)
                                    rax_18 = sx.q(*(rax_19 + 0x38))
                                    
                                    if (rax_18.d s> *(rdx_7 + 0x38))
                                        rax_18.b = 0
                                    else if (*(*(rdx_7 + 0x30) + (rax_18 << 3)) != rax_19 + 0x30
                                            || *(rsi_1 + 0x18) != rbx_2)
                                        rax_18.b = 0
                                    else
                                        rax_18.b = 1
                                
                                if (rax_18.b != 0)
                                    break
                                
                                rdi_1 = &rdi_1[1]
                                
                                if (rdi_1 == r15_1)
                                    goto label_141db9de1_2
                            
                            i = *rdi_1
                            
                            if (i == 0)
                            label_141db9de1_1:
                                i = nullptr
                            else
                                void* rax_20 = sub_142459c10()
                                void* rdx_8 = *(i + 0x10)
                                int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                                
                                if (rax_21.d s> *(rdx_8 + 0x38)
                                    || *(*(rdx_8 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
                                label_141db9de1_2:
                                    i = nullptr
                else if (sub_141eaf9e0(r14_1) == 0)
                    i = sub_141e9f5b0(r14_1, &arg_10)
                else
                    int64_t rbx_1 = arg_10
                    
                    if (*(r14_1 + 0x2a8) == *(r14_1 + 0x2d4))
                    label_141db9cd7:
                        r12_1 = nullptr
                        i = sub_141e9f5b0(r14_1, &arg_10)
                    else
                        int32_t rax_10 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                        void* r8_1 = r14_1 + 0x2d8
                        void* rcx_3 = *(r8_1 + 8)
                        
                        if (rcx_3 != 0)
                            r8_1 = rcx_3
                        
                        int32_t rax_12 =
                            *(r8_1 + (((sx.q(*(r14_1 + 0x2e8)) - 1) & sx.q(rax_10)) << 2))
                        
                        if (rax_12 == 0xffffffff)
                            goto label_141db9cd7
                        
                        int64_t* rcx_6
                        
                        while (true)
                            rcx_6 = sx.q(rax_12) * 0x58 + *(r14_1 + 0x2a0)
                            
                            if (*rcx_6 == rbx_1)
                                break
                            
                            rax_12 = rcx_6[0xa].d
                            
                            if (rax_12 == 0xffffffff)
                                goto label_141db9cd7
                        
                        if (rax_12 == 0xffffffff || rcx_6 == 0)
                            goto label_141db9cd7
                        
                        r12_1 = &rcx_6[1]
                        
                        if (r12_1 == 0 || *(r12_1 + 0x21) == 0)
                            i = sub_141e9f5b0(r14_1, &arg_10)
                        else if (*(r12_1 + 0x18) == 0)
                            i = sub_141e9f5b0(r14_1, &arg_10)
            
            r14_1 = *(r14_1 + 0x40)
            
            if (r14_1 == 0)
                break
        
        r15 = var_e8
    
    r14_1.b = 0
    int64_t* result_1
    
    if (r12_1 == 0)
        int64_t rbx_3 = 0
        sub_140b33630("InstanceActorComponent")
        result_1 = nullptr
        
        if (i != 0)
            if ((sub_140b5b8a0(0, 0) & 1) == 0)
                sub_141dbc050(arg1, 0)
            else
                rbx_3 = *sub_141dc3420(&var_e8, arg1, (*(i + 0x18)).d)
            
            void var_d8
            sub_140d15830(&var_d8, i, arg1)
            int64_t var_c8_1 = rbx_3
            int32_t var_c0_1 = 0xfb7ffd6
            int32_t var_b0_1 = 0x40000000
            int64_t* result_2 = sub_140d2e350(&var_d8)
            result_1 = result_2
            sub_141dd11e0(arg1, result_2)
            int32_t var_58_1 = 0
            int64_t var_60
            
            if (var_60 != 0)
                sub_140a74f90(var_60)
            
            int32_t var_98_1 = 0
            int64_t var_a0
            int32_t var_94
            
            if (var_94 != 0)
                sub_1405a5130(&var_a0, 0)
            
            int32_t var_70_1 = 0xffffffff
            int32_t var_6c_1 = 0
            void var_90
            sub_14059a8e0(&var_90, 0)
            int64_t var_80
            
            if (var_80 != 0)
                sub_140a74f90(var_80)
            
            int64_t rcx_22 = var_a0
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
        
        sub_140b37f60("InstanceActorComponent")
    else
        result_1 = sub_141dbe1d0(arg1, r12_1, 0)
    
    if (result_1 != 0)
        (*(*result_1 + 0x3a8))(result_1)
        void* rax_27 = sub_1425881f0()
        void* rdx_13 = result_1[2]
        int64_t rax_28 = sx.q(*(rax_27 + 0x38))
        
        if (rax_28.d s<= *(rdx_13 + 0x38) && *(*(rdx_13 + 0x30) + (rax_28 << 3)) == rax_27 + 0x30)
            if (arg3 == 0)
                void* rdx_14 = arg1[0x26]
                
                if (rdx_14 != 0)
                    sub_141f4a650(result_1, rdx_14, 0)
                else
                    arg1[0x26] = result_1
            
            sub_141f49090(result_1, arg4, 0, 0, 0)
            r14_1.b = 1
        
        if ((*(result_1 + 0x89) & 2) != 0)
            sub_141ef1390(result_1)
        
        if ((*(arg1 + 0x5c) & 2) == 0 && r14_1.b != 0)
            void* rax_30 = sub_142577430()
            void* r8_9 = result_1[2]
            int64_t rax_31 = sx.q(*(rax_30 + 0x38))
            
            if (rax_31.d s<= *(r8_9 + 0x38) && *(*(r8_9 + 0x30) + (rax_31 << 3)) == rax_30 + 0x30
                    && sub_141f82e20(result_1) != 0)
                sub_142449550(r15, arg1, result_1)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_128)
return result
