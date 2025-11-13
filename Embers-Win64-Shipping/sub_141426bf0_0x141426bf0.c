// 函数: sub_141426bf0
// 地址: 0x141426bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_1405949a0() != 0)
    void* rbx_1 = *(arg1 + 0xa0)
    char arg_8
    char* var_d0_1 = &arg_8
    void*** (* var_d8)() = j_sub_140597fc0
    arg_8 = 0
    int64_t* rax_2 = sub_140a756e0(&var_d8, &data_143958018) + 0x10
    int64_t* var_c8 = rax_2
    int64_t rcx_1 = *rax_2
    int64_t rcx_2 = rax_2[2]
    char var_b0_1 = 0
    int64_t rcx_3 = rax_2[3]
    rax_2[3] = &var_c8
    int64_t* rax_3 = var_c8
    rax_3[4].d += 1
    void var_98
    sub_141385550(&var_98, arg2, rbx_1)
    arg_8 = 0
    char* var_d0_2 = &arg_8
    var_d8 = j_sub_140597fc0
    void*** rax_5 = sub_14081d830(0xb8, sub_140a756e0(&var_d8, &data_143958018) + 0x10, 1, 0)
    void*** rbx_2 = rax_5
    
    if (rax_5 == 0)
        rbx_2 = nullptr
    else
        *(rbx_2 + 0xc) = 0
        rbx_2[3] = 0
        memset(rbx_2 + 0x24, 0, 0x5c)
        rbx_2[1].d = 0
        rbx_2[2] = 0
        rbx_2[3].d = 0
        rbx_2[4] = 1
        __builtin_memset(&rbx_2[5], 0, 0x18)
        rbx_2[0xb].w = 0
        rbx_2[0xc] = u"UnknownTexture"
        rbx_2[8] = 1
        rbx_2[9].w = 1
        *(rbx_2 + 0x4c) = 0
        *(rbx_2 + 0x54) = 0
        rbx_2[0xd].w = 1
        *(rbx_2 + 0x6a) = 0
        rbx_2[0xe] = 0
        rbx_2[0xf].d = 0
        __builtin_memset(&rbx_2[0x10], 0, 0x38)
        *rbx_2 = &data_142f7e600
    
    int32_t var_60
    int64_t rsi_1 = sx.q(var_60)
    int32_t rax_6 = (rsi_1 + 1).d
    int32_t var_60_1 = rax_6
    int64_t var_68
    int32_t var_5c
    
    if (rax_6 s> var_5c)
        sub_1405a4d70(&var_68)
    
    *(var_68 + (rsi_1 << 3)) = rbx_2
    
    if (rbx_2 != 0)
        var_d8 = nullptr
        int64_t var_d0_3 = 1
        sub_1405a4d70(&var_d8)
        *var_d8 = rbx_2
        sub_1413a1370(&var_98, &var_d8)
        void*** (* rcx_10)() = var_d8
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    
    sub_141386800(&var_98)
    
    if (var_b0_1 == 0)
        int64_t* rax_9 = var_c8
        char var_b0_2 = 1
        rax_9[4].d -= 1
        int64_t* rcx_12 = var_c8
        
        if (rcx_2 != rcx_12[2])
            sub_140b16b40(rcx_12, rcx_2)
            rcx_12 = var_c8
        
        *rcx_12 = rcx_1
        var_c8[3] = rcx_3

int32_t i = 0

if (*(arg1 + 0x78) s> 0)
    int64_t* rsi_2 = nullptr
    
    do
        int64_t* rcx_14 = *(rsi_2 + *(arg1 + 0x70))
        (*(*rcx_14 + 0x48))(rcx_14, arg2, arg1 + 0x10)
        int32_t j = 0
        
        if (*(arg1 + 0x18) s> 0)
            do
                int64_t* rcx_15 = *(rsi_2 + *(arg1 + 0x70))
                int64_t r9_1 = *rcx_15
                (*(r9_1 + 0x50))(rcx_15, arg2, sx.q(j) * 0x5240 + *(arg1 + 0xa0), r9_1)
                j += 1
            while (j s< *(arg1 + 0x18))
        
        i += 1
        rsi_2 = &rsi_2[2]
    while (i s< *(arg1 + 0x78))

void** result = sub_14196d540(arg2)

if (data_143eceb34 == 0)
    return result

data_143eceb34 = 0
return sub_1413e0640(*(arg1 + 8))
