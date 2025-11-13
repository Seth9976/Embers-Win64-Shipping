// 函数: sub_14076d750
// 地址: 0x14076d750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* r10 = *(arg4 + 8)
void*** var_98
void*** rbx_2

if (r10[1].d == *(r10 + 0x34))
label_14076d819:
    void*** rax_8 = j_sub_140a82f30(0x18)
    rbx_2 = rax_8
    
    if (rax_8 == 0)
        rbx_2 = nullptr
    else
        *rbx_2 = &data_142d9ad88
        rbx_2[1] = 0
        rbx_2[2] = 0
    
    int64_t* rcx_6 = *(arg4 + 8)
    var_98 = rbx_2
    sub_1406f3ea0(rcx_6, arg4 + 0x24, &var_98)
    void*** rcx_7 = var_98
    
    if (rcx_7 != 0)
        (**rcx_7)(rcx_7, 1)
else
    void* rdx = r10[8]
    void* r8 = &r10[7]
    int32_t rdi_1 = *(arg4 + 0x28)
    int64_t rbx_1 = sx.q(*(arg4 + 0x2c))
    int64_t r11_1 = sx.q(*(arg4 + 0x24))
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_7 = *(r8 + (((sx.q(not.d(rdi_1)) ^ rbx_1 ^ r11_1) & (sx.q(r10[9].d) - 1)) << 2))
    
    if (rax_7 == 0xffffffff)
        goto label_14076d819
    
    int64_t r9 = *r10
    int64_t r8_1
    
    while (true)
        r8_1 = sx.q(rax_7)
        int64_t rcx_5 = r8_1 << 5
        
        if (*(rcx_5 + r9 + 4) != rdi_1 || *(rcx_5 + r9) != r11_1.d || *(rcx_5 + r9 + 8) != rbx_1.d)
            rdx.b = 0
        else
            rdx.b = 1
        
        if (rdx.b != 0)
            break
        
        rax_7 = *(rcx_5 + r9 + 0x18)
        
        if (rax_7 == 0xffffffff)
            goto label_14076d819
    
    if (rax_7 == 0xffffffff)
        goto label_14076d819
    
    int64_t r8_2 = r8_1 << 5
    
    if (r8_2 == neg.q(r9) || r8_2 + r9 == -0x10)
        goto label_14076d819
    
    rbx_2 = *(r8_2 + r9 + 0x10)

int32_t i_1 = rbx_2[2].d

