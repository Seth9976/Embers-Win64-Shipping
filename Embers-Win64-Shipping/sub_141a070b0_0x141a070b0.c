// 函数: sub_141a070b0
// 地址: 0x141a070b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_142388730(arg1)

if ((*(arg1 + 0x38) & 2) != 0)
    result = sx.q(*(arg1 + 0x648))
    int64_t* rdi_1 = *(arg1 + 0x640)
    void* r13_2 = result * 0x58 + rdi_1
    
    if (rdi_1 != r13_2)
        int128_t* rbx_1 = &rdi_1[2]
        void* const r14_1 = nullptr
        
        do
            if (*(rbx_1 + 0x42) == 0)
                int32_t arg_8
                sub_141a0a4e0(&data_1439cbfb0, &arg_8, rbx_1)
                int64_t rax = sx.q(arg_8)
                int64_t rdx_3
                
                if (rax.d == 0xffffffff)
                    rdx_3 = 0
                else
                    rdx_3 = rax * 0x70 + data_1439cbfb0
                
                int64_t rax_1 = rdx_3 + 0x18
                
                if (rdx_3 == 0)
                    rax_1 = 0
                
                int64_t* var_68
                
                if (rax_1 == 0)
                    int64_t* rax_2 = j_sub_140a82f30(0x298)
                    int64_t* rax_3
                    
                    if (rax_2 == 0)
                        rax_3 = nullptr
                    else
                        rax_3 = sub_1419fc270(rax_2)
                    
                    var_68 = rax_3
                    sub_1419f6710(&data_1439cc030, rbx_1, &var_68)
                    int64_t* rax_4 = sub_142006940()
                    int64_t r8_3 = *rax_4
                    (*(r8_3 + 0x180))(rax_4, &data_1439cc140, r8_3)
                
                void* rax_6 = sub_1419f6f20(&data_1439cbfb0, sub_141a0f5f0(rbx_1), rbx_1)
                int64_t* rsi_1 = rax_6
                int32_t arg_10
                sub_1419eda60(rax_6, &arg_10, *(rbx_1 + 0x18))
                int64_t rcx_4 = sx.q(arg_10)
                
                if (rcx_4.d != 0xffffffff)
                    result = *rsi_1 + rcx_4 * 0x18
                
                if (rcx_4.d == 0xffffffff || result == 0 || *(result + 8) == 0)
                    var_68 = rdi_1
                    int64_t** var_58_1 = &var_68
                    void* var_60 = rbx_1 + 0x18
                    void var_70
                    sub_1419f6c00(rsi_1, &var_70, &var_60, nullptr)
                    int64_t* rax_7 = *(rbx_1 + 0x18)
                    var_68 = rax_7
                    var_68:4.d -= 1
                    var_68.d = rax_7.d
                    int64_t* r8_8 = var_68
                    *(rbx_1 + 0x42) = 1
                    int32_t arg_18
                    sub_1419eda60(rsi_1, &arg_18, r8_8)
                    int64_t rax_8 = sx.q(arg_18)
                    void* r15_1
                    
                    if (rax_8.d != 0xffffffff)
                        r15_1 = *rsi_1 + rax_8 * 0x18
                    
                    void* const r15_2
                    
                    if (rax_8.d == 0xffffffff || r15_1 == 0)
                        r15_2 = nullptr
                    else
                        r15_2 = *(r15_1 + 8)
                    
                    rbx_1[2].q = r15_2
                    int64_t* rax_10 = *(rbx_1 + 0x18)
                    var_68 = rax_10
                    var_68.d = rax_10.d - 1
                    int32_t arg_20
                    sub_1419eda60(rsi_1, &arg_20, var_68)
                    int64_t rax_12 = sx.q(arg_20)
                    
                    if (rax_12.d != 0xffffffff)
                        r14_1 = *rsi_1 + rax_12 * 0x18
                        
                        if (r14_1 != 0)
                            r14_1 = *(r14_1 + 8)
                    
                    *(rbx_1 + 0x28) = r14_1
                    int64_t* rax_14 = *(rbx_1 + 0x18)
                    var_68 = rax_14
                    var_68.d = rax_14.d + 1
                    int32_t var_78
                    sub_1419eda60(rsi_1, &var_78, var_68)
                    int64_t rax_16 = sx.q(var_78)
                    void* rax_18
                    
                    if (rax_16.d != 0xffffffff)
                        rax_18 = *rsi_1 + rax_16 * 0x18
                    
                    int64_t rax_19
                    
                    if (rax_16.d == 0xffffffff || rax_18 == 0)
                        rax_19 = 0
                    else
                        rax_19 = *(rax_18 + 8)
                    
                    rbx_1[3].q = rax_19
                    int64_t* rax_20 = *(rbx_1 + 0x18)
                    var_68 = rax_20
                    var_68:4.d += 1
                    var_68.d = rax_20.d
                    int32_t var_74
                    sub_1419eda60(rsi_1, &var_74, var_68)
                    int64_t rax_21 = sx.q(var_74)
                    void* rax_23
                    
                    if (rax_21.d != 0xffffffff)
                        rax_23 = *rsi_1 + rax_21 * 0x18
                    
                    int64_t rax_24
                    
                    if (rax_21.d == 0xffffffff || rax_23 == 0)
                        rax_24 = 0
                    else
                        rax_24 = *(rax_23 + 8)
                    
                    *(rbx_1 + 0x38) = rax_24
                    
                    if (r15_2 != 0)
                        *(r15_2 + 0x48) = rdi_1
                        r14_1 = *(rbx_1 + 0x28)
                    
                    if (r14_1 != 0)
                        *(r14_1 + 0x40) = rdi_1
                    
                    void* rax_25 = rbx_1[3].q
                    
                    if (rax_25 != 0)
                        *(rax_25 + 0x38) = rdi_1
                    
                    result = *(rbx_1 + 0x38)
                    r14_1 = nullptr
                    
                    if (result != 0)
                        *(result + 0x30) = rdi_1
            
            rdi_1 = &rdi_1[0xb]
            rbx_1 += 0x58
        while (rdi_1 != r13_2)

return result
