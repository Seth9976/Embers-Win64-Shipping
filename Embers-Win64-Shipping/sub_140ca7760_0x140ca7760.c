// 函数: sub_140ca7760
// 地址: 0x140ca7760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t var_48 = __security_cookie ^ &var_378
int64_t rdi = arg6
void* var_320 = arg4
int64_t* r14 = *(*arg2 + 8)
int64_t var_298 = rdi
char r13 = *(r14 + 0x2b) & 4
char var_348 = r13
int64_t i_1
int32_t var_340
int64_t var_318
int64_t i_2
int32_t var_2dc
int64_t var_288

if ((r14[5].b & 1) == 0)
    void* const rax_30
    
    if (arg4 == 0)
        rax_30 = nullptr
    else
        void* rax_27 = sub_140bdfe30()
        void* rdx_16 = *(arg4 + 0x10)
        int64_t rax_28 = sx.q(*(rax_27 + 0x38))
        
        if (rax_28.d s> *(rdx_16 + 0x38))
            rax_30 = nullptr
        else
            rax_30 = arg4
            
            if (*(*(rdx_16 + 0x30) + (rax_28 << 3)) != rax_27 + 0x30)
                rax_30 = nullptr
    
    uint8_t var_348_1 = 0
    
    if (rax_30 != 0)
        var_348_1 = *(rax_30 + 0xb0) u>> 4 & 1
    
    char rax_31 = *(r14 + 0x2b)
    int64_t** r12_3
    
    if ((rax_31 & 0x10) == 0)
        r12_3 = nullptr
    else
        r12_3 = r14[0xd]
    
    int64_t** var_338_2 = r12_3
    int64_t* i
    
    if ((rax_31 & 0x10) == 0)
        i = *(arg1 + 0x70)
    label_140ca7cc3:
        
        while (i != 0)
            if (sub_140cea0a0(i, r14) != 0)
                int32_t rax_33
                int32_t r13_2
                
                if (r12_3 == 0)
                    rax_33 = i[7].d
                    r13_2 = 0
                else
                    r13_2 = r12_3[1].d
                    rax_33 = r13_2 + 1
                
                var_340 = rax_33
                
                if (r13_2 s< rax_33)
                    do
                        int32_t r8_8 = *(i + 0x3c)
                        int64_t r9_3 = sx.q(*(i + 0x4c))
                        int64_t rdx_19 = sx.q(r8_8 * r13_2) + r9_3
                        int64_t rax_37 = arg3 + rdx_19
                        int32_t rcx_30
                        
                        if (rdi != 0)
                            void* rax_38 = var_320
                            
                            if (rax_38 == 0)
                                rcx_30 = 0x7fffffff
                            else
                                rcx_30 = *(rax_38 + 0x58)
                        
                        int64_t rdi_1
                        
                        if (rdi == 0 || i[7].d * r8_8 + r9_3.d s> rcx_30)
                            rdi_1 = 0
                        else
                            rdi_1 = rdi + rdx_19
                        
                        int64_t var_358
                        int64_t var_350
                        
                        if (r12_3 != 0 || *(r14 + 0x29) s< 0)
                        label_140ca7dcf:
                            int64_t r12_4 = 0
                            
                            if (var_348_1 == 0)
                                r12_4 = rdi_1
                            
                            var_350 = r12_4
                            sub_140cf05a0(&var_318, r14, i, r13_2, rax_37)
                            int16_t var_250_1 = 0x100
                            void var_248
                            void* var_268 = &var_248
                            void* var_260_1 = &var_248
                            int64_t* var_258_1 = &var_48
                            int512_t zmm1 = sub_140b63f10(&i_2, &var_268)
                            
                            if (*var_260_1 != 0)
                                *var_260_1 = 0
                            
                            sub_140cf0df0(arg2, &var_318, zmm1)
                            int64_t rax_50 = (*(*r14 + 0x20))(r14)
                            bool cond:3_1 = (*(r14 + 0x2b) & 0x10) == 0
                            int64_t rdi_2 = 0
                            var_288 = rax_50
                            
                            if (not(cond:3_1) && var_338_2 != 0)
                                rdi_2 = r14[0xd]
                                r14[0xd] = var_338_2[2]
                            
                            var_358 = r12_4
                            int512_t zmm1_1 = sub_140d10980(&var_318, arg2, i, rax_37, var_358)
                            
                            if (rdi_2 != 0)
                                r14[0xd] = rdi_2
                            
                            int32_t rax_53 = (*(*r14 + 0x20))(r14) - var_288.d
                            var_2dc = rax_53
                            
                            if (rax_53 s> 0)
                                int64_t rax_55 = (*(*r14 + 0x20))(r14)
                                int64_t r8_13 = *r14
                                int64_t var_2d0
                                (*(r8_13 + 0x178))(r14, var_2d0, r8_13)
                                int64_t* rdx_28 = r14[1]
                                int32_t* r8_14 = *rdx_28
                                
                                if (&r8_14[1] u> rdx_28[1])
                                    int32_t* rdx_29 = &var_2dc
                                    
                                    if ((*(r14 + 0x29) & 0x20) != 0)
                                        sub_140b54070(r14, rdx_29, zmm1_1)
                                    else
                                        (*(*r14 + 0x150))(r14, rdx_29, 4)
                                else
                                    var_2dc = *r8_14
                                    *rdx_28 += 4
                                
                                (*(*r14 + 0x178))(r14, rax_55)
                            
                            sub_140b301c0(&var_268)
                            r12_3 = var_338_2
                        else
                            if (var_298 == 0)
                                if (arg1 == 0)
                                    goto label_140ca7dcf
                                
                                void* r8_9 = sub_140bdf2e0() + 0x30
                                void* rdx_21 = *(arg1 + 0x10)
                                int64_t rax_43 = sx.q(*(r8_9 + 8))
                                
                                if (rax_43.d s> *(rdx_21 + 0x38)
                                        || *(*(rdx_21 + 0x30) + (rax_43 << 3)) != r8_9)
                                    goto label_140ca7dcf
                                
                                goto label_140ca7db2
                            
                        label_140ca7db2:
                            
                            if ((*(*i + 0x80))(i, rax_37, rdi_1, zx.q(r14[6].d), var_358, var_350, 
                                    var_348_1) == 0)
                                goto label_140ca7dcf
                        rdi = var_298
                        r13_2 += 1
                    while (r13_2 s< var_340)
            
            if ((*(r14 + 0x2b) & 0x10) == 0)
                i = i[0xb]
            else
                if (r12_3 == 0)
                    break
                
                r12_3 = r12_3[3]
                var_338_2 = r12_3
                
                if (r12_3 == 0)
                    break
                
                i = *r12_3
    else if (r12_3 != 0)
        i = *r12_3
        goto label_140ca7cc3
    int64_t rax_58 = *r14
    var_320 = nullptr
    i_1 = (*(rax_58 + 0x140))(r14, &var_320)
