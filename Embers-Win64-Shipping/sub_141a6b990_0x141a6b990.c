// 函数: sub_141a6b990
// 地址: 0x141a6b990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t* rdi = arg2
int64_t* r13 = arg3
char* result_2 = sub_141a2aa10(&arg1[4], arg2[1] ^ rdi[2] ^ rdi[3] ^ *rdi, rdi)
int64_t r15 = 0
char* result_1 = result_2
*(result_2 + 0x18) = 0
void* rbx = &result_2[8]

if (*(result_2 + 0x1c) s<= 0xffffffff)
    sub_140809a30(rbx, 0)

int32_t var_a8
sub_141a4b030(&arg1[0x18], &var_a8, rdi)
int64_t rax_2 = sx.q(var_a8)
void* const rax_4

if (rax_2.d == 0xffffffff)
    rax_4 = nullptr
else
    rax_4 = rax_2 * 0x68 + *(arg1 + 0x60)

void* i_3 = rax_4 + 0x10

if (rax_4 == 0)
    i_3 = nullptr

if (i_3 != 0)
    void* i_2 = *(i_3 + 0x40)
    void* i = i_3
    
    if (i_2 != 0)
        i = i_2
    
    for (void* rsi_3 = (sx.q(*(i_3 + 0x48)) << 4) + i; i != rsi_3; i += 0x10)
        sub_141a569e0(arg1, i)
    
    rdi = arg2

sub_141a60c70(&arg1[0x18], rdi)
char* result = sub_140d3c6e0(arg1)

