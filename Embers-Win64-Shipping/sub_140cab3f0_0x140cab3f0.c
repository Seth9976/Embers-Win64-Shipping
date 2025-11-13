// 函数: sub_140cab3f0
// 地址: 0x140cab3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
uint64_t rcx = zx.q(sub_140a20af0())
int64_t var_260_1 = rcx
int64_t var_218_1 = rcx
uint64_t rcx_1 = zx.q(sub_140a20af0())
int64_t var_190_1 = rcx_1
int64_t var_148_1 = rcx_1
int32_t rax_16 = sub_140a20af0()
int32_t rdi_1 = data_143e1d9b4 - data_143e1d990
uint64_t rcx_2 = zx.q(rax_16)
int64_t var_c0_1 = rcx_2
int64_t var_78_1 = rcx_2
int64_t* rax_23 = sub_140a242a0()
int64_t rdx = *rax_23
int32_t rcx_4 = (*(rdx + 0x18))(rax_23, rdx)
int32_t var_2b8 = 0xe000000
int32_t r8
int32_t var_2b4 = r8
int32_t var_2a8 = rdi_1

if (rcx_4 s<= 1)
    rcx_4 = 1

void var_2a0
void* var_2d0 = &var_2a0
int32_t var_2ac = rcx_4
void var_1d0
void* var_2c8 = &var_1d0
void var_100
void* var_2c0 = &var_100
int32_t var_2b0 = divs.dp.d(sx.q(rdi_1), rcx_4) + 1
int64_t (* result_3)(void** arg1, int32_t* arg2) = sub_140cb0900
void** var_2f8 = &var_2d0
sub_14077b750(rcx_4, &result_3, 0)
sub_140cc3dd0(&var_2a0, arg2)
result_3 = nullptr
int32_t var_2f8_1 = 0
sub_140cc3dd0(&var_1d0, &result_3)
int64_t (* result_4)(void** arg1, int32_t* arg2) = result_3
int64_t rdi_2 = 0
int64_t (* result_5)(void** arg1, int32_t* arg2) = result_4
void* rcx_7 = result_4 + (sx.q(var_2f8_1) << 3)
uint64_t r14_3 = (rcx_7 - result_4 + 7) u>> 3

if (result_4 u> rcx_7)
    r14_3 = 0

if (r14_3 != 0)
    do
        int64_t rdx_5 = *result_5
        
        if ((*(rdx_5 + 0xb) & 1) != 0)
            sub_140d1e750(&data_143e1d678, rdx_5)
            data_143e1d69c = 1
        
        result_5 += 8
        rdi_2 += 1
    while (rdi_2 != r14_3)

if (result_4 != 0)
    sub_140a74f90(result_4)

result_3 = nullptr
int32_t var_2f8_2 = 0
sub_140cc3dd0(&var_100, &result_3)
int64_t (* result_2)(void** arg1, int32_t* arg2) = result_3
int64_t (* result_1)(void** arg1, int32_t* arg2) = result_2
void* rcx_10 = result_2 + (sx.q(var_2f8_2) << 3)
int64_t (* result)(void** arg1, int32_t* arg2) = result_2

