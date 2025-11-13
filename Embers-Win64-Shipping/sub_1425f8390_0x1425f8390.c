// 函数: sub_1425f8390
// 地址: 0x1425f8390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c48cb0(arg2)
PROPVARIANT pvar
pvar...q = 0
int32_t i = 0
pvar...__offset(0x8).q = 0
pvar...__offset(0x10).q = 0
PROPVARIANT pvar_1
__builtin_memset(&pvar_1, 0, 0x18)
int64_t* arg_18 = nullptr
int16_t* var_98
enum WIN32_ERROR rax_1 = (*(*arg1 + 0x28))(arg1, &var_98)
enum WIN32_ERROR rdi = rax_1
int64_t var_90
int64_t var_80

if (rax_1 s>= NO_ERROR)
    enum WIN32_ERROR rax_4 = (*(*arg1 + 0x20))(arg1, 0, &arg_18)
    rdi = rax_4
    int16_t* const rcx_9
    
    if (rax_4 s< NO_ERROR)
        int64_t* rax_5 = sub_1425f7e60(&var_80, rax_4)
        
        if (rax_5[1].d == 0)
            rcx_9 = &data_142d40450
        else
            rcx_9 = *rax_5
        
        int32_t var_a0_2 = 0x193
        goto label_1425f8491
    
    int64_t* rcx_13 = arg_18
    enum WIN32_ERROR rax_7 = (*(*rcx_13 + 0x28))(rcx_13, &data_14344b680, &pvar)
    rdi = rax_7
    
    if (rax_7 s>= NO_ERROR)
        int32_t rbx_1 = 0
        int64_t rdi_1 = 0
        int32_t r13_1 = 0
        int16_t* r14_1 = pvar...__offset(0x8).q
        int64_t rsi_1 = -1
        var_90 = 0
        int32_t var_88_1 = 0
        int32_t var_84_1 = 0
        
        if (r14_1 != 0 && *r14_1 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (r14_1[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_90, rbx_2.d + 1)
                r13_1 = var_88_1
                rdi_1 = var_90
            
            r13_1 += rbx_2.d + 1
            
            if (r13_1 s> var_84_1)
                sub_140594770(&var_90)
                rdi_1 = var_90
            
            UnDecorator::getReferenceType(rdi_1, r14_1, (rbx_2.d + 1) * 2)
            rbx_1 = var_84_1
        
        if (arg2 != &var_90)
            int64_t rcx_18 = *arg2
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            *arg2 = rdi_1
            arg2[1].d = r13_1
            *(arg2 + 0xc) = rbx_1
        else if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        int64_t* rcx_20 = arg_18
        enum WIN32_ERROR rax_10 = (*(*rcx_20 + 0x28))(rcx_20, &data_14344b650, &pvar_1)
        rdi = rax_10
        int16_t* const rcx_22
        
        if (rax_10 s< NO_ERROR)
            int64_t* rax_11 = sub_1425f7e60(&var_80, rax_10)
            
            if (rax_11[1].d == 0)
                rcx_22 = &data_142d40450
                int32_t var_a0_6 = 0x19e
            else
                rcx_22 = *rax_11
                int32_t var_a0_5 = 0x19e
            
            goto label_1425f8679
        
        int16_t* rax_12 = pvar_1...__offset(0x10).q
        
        if (rax_12 != 0)
            int16_t* rbx_4 = var_98
            int32_t rax_14 = 0
            var_90 = 0
            int64_t r14_2 = 0
            int32_t var_88_3 = 0
            int32_t r13_2 = 0
            int32_t var_84_2 = 0
            
            if (rbx_4 != 0 && *rbx_4 != 0)
                do
                    rsi_1 += 1
                while (rbx_4[rsi_1] != 0)
                
                if (rsi_1.d + 1 s> 0)
                    sub_1405947f0(&var_90, rsi_1.d + 1)
                    rax_14 = var_84_2
                    r13_2 = var_88_3
                    r14_2 = var_90
                
                r13_2 += rsi_1.d + 1
                
                if (r13_2 s> rax_14)
                    sub_140594770(&var_90)
                    r14_2 = var_90
                
                UnDecorator::getReferenceType(r14_2, rbx_4, (rsi_1.d + 1) * 2)
            
            if (&arg2[2] != &var_90)
                int64_t rcx_30 = arg2[2]
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                arg2[2] = r14_2
                arg2[3].d = r13_2
                *(arg2 + 0x1c) = var_84_2
            else if (r14_2 != 0)
                sub_140a74f90(r14_2)
            
            int16_t* r14_3 = rax_12
            uint32_t rcx_32 = zx.d(r14_3[1])
            uint32_t rax_16
            
            if (rcx_32 u>= 2)
                rax_16 = 8
                
                if (rcx_32 u< 8)
                    rax_16 = rcx_32
            else
                rax_16 = 2
            
            arg2[4].d = rax_16
            *(arg2 + 0x24) = *(r14_3 + 4)
            arg2[5].d = 1
            arg2[7].d = 0
            
            if (*(arg2 + 0x3c) s<= 0xffffffff)
                sub_1405dadb0(&arg2[6], 0)
            
            if (*r14_3 != 0xfffe)
                int64_t rsi_5 = sx.q(arg2[7].d)
                int32_t rax_27 = (rsi_5 + 1).d
                arg2[7].d = rax_27
                
                if (rax_27 s> *(arg2 + 0x3c))
                    sub_1405a4cf0(&arg2[6])
                
                *(arg2[6] + (rsi_5 << 2)) = 0
                
                if (arg2[4].d == 2)
                    int64_t rsi_6 = sx.q(arg2[7].d)
                    int32_t rax_29 = (rsi_6 + 1).d
                    arg2[7].d = rax_29
                    
                    if (rax_29 s> *(arg2 + 0x3c))
                        sub_1405a4cf0(&arg2[6])
                    
                    *(arg2[6] + (rsi_6 << 2)) = 1
            else
                int32_t rax_18 = 0
                void* r13_3 = &data_143b4fd00
                int32_t arg_8 = 0
                int32_t rsi_3 = 0
                
                while (true)
                    int32_t rcx_35 = arg2[4].d
                    
                    if (rax_18 u>= rcx_35)
                        break
                    
                    if ((*r13_3 & *(r14_3 + 0x14)) == 0)
                        rax_18 = arg_8
                    else
                        int64_t r14_4 = sx.q(arg2[7].d)
                        int32_t rax_20 = (r14_4 + 1).d
                        arg2[7].d = rax_20
                        
                        if (rax_20 s> *(arg2 + 0x3c))
                            sub_1405a4cf0(&arg2[6])
                        
                        *(arg2[6] + (r14_4 << 2)) = rsi_3
                        rcx_35 = arg2[4].d
                        rax_18 = arg_8 + 1
                        r14_3 = rax_12
                        arg_8 = rax_18
                    
                    rsi_3 += 1
                    r13_3 += 4
                    
                    if (rsi_3 u>= 0x13)
                        if (rax_18 u< rcx_35)
                            int32_t rax_23 = *(arg2 + 0x3c)
                            arg2[7].d = 0
                            
                            if (rax_23 s< 0 && rax_23 != 0)
                                sub_1405dadb0(&arg2[6], 0)
                            
                            int32_t rax_24 = arg2[4].d
                            void* r14_5
                            
                            if (rax_24 != 4)
                                r14_5 = &data_143b4fd80
                                
                                if (rax_24 != 6)
                                    r14_5 = &data_143b4fd50
                                
                                if (rax_24 s> 0)
                                    goto label_1425f88c1
                            else
                                r14_5 = &data_143b4fd70
                            label_1425f88c1:
                                
                                do
                                    int64_t rsi_4 = sx.q(arg2[7].d)
                                    int32_t rax_25 = (rsi_4 + 1).d
                                    arg2[7].d = rax_25
                                    
                                    if (rax_25 s> *(arg2 + 0x3c))
                                        sub_1405a4cf0(&arg2[6])
                                    
                                    int32_t rax_26 = *r14_5
                                    i += 1
                                    r14_5 += 4
                                    *(arg2[6] + (rsi_4 << 2)) = rax_26
                                while (i s< arg2[4].d)
                        
                        break
        else
            rdi = 0x80004005
            int64_t* rax_13 = sub_1425f7e60(&var_80, 0x80004005)
            
            if (rax_13[1].d == 0)
                rcx_22 = &data_142d40450
            else
                rcx_22 = *rax_13
            
            int32_t var_a0_7 = 0x1a6
        label_1425f8679:
            int16_t* const var_a8_3 = rcx_22
            sub_140a2e390(&var_90, u"%s -> 0x%X: %s (line: %d)", u"Result")
            int64_t rcx_25 = var_80
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            int64_t rcx_26 = var_90
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
    else
        int64_t* rax_8 = sub_1425f7e60(&var_80, rax_7)
        
        if (rax_8[1].d == 0)
            rcx_9 = &data_142d40450
            int32_t var_a0_4 = 0x198
        else
            rcx_9 = *rax_8
            int32_t var_a0_3 = 0x198
        
    label_1425f8491:
        int16_t* const var_a8_2 = rcx_9
        sub_140a2e390(&var_90, u"%s -> 0x%X: %s (line: %d)", u"Result")
        int64_t rcx_11 = var_80
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = var_90
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
else
    int64_t* rax_2 = sub_1425f7e60(&var_90, rax_1)
    int16_t* const rcx_3
    
    if (rax_2[1].d == 0)
        rcx_3 = &data_142d40450
    else
        rcx_3 = *rax_2
    
    int32_t var_a0_1 = 0x18f
    int16_t* const var_a8_1 = rcx_3
    sub_140a2e390(&var_80, u"%s -> 0x%X: %s (line: %d)", u"Result")
    int64_t rcx_5 = var_90
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = var_80
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
PropVariantClear(&pvar)
PropVariantClear(&pvar_1)
int64_t* rcx_43 = arg_18

if (rcx_43 != 0)
    (*(*rcx_43 + 0x10))(rcx_43)

return zx.q((rdi u>> 0x1f).b) ^ 1
