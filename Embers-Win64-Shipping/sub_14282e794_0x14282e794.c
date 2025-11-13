// 函数: sub_14282e794
// 地址: 0x14282e794
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void** rsi = arg3
int64_t* result = arg1
char* var_c0 = arg1
int32_t var_188 = 0
int64_t r13
r13.b = 0
char var_1a5 = 0
bool var_1a6 = *(arg3 + 0x14) == 2
uint64_t r14
r14.b = 0
bool var_1a8 = false
char var_1a7 = 0
int32_t var_19c = 0
char var_1a0 = 0
void* r12 = -ffffffffffffffff
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0xf
*arg1 = 0
int32_t var_188_1 = 1
arg3[5].b = 0

if (*arg3 == 0)
    sub_14282e65c()
    *rsi = &data_143f89ac8

char var_1a4

if (sub_14282a90c(arg2) != 0)
    int64_t var_198 = 0
    
    while (true)
        void* r15_1 = result[2]
        var_1a4 = 0
        int64_t var_180 = 0
        int64_t* var_178_1 = arg2
        void** var_b8
        int64_t var_a0
        struct std::exception::VTable* exceptionObject
        
        if (sub_14282694c(*rsi, &var_180) s< 0)
            int32_t i
            
            do
                sub_14281fc38()
                int64_t var_160 = 0
                int64_t* var_158_1 = arg2
                
                if (sub_14282694c(&data_143f89588, &var_160) s>= 0)
                    break
                
                if (sub_14282a90c(arg2) == 0)
                    break
                
                if (arg2[2].d == 0)
                    sub_14282e5d4()
                    int64_t var_150 = 0
                    int64_t* var_148_1 = arg2
                    
                    if (sub_14282694c(&data_143f89af0, &var_150) s>= 0)
                        if (rsi[4].d == 1)
                            break
                        
                        if (rsi[4].d == 2)
                            sub_14058a5c0(&var_b8, "illegal document indicator in scalar")
                            sub_1428244f0(&exceptionObject, sub_1427bde30(arg2, &var_198), &var_b8)
                            _CxxThrowException(&exceptionObject, &data_143946450)
                            noreturn
                
                r13.b = 1
                var_1a5 = 1
                var_1a6 = true
                
                if (*(rsi + 0x12) == 0x5c)
                    sub_14282e6d0()
                    int64_t var_140 = 0
                    int64_t* var_138_1 = arg2
                    
                    if (sub_14282694c(&data_143f89b18, &var_140) s>= 0)
                        sub_14282aff8(arg2)
                        r12 = result[2]
                        r15_1 = r12
                        var_1a4 = 1
                        break
                
                if (sub_14282b034(arg2) != *(rsi + 0x12))
                    r14.b = sub_14282aff8(arg2)
                    int64_t rax_11 = result[2]
                    
                    if (rax_11 u>= result[3])
                        sub_14058b730(result, 1, 0, r14.b)
                    else
                        result[2] = rax_11 + 1
                        char* result_4 = result
                        
                        if (result[3] u>= 0x10)
                            result_4 = *result
                        
                        result_4[rax_11] = r14.b
                        result_4[rax_11 + 1] = 0
                    
                    if (r14.b != 0x20 && r14.b != 9)
                        r15_1 = result[2]
                else
                    int64_t* rax_9 = sub_14282f6ac(&var_b8, arg2)
                    int64_t* rdx_5 = rax_9
                    
                    if (rax_9[3] u>= 0x10)
                        rdx_5 = *rax_9
                    
                    sub_14058c1d0(result, rdx_5, rax_9[2])
                    
                    if (var_a0 u>= 0x10)
                        sub_14058ba50(var_b8, var_a0 + 1)
                    
                    r12 = result[2]
                    r15_1 = r12
                
                var_180 = 0
                int64_t* var_178_2 = arg2
                i = sub_14282694c(*rsi, &var_180)
            while (i s< 0)
            r14.b = var_1a8
        
        if (sub_14282a90c(arg2) == 0)
            if (rsi[1].b == 0)
                break
            
            sub_14058a5c0(&var_b8, "illegal EOF in scalar")
            sub_1428244f0(&exceptionObject, sub_1427bde30(arg2, &var_198), &var_b8)
            _CxxThrowException(&exceptionObject, &data_143946450)
            noreturn
        
        if (rsi[4].d == 1 && arg2[2].d == 0)
            sub_14282e5d4()
            int64_t var_130 = 0
            int64_t* var_128_1 = arg2
            
            if (sub_14282694c(&data_143f89af0, &var_130) s>= 0)
                break
        
        int64_t var_120 = 0
        int64_t* var_118_1 = arg2
        int32_t rax_14 = sub_14282694c(*rsi, &var_120)
        
        if (rax_14 s>= 0)
            if (rsi[1].b != 0)
                sub_14282af24(arg2, rax_14)
            
            break
        
        if (*(rsi + 0x14) == 2)
            if (result[2] u< r15_1)
                goto label_14282f107
            
            result[2] = r15_1
            int64_t* result_1 = result
            
            if (result[3] u>= 0x10)
                result_1 = *result
            
            *(result_1 + r15_1) = 0
        
        sub_14281fc38()
        int64_t var_110 = 0
        int64_t* var_108_1 = arg2
        sub_14282af24(arg2, sub_14282694c(&data_143f89588, &var_110))
        
        if (sub_14282b034(arg2) == 0x20)
            char i_1
            
            do
                if (arg2[2].d s>= *(rsi + 0xc))
                    if (rsi[2].b == 0)
                        break
                    
                    if (r13.b != 0)
                        break
                
                int64_t var_100 = 0
                int64_t* var_f8_1 = arg2
                
                if (sub_14282694c(*rsi, &var_100) s>= 0)
                    break
                
                sub_14282af24(arg2, 1)
                i_1 = sub_14282b034(arg2)
            while (i_1 == 0x20)
            r14.b = var_1a8
        
        if (rsi[2].b != 0 && r13.b == 0)
            int32_t rcx_19 = arg2[2].d
            int32_t var_184 = rcx_19
            int32_t* rax_19 = &var_184
            
            if (*(rsi + 0xc) s>= rcx_19)
                rax_19 = rsi + 0xc
            
            *(rsi + 0xc) = *rax_19
        
        while (true)
            sub_14281fb28()
            int64_t var_170 = 0
            int64_t* var_168_1 = arg2
            
            if (sub_14282694c(&data_143f89560, &var_170) s< 0)
                break
            
            if (sub_14282b034(arg2) == 9 && arg2[2].d s< *(rsi + 0xc) && *(rsi + 0x24) == 2)
                sub_14058a5c0(&var_b8, "illegal tab when looking for indentation")
                sub_1428244f0(&exceptionObject, sub_1427bde30(arg2, &var_198), &var_b8)
                _CxxThrowException(&exceptionObject, &data_143946450)
                noreturn
            
            if (*(rsi + 0x11) == 0)
                break
            
            int64_t var_f0 = 0
            int64_t* var_e8_1 = arg2
            
            if (sub_14282694c(*rsi, &var_f0) s>= 0)
                break
            
            sub_14282af24(arg2, 1)
        
        sub_14281fc38()
        int64_t var_e0 = 0
        int64_t* var_d8_1 = arg2
        bool r15_2 = sub_14282694c(&data_143f89588, &var_e0) s>= 0
        sub_14281fb28()
        int64_t var_d0 = 0
        int64_t* var_c8_1 = arg2
        int32_t rax_26
        uint32_t rdx_19
        rax_26, rdx_19 = sub_14282694c(&data_143f89560, &var_d0)
        r13.b = rax_26 s>= 0
        int32_t rcx_23 = *(rsi + 0x14)
        uint64_t r9_2 = 1
        int64_t r8_1 = var_198
        
        if (rcx_23 != 1 || r8_1 != 0)
            rdx_19.b = var_1a7
        else
            uint32_t r9_4 = zx.d(var_1a0)
            rdx_19 = zx.d(var_1a7)
            
            if (r15_2 != 0)
                r9_4 = rdx_19
            
            var_1a0.d = r9_4
            r9_2 = zx.q((r8_1 + 1).d)
        
        if (var_1a6 == 0)
            goto label_14282ee07
        
        if (rcx_23 == 0)
            sub_14058c1d0(result, &data_14370209c, strlen(&data_14370209c))
        label_14282ee07:
            r14.b = r15_2
            var_1a8 = r15_2
            var_1a7 = r13.b
            
            if (r15_2 == 0)
                goto label_14282ee1c
        else
            if (rcx_23 == 1)
                if (r14.b != 0)
                    if (r15_2 == 0)
                    label_14282ed0d:
                        sub_14058c1d0(result, &data_14370209c, strlen(&data_14370209c))
                    else
                    label_14282ece5:
                        var_19c += r9_2.d
                        var_198 = r8_1 + r9_2
                    
                    if (r15_2 == 0)
                        goto label_14282ed1b
                else
                    if (r15_2 != 0)
                        goto label_14282ece5
                    
                    if (rdx_19.b != 0 || r13.b != 0 || arg2[2].d s< *(rsi + 0xc))
                        goto label_14282ed0d
                    
                    uint64_t rax_30 = strlen(&(*U""\tv 0")[3])
                    sub_14058c1d0(result, &(*U""\tv 0")[3], rax_30)
                label_14282ed1b:
                    int64_t rax_32 = var_198
                    
                    if (rax_32 s> 0)
                        uint64_t var_a8_1 = 0
                        var_a0 = 0xf
                        var_b8.b = 0
                        void*** rcx_29 = &var_b8
                        
                        if (rax_32 - 1 u> 0xf)
                            r9_2.b = 0xa
                            sub_14282e44c(rcx_29, rax_32 - 1, 0, r9_2.b)
                        else
                            var_a8_1 = rax_32 - 1
                            memset(rcx_29, 0xa, rax_32 - 1)
                            *(&var_b8 + rax_32 - 1) = 0
                        
                        void** rdx_21 = &var_b8
                        
                        if (var_a0 u>= 0x10)
                            rdx_21 = var_b8
                        
                        sub_14058c1d0(result, rdx_21, var_a8_1)
                        
                        if (var_a0 u>= 0x10)
                            sub_14058ba50(var_b8, var_a0 + 1)
                        
                        uint32_t rax_33
                        
                        if (var_1a0 == 0)
                            rax_33 = zx.d(r13.b)
                            
                            if (var_1a5 == 0)
                                rax_33 = 1
                        
                        if (var_1a0 != 0 || rax_33 != 0)
                            sub_14058c1d0(result, &data_14370209c, strlen(&data_14370209c))
                        
                        var_19c = 0
                        var_198 = 0
                
                goto label_14282ee07
            
            if (rcx_23 != 2)
                goto label_14282ee07
            
            if (r15_2 == 0)
                if (r14.b != 0 || var_1a4 != r14.b)
                    goto label_14282ee07
                
                uint64_t rax_28 = strlen(&(*U""\tv 0")[3])
                sub_14058c1d0(result, &(*U""\tv 0")[3], rax_28)
                r14.b = r15_2
                var_1a8 = r15_2
                var_1a7 = r13.b
            label_14282ee1c:
                
                if (arg2[2].d s< *(rsi + 0xc))
                    rsi[5].b = 1
                    break
            else
                sub_14058c1d0(result, &data_14370209c, strlen(&data_14370209c))
                r14.b = r15_2
                var_1a8 = r15_2
                var_1a7 = r13.b
        
        var_1a6 = true
        
        if (sub_14282a90c(arg2) == 0)
            break
        
        r13.b = var_1a5

if (rsi[3].b == 0)
label_14282eee4:
    void* rcx_39
    void* r8_11
    int64_t r9_5
    
    if (*(rsi + 0x1c) == 0xffffffff)
        int64_t* result_8 = result
        r9_5 = result[3]
        
        if (r9_5 u>= 0x10)
            result_8 = *result
        
        r8_11 = result[2]
        void* rcx_44
        
        if (r8_11 == 0)
        label_14282efff:
            rcx_44 = -ffffffffffffffff
        else
            void* rcx_42 = -ffffffffffffffff
            
            if (r8_11 - 1 u< -1)
                rcx_42 = r8_11 - 1
            
            void* rcx_43 = rcx_42 + result_8
            
            while (*rcx_43 == 0xa)
                if (rcx_43 == result_8)
                    goto label_14282efff
                
                rcx_43 -= 1
            
            rcx_44 = rcx_43 - result_8
        
        if (r12 != -1)
            if (rcx_44 u< r12 || rcx_44 == -1)
                rcx_44 = r12
            
            goto label_14282f01a
        
        if (rcx_44 == -1)
        label_14282f031:
            result[2] = 0
            int64_t* result_3 = result
            
            if (r9_5 u>= 0x10)
                result_3 = *result
            
            *result_3 = 0
            __security_check_cookie(rax_1 ^ &var_1d8)
            return result
        
    label_14282f01a:
        
        if (rcx_44 u>= r8_11)
            __security_check_cookie(rax_1 ^ &var_1d8)
            return result
        
        rcx_39 = rcx_44 + 1
    else
        if (*(rsi + 0x1c) != 0)
            __security_check_cookie(rax_1 ^ &var_1d8)
            return result
        
        int64_t* result_7 = result
        r9_5 = result[3]
        
        if (r9_5 u>= 0x10)
            result_7 = *result
        
        r8_11 = result[2]
        void* rcx_38
        
        if (r8_11 == 0)
        label_14282ef42:
            rcx_38 = -ffffffffffffffff
        else
            void* rcx_36 = -ffffffffffffffff
            
            if (r8_11 - 1 u< -1)
                rcx_36 = r8_11 - 1
            
            void* rcx_37 = rcx_36 + result_7
            
            while (*rcx_37 == 0xa)
                if (rcx_37 == result_7)
                    goto label_14282ef42
                
                rcx_37 -= 1
            
            rcx_38 = rcx_37 - result_7
        
        if (r12 != -1)
            if (rcx_38 u< r12 || rcx_38 == -1)
                rcx_38 = r12
            
            goto label_14282ef6d
        
        if (rcx_38 == -1)
            goto label_14282f031
        
    label_14282ef6d:
        
        if (rcx_38 + 1 u>= r8_11)
            __security_check_cookie(rax_1 ^ &var_1d8)
            return result
        
        rcx_39 = rcx_38 + 2
    
    if (r8_11 u>= rcx_39)
        char* result_2 = result
        result[2] = rcx_39
        
        if (r9_5 u>= 0x10)
            result_2 = *result
        
        *(result_2 + rcx_39) = 0
        __security_check_cookie(rax_1 ^ &var_1d8)
        return result
else
    uint64_t rax_38 = strlen(" \t")
    int64_t* result_5 = result
    
    if (result[3] u>= 0x10)
        result_5 = *result
    
    char var_1b0_1 = var_1a4
    void* rax_39 = sub_14282e524(result_5, result[2], -ffffffffffffffff, " \t", rax_38)
    
    if (r12 != -1 && (rax_39 u< r12 || rax_39 == -1))
        rax_39 = r12
    
    if (rax_39 u>= result[2])
        goto label_14282eee4
    
    if (result[2] u>= rax_39 + 1)
        result[2] = rax_39 + 1
        char* result_6 = result
        
        if (result[3] u>= 0x10)
            result_6 = *result
        
        *(result_6 + rax_39 + 1) = 0
        goto label_14282eee4

label_14282f107:
sub_14058b100()
noreturn
