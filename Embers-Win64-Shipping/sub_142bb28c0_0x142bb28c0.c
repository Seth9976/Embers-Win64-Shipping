// 函数: sub_142bb28c0
// 地址: 0x142bb28c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* rdi = *arg1
void* rsi = nullptr
void* rax_2 = arg1[3]
int32_t result_1 = 0
uint32_t rax_3 = zx.d(*(rdi + 0x18e))
char var_138 = arg4
int32_t var_144 = arg2.d
void* var_28 = rdi
char var_13c = 0

if (arg3 u> rax_3)
    *(rdi + 0x18e) = arg3.w

bool cond:0 = (arg1[4].b & 1) == 0
*(arg1 + 0x24) = arg2.d
int32_t var_140
int32_t var_130

if (cond:0)
    void* rcx = *(arg1[1] + 0x40)
    var_140 = *(rcx + 4)
    var_130 = *(rcx + 8)
else
    var_140 = 0x10000
    var_130 = 0x10000

int64_t* rcx_1 = *(*(rdi + 0xd0) + 0x50)
int32_t result
int32_t var_134_1
int64_t var_d8
int32_t rax_9

if (rcx_1 == 0)
    rax_9 = sub_142ba74f0(rdi, arg2, &arg1[6])
    var_134_1 = rax_9
