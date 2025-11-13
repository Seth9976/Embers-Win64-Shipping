// 函数: sub_140bda0b0
// 地址: 0x140bda0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t result

if (arg1[0x23] != 0)
    result = arg1[0x23]
else
    int64_t* rdi_1 = arg1[8]
    int64_t r15_1 = 0
    
    if (rdi_1 == 0)
    label_140bda127:
        
        if (arg1 == sub_140d41340())
            goto label_140bda158
        
        result = arg1[0x23]
    else
        int64_t rdx
        rdx.b = 1
        sub_140d315a0(rdi_1)
        r15_1 = rdi_1[0x23]
        
        if (r15_1 == 0)
            (*(*rdi_1 + 0x390))(rdi_1)
            r15_1 = rdi_1[0x23]
            
            if (r15_1 != 0)
                goto label_140bda158
            
            goto label_140bda127
        
    label_140bda158:
        
        if (((*(arg1 + 0xcc) u>> 0x12).b & 1) != 0 && arg1[0xe] == 0 && data_143de542d == 0)
            int64_t rax_6 = sub_140d3cb50(arg1)
            
            if (rax_6 != 0 && *(rax_6 + 0x295) == 0)
                if (data_143de5452 == 0)
                    uint64_t rdi_2 = arg1[9]
                    
                    if (rdi_2 != 0)
                        while (*(rdi_2 + 0x20) == arg1)
                            if (((*(rdi_2 + 8) u>> 0xa).b & 1) != 0)
                                sub_140cc45a0(rax_6 + 0x200, rdi_2)
                            
                            rdi_2 = *(rdi_2 + 0x28)
                            
                            if (rdi_2 == 0)
                                break
                
                sub_140ca8970(arg1, 1)
        
        if (arg1[0x23] != 0)
            result = arg1[0x23]
        else
            int16_t* rdi_3 = nullptr
            int16_t* const r12_1 = &data_142d40450
            uint64_t r13
            r13.b = 0
            int16_t* r14_1 = nullptr
            int32_t var_1c0_1 = 0
            int16_t* rsi_2 = nullptr
            int32_t var_1c4_1 = 0
            uint64_t var_1b8
            int64_t* var_1b0
            
            if (data_14399fa4c != 0 && ((*(sub_140d21d80(arg1) + 0x50) u>> 4).b & 1) != 0)
                var_1b8 = *(sub_140d21d80(arg1) + 0x18)
                int64_t var_198
                int64_t* rax_11 = sub_140b63b70(&var_1b8, &var_198)
                
                if (&var_1b0 == rax_11)
                    r13 = zx.q(var_1c0_1)
                else
                    r14_1 = *rax_11
                    *rax_11 = 0
                    r13 = zx.q(rax_11[1].d)
                    var_1c0_1 = r13.d
                    rax_11[1] = 0
                
                int64_t rcx_11 = var_198
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                int64_t* rax_13 = sub_140b63b70(sub_140bdd7d0(arg1, &var_1b8), &var_198)
                
                if (&var_1b0 != rax_13)
                    rsi_2 = *rax_13
                    *rax_13 = 0
                    int32_t rcx_14 = rax_13[1].d
                    rax_13[1] = 0
                    rdi_3 = rsi_2
                    var_1c4_1 = rcx_14
                
                int64_t rcx_15 = var_198
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                int16_t* rdx_6 = &data_142d40450
                
                if (var_1c4_1 != 0)
                    rdx_6 = rdi_3
                
                int16_t* rcx_16 = &data_142d40450
                
                if (r13.d != 0)
                    rcx_16 = r14_1
                
                int32_t var_1e8
                var_1e8.q = 0
                sub_140bcc090(rcx_16, rdx_6, 1, 1, var_1e8, 0)
                r13.b = 1
            
            void* rdx_7 = arg1[4]
            char* var_1d8_1 = nullptr
            var_1b8 = 0
            void* rax_14 = sub_140d2d830(arg1, rdx_7, var_1b8, 0x31, 0, 0, var_1d8_1)
            bool cond:2_1 = (*(arg1 + 0xcc) & 0x10000080) == 0
            arg1[0x23] = rax_14
            void* i_1 = arg1[0xa]
            var_1b0 = arg1
            int32_t var_1a0_1 = 0xffffffff
            int16_t var_19c_1 = 0
            char var_19a_1 = 0
            sub_140be1f00(&var_1b0)
            void* i_2
            
            for (void* i = i_1; i != 0; i = i_2)
                sub_140d29b10(arg1[0x23], *(*(i + 0x78) + 0xe8), sx.q(*(i + 0x4c)))
                i_2 = *(i + 0x20)
                sub_140be1f00(&var_1b0)
            
            if (((*(arg1 + 0xcc) u>> 0x12).b & 1) != 0)
                void* rax_17 = sub_140bdf670()
                void* rdx_10 = arg1[2]
                int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                
                if (rax_18.d s<= *(rdx_10 + 0x38)
                        && *(*(rdx_10 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                    arg1[0x55](arg1, rdx_10)
            
            char var_1e0_2
            var_1e0_2.q = 0
            int32_t var_1e8_1
            var_1e8_1.b = cond:2_1
            void var_188
            arg1[0x16](sub_140d158c0(&var_188, arg1[0x23], r15_1, 0, var_1e8_1.b, var_1e0_2))
            sub_140d16260(&var_188)
            
            if (r13.b != 0)
                int16_t* rdx_12 = &data_142d40450
                
                if (var_1c4_1 != 0)
                    rdx_12 = rsi_2
                
                var_1e8_1.q = 0
                
                if (var_1c0_1 != 0)
                    r12_1 = r14_1
                
                sub_140bcc090(r12_1, rdx_12, 1, 2, var_1e8_1, 0)
            
            int64_t* rcx_27 = arg1[0x23]
            (*(*rcx_27 + 0x48))(rcx_27)
            
            if (rsi_2 != 0)
                sub_140a74f90(rsi_2)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
            
            result = arg1[0x23]

__security_check_cookie(rax_1 ^ &var_208)
return result
