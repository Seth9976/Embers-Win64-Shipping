// 函数: sub_14125f8e0
// 地址: 0x14125f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t* rsi = arg7
int64_t* r15 = arg11
int64_t r8 = sx.q(arg2)
int32_t var_150 = r8.d
int32_t result = 0x43e8e980
int64_t* var_f8 = rsi
int64_t* var_148 = r15

if (((&data_143e8e980)[r8 + zx.q(arg1) * 0x12].b & 2) != 0)
    if (arg3 != 0 || arg4 != 0)
    label_14125f99e:
        int32_t i_1 = 0
        
        if (rsi[1].d s> 0)
            int64_t* r14_1 = nullptr
            int64_t* var_130_1 = nullptr
            int32_t i
            
            do
                int32_t r8_1 = arg8[2].d
                
                if (r8_1 == r8_1 s/ 0x46 * 0x46)
                    void* rax_7 = j_sub_140a82f30(0x3f70)
                    void* const rdi_2
                    
                    if (rax_7 == 0)
                        rdi_2 = nullptr
                    else
                        rdi_2 = sub_14108b640(rax_7)
                    
                    int64_t rbx_1 = sx.q(arg8[1].d)
                    int32_t rax_9 = (rbx_1 + 1).d
                    arg8[1].d = rax_9
                    
                    if (rax_9 s> *(arg8 + 0xc))
                        sub_140638870(arg8)
                    
                    *(*arg8 + (rbx_1 << 3)) = rdi_2
                    r8_1 = arg8[2].d
                
                arg8[2].d = r8_1 + 1
                void* r13_2 = zx.q(r8_1 s% 0x46) * 0xe8 + *(*arg8 + (sx.q(r8_1 s/ 0x46) << 3))
                int64_t rax_17 = *rsi
                void* rsi_1 = *(r14_1 + rax_17)
                void* rcx_7 = r14_1 + rax_17
                sub_141264230(r13_2, rsi_1)
                void* r14_2 = rsi_1 + 0x78
                void* rbx_2 = r13_2 + 0x78
                
                if (rbx_2 != r14_2)
                    int64_t rdi_3 = sx.q(*(r14_2 + 0x38))
                    void* r15_1 = *(r14_2 + 0x30)
                    int32_t r8_2 = *(rbx_2 + 0x3c)
                    *(rbx_2 + 0x38) = rdi_3.d
                    
                    if (rdi_3.d != 0 || r8_2 != 0)
                        sub_1410b37d0(rbx_2, rdi_3.d, r8_2)
                        void* r9_1 = *(rbx_2 + 0x30)
                        
                        if (r15_1 != 0)
                            r14_2 = r15_1
                        
                        if (r9_1 != 0)
                            rbx_2 = r9_1
                        
                        memcpy(rbx_2, r14_2, (rdi_3 * 0xc).d)
                    else
                        *(rbx_2 + 0x3c) = 4
                    
                    r15 = var_148
                
                *(r13_2 + 0xb8) = *(rsi_1 + 0xb8)
                *(r13_2 + 0xc0) = *(rsi_1 + 0xc0)
                *(r13_2 + 0xc4) = *(rsi_1 + 0xc4)
                *(r13_2 + 0xc8) = *(rsi_1 + 0xc8)
                *(r13_2 + 0xcc) = *(rsi_1 + 0xcc)
                *(r13_2 + 0xd0) = *(rsi_1 + 0xd0)
                *(r13_2 + 0xd0) = *(rsi_1 + 0xd0)
                *(r13_2 + 0xe0) = *(rsi_1 + 0xe0)
                *(r13_2 + 0xe1) = *(rsi_1 + 0xe1)
                int32_t rdi_4
                
                if (arg4 == 0)
                    rdi_4 = *(rcx_7 + 0x20) << 0x1a s>> 0x1d
                    
                    if (arg3 != 0 && rdi_4 != 0)
                        int32_t rdi_7
                        rdi_7.b = rdi_4 != 2
                        rdi_4 = rdi_7 + 1
                else
                    rdi_4 = 0
                
                int32_t rbx_3 = *(rsi_1 + 0xc0)
                int64_t* rbx_6
                int64_t* rsi_2
                
                if (not(test_bit(rbx_3, 0x1e)))
                    EnterCriticalSection(&data_143e8eab0)
                    rbx_6 = (zx.q(*(rsi_1 + 0xc0)) & 0x3fffffff) * 0x88 + data_143e8eaf0
                    LeaveCriticalSection(&data_143e8eab0)
                    rsi_2 = arg9
                else
                    rsi_2 = arg9
                    rbx_6 = ((zx.q(rbx_3) & 0x3fffffff) << 7) + *rsi_2
                
                int64_t* rcx_11 = rbx_6[1]
                int64_t var_a8 = *rbx_6
                
                if (rcx_11 != 0)
                    sub_1419c5510(rcx_11)
                
                int64_t* rcx_12 = rbx_6[2]
                
                if (rcx_12 != 0)
                    sub_1419c5510(rcx_12)
                
                int64_t* rcx_13 = rbx_6[3]
                
                if (rcx_13 != 0)
                    sub_1419c5510(rcx_13)
                
                int64_t* rcx_14 = rbx_6[4]
                
                if (rcx_14 != 0)
                    sub_1419c5510(rcx_14)
                
                int64_t* rcx_15 = rbx_6[5]
                
                if (rcx_15 != 0)
                    sub_1419c5510(rcx_15)
                
                int32_t var_78_1 = rbx_6[6].d
                int32_t var_74_1 = *(rbx_6 + 0x34)
                int32_t var_70_1 = rbx_6[7].d
                int32_t var_6c_1 = *(rbx_6 + 0x3c)
                int32_t var_68_1 = rbx_6[8].d
                int64_t var_60_1 = rbx_6[9]
                int64_t var_50_1 = rbx_6[0xb]
                char var_38_1 = rbx_6[0xe].b
                int32_t rcx_18 = *(rcx_7 + 0x20) << 0x1d s>> 0x1d
                char var_35_1 = 0
                int32_t var_34_1 = *(rbx_6 + 0x74)
                int16_t var_37_1 = 0
                int128_t var_48_1 = *(rbx_6 + 0x60)
                int64_t rax_39
                
                if (rcx_18 == 0)
                    if (rdi_4 == 0)
                        rax_39 = data_1439b5590
                    else
                        rax_39 = data_1439b5578
                        
                        if (rdi_4 != 2)
                            rax_39 = data_1439b5560
                else if (rcx_18 == 1)
                    if (rdi_4 == 0)
                        rax_39 = data_1439b5548
                    else
                        rax_39 = data_1439b5530
                        
                        if (rdi_4 != 2)
                            rax_39 = data_1439b5518
                else if (rdi_4 == 0)
                    rax_39 = data_14395da18
                else
                    rax_39 = data_1439b5500
                    
                    if (rdi_4 != 2)
                        rax_39 = data_1439b54e8
                
                int64_t var_58_1 = rax_39
                
                if (arg5 != arg6 && var_150 == 1)
                    int64_t var_d0
                    __builtin_memset(&var_d0, 0, 0x24)
                    int128_t var_e8 = zx.o(0)
                    sub_1410b79f0(arg5, 0, &var_e8)
                    int64_t var_50_2 = var_e8:8.q
                
                int32_t var_14c
                sub_14126c520(&var_14c, &var_a8, rsi_2, arg10)
                *(r13_2 + 0xc0) = var_14c
                int32_t rax_42 = *(rcx_7 + 0x10)
                int64_t rbx_8 = sx.q(r15[1].d)
                int32_t var_114_1 = *(rcx_7 + 0x14)
                int32_t var_10c_1 = *(rcx_7 + 0x1c)
                int32_t var_110_1 = 0xffffffff
                int32_t var_108 = var_108 ^ ((*(rcx_7 + 0x20) ^ var_108) & 0x3f)
                int64_t var_120_1 = *(rcx_7 + 8)
                int32_t rax_48 = (rbx_8 + 1).d
                r15[1].d = rax_48
                
                if (rax_48 s> *(r15 + 0xc))
                    sub_1410b38f0(r15, rbx_8.d)
                
                int64_t rax_49 = *r15
                int64_t rcx_25 = rbx_8 * 5
                *(rax_49 + (rcx_25 << 3)) = r13_2.o
                *(rax_49 + (rcx_25 << 3) + 0x10) = rax_42.o
                *(rax_49 + (rcx_25 << 3) + 0x20) = var_108.q
                
                if (rcx_15 != 0)
                    sub_1419d6470(rcx_15)
                
                if (rcx_14 != 0)
                    sub_1419d6470(rcx_14)
                
                if (rcx_13 != 0)
                    sub_1419d6470(rcx_13)
                
                if (rcx_12 != 0)
                    sub_1419d6470(rcx_12)
                
                if (rcx_11 != 0)
                    sub_1419d6470(rcx_11)
                
                i = i_1 + 1
                rsi = var_f8
                r14_1 = &var_130_1[5]
                i_1 = i
                var_130_1 = r14_1
            while (i s< rsi[1].d)
        
        int64_t rcx_31 = *rsi
        *rsi = *r15
        *r15 = rcx_31
        int64_t rdx_15 = rsi[1]
        rsi[1] = r15[1]
        r15[1] = rdx_15
        result = *(r15 + 0xc)
        r15[1].d = 0
        
        if (result s< 0 && result != 0)
            result = sub_141105150(r15, 0)
    else if (arg5 != arg6 && r8.d == 1)
        goto label_14125f99e

__security_check_cookie(rax_1 ^ &var_178)
return result