label_142bb29e3:
    int32_t result_2
    
    if (arg1[6].d s<= 0)
    label_142bb2a4e:
        
        if (arg1[6].d == 0 || *(arg1 + 0x34) == 0)
            arg1[7] = 0
            arg1[8] = 0
        
        int32_t result_4 = sub_142bb44f0(arg1, var_144, arg5)
        result_1 = result_4
        result_2 = result_4
        
        if (result_4 == 0 && var_138 == 0)
            int32_t var_50
            
            if (arg1[6].d == 0 || *(arg1 + 0x34) == 0)
                sub_142bb4f30(arg1)
                sub_142bb4650(arg1, var_144)
                
                if ((*(rdi + 4) & 0x7fff0000) != 0 || (*(rdi + 8) & 0x8000) != 0)
                    void* rcx_66 = *arg1
                    var_50 = arg1[0xb].d
                    int32_t rax_78 = *(arg1 + 0x5c)
                    int32_t rax_79 = arg1[0xc].d
                    int32_t rax_80 = *(arg1 + 0x64)
                    int32_t rax_81 = arg1[0x22].d
                    int32_t rax_82 = *(arg1 + 0x114)
                    int32_t rax_83 = arg1[0x23].d
                    int32_t rax_84 = *(arg1 + 0x11c)
                    int32_t* var_70_1 = &var_50
                    char* var_68_1 = &var_138
                    void** var_60_1 = &var_28
                    var_138.d = 0x1010101
                    var_28.d = 0x10000
                    var_28:4.d = 0x30002
                    int32_t var_78 = 0x40004
                    int32_t result_13 = sub_142bafd10(rcx_66, var_144, &var_78, 4, arg5)
                    result_1 = result_13
                    result_2 = result_13
                    
                    if (result_13 == 0)
                        int32_t r8_18 = var_50
                        *(arg1 + 0x5c) = rax_78
                        *(arg1 + 0x64) = rax_80
                        *(arg1 + 0x114) = rax_82
                        *(arg1 + 0x11c) = rax_84
                        void* rax_89 = *arg1
                        arg1[0xb].d = r8_18
                        arg1[0xc].d = rax_79
                        arg1[0x22].d = rax_81
                        arg1[0x23].d = rax_83
                        
                        if ((*(rax_89 + 0x418) & 2) == 0)
                            arg1[0xa].d = rax_79 - r8_18
                        
                        if ((*(rax_89 + 0x418) & 0x10) == 0)
                            *(arg1 + 0x10c) = rax_83 - rax_81
                        
                        goto label_142bb32f6
                else
                label_142bb32f6:
                    
                    if ((arg1[4].b & 1) == 0)
                        arg1[0xb].d = sub_142b93e80(arg1[0xb].d, var_140)
                        arg1[0xc].d = sub_142b93e80(arg1[0xc].d, var_140)
                        arg1[0x22].d = sub_142b93e80(arg1[0x22].d, var_140)
                        int32_t rax_93 = sub_142b93e80(*(arg1 + 0x114), var_130)
                        int32_t rcx_73 = arg1[0x23].d
                        *(arg1 + 0x114) = rax_93
                        arg1[0x23].d = sub_142b93e80(rcx_73, var_140)
                        *(arg1 + 0x11c) = sub_142b93e80(*(arg1 + 0x11c), var_130)
                    
                    result_2 = 0
                    result_1 = result_2
            else
                sub_142bb4f30(arg1)
                sub_142bb4650(arg1, var_144)
                int32_t result_5 = (*(rdi + 0x2a8))(arg1, zx.q(var_144), 
                    zx.q(var_134_1 + 0xa + *(rdi + 0x404)), zx.q(arg1[6].d - 0xa))
                result_1 = result_5
                result_2 = result_5
                
                if (result_5 == 0)
                    int16_t rax_11 = *(arg1 + 0x34)
                    
                    if (rax_11 s> 0)
                        int32_t result_6 = (*(rdi + 0x2c0))(arg1)
                        result_1 = result_6
                        
                        if (result_6 != 0)
                            (*(rdi + 0x2b0))(arg1)
                            result_2 = result_1
                        else
                            (*(rdi + 0x2b0))(arg1)
                            int32_t result_7 = sub_142bae630(arg1, arg5)
                            result_1 = result_7
                            result_2 = result_7
                            
                            if (result_7 == 0)
                                sub_142b924a0(rax_2)
                                result_2 = result_1
                    else if (rax_11 s>= 0)
                        (*(rdi + 0x2b0))(arg1)
                        result_2 = result_1
                    else
                        int64_t rax_12 = *(rdi + 0x98)
                        *(arg1 + 0x34) = 0xffff
                        int32_t i = arg3
                        void* const i_3
                        
                        if (arg1 != -0x130)
                            i_3 = arg1[0x26]
                            
                            if (i_3 == 0)
                            label_142bb2b6f:
                                i_3 = nullptr
                            else
                                while (i != 0)
                                    i_3 = *(i_3 + 8)
                                    i -= 1
                                    
                                    if (i_3 == 0)
                                        goto label_142bb2b6f
                            
                            void* const i_1 = i_3
                            
                            if (i_3 != 0)
                                do
                                    *(i_1 + 0x10) = 0xffffffff
                                    i_1 = *(i_1 + 8)
                                while (i_1 != 0)
                        else
                            i_3 = nullptr
                        
                        uint64_t rdx_6 = zx.q(var_144)
                        
                        if (sub_142b92e60(&arg1[0x26], rdx_6) == 0)
                            if (i_3 == 0)
                                rdx_6 = sub_142b99860(rax_12, 0x18, &result_1)
                                
                                if (result_1 != 0)
                                    goto label_142bb2ba3
                                
                                *(rdx_6 + 0x10) = zx.q(var_144)
                                sub_142b92db0(&arg1[0x26], rdx_6)
                            else
                                *(i_3 + 0x10) = zx.q(var_144)
                            
                            rdi = var_28
                            int32_t rcx_21 = sx.d(*(rax_2 + 0x1a))
                            int32_t rax_18 = sx.d(*(rax_2 + 0x18))
                            int32_t result_8 = (*(rdi + 0x2c8))(arg1, rdx_6)
                            result_1 = result_8
                            
                            if (result_8 != 0)
                                (*(rdi + 0x2b0))(arg1)
                                result_2 = result_1
                            else
                                int32_t rax_19 = arg1[0x1f].d
                                (*(rdi + 0x2b0))(arg1)
                                int64_t var_158
                                int32_t* var_150
                                
                                if ((*(rdi + 4) & 0x7fff0000) != 0 || (*(rdi + 8) & 0x8000) != 0)
                                    var_150 = &result_1
                                    int32_t var_48
                                    var_48.o = zx.o(0)
                                    int16_t r8_8 = *(rax_2 + 0x98)
                                    var_138.w = r8_8
                                    void* var_100_1 = nullptr
                                    var_158 = 0
                                    var_50:2.w = r8_8 + 4
                                    var_50.w = r8_8 + 4
                                    int32_t rax_22 = sx.d(r8_8 + 4)
                                    int16_t* rax_23 =
                                        sub_142b99a90(rax_12, 8, 0, rax_22, var_158, var_150)
                                    int16_t* r9_9
                                    int32_t var_40
                                    
                                    if (result_1 != 0)
                                        r9_9 = var_48.q
                                        var_28 = var_40.q
                                    else
                                        var_150 = &result_1
                                        var_158 = 0
                                        var_28 =
                                            sub_142b99a90(rax_12, 1, 0, rax_22, var_158, var_150)
                                        
                                        if (result_1 != 0)
                                            r9_9 = var_48.q
                                            var_28 = var_40.q
                                        else
                                            var_150 = &result_1
                                            var_158 = 0
                                            void* rax_25 = sub_142b99a90(rax_12, 2, 0, rax_22, 
                                                var_158, var_150)
                                            void* r10_1 = rax_25
                                            
                                            if (result_1 != 0)
                                                r9_9 = var_48.q
                                                var_28 = var_40.q
                                            else
                                                int16_t r8_9 = 0
                                                int16_t r11_1 = var_138.w
                                                
                                                if (0 s< r11_1)
                                                    void* r9_6 = var_28
                                                    void* rcx_28 = *(rax_2 + 0xa0) + 0xc
                                                    int32_t* rdx_7 = rax_23
                                                    
                                                    do
                                                        r9_6 += 1
                                                        *rdx_7 = *(rcx_28 - 4)
                                                        rdx_7 = &rdx_7[2]
                                                        r10_1 += 2
                                                        rdx_7[-1] = *rcx_28
                                                        rcx_28 += 0x20
                                                        *(r9_6 - 1) = 1
                                                        *(r10_1 - 2) = r8_9
                                                        r8_9 += 1
                                                    while (r8_9 s< r11_1)
                                                    
                                                    r10_1 = rax_25
                                                
                                                void* r9_7 = var_28
                                                char* rcx_29 = sx.q(r8_9)
                                                var_48.q = rax_23
                                                var_40.q = r9_7
                                                *(rax_23 + (rcx_29 << 3)) = arg1[0xb].d
                                                *(rax_23 + (rcx_29 << 3) + 4) = *(arg1 + 0x5c)
                                                *(rcx_29 + r9_7) = 1
                                                *(r10_1 + (rcx_29 << 1)) = r8_9
                                                char* rcx_30 = sx.q(r8_9 + 1)
                                                *(rax_23 + (rcx_30 << 3)) = arg1[0xc].d
                                                *(rax_23 + (rcx_30 << 3) + 4) = *(arg1 + 0x64)
                                                *(rcx_30 + r9_7) = 1
                                                *(r10_1 + (rcx_30 << 1)) = r8_9 + 1
                                                char* rcx_31 = sx.q(r8_9 + 2)
                                                *(rax_23 + (rcx_31 << 3)) = arg1[0x22].d
                                                *(rax_23 + (rcx_31 << 3) + 4) = *(arg1 + 0x114)
                                                *(rcx_31 + r9_7) = 1
                                                *(r10_1 + (rcx_31 << 1)) = r8_9 + 2
                                                char* rcx_32 = sx.q(r8_9 + 3)
                                                *(rax_23 + (rcx_32 << 3)) = arg1[0x23].d
                                                *(rax_23 + (rcx_32 << 3) + 4) = *(arg1 + 0x11c)
                                                *(rcx_32 + r9_7) = 1
                                                *(r10_1 + (rcx_32 << 1)) = r8_9 + 3
                                                var_100_1 = r10_1
                                                int32_t var_38
                                                var_38.q = r10_1
                                                int32_t result_9 = sub_142bafd10(rdi, var_144, 
                                                    &var_50, rax_22, arg5)
                                                r9_9 = rax_23
                                                result_1 = result_9
                                                
                                                if (result_9 == 0)
                                                    uint32_t i_5 = 0
                                                    int16_t i_6 = var_138.w
                                                    
                                                    if (0 s< i_6)
                                                        i_5 = zx.d(i_6)
                                                        int32_t* rcx_35 = *(rax_2 + 0xa0) + 8
                                                        uint64_t i_4 = zx.q(i_5)
                                                        int16_t* rdx_10 = r9_9
                                                        uint64_t i_2
                                                        
                                                        do
                                                            if ((rcx_35[-1].b & 2) != 0)
                                                                *rcx_35 = sx.d(*rdx_10)
                                                                rcx_35[1] = sx.d(rdx_10[2])
                                                            
                                                            rdx_10 = &rdx_10[4]
                                                            rcx_35 = &rcx_35[8]
                                                            i_2 = i_4
                                                            i_4 -= 1
                                                        while (i_2 != 1)
                                                    
                                                    int32_t rdx_11 = sx.d(i_5.w)
                                                    int64_t rax_41 = sx.q(i_5.w)
                                                    int32_t r10_2 = *(r9_9 + (rax_41 << 3))
                                                    arg1[0xb].d = r10_2
                                                    *(arg1 + 0x5c) = *(r9_9 + (rax_41 << 3) + 4)
                                                    int64_t rcx_36 = sx.q(rdx_11 + 1)
                                                    int32_t r8_11 = *(r9_9 + (rcx_36 << 3))
                                                    arg1[0xc].d = r8_11
                                                    *(arg1 + 0x64) = *(r9_9 + (rcx_36 << 3) + 4)
                                                    int64_t rcx_37 = sx.q(rdx_11 + 2)
                                                    arg1[0x22].d = *(r9_9 + (rcx_37 << 3))
                                                    *(arg1 + 0x114) = *(r9_9 + (rcx_37 << 3) + 4)
                                                    int64_t rcx_38 = sx.q(rdx_11 + 3)
                                                    arg1[0x23].d = *(r9_9 + (rcx_38 << 3))
                                                    *(arg1 + 0x11c) = *(r9_9 + (rcx_38 << 3) + 4)
                                                    
                                                    if ((*(rdi + 0x418) & 2) == 0)
                                                        arg1[0xa].d = r8_11 - r10_2
                                                    
                                                    if ((*(rdi + 0x418) & 0x10) == 0)
                                                        *(arg1 + 0x10c) =
                                                            arg1[0x23].d - arg1[0x22].d
                                    sub_142b99980(rax_12, r9_9)
                                    sub_142b99980(rax_12, var_28)
                                    sub_142b99980(rax_12, var_100_1)
                                    result_2 = result_1
                                
                                if (((*(rdi + 4) & 0x7fff0000) == 0 && (*(rdi + 8) & 0x8000) == 0)
                                        || result_2 == 0)
                                    if ((arg1[4].b & 1) == 0)
                                        arg1[0xb].d = sub_142b93e80(arg1[0xb].d, var_140)
                                        arg1[0xc].d = sub_142b93e80(arg1[0xc].d, var_140)
                                        arg1[0x22].d = sub_142b93e80(arg1[0x22].d, var_140)
                                        int32_t rax_57 = sub_142b93e80(*(arg1 + 0x114), var_130)
                                        int32_t rcx_46 = arg1[0x23].d
                                        *(arg1 + 0x114) = rax_57
                                        arg1[0x23].d = sub_142b93e80(rcx_46, var_140)
                                        *(arg1 + 0x11c) = sub_142b93e80(*(arg1 + 0x11c), var_130)
                                    
                                    if ((arg1[4].d & 0x400) == 0)
                                        int32_t var_140_1 = rcx_21
                                        int32_t rcx_49 = *(rax_2 + 0x98)
                                        int32_t rcx_50 = *(rax_2 + 0x50)
                                        int64_t rcx_51 = arg1[5]
                                        int64_t var_118_1
                                        var_118_1.d = arg1[6].d
                                        int512_t zmm0_1
                                        int512_t zmm1
                                        zmm0_1, zmm1 = sub_142b924a0(rax_2)
                                        int32_t var_134_3 = 0
                                        
                                        if (rcx_49 u<= 0)
                                            result_2 = result_1
                                        label_142bb3176:
                                            bool cond:2_1 = (arg1[4].b & 2) != 0
                                            arg1[5] = rcx_51
                                            arg1[6].d = var_118_1.d
                                            arg1[0x1f].d = rax_19
                                            
                                            if (not(cond:2_1) && (*(rsi + 4) & 0x100) != 0
                                                    && var_140_1 u> rcx_21)
                                                int32_t result_12 = sub_142bae300(arg1, rcx_21, 
                                                    rax_18, zmm0_1, zmm1)
                                                result_2 = result_12
                                                result_1 = result_12
                                        else
                                            void* rdx_21 = rax_2
                                            void* r10_4 = zx.q(rcx_50) << 5
                                            var_28 = r10_4
                                            var_138.d = arg3 + 1
                                            
                                            while (true)
                                                int64_t rcx_54 = arg1[0xb]
                                                int64_t rcx_55 = arg1[0xc]
                                                int64_t rcx_56 = arg1[0x22]
                                                int64_t rcx_57 = arg1[0x23]
                                                int32_t rcx_58 = arg1[0xa].d
                                                int32_t rcx_59 = *(arg1 + 0x10c)
                                                int32_t rcx_60 = sx.d(*(rdx_21 + 0x1a))
                                                int32_t result_10
                                                result_10, zmm0_1 = sub_142bb28c0(arg1, 
                                                    zx.q(*(r10_4 + *(rdx_21 + 0x58))), arg6, 0, 
                                                    var_158, var_150)
                                                result_1 = result_10
                                                result_2 = result_10
                                                
                                                if (result_10 != 0)
                                                    break
                                                
                                                rdx_21 = rax_2
                                                void* r10_5 = var_28
                                                rsi = *(rdx_21 + 0x58) + r10_5
                                                
                                                if ((*(rsi + 4) & 0x200) == 0)
                                                    arg1[0xb] = rcx_54
                                                    arg1[0xc] = rcx_55
                                                    arg1[0x22] = rcx_56
                                                    arg1[0x23] = rcx_57
                                                    arg1[0xa].d = rcx_58
                                                    *(arg1 + 0x10c) = rcx_59
                                                
                                                int32_t rax_70 = sx.d(*(rdx_21 + 0x1a))
                                                var_140_1 = rax_70
                                                
                                                if (rax_70 != rcx_60)
                                                    int32_t result_11 =
                                                        sub_142bae160(arg1, rsi, rcx_21, rcx_60)
                                                    result_1 = result_11
                                                    result_2 = result_11
                                                    
                                                    if (result_11 != 0)
                                                        break
                                                    
                                                    rdx_21 = rax_2
                                                    r10_5 = var_28
                                                
                                                r10_4 = r10_5 + 0x20
                                                int32_t rax_72 = var_134_3 + 1
                                                var_134_3 = rax_72
                                                var_28 = r10_4
                                                
                                                if (rax_72 u>= rcx_49)
                                                    goto label_142bb3176
                                    else
                                        sub_142b924a0(rax_2)
                                        __builtin_strncpy(arg1[2] + 0x60, "pmoc", 4)
                                        result_2 = result_1
                        else
                            result_1 = 0x15
                        label_142bb2ba3:
                            rdi = var_28
                            (*(rdi + 0x2b0))(arg1)
                            result_2 = result_1
    else
        int32_t rdx_1 = *(rdi + 0x404)
        
        if (rdx_1 != 0 || *(*(rdi + 0xd0) + 0x50) != 0)
            int32_t result_3 = (*(rdi + 0x2a8))(arg1, zx.q(var_144), zx.q(rdx_1 + rax_9))
            result_1 = result_3
            result_2 = result_3
            
            if (result_3 == 0)
                result_1 = (*(rdi + 0x2b8))(arg1)
                (*(rdi + 0x2b0))(arg1)
                result_2 = result_1
                
                if (result_2 == 0)
                    goto label_142bb2a4e
        else
            result_2 = rdx_1 + 8
            result_1 = result_2
    
    if (var_13c == 0)
        result = result_2
    else
        int64_t* rcx_75 = *(*(rdi + 0xd0) + 0x50)
        (*(*rcx_75 + 8))(rcx_75[1], &var_d8)
        result = result_1
else
    result = (**rcx_1)(rcx_1[1], arg2, &var_d8)
    result_1 = result
    
    if (result == 0)
        int64_t rdx = var_d8
        int64_t var_c8
        __builtin_memset(&var_c8, 0, 0x48)
        var_13c = 1
        var_134_1 = 0
        int32_t var_d0
        arg1[6].d = var_d0
        sub_142b96970(&var_c8, rdx, var_d0)
        arg1[5] = &var_c8
        rax_9 = 0
        goto label_142bb29e3
__security_check_cookie(rax_1 ^ &var_178)
return result