if (result_2 != rcx_10)
    do
        void* r8_1 = *result
        int32_t rcx_11 = *(r8_1 + 0xc)
        int64_t r12
        void* r13_3
        
        if (rcx_11 s<= 0)
            char var_308_2 = 0
            r13_3 = sx.q(not.d(rcx_11)) * 0x50 + data_143e1d678
            int32_t* i = *(r13_3 + 0x18)
            
            for (void* r10_2 = &i[sx.q(*(r13_3 + 0x20))]; i != r10_2; i = &i[1])
                int32_t rax_77 = *i
                
                if (rax_77 s>= 0)
                    int64_t rdx_25 = sx.q(zx.d(rax_77.w)) * 3
                    int64_t rcx_39 = *(data_143e1d9a0 + (sx.q(rax_77 s>> 0x10) << 3))
                    int32_t rcx_40 = *(rcx_39 + (rdx_25 << 3) + 8)
                    
                    if (((rcx_40 u>> 0x1d).b & 1) != 0)
                        *i = 0xffffffff
                        var_308_2 = 1
                    else
                        *(rcx_39 + (rdx_25 << 3) + 8) = rcx_40 & 0xefffffff
            
            int32_t* rsi_3 = *(r13_3 + 0x28)
            r12.b = 0
            void* rax_84 = &rsi_3[sx.q(*(r13_3 + 0x30))]
            
            if (rsi_3 != rax_84)
                do
                    int32_t rax_85 = *rsi_3
                    
                    if (rax_85 s>= 0)
                        int64_t rdx_27 = sx.q(zx.d(rax_85.w)) * 3
                        int64_t rcx_43 = *(data_143e1d9a0 + (sx.q(rax_85 s>> 0x10) << 3))
                        int64_t* rdi_5 = rcx_43 + (rdx_27 << 3)
                        int32_t rdx_28 = *(rcx_43 + (rdx_27 << 3) + 8)
                        
                        if (((rdx_28 u>> 0x1d).b & 1) != 0)
                            *rsi_3 = 0xffffffff
                            r12.b = 1
                        else if (((rdx_28 u>> 0x1c).b & 1) == 0)
                            int32_t rcx_47 = *(rdi_5 + 0xc)
                            
                            if (rcx_47 s> 0 && ((rdx_28 u>> 0x17).b & 1) == 0)
                                uint32_t rax_97 = zx.d(rcx_47.w)
                                rdi_5[1].d = rdx_28 | 0x800000
                                
                                if (rcx_47 s< 0)
                                    rcx_47 += 0xffff
                                    rax_97 -= 0x10000
                                
                                int64_t rdx_33 = sx.q(rax_97) * 3
                                int64_t rcx_50 = *(data_143e1d9a0 + (sx.q(rcx_47 s>> 0x10) << 3))
                                void* r8_4 = rcx_50 + (rdx_33 << 3)
                                int32_t rcx_51 = *(rcx_50 + (rdx_33 << 3) + 8)
                                
                                if (((rcx_51 u>> 0x1c).b & 1) != 0)
                                    *(r8_4 + 8) = rcx_51 & 0xefffffff
                                    sub_140cc2a60(not.d(*(r8_4 + 0xc)), arg2)
                        else
                            int64_t r15_3 = *rdi_5
                            rdi_5[1].d = rdx_28 & 0xefffffff
                            int64_t r14_6 = sx.q(arg2[1].d)
                            int32_t rax_93 = (r14_6 + 1).d
                            arg2[1].d = rax_93
                            
                            if (rax_93 s> *(arg2 + 0xc))
                                sub_1405a4d70(arg2)
                            
                            *(*arg2 + (r14_6 << 3)) = r15_3
                            int32_t rcx_45 = *(rdi_5 + 0xc)
                            
                            if (rcx_45 s< 0)
                                sub_140cc2a60(not.d(rcx_45), arg2)
                    
                    rsi_3 = &rsi_3[1]
                while (rsi_3 != rax_84)
                
                if (r12.b != 0 || var_308_2 != 0)
                    goto label_140cabab0
            else if (var_308_2 != 0)
            label_140cabab0:
                int32_t* rsi_4 = *(r13_3 + 8)
                int64_t r14_7 = 0
                uint64_t r15_5 = sx.q(*(r13_3 + 0x10)) << 2 u>> 2
                
                if (rsi_4 u> &rsi_4[sx.q(*(r13_3 + 0x10))])
                    r15_5 = 0
                
                if (r15_5 != 0)
                    do
                        int32_t rax_104 = *rsi_4
                        uint32_t rdx_35 = zx.d(rax_104.w)
                        
                        if (rax_104 s< 0)
                            rax_104 += 0xffff
                            rdx_35 -= 0x10000
                        
                        int64_t rdi_6 = sx.q(arg2[1].d)
                        int32_t rax_108 = (rdi_6 + 1).d
                        r12 = *(*(data_143e1d9a0 + (sx.q(rax_104 s>> 0x10) << 3))
                            + sx.q(rdx_35) * 0x18)
                        arg2[1].d = rax_108
                        
                        if (rax_108 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        rsi_4 = &rsi_4[1]
                        r14_7 += 1
                        *(*arg2 + (rdi_6 << 3)) = r12
                    while (r14_7 != r15_5)
                
                *(r13_3 + 0x48) = 1
                data_143e1d69c = 1
        else
            int32_t rdx_7 = *(r8_1 + 8)
            
            if ((not.b((rdx_7 u>> 0x17).b) & 1) != 0)
                uint32_t rax_33 = zx.d(rcx_11.w)
                *(r8_1 + 8) = rdx_7 | 0x800000
                
                if (rcx_11 s< 0)
                    rcx_11 += 0xffff
                    rax_33 -= 0x10000
                
                int64_t rdx_9 = sx.q(rax_33) * 3
                int64_t rcx_14 = *(data_143e1d9a0 + (sx.q(rcx_11 s>> 0x10) << 3))
                void* r8_2 = rcx_14 + (rdx_9 << 3)
                int32_t rcx_15 = *(rcx_14 + (rdx_9 << 3) + 8)
                
                if (((rcx_15 u>> 0x1c).b & 1) != 0)
                    int32_t rax_38 = *(r8_2 + 0xc)
                    *(r8_2 + 8) = rcx_15 & 0xefffffff
                    char var_308_1 = 0
                    r13_3 = sx.q(not.d(rax_38)) * 0x50 + data_143e1d678
                    int32_t* i_1 = *(r13_3 + 0x18)
                    
                    for (void* r10_1 = &i_1[sx.q(*(r13_3 + 0x20))]; i_1 != r10_1; i_1 = &i_1[1])
                        int32_t rax_42 = *i_1
                        
                        if (rax_42 s>= 0)
                            int64_t rdx_11 = sx.q(zx.d(rax_42.w)) * 3
                            int64_t rcx_18 = *(data_143e1d9a0 + (sx.q(rax_42 s>> 0x10) << 3))
                            int32_t rcx_19 = *(rcx_18 + (rdx_11 << 3) + 8)
                            
                            if (((rcx_19 u>> 0x1d).b & 1) != 0)
                                *i_1 = 0xffffffff
                                var_308_1 = 1
                            else
                                *(rcx_18 + (rdx_11 << 3) + 8) = rcx_19 & 0xefffffff
                    
                    int32_t* rsi_1 = *(r13_3 + 0x28)
                    r12.b = 0
                    void* rax_49 = &rsi_1[sx.q(*(r13_3 + 0x30))]
                    
                    if (rsi_1 != rax_49)
                        do
                            int32_t rax_50 = *rsi_1
                            
                            if (rax_50 s>= 0)
                                int64_t rdx_13 = sx.q(zx.d(rax_50.w)) * 3
                                int64_t rcx_22 = *(data_143e1d9a0 + (sx.q(rax_50 s>> 0x10) << 3))
                                int64_t* rdi_3 = rcx_22 + (rdx_13 << 3)
                                int32_t rdx_14 = *(rcx_22 + (rdx_13 << 3) + 8)
                                
                                if (((rdx_14 u>> 0x1d).b & 1) != 0)
                                    *rsi_1 = 0xffffffff
                                    r12.b = 1
                                else if (((rdx_14 u>> 0x1c).b & 1) == 0)
                                    int32_t rcx_26 = *(rdi_3 + 0xc)
                                    
                                    if (rcx_26 s> 0 && ((rdx_14 u>> 0x17).b & 1) == 0)
                                        uint32_t rax_62 = zx.d(rcx_26.w)
                                        rdi_3[1].d = rdx_14 | 0x800000
                                        
                                        if (rcx_26 s< 0)
                                            rcx_26 += 0xffff
                                            rax_62 -= 0x10000
                                        
                                        int64_t rdx_19 = sx.q(rax_62) * 3
                                        int64_t rcx_29 =
                                            *(data_143e1d9a0 + (sx.q(rcx_26 s>> 0x10) << 3))
                                        void* r8_3 = rcx_29 + (rdx_19 << 3)
                                        int32_t rcx_30 = *(rcx_29 + (rdx_19 << 3) + 8)
                                        
                                        if (((rcx_30 u>> 0x1c).b & 1) != 0)
                                            *(r8_3 + 8) = rcx_30 & 0xefffffff
                                            sub_140cc2a60(not.d(*(r8_3 + 0xc)), arg2)
                                else
                                    int64_t r15 = *rdi_3
                                    rdi_3[1].d = rdx_14 & 0xefffffff
                                    int64_t r14_4 = sx.q(arg2[1].d)
                                    int32_t rax_58 = (r14_4 + 1).d
                                    arg2[1].d = rax_58
                                    
                                    if (rax_58 s> *(arg2 + 0xc))
                                        sub_1405a4d70(arg2)
                                    
                                    *(*arg2 + (r14_4 << 3)) = r15
                                    int32_t rcx_24 = *(rdi_3 + 0xc)
                                    
                                    if (rcx_24 s< 0)
                                        sub_140cc2a60(not.d(rcx_24), arg2)
                            
                            rsi_1 = &rsi_1[1]
                        while (rsi_1 != rax_49)
                        
                        if (r12.b != 0 || var_308_1 != 0)
                            goto label_140cab86c
                    else if (var_308_1 != 0)
                    label_140cab86c:
                        int32_t* rsi_2 = *(r13_3 + 8)
                        int64_t r14_5 = 0
                        uint64_t r15_2 = sx.q(*(r13_3 + 0x10)) << 2 u>> 2
                        
                        if (rsi_2 u> &rsi_2[sx.q(*(r13_3 + 0x10))])
                            r15_2 = 0
                        
                        if (r15_2 != 0)
                            do
                                int32_t rax_69 = *rsi_2
                                uint32_t rdx_21 = zx.d(rax_69.w)
                                
                                if (rax_69 s< 0)
                                    rax_69 += 0xffff
                                    rdx_21 -= 0x10000
                                
                                int64_t rdi_4 = sx.q(arg2[1].d)
                                int32_t rax_73 = (rdi_4 + 1).d
                                r12 = *(*(data_143e1d9a0 + (sx.q(rax_69 s>> 0x10) << 3))
                                    + sx.q(rdx_21) * 0x18)
                                arg2[1].d = rax_73
                                
                                if (rax_73 s> *(arg2 + 0xc))
                                    sub_1405a4d70(arg2)
                                
                                rsi_2 = &rsi_2[1]
                                r14_5 += 1
                                *(*arg2 + (rdi_4 << 3)) = r12
                            while (r14_5 != r15_2)
                        
                        *(r13_3 + 0x48) = 1
                        data_143e1d69c = 1
        result = result_1 + 8
        result_1 = result
    while (result != rcx_10)
    
    result_2 = result_3

if (result_2 != 0)
    result = sub_140a74f90(result_2)

__security_check_cookie(rax_1 ^ &var_328)
return result
