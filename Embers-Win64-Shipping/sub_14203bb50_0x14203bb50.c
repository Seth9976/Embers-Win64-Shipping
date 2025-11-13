// 函数: sub_14203bb50
// 地址: 0x14203bb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result

if (arg1 == 0)
    result.b = 0
else
    void** const var_158
    memset(&var_158, 0, 0x90)
    sub_140b4c2a0(&var_158)
    int64_t var_c8_1 = 0
    var_158 = &data_142d6ad48
    int64_t var_b8_1 = 0
    int64_t rdx
    int64_t var_c0_1 = rdx
    sub_140b552b0(&var_158, 1)
    int64_t rdx_2
    rdx_2.b = 1
    var_158[0x1b](&var_158, rdx_2)
    void* const rbx_1 = arg1[2]
    int32_t var_1b0_1 = 0x206
    int32_t var_1b8
    __builtin_strncpy(&var_1b8, "GVAS", 4)
    int32_t var_1b4_1 = 2
    int64_t* rax_1 = j_sub_140b17d00()
    int64_t var_1a8_1 = *rax_1
    int32_t var_1a0_1 = rax_1[1].d
    int64_t var_198
    sub_140596d10(&var_198, &rax_1[2])
    int32_t var_188_1 = 3
    int64_t var_180
    sub_140b509c0(&var_180)
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_2 = sub_1425841d0()
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                rbx_1 = nullptr
    
    int64_t var_170
    sub_142043c30(&var_1b8, &var_158, sub_140d21e10(rbx_1, &var_170, 0))
    void** var_a8
    sub_140b4c130(&var_a8, &var_158)
    char var_10_1 = 0
    var_a8 = &data_14325c860
    (*(*arg1 + 0xa0))(arg1, &var_a8)
    sub_140b4cb40(&var_a8)
    int64_t rcx_13 = var_170
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int64_t rcx_14 = var_180
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int64_t rcx_15 = var_198
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    sub_140b4cb40(&var_158)
    result.b = 1

return result
