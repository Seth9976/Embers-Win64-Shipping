// 函数: sub_142b83310
// 地址: 0x142b83310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_928
int64_t rax_1 = __security_cookie ^ &var_928
int32_t r15 = arg3
char var_908_1
char var_907_1
int32_t rbx
uint64_t rdi
int64_t var_900
uint64_t var_8f8

if (arg2 != 1)
    var_8f8 = arg1.q
    memmove(&var_900, &var_8f8, 8)
    rdi = var_900 & 0xfffffffffffff
    
    if ((var_900 & 0x7ff0000000000000) != 0)
        rdi += 0x10000000000000
    
    var_8f8 = arg1.q
    memmove(&var_900, &var_8f8, 8)
    int64_t rbx_2 = var_900
    
    if ((0x7ff0000000000000 & rbx_2) != 0)
        rbx = ((rbx_2 u>> 0x34).d & 0x7ff) - 0x433
    else
        rbx = -0x432
    
    var_8f8 = arg1.q
    memmove(&var_900, &var_8f8, 8)
    int64_t rax_8 = var_900
    
    if ((0xfffffffffffff & rax_8) == 0 && (0x7ff0000000000000 & rax_8) != 0)
        var_907_1 = 1
    
    if ((0xfffffffffffff & rax_8) != 0 || (0x7ff0000000000000 & rax_8) == 0
            || ((rax_8 u>> 0x34).d & 0x7ff) == 1)
        var_907_1 = 0
    
    var_908_1 = 0
    
    if (arg2 == 0)
        var_908_1 = 1
else
    uint128_t zmm6
    zmm6.d = fconvert.s(arg1.q)
    var_900.d = zmm6.d
    memmove(&var_8f8, &var_900, arg2 + 3)
    int32_t rcx_2 = var_8f8.d & 0x7fffff
    var_8f8.d = zmm6.d
    rdi = zx.q(rcx_2 + 0x800000)
    
    if ((var_8f8.d & 0x7f800000) == 0)
        rdi = zx.q(rcx_2)
    
    memmove(&var_900, &var_8f8, arg2 + 3)
    int32_t rax_2 = var_900.d
    
    if ((rax_2 & 0x7f800000) != 0)
        rbx = zx.d((rax_2 u>> 0x17).b) - 0x96
    else
        rbx = -0x95
    
    var_8f8.d = zmm6.d
    memmove(&var_900, &var_8f8, 4)
    int32_t rax_4 = var_900.d
    
    if ((rax_4 & 0x7fffff) != 0 || (rax_4 & 0x7f800000) == 0 || zx.d((rax_4 u>> 0x17).b) == 1)
        var_907_1 = 0
    else
        var_907_1 = 1
    
    var_908_1 = 1
int32_t rcx_8 = rbx
char rax_12 = not.b(rdi.b) & 1
uint64_t rax_13 = rdi

if ((0x10000000000000 & rdi) == 0)
    do
        rax_13 *= 2
        rcx_8 -= 1
    while ((0x10000000000000 & rax_13) == 0)

arg1.q = _mm_cvtepi32_pd(zx.q(rcx_8 + 0x34)).q f* 0.30102999566398114
arg1.q = arg1.q f- 1e-10
int32_t rsi = int.d(ceil(arg1.q))
char* result