if (result != 0)
    int32_t rcx_6 = arg1[2]
    int32_t rcx_7 = r13[0x66].d
    int128_t var_88 = *rdi
    int32_t* r9_3
    
    if (rcx_7 == *(r13 + 0x35c))
    label_141a6bb59:
        r9_3 = nullptr
    else
        int32_t rax_6 = sub_1405be5b0(&var_88)
        void* r8_2 = &r13[0x6c]
        void* rcx_9 = *(r8_2 + 8)
        
        if (rcx_9 != 0)
            r8_2 = rcx_9
        
        int32_t rax_8 = *(r8_2 + (((sx.q(r13[0x6e].d) - 1) & sx.q(rax_6)) << 2))
        
        if (rax_8 == 0xffffffff)
        label_141a6bb59_1:
            r9_3 = nullptr
        else
            while (true)
                r9_3 = sx.q(rax_8) * 0x30 + r13[0x65]
                
                if (r9_3[4] == rcx_6 && ((r9_3[1] ^ var_88:4.d) | (r9_3[2] ^ var_88:8.d)
                        | (r9_3[3] ^ var_88:0xc.d) | (*r9_3 ^ var_88.d)) == 0)
                    break
                
                rax_8 = r9_3[0xa]
                
                if (rax_8 == 0xffffffff)
                    goto label_141a6bb59_2
            
            if (rax_8 == 0xffffffff)
            label_141a6bb59_2:
                r9_3 = nullptr
    
    void* r8_8 = &r9_3[5]
    
    if (r9_3 == 0)
        r8_8 = nullptr
    
    int64_t var_e8
    void* var_e0
    char var_d8
    void* var_b8
    int128_t var_68
    void* rdi_6
    int128_t* r12_2
    
    if (r8_8 == 0)
        var_d8 = result[0x341]
        int64_t rax_13 = (*(*r13 + 0x78))(r13)
        int64_t r13_1 = rax_13
        int64_t var_a0_1 = rax_13
        void* rax_15 = (*(*result + 0x280))(result)
        r12_2 = arg2
        void* r8_11 = *(rax_15 + 0x60)
        void* r9_5 = r8_11 + sx.q(*(rax_15 + 0x68)) * 0x48
        int64_t var_70
        void var_58
        
        if (r8_11 == r9_5)
        label_141a6bc4e:
            r13 = arg3
            int64_t* rax_24 = (*(*r13 + 0x50))(r13)
            char rax_25
            
            if (rax_24 != 0)
                void** var_50_1 = nullptr
                int32_t var_48_1 = 0
                int32_t var_44_1 = 1
                rax_25 = (*(*rax_24 + 0x10))(rax_24, r12_2, zx.q(arg1[2]), &var_58)
                void** rdx_22 = var_50_1
                void** rsi_7 = &var_58
                
                if (rdx_22 != 0)
                    rsi_7 = rdx_22
                
                uint64_t r14_3 = sx.q(var_48_1) << 3 u>> 3
                
                if (rsi_7 u> &rsi_7[sx.q(var_48_1)])
                    r14_3 = 0
                
                if (r14_3 != 0)
                    do
                        sub_140d3a3a0(&var_b8, *rsi_7)
                        int64_t rdi_5 = sx.q(*(rbx + 0x10))
                        int32_t rax_26 = (rdi_5 + 1).d
                        *(rbx + 0x10) = rax_26
                        
                        if (rax_26 s> *(rbx + 0x14))
                            sub_140809610(rbx, rdi_5.d)
                        
                        void* rax_27 = *(rbx + 8)
                        void* rdx_25 = rbx
                        
                        if (rax_27 != 0)
                            rdx_25 = rax_27
                        
                        rsi_7 = &rsi_7[1]
                        r15 += 1
                        *(rdx_25 + (rdi_5 << 3)) = var_b8
                    while (r15 != r14_3)
                    
                    rdx_22 = var_50_1
                
                if (rdx_22 != 0)
                    sub_140a74f90(rdx_22)
                
                r12_2 = arg2
            
            if (rax_24 != 0 && rax_25 == 0)
                rdi_6 = &arg1[2]
            else
                rdi_6 = &arg1[2]
                void* rax_32 =
                    sub_140d3c6e0(sub_141a4c290((*(*r13 + 0x58))(r13), &var_70, r12_2, rdi_6))
                
                if (rax_32 != 0)
                    sub_140d3a3a0(&var_b8, rax_32)
                    int64_t rdi_7 = sx.q(*(rbx + 0x10))
                    int32_t rax_33 = (rdi_7 + 1).d
                    *(rbx + 0x10) = rax_33
                    
                    if (rax_33 s> *(rbx + 0x14))
                        sub_140809610(rbx, rdi_7.d)
                    
                    void* rax_34 = *(rbx + 8)
                    
                    if (rax_34 != 0)
                        rbx = rax_34
                    
                    *(rbx + (rdi_7 << 3)) = var_b8
                    rdi_6 = &arg1[2]
        else
            void* rdx_20 = r8_11 + 0x18
            
            while (true)
                int32_t rcx_20 = (*(rdx_20 - 8) ^ *r12_2) | (*(rdx_20 - 4) ^ *(r12_2 + 4))
                    | (*(rdx_20 + 4) ^ *(r12_2 + 0xc)) | (*(r12_2 + 8) ^ *rdx_20)
                
                if (rcx_20 == 0)
                    break
                
                r8_11 += 0x48
                rdx_20 += 0x48
                
                if (r8_11 == r9_5)
                    goto label_141a6bc4e
            
            if (r8_11 == 0)
                goto label_141a6bc4e
            
            if ((*(r8_11 + 0x44) | *(r8_11 + 0x40) | *(r8_11 + 0x3c) | *(r8_11 + 0x38)) == 0)
                var_e0 = &var_58
                var_e8 = r13_1
                r13 = arg3
                void** var_50_3 = nullptr
                int32_t var_48_3 = 0
                int32_t var_44_3 = 1
                (*(*arg3 + 0x48))(r13, r12_2, zx.q(arg1[2]), result, var_e8, var_e0, var_d8, 
                    &arg1[2], arg2, arg3)
                void** rcx_50 = var_50_3
                void** rsi_10 = &var_58
                
                if (rcx_50 != 0)
                    rsi_10 = rcx_50
                
                uint64_t r14_6 = sx.q(var_48_3) << 3 u>> 3
                
                if (rsi_10 u> &rsi_10[sx.q(var_48_3)])
                    r14_6 = 0
                
                if (r14_6 != 0)
                    do
                        sub_140d3a3a0(&var_b8, *rsi_10)
                        int64_t rdi_11 = sx.q(*(rbx + 0x10))
                        int32_t rax_64 = (rdi_11 + 1).d
                        *(rbx + 0x10) = rax_64
                        
                        if (rax_64 s> *(rbx + 0x14))
                            sub_140809610(rbx, rdi_11.d)
                        
                        void* rax_65 = *(rbx + 8)
                        void* rdx_45 = rbx
                        
                        if (rax_65 != 0)
                            rdx_45 = rax_65
                        
                        rsi_10 = &rsi_10[1]
                        r15 += 1
                        *(rdx_45 + (rdi_11 << 3)) = var_b8
                    while (r15 != r14_6)
                    
                    rcx_50 = var_50_3
                
                if (rcx_50 != 0)
                    sub_140a74f90(rcx_50)
            else
                int64_t* rsi_8 = arg3
                sub_141a4a6a0(arg1, &var_68, r8_11 + 0x38, rsi_8)
                void* rax_43 = sub_141a2aa80(&arg1[0x18], 
                    *(r8_11 + 0x44) ^ *(r8_11 + 0x40) ^ *(r8_11 + 0x3c) ^ *(r8_11 + 0x38), 
                    r8_11 + 0x38)
                void* rbx_1 = rax_43
                
                if (sub_141a4a1b0(rax_43, r12_2) == 0xffffffff)
                    int64_t rdi_9 = sx.q(*(rbx_1 + 0x48))
                    int32_t rcx_40 = (rdi_9 + 1).d
                    *(rbx_1 + 0x48) = rcx_40
                    
                    if (rcx_40 s> *(rbx_1 + 0x4c))
                        sub_141104d70(rbx_1, rdi_9.d)
                    
                    void* rax_45 = *(rbx_1 + 0x40)
                    
                    if (rax_45 != 0)
                        rbx_1 = rax_45
                    
                    *(rbx_1 + rdi_9 * 0x10) = *r12_2
                
                sub_141a4af70(&arg1[4], &var_a8, r12_2)
                int64_t rax_48 = sx.q(var_a8)
                void* const rax_50
                
                if (rax_48.d == 0xffffffff)
                    rax_50 = nullptr
                else
                    rax_50 = rax_48 * 0x38 + *(arg1 + 0x10)
                
                int64_t* i_1 = var_68.q
                char* result_3 = rax_50 + 0x10
                
                if (rax_50 == 0)
                    result_3 = nullptr
                
                result_1 = result_3
                void* rbx_2 = &i_1[sx.q(var_68:8.d)]
                var_b8 = rbx_2
                
                for (; i_1 != rbx_2; i_1 = &i_1[1])
                    var_a8.q = *i_1
                    
                    if (var_d8 == 0)
                    label_141a6bf19:
                        var_e0 = &var_58
                        void* var_50_2 = nullptr
                        int32_t var_48_2 = 0
                        int32_t var_44_2 = 1
                        var_e8 = r13_1
                        (*(*rsi_8 + 0x48))(rsi_8, arg2, zx.q(arg1[2]), result, var_e8, var_e0, 
                            var_d8, &arg1[2], arg2, arg3)
                        void* rcx_45 = var_50_2
                        void* rsi_9 = &var_58
                        int64_t r14_4 = 0
                        
                        if (rcx_45 != 0)
                            rsi_9 = rcx_45
                        
                        int64_t r13_2 = sx.q(var_48_2) << 3
                        uint64_t r13_3 = r13_2 u>> 3
                        
                        if (rsi_9 u> rsi_9 + r13_2)
                            r13_3 = 0
                        
                        if (r13_3 != 0)
                            do
                                sub_140d3a3a0(&var_70, *rsi_9)
                                int64_t rdi_10 = sx.q(*(result_3 + 0x18))
                                int32_t rax_57 = (rdi_10 + 1).d
                                *(result_3 + 0x18) = rax_57
                                
                                if (rax_57 s> *(result_3 + 0x1c))
                                    sub_140809610(&result_3[8], rdi_10.d)
                                
                                void* rax_58 = *(result_3 + 0x10)
                                void* rdx_41 = &result_3[8]
                                
                                if (rax_58 != 0)
                                    rdx_41 = rax_58
                                
                                rsi_9 += 8
                                r14_4 += 1
                                *(rdx_41 + (rdi_10 << 3)) = var_70
                            while (r14_4 != r13_3)
                            
                            rcx_45 = var_50_2
                            rbx_2 = var_b8
                            result_3 = result_1
                        
                        if (rcx_45 != 0)
                            sub_140a74f90(rcx_45)
                        
                        rsi_8 = arg3
                        r13_1 = var_a0_1
                    else
                        int64_t rax_53 = sub_140d3c6e0(&var_a8)
                        var_a0_1 = rax_53
                        r13_1 = rax_53
                        
                        if (rax_53 != 0)
                            goto label_141a6bf19
                
                r13 = arg3
                r12_2 = arg2
            
            rdi_6 = &arg1[2]
    else
        sub_141a4a790(r13, &var_b8, r8_8, r8_8 + 0x10)
        int64_t rdi_2 = sx.q(*(rbx + 0x10))
        int32_t var_b0
        int64_t rsi_5 = sx.q(var_b0)
        void* r14_1 = var_b8
        int32_t rax_9 = (rdi_2 + rsi_5).d
        *(rbx + 0x10) = rax_9
        
        if (rax_9 s> *(rbx + 0x14))
            sub_140809610(rbx, rdi_2.d)
        
        void* rax_10 = *(rbx + 8)
        
        if (rax_10 != 0)
            rbx = rax_10
        
        memcpy(rbx + (rdi_2 << 3), r14_1, (rsi_5 << 3).d)
        r12_2 = arg2
        rdi_6 = &arg1[2]
    
    result = result_1
    
    if (*(result + 0x18) != 0)
        *result = 1
        void* rax_36 = *(result + 0x10)
        void* r9_8 = &result[8]
        
        if (rax_36 != 0)
            r9_8 = rax_36
        
        int32_t rax_37 = *(result + 0x18)
        int64_t rax_38 = *r13
        var_b8 = r9_8
        var_68 = var_b8.o
        result = (*(rax_38 + 0x68))(r13, r12_2, rdi_6, &var_68, var_e8, var_e0, var_d8, &arg1[2], 
            arg2, arg3, var_b8, rax_37)

__security_check_cookie(rax_1 ^ &var_108)
return result