if (i_1 != 0)
    int64_t* rbx_5 = &rbx_2[1][1]
    int32_t i
    
    do
        if (rbx_5[2].b != 0)
            rbx_5[2].b = 0
            int64_t rcx_8 = *rbx_5
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
        
        rbx_5 = &rbx_5[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rsi_1 = 0
rbx_2[2].d = 0

if (*(rbx_2 + 0x14) != 0)
    sub_1405a51b0(&rbx_2[1], 0)

void**** var_70
sub_140758e20(arg5, &var_70, arg2)
void**** r13_1 = var_70
int32_t var_68
void* result = &r13_1[sx.q(var_68)]
void* result_1 = result

if (r13_1 != result)
    do
        var_98 = *r13_1
        result = sub_140d3c6e0(&var_98)
        void* result_3 = result
        
        if (result == 0)
            result_3 = nullptr
        else
            void* rax_13 = sub_14086a680()
            void* rdx_3 = *(result_3 + 0x10)
            result = sx.q(*(rax_13 + 0x38))
            
            if (result.d s> *(rdx_3 + 0x38))
                result_3 = nullptr
            else
                void* result_2 = result
                result = *(rdx_3 + 0x30)
                
                if (*(result + (result_2 << 3)) != rax_13 + 0x30)
                    result_3 = nullptr
        
        if (result_3 != 0)
            int32_t* rax_15 = (*(*(result_3 + 0x418) + 0x30))(result_3 + 0x418, arg1 + 0x20)
            
            if (rax_15 == 0)
            label_14076d97a:
                void* rbx_6 = *(result_3 + 0x408)
                int32_t* rax_18 = (*(*(rbx_6 + 0x300) + 0x30))(rbx_6 + 0x300, arg1 + 0x20)
                
                if (rax_18 != 0)
                    int64_t rax_19 = sx.q(*rax_18)
                    
                    if (rax_19.d != 0xffffffff)
                        rsi_1 = rax_19 + *(rbx_6 + 0x320)
            else
                int64_t rax_16 = sx.q(*rax_15)
                
                if (rax_16.d == 0xffffffff)
                    goto label_14076d97a
                
                rsi_1 = rax_16 + *(result_3 + 0x438)
                
                if (rax_16 == neg.q(*(result_3 + 0x438)))
                    goto label_14076d97a
            
            int64_t var_90 = 0
            int16_t count_3 = *(arg1 + 0x32)
            int64_t r14_1 = 0
            int32_t var_84_1 = 0
            int32_t count_1
            
            if (rsi_1 == 0)
                if (count_3 == 0xffff)
                    if (*(arg1 + 0x28) == 0 || *(arg1 + 0x30) == 1)
                        *(arg1 + 0x32) = 0
                        count_3 = 0
                    else
                        void* rax_23 = sub_140761a70(arg1 + 0x28)
                        int16_t rcx_22 = *(rax_23 + 0x5c)
                        count_3 = (*(rax_23 + 0x58) - 1 + rcx_22) & not.w(rcx_22 - 1)
                        *(arg1 + 0x32) = count_3
                
                int64_t count = sx.q(count_3)
                int32_t count_2 = count.d
                count_1 = count.d
                
                if (count.d s> 0)
                    sub_1405daba0(&var_90)
                    count_1 = count_2
                    r14_1 = var_90
                
                memset(r14_1, 0, count)
            else
                if (count_3 == 0xffff)
                    if (*(arg1 + 0x28) == 0 || *(arg1 + 0x30) == 1)
                        *(arg1 + 0x32) = 0
                        count_3 = 0
                    else
                        void* rax_20 = sub_140761a70(arg1 + 0x28)
                        int16_t rcx_15 = *(rax_20 + 0x5c)
                        count_3 = (*(rax_20 + 0x58) - 1 + rcx_15) & not.w(rcx_15 - 1)
                        *(arg1 + 0x32) = count_3
                
                count_1 = sx.d(count_3)
                
                if (count_1 s> 0)
                    sub_1405daba0(&var_90)
                    count_3 = *(arg1 + 0x32)
                    r14_1 = var_90
                
                if (count_3 != 0xffff)
                    memcpy(r14_1, rsi_1, sx.d(count_3))
                else if (*(arg1 + 0x28) == 0 || *(arg1 + 0x30) == 1)
                    *(arg1 + 0x32) = 0
                    memcpy(r14_1, rsi_1, sx.d(0))
                else
                    void* rax_21 = sub_140761a70(arg1 + 0x28)
                    int16_t rcx_18 = *(rax_21 + 0x5c)
                    int16_t rdx_7 = (*(rax_21 + 0x58) - 1 + rcx_18) & not.w(rcx_18 - 1)
                    *(arg1 + 0x32) = rdx_7
                    memcpy(r14_1, rsi_1, sx.d(rdx_7))
            
            rsi_1 = 0
            int32_t var_60 = 0xffffffff
            int32_t var_5c_1 = 0
            char var_48_1 = 0
            sub_140d3a3a0(&var_60, result_3)
            int64_t var_58
            
            if (var_48_1 != 0)
                int64_t rcx_26 = var_58
                char var_48_2 = 0
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
            
            var_58 = 0
            
            if (count_1 != 0)
                sub_1405da9e0(&var_58, count_1, 0)
                memcpy(var_58, r14_1, count_1)
            else
                int32_t var_4c_1 = 0
            
            int64_t rbx_8 = sx.q(rbx_2[2].d)
            char var_48_3 = 1
            int32_t rax_24 = (rbx_8 + 1).d
            rbx_2[2].d = rax_24
            
            if (rax_24 s> *(rbx_2 + 0x14))
                sub_1405c4e40(&rbx_2[1])
            
            result = var_60.q
            void** rcx_32 = &rbx_2[1][rbx_8 * 4]
            *rcx_32 = result
            rcx_32[3].b = 0
            
            if (var_48_3 != 0)
                rcx_32[1] = 0
                int64_t rsi_4 = var_58
                rcx_32[2].d = count_1
                
                if (count_1 != 0)
                    sub_1405da9e0(&rcx_32[1], count_1, 0)
                    result = memcpy(rcx_32[1], rsi_4, count_1)
                    rsi_1 = 0
                else
                    rsi_1 = 0
                    *(rcx_32 + 0x14) = 0
                
                rcx_32[3].b = 1
                
                if (var_48_3 != 0)
                    int64_t rcx_35 = var_58
                    char var_48_4 = 0
                    
                    if (rcx_35 != 0)
                        result = sub_140a74f90(rcx_35)
            
            if (r14_1 != 0)
                result = sub_140a74f90(r14_1)
        
        r13_1 = &r13_1[1]
    while (r13_1 != result_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