if (arg2 != 2 || not.d(rsi) s<= r15)
    void var_8d8
    sub_142b8f430(&var_8d8)
    void var_6b8
    sub_142b8f430(&var_6b8)
    void var_498
    sub_142b8f430(&var_498)
    void var_278
    sub_142b8f430(&var_278)
    void* rcx_15 = &var_8d8
    void* rcx_23
    int32_t rdx_9
    
    if (rbx s>= 0)
        sub_142b8fcd0(rcx_15, rdi)
        sub_142b90760(&var_8d8, rbx)
        sub_142b8fa60(&var_6b8, 0xa, rsi)
        
        if (var_908_1 != 0)
            sub_142b90760(&var_6b8, 1)
            sub_142b90760(&var_8d8, 1)
            sub_142b8fc70(&var_278, 1)
            sub_142b90760(&var_278, rbx)
            sub_142b8fc70(&var_498, 1)
            rdx_9 = rbx
            rcx_23 = &var_498
        label_142b837ae:
            sub_142b90760(rcx_23, rdx_9)
            goto label_142b837b3
    else if (rsi s< 0)
        sub_142b8fa60(rcx_15, 0xa, neg.d(rsi))
        
        if (var_908_1 != 0)
            sub_142b8f800(&var_278, &var_8d8)
            sub_142b8f800(&var_498, &var_8d8)
        
        sub_142b90400(&var_8d8, rdi)
        sub_142b8fc70(&var_6b8, 1)
        sub_142b90760(&var_6b8, neg.d(rbx))
        
        if (var_908_1 != 0)
            sub_142b90760(&var_8d8, 1)
            rdx_9 = 1
            rcx_23 = &var_6b8
            goto label_142b837ae
    else
        sub_142b8fcd0(rcx_15, rdi)
        sub_142b8fa60(&var_6b8, 0xa, rsi)
        sub_142b90760(&var_6b8, neg.d(rbx))
        
        if (var_908_1 != 0)
            sub_142b90760(&var_6b8, 1)
            sub_142b90760(&var_8d8, 1)
            sub_142b8fc70(&var_278, 1)
            sub_142b8fc70(&var_498, 1)
        label_142b837b3:
            
            if (var_907_1 != 0)
                sub_142b90760(&var_6b8, 1)
                sub_142b90760(&var_8d8, 1)
                sub_142b90760(&var_278, 1)
    int32_t rax_17 = sub_142b90530(&var_8d8, &var_278, &var_6b8)
    
    if (rax_12 == 0)
        rax_17.b = rax_17 s> 0
    else
        rax_17.b = rax_17 s>= 0
    
    if (rax_17.b == 0)
        *arg6 = rsi
        sub_142b90310(&var_8d8, 0xa)
        void* rcx_42 = &var_498
        
        if (sub_142b8fe40(&var_498, &var_278) != 0)
            sub_142b90310(rcx_42, 0xa)
            sub_142b90310(&var_278, 0xa)
        else
            sub_142b90310(rcx_42, 0xa)
            sub_142b8f800(&var_278, &var_498)
    else
        *arg6 = rsi + 1
    
    if (arg2 s< 0)
        abort()
        noreturn
    
    char** var_8e8
    
    if (arg2 s<= 1)
        var_8e8.o = *arg4
        void* rbx_9 = &var_498
        
        if (sub_142b8fe40(&var_498, &var_278) != 0)
            rbx_9 = &var_278
        
        *arg5 = 0
        
        while (true)
            char rax_33 = sub_142b8ff60(&var_8d8, &var_6b8)
            int64_t rdx_28 = sx.q(*arg5)
            *arg5 = (rdx_28 + 1).d
            *(rdx_28 + var_8e8) = rax_33 + 0x30
            int32_t rax_34 = sub_142b8fe40(&var_8d8, &var_498)
            void* r8_10 = &var_6b8
            void* rcx_62 = &var_8d8
            int32_t rax_35
            bool rdi_6
            
            if (rax_12 == 0)
                rdi_6 = rax_34 s< 0
                rax_35.b = sub_142b90530(rcx_62, rbx_9, r8_10) s> 0
            else
                rdi_6 = rax_34 s<= 0
                rax_35.b = sub_142b90530(rcx_62, rbx_9, r8_10) s>= 0
            
            int32_t rax_36
            
            if (rdi_6 != 0)
                if (rax_35.b == 0)
                label_142b83bf6:
                    result = *arg4
                    result[sx.q(*arg5)] = 0
                    break
                
                int32_t rax_38 = sub_142b90530(&var_8d8, &var_8d8, &var_6b8)
                
                if (rax_38 s< 0)
                    goto label_142b83bf6
                
                rax_36 = *arg5
                
                if (rax_38 s<= 0)
                    char* rcx_69 = sx.q(rax_36 - 1)
                    char rax_40 = *(rcx_69 + var_8e8)
                    
                    if ((rax_40 & 1) != 0)
                        *(rcx_69 + var_8e8) = rax_40 + 1
                    
                    goto label_142b83bf6
            else if (rax_35.b != 0)
                rax_36 = *arg5
            else
                sub_142b90310(&var_8d8, 0xa)
                sub_142b90310(&var_498, 0xa)
                
                if (&var_498 == rbx_9)
                    continue
                else
                    sub_142b90310(rbx_9, 0xa)
                    continue
            
            char* rcx_66 = sx.q(rax_36 - 1)
            *(rcx_66 + var_8e8) += 1
            result = *arg4
            *(sx.q(*arg5) + result) = 0
            break
    else
        char** rsi_1
        char** r13_2
        
        if (arg2 != 2)
            if (arg2 != 3)
                abort()
                noreturn
            
            r13_2 = arg4
            char* rdi_2 = nullptr
            char* rbx_7 = sx.q(r15 - 1)
            var_8e8.o = *r13_2
            rsi_1 = var_8e8
            
            if (r15 - 1 s> 0)
                do
                    *(rdi_2 + rsi_1) = sub_142b8ff60(&var_8d8, &var_6b8) + 0x30
                    sub_142b90310(&var_8d8, 0xa)
                    rdi_2 = &rdi_2[1]
                while (rdi_2 s< rbx_7)
            
            int16_t rdi_3 = sub_142b8ff60(&var_8d8, &var_6b8)
            
            if (sub_142b90530(&var_8d8, &var_8d8, &var_6b8) s>= 0)
                rdi_3 += 1
            
            rdi_3.b += 0x30
            *(rbx_7 + rsi_1) = rdi_3.b
            
            if (rbx_7 s> 0)
                while (*(rbx_7 + rsi_1) == 0x3a)
                    *(rbx_7 + rsi_1) = 0x30
                    *(rbx_7 + rsi_1 - 1) += 1
                    rbx_7 -= 1
                    
                    if (rbx_7 s<= 0)
                        break
            
            goto label_142b83a89
        
        r13_2 = arg4
        int32_t rcx_49 = *arg6
        int32_t rax_25 = neg.d(rcx_49)
        int128_t zmm0_1 = *r13_2
        var_8e8.o = zmm0_1
        
        if (rax_25 s> r15)
            *arg6 = neg.d(r15)
        label_142b83984:
            *arg5 = 0
            result = *r13_2
            *result = 0
        else if (rax_25 != r15)
            r15 += rcx_49
            var_8e8.o = zmm0_1
            rsi_1 = var_8e8
            char* rdi_4 = nullptr
            char* rbx_8 = sx.q(r15 - 1)
            
            if (r15 - 1 s> 0)
                do
                    *(rdi_4 + rsi_1) = sub_142b8ff60(&var_8d8, &var_6b8) + 0x30
                    sub_142b90310(&var_8d8, 0xa)
                    rdi_4 = &rdi_4[1]
                while (rdi_4 s< rbx_8)
            
            int16_t rdi_5 = sub_142b8ff60(&var_8d8, &var_6b8)
            
            if (sub_142b90530(&var_8d8, &var_8d8, &var_6b8) s>= 0)
                rdi_5 += 1
            
            rdi_5.b += 0x30
            *(rbx_8 + rsi_1) = rdi_5.b
            
            if (rbx_8 s> 0)
                while (*(rbx_8 + rsi_1) == 0x3a)
                    *(rbx_8 + rsi_1) = 0x30
                    *(rbx_8 + rsi_1 - 1) += 1
                    rbx_8 -= 1
                    
                    if (rbx_8 s<= 0)
                        break
            
        label_142b83a89:
            
            if (*rsi_1 == 0x3a)
                *rsi_1 = 0x31
                *arg6 += 1
            
            *arg5 = r15
            result = *r13_2
            *(sx.q(r15) + result) = 0
        else
            sub_142b90310(&var_6b8, 0xa)
            
            if (sub_142b90530(&var_8d8, &var_8d8, &var_6b8) s< 0)
                goto label_142b83984
            
            *var_8e8 = 0x31
            *arg5 = 1
            *arg6 += 1
            result = *r13_2
            result[sx.q(*arg5)] = 0
else
    result = *arg4
    *result = 0
    *arg5 = 0
    *arg6 = neg.d(r15)

__security_check_cookie(rax_1 ^ &var_928)
return result
