// 函数: sub_1418b6b20
// 地址: 0x1418b6b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr
int32_t i_2 = 0
uint64_t result = sub_140a2ccb0(arg2, &var_38, U",", 1)
int32_t i_1 = i_2
int32_t r8 = 0
int16_t* var_58
__builtin_memset(&var_58, 0, 0x1c)
int64_t var_50
uint64_t var_48
int32_t result_1
int64_t* rax_2

if (i_1 == 1)
    int32_t result_3 = (data_143efaf28.q).d
    int64_t rdi = data_143efaf20
    result_1 = result_3
    
    if (result_3 != 0)
        sub_1405a4c70(&var_48, result_3, 0)
        memcpy(var_48, rdi, result_3 * 2)
        r8 = var_50:4.d
    
    rax_2 = var_38
label_1418b6c0e:
    
    if (&var_58 != rax_2)
        int32_t rbx_1 = rax_2[1].d
        int64_t rdi_2 = *rax_2
        var_50.d = rbx_1
        
        if (rbx_1 != 0 || r8 != 0)
            sub_1405a4c70(&var_58, rbx_1, r8)
            memcpy(var_58, rdi_2, rbx_1 * 2)
    
    sub_140a2fdd0(&var_48)
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 2)
    int32_t rax_3 = var_60_1 + 2
    var_60_1 = rax_3
    int32_t var_5c
    
    if (rax_3 s> var_5c)
        sub_140594770(&var_68)
    
    sub_1405a7220(var_68, 2, U"(", 2, 0x3f)
    sub_140a2fba0(&var_48, &var_68, 1)
    int64_t rcx_12 = var_68
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    sub_140a2fdd0(&var_58)
    var_68 = 0
    int32_t var_60_2 = 0
    sub_1405947f0(&var_68, 2)
    int32_t rax_4 = var_60_2 + 2
    var_60_2 = rax_4
    
    if (rax_4 s> var_5c)
        sub_140594770(&var_68)
    
    sub_1405a7220(var_68, 2, U"(", 2, 0x3f)
    sub_140a2fba0(&var_58, &var_68, 1)
    int64_t rcx_18 = var_68
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    var_68 = 0
    int32_t var_60_3 = 0
    sub_1405947f0(&var_68, 2)
    int32_t rax_5 = var_60_3 + 2
    var_60_3 = rax_5
    
    if (rax_5 s> var_5c)
        sub_140594770(&var_68)
    
    sub_1405a7220(var_68, 2, U")\n", 2, 0x3f)
    sub_140a2f8e0(&var_58, &var_68, 1)
    int64_t rcx_23 = var_68
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    result = zx.q(result_1)
    
    if (result.d s> 1 && var_50.d s> 1)
        int16_t* r14_1 = &data_142d40450
        uint64_t rdx_13 = &data_142d40450
        
        if (result.d != 0)
            rdx_13 = var_48
        
        void arg_20
        uint64_t result_5 = *sub_140b58260(&arg_20, rdx_13, 1)
        int32_t rax_7 = *(arg1 + 0x118)
        uint64_t result_2 = result_5
        int64_t* rdx_19
        
        if (rax_7 == *(arg1 + 0x144))
        label_1418b6e4e:
            rdx_19 = nullptr
        else
            int32_t rax_9 = sub_140b5ead0(result_5.d) + result_2:4.d
            void* r8_7 = arg1 + 0x148
            void* rcx_26 = *(r8_7 + 8)
            
            if (rcx_26 != 0)
                r8_7 = rcx_26
            
            int32_t rax_11 = *(r8_7 + (((sx.q(*(arg1 + 0x158)) - 1) & sx.q(rax_9)) << 2))
            
            if (rax_11 == 0xffffffff)
            label_1418b6e4e_1:
                rdx_19 = nullptr
            else
                while (true)
                    rdx_19 = (sx.q(rax_11) << 5) + *(arg1 + 0x110)
                    
                    if (*rdx_19 == result_5)
                        break
                    
                    rax_11 = rdx_19[3].d
                    
                    if (rax_11 == 0xffffffff)
                        goto label_1418b6e4e_2
                
                if (rax_11 == 0xffffffff)
                label_1418b6e4e_2:
                    rdx_19 = nullptr
        
        void* rdi_3 = &rdx_19[1]
        int16_t* rdx_20 = &data_142d40450
        
        if (rdx_19 == 0)
            rdi_3 = nullptr
        
        if (var_50.d != 0)
            rdx_20 = var_58
        
        uint64_t result_6 = *sub_140b58260(&var_68, rdx_20, 1)
        result = zx.q(*(arg1 + 0x168))
        result_2 = result_6
        int64_t* rcx_32
        
        if (result.d == *(arg1 + 0x194))
        label_1418b6eee:
            rcx_32 = nullptr
        else
            int32_t rax_14 = sub_140b5ead0(result_6.d) + result_2:4.d
            void* r8_9 = arg1 + 0x198
            void* rcx_29 = *(r8_9 + 8)
            
            if (rcx_29 != 0)
                r8_9 = rcx_29
            
            result = zx.q(*(r8_9 + (((sx.q(*(arg1 + 0x1a8)) - 1) & sx.q(rax_14)) << 2)))
            
            if (result.d == 0xffffffff)
            label_1418b6eee_1:
                rcx_32 = nullptr
            else
                while (true)
                    rcx_32 = sx.q(result.d) * 0x38 + *(arg1 + 0x160)
                    
                    if (*rcx_32 == result_6)
                        break
                    
                    result = zx.q(rcx_32[6].d)
                    
                    if (result.d == 0xffffffff)
                        goto label_1418b6eee_2
                
                if (result.d == 0xffffffff)
                label_1418b6eee_2:
                    rcx_32 = nullptr
        
        if (rdi_3 != 0)
            result = &rcx_32[1]
            
            if (rcx_32 == 0)
                result = 0
            
            if (result != 0)
                if (var_50.d != 0)
                    r14_1 = var_58
                
                sub_140b58260(&result_2, r14_1, 1)
                int64_t rbx_2 = sx.q(*(rdi_3 + 8))
                int32_t rax_16 = (rbx_2 + 1).d
                *(rdi_3 + 8) = rax_16
                
                if (rax_16 s> *(rdi_3 + 0xc))
                    sub_1405a4d70(rdi_3)
                
                result = result_2
                *(*rdi_3 + (rbx_2 << 3)) = result
    
    int16_t* rcx_36 = var_58
    
    if (rcx_36 != 0)
        result = sub_140a74f90(rcx_36)
    
    uint64_t rcx_37 = var_48
    
    if (rcx_37 != 0)
        result = sub_140a74f90(rcx_37)
    
    i_1 = i_2
else if (i_1 == 2)
    int64_t* rax_1 = var_38
    
    if (&var_48 != rax_1)
        int32_t result_4 = rax_1[1].d
        int64_t rdi_1 = *rax_1
        result_1 = result_4
        
        if (result_4 != 0)
            sub_1405a4c70(&var_48, result_4, 0)
            memcpy(var_48, rdi_1, result_4 * 2)
            rax_1 = var_38
            r8 = var_50:4.d
    
    rax_2 = &rax_1[2]
    goto label_1418b6c0e
int64_t* rbx_3 = var_38

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_38 = *rbx_3
        
        if (rcx_38 != 0)
            result = sub_140a74f90(rcx_38)
        
        rbx_3 = &rbx_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_3 = var_38

if (rbx_3 == 0)
    return result

return sub_140a74f90(rbx_3)
