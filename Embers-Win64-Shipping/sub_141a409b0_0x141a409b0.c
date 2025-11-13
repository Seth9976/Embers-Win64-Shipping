// 函数: sub_141a409b0
// 地址: 0x141a409b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* result = arg2
char var_138
sub_141a5aa70(arg1, &var_138, arg3)
char rcx = var_138
int32_t var_12c
int64_t rbx = sx.q(var_12c)
int32_t var_134
int64_t r14 = sx.q(var_134)
char var_130
int64_t rsi

if (rcx == 2 || var_130 == 2)
    rsi.b = 0
else if (r14.d s> rbx.d)
    rsi.b = 1
else if (r14.d != rbx.d || (rcx != 0 && var_130 != 0))
    rsi.b = 0
else
    rsi.b = 1

void* r13_1 = nullptr
int32_t var_5c = 8
int64_t* rax_6 = (*(*arg5 + 8))(arg5, arg4) + 0xd0
void* var_68 = nullptr
int32_t rax_7 = 0
int32_t var_60 = 0
int64_t rdi_1 = r14
int64_t var_100 = r14
int64_t r9 = r14
void var_e8

if (r14 s< rbx)
    int32_t r8 = (rbx - 1).d
    int32_t var_178_1 = r8
    int64_t r15_1 = r14 << 4
    
    do
        int64_t r10_1 = *arg1
        uint64_t var_174
        uint64_t var_16c
        
        if (rdi_1 == r9)
            uint64_t rax_8 = *(r15_1 + r10_1)
            uint64_t rcx_3 = *arg3
            var_16c = rcx_3
            var_174 = rax_8
            void* rdx_2
            
            if (rax_8.b == 2)
                rcx_3 = zx.q(rax_8.b)
                rdx_2 = &var_174:4
            else if (rcx_3.b == 2)
                rdx_2 = &var_16c:4
            else
                uint32_t rdx_4 = (rax_8 u>> 0x20).d
                uint32_t r8_2 = (rcx_3 u>> 0x20).d
                
                if (rdx_4 s< r8_2)
                    r8 = var_178_1
                    rdx_2 = &var_174:4
                    rcx_3 = zx.q(rax_8.b)
                else if (rdx_4 s> r8_2 || rax_8.b != 1)
                    r8 = var_178_1
                    rdx_2 = &var_16c:4
                else
                    r8 = var_178_1
                    rdx_2 = &var_174:4
                    rcx_3 = zx.q(rax_8.b)
            
            if (rcx_3.b != rax_8.b)
                rsi.b = 1
            else if (rcx_3.b != 2 && *rdx_2 != (rax_8 u>> 0x20).d)
                rsi.b = 1
        
        if (r14.d == r8)
            uint64_t rax_10 = *(r15_1 + r10_1 + 8)
            uint64_t rcx_4 = arg3[1]
            var_174 = rcx_4
            var_16c = rax_10
            void* rdx_5
            
            if (rax_10.b == 2)
                rcx_4 = zx.q(rax_10.b)
                rdx_5 = &var_16c:4
            else if (rcx_4.b != 2)
                uint32_t rdx_10 = (rax_10 u>> 0x20).d
                uint32_t r8_5 = (rcx_4 u>> 0x20).d
                
                if (rdx_10 s> r8_5)
                    rcx_4 = zx.q(rax_10.b)
                    rdx_5 = &var_16c:4
                else if (rdx_10 s< r8_5 || rax_10.b != 1)
                    rdx_5 = &var_174:4
                else
                    rcx_4 = zx.q(rax_10.b)
                    rdx_5 = &var_16c:4
            else
                rdx_5 = &var_174:4
            
            if (rcx_4.b != rax_10.b)
                rsi.b = 1
            else if (rcx_4.b != 2 && *rdx_5 != (rax_10 u>> 0x20).d)
                rsi.b = 1
        
        if (rdi_1 s> r9)
            int32_t rax_12 = (r14 - 1).d
            
            if (rax_12 s>= 0 && rax_12 s< arg1[1].d)
                char r8_3 = *(r10_1 + r15_1 - 0x10)
                
                if (r8_3 == 2)
                label_141a40bc9:
                    char rcx_6 = *(r15_1 + r10_1)
                    
                    if (rcx_6 == 2)
                    label_141a40c02:
                        char rdx_8 = *(r10_1 + r15_1 - 8)
                        bool cond:7_1
                        
                        if (rdx_8 == 2 || rcx_6 == 2
                                || *(r10_1 + r15_1 - 4) != *(r15_1 + r10_1 + 4))
                            char rcx_7 = *(r15_1 + r10_1 + 8)
                            
                            if (rcx_7 == 2 || r8_3 == 2
                                    || *(r15_1 + r10_1 + 0xc) != *(r10_1 + r15_1 - 0xc))
                                rsi.b = 1
                            else
                                if (rcx_7 == 1)
                                    cond:7_1 = r8_3 == 0
                                    goto label_141a40c9c
                                
                                if (rcx_7 == 0)
                                    cond:7_1 = r8_3 == 1
                                    goto label_141a40c9c
                                
                                rsi.b = 1
                        else if (rdx_8 == 1)
                            cond:7_1 = rcx_6 == 0
                        label_141a40c9c:
                            
                            if (not(cond:7_1))
                                rsi.b = 1
                        else if (rdx_8 != 0 || rcx_6 != 1)
                            rsi.b = 1
                    else
                        char r9_1 = *(r15_1 + r10_1 + 8)
                        
                        if (r9_1 == 2)
                            goto label_141a40c02
                        
                        int32_t rdx_7 = *(r15_1 + r10_1 + 0xc)
                        int32_t temp2_1 = *(r15_1 + r10_1 + 4)
                        
                        if (temp2_1 s<= rdx_7 && (temp2_1 != rdx_7 || (rcx_6 != 0 && r9_1 != 0)))
                            goto label_141a40c02
                        
                        rsi.b = 1
                else
                    char rdx_6 = *(r10_1 + r15_1 - 8)
                    
                    if (rdx_6 == 2)
                        goto label_141a40bc9
                    
                    int32_t rcx_5 = *(r10_1 + r15_1 - 4)
                    int32_t temp1_1 = *(r10_1 + r15_1 - 0xc)
                    
                    if (temp1_1 s<= rcx_5 && (temp1_1 != rcx_5 || (r8_3 != 0 && rdx_6 != 0)))
                        goto label_141a40bc9
                    
                    rsi.b = 1
        
        int32_t var_124_1 = 0
        int64_t var_150 = 0.q
        int32_t var_11c_1 = 0
        int64_t rax_16 = 0.q
        
        if (sub_141a574e0(sx.q(r14.d) * 0x70 + arg1[4], rax_6, arg5, &var_150, nullptr) != 0)
            char rax_19 = var_150.b
            rsi.b = 1
            
            if (rax_19 == 2)
            label_141a40d15:
                int64_t rbx_1 = sx.q(var_60)
                int32_t rax_20 = (rbx_1 + 1).d
                var_60 = rax_20
                
                if (rax_20 s> var_5c)
                    sub_14088f800(&var_e8, rbx_1.d)
                
                void* rcx_12 = &var_e8
                
                if (var_68 != 0)
                    rcx_12 = var_68
                
                *(rcx_12 + rbx_1 * 0x10) = var_150.o
            else
                char rcx_10 = rax_16.b
                
                if (rcx_10 == 2)
                    goto label_141a40d15
                
                int32_t rdx_12 = var_150:4.d
                int32_t temp0_1 = rax_16:4.d
                
                if (rdx_12 s<= temp0_1)
                    if (rdx_12 != temp0_1)
                        goto label_141a40d15
                    
                    if (rax_19 != 0 && rcx_10 != 0)
                        goto label_141a40d15
        
        r9 = var_100
        r14 = zx.q(r14.d + 1)
        r8 = var_178_1
        rdi_1 += 1
        r15_1 += 0x10
    while (rdi_1 s< rbx)
    
    rax_7 = var_60
    r13_1 = var_68
    result = arg2

void* rbx_2 = &var_e8

if (r13_1 != 0)
    rbx_2 = r13_1

void* rdi_4 = (sx.q(rax_7) << 4) + rbx_2

if (rbx_2 != rdi_4)
    do
        sub_141a56880(arg1, rbx_2)
        rbx_2 += 0x10
    while (rbx_2 != rdi_4)
    
    r13_1 = var_68

if (rsi.b == 0)
    *result = var_138.o
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
else
    int64_t* rbx_3
    
    if (data_143f2a8f4 == 0)
        rbx_3 = arg3
        var_138.o = *rbx_3
        sub_141a3e2b0(&var_138, arg4, arg5)
    else
        sub_141a3d400(arg4, arg5)
        rbx_3 = arg3
    
    sub_141a5aa70(arg1, result, rbx_3)
    
    if (var_68 != 0)
        sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