else
    int64_t* j = *(arg1 + 0x70)
    uint64_t rsi
    rsi.b = 0
    int32_t r12_1
    
    if (j == 0)
        r12_1 = 0
    else
        r12_1 = j[7].d
    
    __builtin_memset(&var_318, 0, 0x11)
    __builtin_memset(&i_2, 0, 0x2c)
    int32_t var_2d8_1 = 0xffffffff
    int64_t var_2d0_1 = -1
    int64_t var_2c8
    __builtin_memset(&var_2c8, 0, 0x11)
    int64_t var_2b4_1 = 0
    int64_t var_2ac_1 = 0
    sub_140cf0df0(arg2, &var_318, arg5)
    i_1 = i_2
    
    while (i_1 != 0)
        if (rsi.b != 0)
            r12_1 -= 1
            
            if (r12_1 s<= 0)
                j = j[0xb]
                
                if (j == 0)
                    r12_1 = 0
                else
                    while (sub_140cea0a0(j, r14) == 0)
                        j = j[0xb]
                        
                        if (j == 0)
                            goto label_140ca788c
                    
                    if (j == 0)
                    label_140ca788c:
                        i_1 = i_2
                        r12_1 = 0
                    else
                        r12_1 = j[7].d
                        i_1 = i_2
        
        if (j == 0 || j[5] != i_1)
            if (r13 != 0 && (r14[6].d & 0x401000) == 0)
                uint64_t rax_4
                rax_4, arg5 = sub_140bdf100(arg1)
                rsi = rax_4
                
                if (rax_4 == 0)
                label_140ca78f3:
                    i_1 = i_2
                else
                    while (true)
                        int64_t i_3
                        arg5 = sub_140cdb930(&i_3, rsi, i_2)
                        i_1 = i_3
                        
                        if (i_1 != 0)
                            i_2 = i_1
                            break
                        
                        rsi = *(rsi + 0x40)
                        
                        if (rsi == 0)
                            goto label_140ca78f3
            
            int64_t* j_2 = j
            
            if (j == 0)
            label_140ca7940:
                
                for (j = *(arg1 + 0x70); j != 0; j = j[0xb])
                    if (j == j_2)
                        goto label_140ca7984
                    
                    int64_t rcx_5
                    
                    if (j == 0)
                        int64_t var_330_2 = 0
                        rcx_5 = 0
                    else
                        rcx_5 = j[5]
                        int64_t var_330_1 = rcx_5
                    
                    if (rcx_5 == i_1)
                        break
                
                if (j == j_2)
                label_140ca7984:
                    j = nullptr
                    r12_1 = 0
                else if (j == 0)
                    r12_1 = 0
                else
                    r12_1 = j[7].d
            else
                while (true)
                    int64_t rcx_4 = j[5]
                    int64_t var_338_1 = rcx_4
                    
                    if (rcx_4 == i_1)
                        break
                    
                    j = j[0xb]
                    
                    if (j == 0)
                        goto label_140ca7940
                
                if (j == 0)
                    goto label_140ca7940
                
                r12_1 = j[7].d
        
        int64_t rax_6 = (*(*r14 + 0x20))(r14)
        
        if (j != 0)
        label_140ca79c1:
            int64_t r8_2 = *j
            (*(r8_2 + 0xf8))(j, &var_340, r8_2)
            int64_t var_310
            
            if (var_348 != 0)
                char rax_8 = sub_140b5b8a0(var_310.d, 0xa)
                int32_t rcx_9
                rcx_9.b = var_310:4.d == 0
                int32_t var_33c
                char rax_9
                int32_t rcx_10
                
                if ((rcx_9.b & rax_8) != 0)
                    rax_9 = sub_140b5b8a0(var_340, 0xa)
                    rcx_10.b = var_33c == 0
                
                if ((rcx_9.b & rax_8) == 0 || (rcx_10.b & rax_9) == 0)
                    int32_t rcx_13
                    rcx_13.b = var_33c == 0
                    
                    if ((rcx_13.b & sub_140b5b8a0(var_340, 0x22)) != 0)
                        char rax_12 = sub_140b5b8a0(var_310.d, 0x22)
                        int32_t rcx_14
                        rcx_14.b = var_310:4.d == 0
                        char rax_13
                        int32_t rcx_15
                        
                        if ((rcx_14.b & rax_12) == 0)
                            rax_13 = sub_140b5b8a0(var_310.d, 1)
                            rcx_15.b = var_310:4.d == 0
                        
                        if ((rcx_14.b & rax_12) != 0 || (rcx_15.b & rax_13) != 0)
                            int64_t var_2f4_1
                            arg5 = sub_140cba280(&var_288, var_2f4_1)
                            int64_t rax_14 = var_288
                            int64_t rcx_17 = var_2f4_1
                            
                            if (rax_14 != 0)
                                rcx_17 = rax_14
                            
                            int64_t var_2f4_2 = rcx_17
                else
                    int64_t var_2fc_1
                    int64_t var_278
                    arg5 = sub_140cba300(&var_278, var_2fc_1)
                    int64_t rax_10 = var_278
                    
                    if (rax_10 == *(j[0xf] + 0x18))
                        int64_t var_2fc_2 = rax_10
            
            if ((j[8] & 0x800000000) != 0)
                rsi.b = 0
            
            if ((j[8] & 0x800000000) == 0 || data_143de5420 != 0)
                rsi.b = 0
                
                if (var_2d8_1 s< j[7].d && var_2d8_1 s>= 0 && sub_140cea0a0(j, r14) != 0)
                    int32_t rax_18 = (*(*j + 0x78))(j, &var_318, arg2, arg3, var_320)
                    
                    if (rax_18 == 0)
                        if (var_310 == var_340.q)
                            int32_t rdx_9 = *(j + 0x3c)
                            int64_t r9_1 = sx.q(*(j + 0x4c))
                            int64_t r8_5 = sx.q(rdx_9 * var_2d8_1) + r9_1
                            int32_t rax_23
                            int64_t rax_24
                            
                            if (var_298 != 0)
                                void* rax_22 = var_320
                                
                                if (rax_22 == 0)
                                    rax_23 = 0x7fffffff
                                else
                                    rax_23 = *(rax_22 + 0x58)
                                
                                rax_24 = var_298 + r8_5
                            
                            if (var_298 == 0 || rdx_9 * j[7].d + r9_1.d s> rax_23)
                                rax_24 = 0
                            
                            arg5 = sub_140d10980(&var_318, arg2, j, arg3 + r8_5, rax_24)
                            rsi.b = *(r14 + 0x29) u>> 1
                            rsi.b = not.b(rsi.b)
                            rsi.b &= 1
                    else if (rax_18 == 2)
                        rsi.b = 1
        else
            int64_t r8_1 = *arg1
            int64_t* j_1 = (*(r8_1 + 0x2b0))(arg1, i_2, r8_1)
            rsi.b = 0
            j = j_1
            
            if (j_1 != 0)
                goto label_140ca79c1
        
        (*(*r14 + 0x20))(r14)
        
        if (rsi.b == 0)
            (*(*r14 + 0x178))(r14, sx.q(var_2dc) + rax_6)
        
        __builtin_memset(&var_318, 0, 0x11)
        __builtin_memset(&i_2, 0, 0x2c)
        var_2d8_1 = 0xffffffff
        int64_t var_2d0_2 = -1
        int64_t var_2c8_1
        __builtin_memset(&var_2c8_1, 0, 0x11)
        int64_t var_2b4_2 = 0
        int64_t var_2ac_2 = 0
        sub_140cf0df0(arg2, &var_318, arg5)
        i_1 = i_2
        r13 = var_348
__security_check_cookie(var_48 ^ &var_378)
return i_1
