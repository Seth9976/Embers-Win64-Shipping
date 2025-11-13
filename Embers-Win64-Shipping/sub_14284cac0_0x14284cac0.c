// 函数: sub_14284cac0
// 地址: 0x14284cac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rcx = arg1[0xc]
int32_t rsi = arg2
int32_t result

if (rcx - 1 u> 0xbd)
    result = -0x7ff8ffa9
else if (rcx - 0x6f u> 3)
    int64_t rax_4 = *(arg1 + 0x18)
    
    if (rax_4 u<= 1 || (rax_4 == 6 && arg1[0xd] == 3 && ((arg1[0xa] u>> 2).b & 1) != 0))
        goto label_14284cb47
    
    if (test_bit(rsi, 0x12))
        result = -0x7ff8ffae
    else
        rsi |= 0x10000
    label_14284cb47:
        
        if (test_bit(rsi, 0x11))
            rsi |= 0x10000
        
        int128_t var_68_1
        __builtin_memset(&var_68_1, 0, 0x20)
        int128_t var_58
        void* const rcx_4
        void* const rdx
        
        if (not(test_bit(rsi, 0x10)) && rcx - 2 u<= 0x71)
            switch (rcx)
                case 2
                    var_58.d = 0x20
                    var_58:4.d = 4
                    var_58:8.d = 0x74
                case 0xa
                    var_58.d = 0x20
                    var_58:4.d = 4
                    var_58:8.d = 0x71
                case 0xb
                    var_58.d = 0x20
                    var_58:4.d = 4
                    var_58:8.d = 0x24
                case 0xd
                    var_58.d = 0x20
                    var_58:4.d = 4
                    var_58:8.d = 0x6e
                case 0x10
                    var_58.d = 0x20
                    var_58:4.d = 4
                    var_58:8.d = 0x73
                case 0x18
                    if (test_bit(rsi, 0x12))
                        var_58 = data_1434d6ee8
                        __builtin_memcpy(&var_68_1, 
                            "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x"
                        "00\x00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                            0x20)
                case 0x1c
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x1d
                    if (test_bit(rsi, 0x12))
                        __builtin_memcpy(&var_68_1, 
                            "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x"
                        "00\x00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                            0x20)
                case 0x1f
                    var_58 = data_1434d6ea8
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x22
                    var_58.d = 0x20
                    var_58:4.d = 4
                    var_58:8.d = 0x70
                case 0x23
                    var_58 = data_1434d6d88
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x25
                    var_58 = data_1434d6ec8
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x29
                    var_58.d = 0x20
                    var_58:4.d = 4
                    var_58:8.d = 0x72
                case 0x31
                    var_58 = data_1434d6e48
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x33
                    var_58 = data_1434d6e88
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x36
                    var_58.d = 0x20
                    var_58:4.d = 4
                    var_58:8.d = 0x6f
                case 0x38
                    var_58 = data_1434d6e28
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x3d
                    var_58 = data_1434d6e08
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x41
                    var_58 = data_1434d6e68
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x44
                    var_58 = data_1434d6cc8
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x45
                    var_58 = data_1434d6ce8
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x47
                    var_58 = data_1434d6ba8
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x48
                    if (test_bit(rsi, 0x12))
                        var_58 = data_1434d6ba8
                        __builtin_memcpy(&var_68_1, 
                            "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x"
                        "00\x00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                            0x20)
                case 0x4a
                label_14284ce3e:
                    rdx = &data_1434d6bc8
                    rcx_4 = &data_1434d6be8
                label_14284ce53:
                    
                    if (((arg1[0xb]).b & 7) == 2)
                        rcx_4 = rdx
                    
                    var_58 = *rcx_4
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x4b
                    if (test_bit(rsi, 0x12))
                        goto label_14284ce3e
                case 0x4d
                label_14284ce71:
                    rdx = &data_1434d6c08
                    rcx_4 = &data_1434d6c28
                    goto label_14284ce53
                case 0x4e
                    if (test_bit(rsi, 0x12))
                        goto label_14284ce71
                case 0x50
                    var_58 = data_1434d6c48
                    var_68_1 = data_1434d6c58
                    
                    if (test_bit(rsi, 0x12))
                        __builtin_strncpy(&var_58:8, "ATI1", 4)
                case 0x51
                    var_58 = data_1434d6c68
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x53
                    var_58 = data_1434d6c88
                    var_68_1 = data_1434d6c98
                    
                    if (test_bit(rsi, 0x12))
                        __builtin_strncpy(&var_58:8, "ATI2", 4)
                case 0x54
                    var_58 = data_1434d6ca8
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x55
                    var_58 = data_1434d6da8
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x56
                    var_58 = data_1434d6dc8
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x57
                    var_58 = data_1434d6d28
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x58
                    var_58 = data_1434d6d48
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x5b
                    if (test_bit(rsi, 0x12))
                        var_58 = data_1434d6d28
                        __builtin_memcpy(&var_68_1, 
                            "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x"
                        "00\x00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                            0x20)
                case 0x5d
                    if (test_bit(rsi, 0x12))
                        var_58 = data_1434d6d48
                        __builtin_memcpy(&var_68_1, 
                            "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x"
                        "00\x00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                            0x20)
                case 0x6b
                    var_58 = data_1434d6d08
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
                case 0x73
                    var_58 = data_1434d6de8
                    __builtin_memcpy(&var_68_1, 
                        "\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x00\x00\x00\x00\xff\x20\x00\x00\x"
                    "00\x41\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00", 
                        0x20)
        bool cond:0_1 = var_58.d != 0
        int64_t rax_10 = 0x80
        *arg5 = 0x80
        
        if (cond:0_1)
            goto label_14284cf27
        
        if (not(test_bit(rsi, 0x12)))
            rax_10 = 0x94
            *arg5 = 0x94
        label_14284cf27:
            
            if (arg3 == 0)
                result = 0
            else if (arg4 u>= rax_10)
                __builtin_strncpy(arg3, "DDS |", 0x80)
                int32_t r8_1 = 0x1007
                int32_t rdx_1 = 0x1000
                *(arg3 + 8) = 0x1007
                *(arg3 + 0x6c) = 0x1000
                
                if (*(arg1 + 0x20) u<= 0)
                label_14284cfb3:
                    int32_t rcx_5 = arg1[0xd]
                    
                    if (rcx_5 == 2)
                        int64_t rax_19 = *arg1
                        
                        if (rax_19 u> 0xffffffff)
                            result = -0x7ff8ffa9
                        else
                            *(arg3 + 0x10) = rax_19.d
                            *(arg3 + 0x18) = 1
                            *(arg3 + 0xc) = 1
                        label_14284d09d:
                            int64_t var_38
                            int64_t var_30
                            result =
                                sub_14284ac90(arg1[0xc], *arg1, *(arg1 + 8), &var_30, &var_38, 0)
                            
                            if (result s>= 0)
                                int64_t r8_4 = var_38
                                
                                if (r8_4 u> 0xffffffff)
                                    result = -0x7fffbffb
                                else
                                    int64_t rdx_4 = var_30
                                    
                                    if (rdx_4 u> 0xffffffff)
                                        result = -0x7fffbffb
                                    else
                                        int32_t rax_20 = arg1[0xc]
                                        int32_t rax_22
                                        
                                        if (rax_20 s< 0x46
                                                || (rax_20 s> 0x54 && rax_20 - 0x5e u> 5))
                                            *(arg3 + 0x14) = rdx_4.d
                                            rax_22 = 8
                                        else
                                            *(arg3 + 0x14) = r8_4.d
                                            rax_22 = 0x80000
                                        
                                        bool cond:1_1 = var_58.d != 0
                                        *(arg3 + 8) |= rax_22
                                        
                                        if (not(cond:1_1))
                                            if (arg3 != -0x4c)
                                                *(arg3 + 0x4c) = data_1434d6f08
                                                *(arg3 + 0x5c) = data_1434d6f18
                                            else
                                                *_errno() = 0x16
                                                _invalid_parameter_noinfo()
                                            
                                            __builtin_memset(arg3 + 0x80, 0, 0x14)
                                            *(arg3 + 0x80) = arg1[0xc]
                                            *(arg3 + 0x84) = arg1[0xd]
                                            
                                            if (*(arg1 + 0x18) u> 0xffff)
                                                result = -0x7ff8ffa9
                                            else
                                                int32_t rax_29 = arg1[0xa] & 0xfffffffb
                                                *(arg3 + 0x88) = rax_29
                                                uint32_t rdx_6
                                                
                                                if ((arg1[0xa].b & 4) == 0)
                                                    rdx_6 = arg1[6]
                                                else
                                                    *(arg3 + 0x88) = rax_29 | 4
                                                    int64_t rax_31
                                                    int64_t rdx_5
                                                    rdx_5:rax_31 = mulu.dp.q(-0x5555555555555555, 
                                                        *(arg1 + 0x18))
                                                    rdx_6 = (rdx_5 u>> 2).d
                                                
                                                *(arg3 + 0x8c) = rdx_6
                                                
                                                if (not(test_bit(rsi, 0x11)))
                                                    result = 0
                                                else
                                                    *(arg3 + 0x90) = arg1[0xb]
                                                    result = 0
                                        else if (arg3 != -0x4c)
                                            int128_t zmm1 = var_68_1
                                            *(arg3 + 0x4c) = var_58
                                            *(arg3 + 0x5c) = zmm1
                                            result = 0
                                        else
                                            *_errno() = 0x16
                                            _invalid_parameter_noinfo()
                                            result = 0
                    else if (rcx_5 == 3)
                        int64_t rax_15 = *(arg1 + 8)
                        
                        if (rax_15 u<= 0xffffffff && *arg1 u<= 0xffffffff)
                            *(arg3 + 0xc) = rax_15.d
                            *(arg3 + 0x10) = *arg1
                            *(arg3 + 0x18) = 1
                            
                            if (((arg1[0xa] u>> 2).b & 1) != 0)
                                *(arg3 + 0x70) |= 0xfe00
                                *(arg3 + 0x6c) = rdx_1 | 8
                            
                            goto label_14284d09d
                        
                        result = -0x7ff8ffa9
                    else if (rcx_5 != 4)
                        result = -0x7fffbffb
                    else
                        if (*(arg1 + 8) u<= 0xffffffff && *arg1 u<= 0xffffffff
                                && *(arg1 + 0x10) u<= 0xffff)
                            *(arg3 + 0x70) |= 0x200000
                            *(arg3 + 8) = r8_1 | 0x800000
                            *(arg3 + 0xc) = arg1[2]
                            *(arg3 + 0x10) = *arg1
                            *(arg3 + 0x18) = arg1[4]
                            goto label_14284d09d
                        
                        result = -0x7ff8ffa9
                else
                    r8_1 = 0x21007
                    *(arg3 + 8) = 0x21007
                    int64_t rax_11 = *(arg1 + 0x20)
                    
                    if (rax_11 u<= 0xffff)
                        *(arg3 + 0x1c) = rax_11.d
                        
                        if (rax_11.d u> 1)
                            rdx_1 = 0x401008
                            *(arg3 + 0x6c) = 0x401008
                        
                        goto label_14284cfb3
                    
                    result = -0x7ff8ffa9
            else
                result = -0x7ff8ff86
        else
            result = -0x7ff8ffae
else
    result = -0x7ff8ffce

__security_check_cookie(rax_1 ^ &var_98)
return result
