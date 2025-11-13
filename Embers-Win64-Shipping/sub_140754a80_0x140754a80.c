// 函数: sub_140754a80
// 地址: 0x140754a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* r10 = *(arg4 + 8)
int32_t* rdx_3

if (r10[1].d == *(r10 + 0x34))
label_140754b39:
    rdx_3 = nullptr
else
    int32_t rbx_1 = *(arg4 + 0x28)
    void* r8 = &r10[7]
    void* rdx = *(r8 + 8)
    int64_t r11_1 = sx.q(*(arg4 + 0x24))
    int64_t r9 = sx.q(*(arg4 + 0x2c))
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_7 = *(r8 + (((sx.q(not.d(rbx_1)) ^ r11_1 ^ r9) & (sx.q(r10[9].d) - 1)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_140754b39_1:
        rdx_3 = nullptr
    else
        while (true)
            rdx_3 = (sx.q(rax_7) << 5) + *r10
            
            if (rdx_3[1] == rbx_1 && *rdx_3 == r11_1.d && rdx_3[2] == r9.d)
                break
            
            rax_7 = rdx_3[6]
            
            if (rax_7 == 0xffffffff)
                goto label_140754b39_2
        
        if (rax_7 == 0xffffffff)
        label_140754b39_2:
            rdx_3 = nullptr

void* rax_8 = &rdx_3[4]

if (rdx_3 == 0)
    rax_8 = nullptr

uint64_t result

if (rax_8 == 0)
    result = 0
else
    result = *rax_8

if (result != 0)
    int64_t* i = *(result + 8)
    
    for (void* r12_3 = &i[sx.q(*(result + 0x10)) * 4]; i != r12_3; i = &i[4])
        if (i[3].b != 0)
            int32_t rax_9 = *(arg3 + 0x24)
            int64_t var_1b0 = 0
            uint32_t count = 0
            int64_t rdx_4
            
            if (rax_9 == 0x80000000)
                int64_t* rdx_5 = 0x10
                
                if (*(arg3 + 0x20) != 0)
                    rdx_5 = 4
                
                rdx_4 = *(rdx_5 + arg3)
                int32_t var_1b8
                var_1b8.q = rdx_4
            else
                int32_t var_1b4_1 = 0
                rdx_4 = rax_9.q
            
            int128_t* var_1c8
            (*(*arg1 + 0x50))(arg1, rdx_4, &i[1], &var_1b0, var_1c8)
            int64_t rcx_5 = arg1[5]
            int16_t rdx_6 = arg1[6].w
            int64_t* var_158 = arg1[4]
            int64_t var_150_1 = rcx_5
            int16_t var_148_1 = rdx_6
            int32_t var_146_1 = 0xffffffff
            int64_t var_140_1 = 0
            uint32_t count_1 = 0
            
            if (rcx_5 != 0)
                int32_t rsi_1 = arg1[8].d
                
                if (rsi_1 s> 0)
                    int16_t rax_13 = *(arg1 + 0x32)
                    
                    if (rax_13 == 0xffff)
                        if (rdx_6 != 1)
                            rcx_5 = 0
                        
                        if (rcx_5 != 0)
                            *(arg1 + 0x32) = 0
                            rax_13 = 0
                        else
                            void* rax_14 = sub_140761a70(&arg1[5])
                            int16_t rcx_7 = *(rax_14 + 0x5c)
                            rax_13 = (*(rax_14 + 0x58) - 1 + rcx_7) & neg.w(rcx_7)
                            *(arg1 + 0x32) = rax_13
                    
                    if (rsi_1 == sx.d(rax_13))
                        int64_t rbx_2 = arg1[7]
                        sub_14074a0e0(&var_158)
                        memcpy(var_140_1, rbx_2, count_1)
            
            void** const var_1a0_1 = &data_142d9adb8
            int64_t rax_16 = *i
            void var_190
            sub_140745220(&var_190, &var_158)
            int64_t rsi_2 = var_1b0
            int64_t var_168 = 0
            int32_t var_15c
            
            if (count != 0)
                sub_1405da9e0(&var_168, count, 0)
                memcpy(var_168, rsi_2, count)
            else
                var_15c = 0
            
            if (var_140_1 != 0)
                sub_140a74f90(var_140_1)
            
            char result_1
            char var_118 = result_1 & 0xfc
            int64_t* rax_17 = sub_140a82f30(0x48, 8)
            int64_t* rbx_4 = &var_158
            var_158 = rax_17
            char result_2 = var_118 | 1
            result_1 = result_2
            
            if ((result_2 & 2) == 0)
                rbx_4 = rax_17
            
            *rbx_4 = &data_142d9adb8
            rbx_4[1] = rax_16
            sub_140745220(&rbx_4[2], &var_190)
            rbx_4[7] = var_168
            rbx_4[8].d = count
            *(rbx_4 + 0x44) = var_15c
            var_1c8 = &var_158
            void var_110
            int128_t* rax_22 =
                sub_1405ab790(&var_110, &arg5[0x22], arg5 + 0x124, &arg5[0x27], var_1c8)
            int64_t rbx_5 = sx.q(arg5[1].d)
            int32_t rcx_16 = (rbx_5 + 1).d
            arg5[1].d = rcx_16
            
            if (rcx_16 s> *(arg5 + 0xc))
                sub_1405c5190(arg5)
            
            sub_1405ab620(rbx_5 * 0xc8 + *arg5, rax_22)
            char var_50
            
            if ((var_50 & 1) != 0)
                int64_t* var_90
                int64_t* rcx_20 = &var_90
                
                if ((var_50 & 2) == 0)
                    rcx_20 = var_90
                
                var_50 &= 0xfe
                (**rcx_20)(rcx_20, 0)
                
                if ((var_50 & 2) == 0)
                    sub_140a74f90(var_90)
            
            int64_t var_b0
            
            if (var_b0 != 0)
                sub_140a74f90(var_b0)
            
            result = zx.q(result_1)
            
            if ((result.b & 1) != 0)
                int64_t** rcx_23 = &var_158
                
                if ((result.b & 2) == 0)
                    rcx_23 = var_158
                
                result.b &= 0xfe
                result_1 = result.b
                result = (**rcx_23)(rcx_23, 0)
                
                if ((result_1 & 2) == 0)
                    result = sub_140a74f90(var_158)
            
            int64_t var_178
            
            if (var_178 != 0)
                result = sub_140a74f90(var_178)
            
            int64_t rcx_26 = var_1b0
            
            if (rcx_26 != 0)
                result = sub_140a74f90(rcx_26)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
