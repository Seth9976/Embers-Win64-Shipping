// 函数: sub_142c5fdb0
// 地址: 0x142c5fdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = arg3
void* rcx = *(arg1 + 0xc0)
char* r14 = nullptr
int64_t var_68
__builtin_memset(&var_68, 0, 0x18)
char arg_8 = 0
char arg_20 = 0
char var_78 = 0
int64_t rax = sub_142c52fa0(rcx)
int64_t rax_1 = sub_142c52fc0(*(arg1 + 0xc0))
*arg3 = 0
int64_t var_60
int64_t* rsi_1

if (*(arg1 + 0x880) != 0)
    int64_t* rax_2 = sub_142c5f5e0(arg1)
    int64_t* rdi_1 = rax_2
    
    if (rax_2 == 0)
        rsi_1 = 0x1b
    else
        *arg2 = rax_2
        int64_t rsi_2 = -1
        
        do
            rsi_2 += 1
        while ((*(arg1 + 0x880))[rsi_2] != 0)
        
        if (rsi_2 u< 0x100)
            rsi_2 = 0x100
        
        data_143ccb8a0(*(arg1 + 0x4e30))
        *(arg1 + 0x4e30) = 0
        *(arg1 + 0x4e38) = 0
        int64_t rax_4 = data_143ccb898(rsi_2 + 2)
        *(arg1 + 0x4e30) = rax_4
        
        if (rax_4 == 0)
            rsi_1 = 0x1b
        else
            *(arg1 + 0x4e38) = rax_4
            char* rax_5 = data_143ccb898(rsi_2 + 2)
            rdi_1[0x18] = rax_5
            
            if (rax_5 != 0)
                rdi_1[0x1a] = rax_5
                *rax_5 = 0
                var_60 = data_143ccb8b0(&data_1434cce10)
                var_68 = data_143ccb8b0(&data_1434cce10)
                char* rax_9 = data_143ccb8b0(&data_1434cce10)
                r14 = rax_9
                char* var_70 = rax_9
                
                if (var_60 == 0 || var_68 == 0 || rax_9 == 0)
                    rsi_1 = 0x1b
                else
                    int32_t rax_10
                    int512_t zmm2
                    rax_10, zmm2 =
                        sub_142c621d0(arg1, rdi_1, &arg_8, &var_60, arg4, &var_68, &var_70)
                    rsi_1 = zx.q(rax_10)
                    
                    if (rax_10 != 0)
                        r14 = var_70
                    else if (arg_8 == 0)
                    label_142c60025:
                        
                        if ((*(rdi_1[0x88] + 0x80) & 0x40) != 0)
                            char* rax_14 = strchr(*(*rdi_1 + 0x4e38), 0x3f)
                            
                            if (rax_14 != 0)
                                *rax_14 = 0
                        
                        int64_t rcx_15 = *(arg1 + 0x7c8)
                        int64_t rax_15
                        
                        if (rcx_15 != 0)
                            rax_15 = data_143ccb8b0(rcx_15)
                            rdi_1[0x41] = rax_15
                        
                        if (rcx_15 != 0 && rax_15 == 0)
                            r14 = var_70
                            rsi_1 = 0x1b
                        else
                            int32_t rax_16
                            int512_t zmm2_1
                            rax_16, zmm2_1 = sub_142c60820(rdi_1)
                            rsi_1 = zx.q(rax_16)
                            
                            if (rax_16 != 0)
                                r14 = var_70
                            else
                                if ((*(rdi_1[0x88] + 0x80) & 1) != 0 && *(rdi_1 + 0x3f6) != 0)
                                    *(rdi_1 + 0x401) = 1
                                
                                int32_t rax_18
                                int512_t zmm2_2
                                rax_18, zmm2_2 = sub_142c61d00(arg1, rdi_1, zmm2_1)
                                rsi_1 = zx.q(rax_18)
                                
                                if (rax_18 != 0)
                                    r14 = var_70
                                else
                                    int64_t rax_19
                                    
                                    if (*(arg1 + 0x768) != 0)
                                        data_143ccb8a0(var_60)
                                        rax_19 = data_143ccb8b0(*(arg1 + 0x768))
                                        var_60 = rax_19
                                    
                                    if (*(arg1 + 0x768) != 0 && rax_19 == 0)
                                        r14 = var_70
                                        rsi_1 = 0x1b
                                    else
                                        int64_t rax_20
                                        
                                        if (*(arg1 + 0x770) != 0)
                                            data_143ccb8a0(var_68)
                                            rax_20 = data_143ccb8b0(*(arg1 + 0x770))
                                            var_68 = rax_20
                                        
                                        if (*(arg1 + 0x770) != 0 && rax_20 == 0)
                                            r14 = var_70
                                            rsi_1 = 0x1b
                                        else if (*(arg1 + 0x778) == 0)
                                            r14 = var_70
                                        label_142c60138:
                                            *(rdi_1 + 0x407) = 0
                                            
                                            if (*(arg1 + 0x5ec) == 0)
                                                goto label_142c601a1
                                            
                                            int32_t rax_22
                                            rax_22, zmm2_2 = sub_142c878a0(rdi_1[0x1a], &var_60, 
                                                &var_68, *(arg1 + 0x6c0), zmm2_2)
                                            
                                            if (rax_22 s<= 0)
                                                if (rax_22 s>= 0)
                                                    *(rdi_1 + 0x407) = 1
                                                    rdi_1[0x7f].b = 1
                                                    goto label_142c601a1
                                                
                                                rsi_1 = 0x1b
                                            else
                                                zmm2_2 = sub_142c64850(arg1, 
                                                    "Couldn't find host %s in the _netrc file; using "
                                                "defaults\n", 
                                                    rdi_1[0x1a], zmm2_2)
                                            label_142c601a1:
                                                int32_t rax_23 =
                                                    sub_142c62f70(rdi_1, var_60, var_68, r14)
                                                rsi_1 = zx.q(rax_23)
                                                
                                                if (rax_23 == 0)
                                                    int32_t rax_24
                                                    int512_t zmm2_3
                                                    rax_24, zmm2_3 = sub_142c612b0(arg1, rdi_1, 
                                                        *(arg1 + 0x420), zmm2_2)
                                                    rsi_1 = zx.q(rax_24)
                                                    
                                                    if (rax_24 == 0)
                                                        int512_t zmm2_4 = sub_142c60e50(rdi_1, 
                                                            &rdi_1[0x18], zmm2_3)
                                                        
                                                        if (*(rdi_1 + 0x3f3) != 0)
                                                            zmm2_4 = sub_142c60e50(rdi_1, 
                                                                &rdi_1[0x1d], zmm2_4)
                                                        
                                                        if (*(rdi_1 + 0x3f6) != 0)
                                                            zmm2_4 = sub_142c60e50(rdi_1, 
                                                                &rdi_1[0x28], zmm2_4)
                                                        
                                                        if (*(rdi_1 + 0x3f7) != 0)
                                                            zmm2_4 = sub_142c60e50(rdi_1, 
                                                                &rdi_1[0x21], zmm2_4)
                                                        
                                                        if (*(rdi_1 + 0x3f3) != 0 &&
                                                                sub_142c70460(rdi_1[0x1f], rdi_1[0x1a])
                                                                != 0)
                                                            *(rdi_1 + 0x3f3) = 0
                                                        
                                                        if (*(rdi_1 + 0x3f4) != 0
                                                                && rdi_1[0x30].d == *(rdi_1 + 0x17c))
                                                            *(rdi_1 + 0x3f4) = 0
                                                        
                                                        if ((*(rdi_1 + 0x3f3) != 0
                                                                || *(rdi_1 + 0x3f4) != 0)
                                                                && *(rdi_1 + 0x3f6) != 0)
                                                            *(rdi_1 + 0x401) = 1
                                                        
                                                        int32_t rax_27 = sub_142c63190(rdi_1)
                                                        rsi_1 = zx.q(rax_27)
                                                        
                                                        if (rax_27 == 0)
                                                            rdi_1[0x4c] = sub_142c64ac0
                                                            rdi_1[0x4e] = sub_142c64b80
                                                            rdi_1[0x4d] = sub_142c64ac0
                                                            rdi_1[0x4f] = sub_142c64b80
                                                            *(rdi_1 + 0x40e) = *(arg1 + 0x840)
                                                            void* rax_29 = rdi_1[0x87]
                                                            
                                                            if ((*(rax_29 + 0x80) & 0x10) == 0)
                                                                *(arg1 + 0x458) = *(arg1 + 0x6f0)
                                                                *(arg1 + 0x4f8) = *(arg1 + 0x6f8)
                                                                *(arg1 + 0x460) = *(arg1 + 0x700)
                                                                *(arg1 + 0x500) = *(arg1 + 0x708)
                                                                *(arg1 + 0x470) = *(arg1 + 0x738)
                                                                *(arg1 + 0x510) = *(arg1 + 0x738)
                                                                *(arg1 + 0x478) = *(arg1 + 0x730)
                                                                *(arg1 + 0x518) = *(arg1 + 0x730)
                                                                *(arg1 + 0x480) = *(arg1 + 0x720)
                                                                *(arg1 + 0x520) = *(arg1 + 0x728)
                                                                *(arg1 + 0x498) = *(arg1 + 0x748)
                                                                *(arg1 + 0x538) = *(arg1 + 0x750)
                                                                *(arg1 + 0x4a0) = *(arg1 + 0x758)
                                                                *(arg1 + 0x540) = *(arg1 + 0x760)
                                                                *(arg1 + 0x4c0) = *(arg1 + 0x620)
                                                                *(arg1 + 0x560) = *(arg1 + 0x628)
                                                                *(arg1 + 0x4c8) = *(arg1 + 0x630)
                                                                *(arg1 + 0x568) = *(arg1 + 0x638)
                                                                *(arg1 + 0x4d0) = *(arg1 + 0x688)
                                                                *(arg1 + 0x570) = *(arg1 + 0x690)
                                                                *(arg1 + 0x4d8) = *(arg1 + 0x6a8)
                                                                *(arg1 + 0x578) = *(arg1 + 0x6b0)
                                                                *(arg1 + 0x4e0) = *(arg1 + 0x698)
                                                                *(arg1 + 0x580) = *(arg1 + 0x6a0)
                                                                *(arg1 + 0x468) = *(arg1 + 0x620)
                                                                *(arg1 + 0x508) = *(arg1 + 0x628)
                                                                
                                                                if (sub_142c5a960(arg1 + 0x448, 
                                                                        &rdi_1[0x6c]) == 0)
                                                                    rsi_1 = 0x1b
                                                                else if (sub_142c5a960(arg1 + 0x4e8, 
                                                                        &rdi_1[0x75]) == 0)
                                                                    rsi_1 = 0x1b
                                                                else
                                                                    int64_t r8_6 = sub_142c62a60(arg1)
                                                                    
                                                                    if (*(arg1 + 0x5f3) != 0
                                                                            && *(arg1 + 0x4a98) == 0)
                                                                        goto label_142c605c0
                                                                    
                                                                    int64_t* var_58
                                                                    char rax_61
                                                                    rax_61, r8_6, zmm2_4 = sub_142c5bc80(
                                                                        arg1, rdi_1, &var_58, &arg_20, zmm2_4, 
                                                                        &var_78)
                                                                    
                                                                    if (rax_61 == 0)
                                                                        goto label_142c605c0
                                                                    
                                                                    rsi_1 = var_58
                                                                    
                                                                    if (arg_20 != 0)
                                                                    label_142c60601:
                                                                        rsi_1[0xc].b = 1
                                                                        sub_142c62c40(rdi_1, rsi_1)
                                                                        data_143ccb8a0(rdi_1)
                                                                        rdi_1 = rsi_1
                                                                        *arg2 = rsi_1
                                                                        int64_t rax_67
                                                                        
                                                                        if (rsi_1[0x23] != 0)
                                                                            rax_67 = rsi_1[0x24]
                                                                        else if (rsi_1[0x2a] == 0)
                                                                            rax_67 = rsi_1[0x1b]
                                                                        else
                                                                            rax_67 = rsi_1[0x2b]
                                                                        
                                                                        *(rsi_1 + 0x3f5)
                                                                        int64_t var_98_3 = rax_67
                                                                        sub_142c64850(arg1, 
                                                                            "Re-using existing connection! (#%ld) "
                                                                        "with %s %s\n", 
                                                                            zx.q(*(rsi_1 + 0x64)), zmm2_4)
                                                                    label_142c6076d:
                                                                        rdi_1[0xc].b = 1
                                                                        sub_142c5cd30(arg1, rdi_1)
                                                                        int32_t rax_72
                                                                        int512_t zmm2_7
                                                                        rax_72, zmm2_7 = sub_142c63240(arg1)
                                                                        rsi_1 = zx.q(rax_72)
                                                                        
                                                                        if (rax_72 == 0)
                                                                            char* r8_13 = arg_18
                                                                            rdi_1[0xa2] = *(arg1 + 0x2c0)
                                                                            rdi_1[0xa3] = *(arg1 + 0x350)
                                                                            rsi_1 = zx.q(sub_142c62ae0(arg1, rdi_1, 
                                                                                r8_13, zmm2_7))
                                                                    else
                                                                        if (sub_142c5f540(arg1, rsi_1) == 0)
                                                                            goto label_142c60601
                                                                        
                                                                        rsi_1[0x9a]
                                                                        
                                                                        if (rsi_1[0x9e] == neg.q(rsi_1[0x9a]))
                                                                            goto label_142c60601
                                                                        
                                                                        int64_t r8_9
                                                                        r8_9, zmm2_4 = sub_142c64850(arg1, 
                                                                            "Found connection %ld, with requests in "
                                                                        "the pipe (%zu)\n", 
                                                                            zx.q(*(rsi_1 + 0x64)), zmm2_4)
                                                                        
                                                                        if (*(rsi_1[0xf4] + 8) u>= rax
                                                                                || *(*(arg1 + 0xa48) + 0x30) u>= rax_1)
                                                                            goto label_142c60601
                                                                        
                                                                        r8_6, zmm2_4 = sub_142c64850(arg1, 
                                                                            "We can reuse, but we want a new "
                                                                        "connection anyway\n", 
                                                                            r8_9, zmm2_4)
                                                                    label_142c605c0:
                                                                        void* const rdx_20 = nullptr
                                                                        
                                                                        if ((*(rdi_1[0x87] + 0x80) & 0x100)
                                                                                != 0)
                                                                            if (*(arg1 + 0x851) != 0)
                                                                                rdi_1[0x82].b = 1
                                                                            
                                                                            if (*(arg1 + 0x850) != 0)
                                                                                *(rdi_1 + 0x40f) = 1
                                                                        
                                                                        if (var_78 == 0)
                                                                            void* rax_68
                                                                            rax_68, r8_6, zmm2_4 = sub_142c6ec70(
                                                                                rdi_1, *(arg1 + 0xa48), zmm2_4)
                                                                            rdx_20 = rax_68
                                                                            rsi_1.b = 1
                                                                        else
                                                                            rsi_1.b = 0
                                                                        
                                                                        if (rax == 0 || rdx_20 == 0
                                                                                || *(rdx_20 + 8) u< rax)
                                                                            goto label_142c606c4
                                                                        
                                                                        int64_t* rax_69 =
                                                                            sub_142c60cf0(arg1, rdx_20)
                                                                        
                                                                        if (rax_69 != 0)
                                                                            *rax_69 = arg1
                                                                            r8_6, zmm2_4 =
                                                                                sub_142c5c970(rax_69, 0, zmm2_4)
                                                                        label_142c606c4:
                                                                            
                                                                            if (rsi_1.b == 0)
                                                                                goto label_142c607d9
                                                                            
                                                                            if (rax_1 != 0
                                                                                    && *(*(arg1 + 0xa48) + 0x30) u>= rax_1)
                                                                                void** rax_71
                                                                                int64_t r8_11
                                                                                rax_71, r8_11 = sub_142c5d010(arg1)
                                                                                
                                                                                if (rax_71 == 0)
                                                                                    r8_6, zmm2_4 = sub_142c64850(arg1, 
                                                                                        "No connections available in cache\n", 
                                                                                        r8_11, zmm2_4)
                                                                                    goto label_142c607d9
                                                                                
                                                                                *rax_71 = arg1
                                                                                zmm2_4 =
                                                                                    sub_142c5c970(rax_71, 0, zmm2_4)
                                                                            
                                                                            int64_t r8_12
                                                                            int512_t zmm2_6
                                                                            r8_12, zmm2_6 = sub_142c6eae0(
                                                                                *(arg1 + 0xa48), rdi_1, zmm2_4)
                                                                            
                                                                            if ((*(arg1 + 0x4ba4) & 0x28) != 0
                                                                                    && *(arg1 + 0x4bac) != 0)
                                                                                r8_12, zmm2_6 = sub_142c64850(arg1, 
                                                                                    "NTLM picked AND auth done set, clear "
                                                                                "picked!\n", 
                                                                                    r8_12, zmm2_6)
                                                                                *(arg1 + 0x4ba4) = 0
                                                                                *(arg1 + 0x4bac) = 0
                                                                            
                                                                            if ((*(arg1 + 0x4bb4) & 0x28) != 0
                                                                                    && *(arg1 + 0x4bbc) != 0)
                                                                                sub_142c64850(arg1, 
                                                                                    "NTLM-proxy picked AND auth done set, "
                                                                                "clear picked!\n", 
                                                                                    r8_12, zmm2_6)
                                                                                *(arg1 + 0x4bb4) = 0
                                                                                *(arg1 + 0x4bbc) = 0
                                                                            
                                                                            goto label_142c6076d
                                                                        
                                                                        r8_6, zmm2_4 = sub_142c64850(arg1, 
                                                                            "No more connections allowed to host: %d"
                                                                        "
                                                                            rax, zmm2_4)
                                                                    label_142c607d9:
                                                                        sub_142c64850(arg1, 
                                                                            "No connections available.\n", r8_6, 
                                                                            zmm2_4)
                                                                        sub_142c5fa30(rdi_1)
                                                                        rsi_1 = 0x59
                                                                        *arg2 = nullptr
                                                            else
                                                                int32_t rax_30 =
                                                                    (*(rax_29 + 0x28))(rdi_1, &arg_18)
                                                                rsi_1 = zx.q(rax_30)
                                                                
                                                                if (rax_30 != 0)
                                                                    sub_142c5cd30(arg1, rdi_1)
                                                                else
                                                                    *rdi_1 = arg1
                                                                    *(rdi_1 + 0x3fd) = 1
                                                                    sub_142c6eae0(*(arg1 + 0xa48), rdi_1, 
                                                                        zmm2_4)
                                                                    int32_t rax_31
                                                                    int512_t zmm2_5
                                                                    rax_31, zmm2_5 = sub_142c63240(arg1)
                                                                    rsi_1 = zx.q(rax_31)
                                                                    
                                                                    if (rax_31 == 0)
                                                                        char** var_90_1
                                                                        var_90_1.d = 0xffffffff
                                                                        sub_142c68d40(rdi_1, 0xffffffff, -1, 0, 
                                                                            zmm2_5, 0, var_90_1.d, nullptr)
                                                                        sub_142c5cd30(arg1, rdi_1)
                                                                    else
                                                                        (*(rdi_1[0x87] + 0x18))(rdi_1, 
                                                                            zx.q(rsi_1.d), 0)
                                        else
                                            data_143ccb8a0(var_70)
                                            char* rax_21 = data_143ccb8b0(*(arg1 + 0x778))
                                            r14 = rax_21
                                            
                                            if (rax_21 != 0)
                                                goto label_142c60138
                                            
                                            rsi_1 = 0x1b
                    else
                        *(arg1 + 0x880)
                        char* rax_11 = sub_142c563e0("%s://%s", *rdi_1[0x87], zmm2)
                        
                        if (rax_11 != 0)
                            char* rsi_3 = rax_11
                            
                            if (*rax_11 != 0x3a)
                                do
                                    *rsi_3 = tolower(zx.d(*rsi_3))
                                    rsi_3 = &rsi_3[1]
                                while (*rsi_3 != 0x3a)
                            
                            if (*(arg1 + 0x888) != 0)
                                data_143ccb8a0(*(arg1 + 0x880))
                                *(arg1 + 0x880) = 0
                                *(arg1 + 0x888) = 0
                            
                            *(arg1 + 0x880) = rax_11
                            *(arg1 + 0x888) = 1
                            goto label_142c60025
                        
                        r14 = var_70
                        rsi_1 = 0x1b
            else
                data_143ccb8a0(*(arg1 + 0x4e30))
                *(arg1 + 0x4e30) = 0
                *(arg1 + 0x4e38) = 0
                rsi_1 = 0x1b
else
    rsi_1 = 3

data_143ccb8a0(r14)
data_143ccb8a0(var_68)
data_143ccb8a0(var_60)
return zx.q(rsi_1.d)
