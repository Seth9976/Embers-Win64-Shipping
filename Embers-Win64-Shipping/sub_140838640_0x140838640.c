// 函数: sub_140838640
// 地址: 0x140838640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax_1 = (*(*arg1 + 0x30))()

if (rax_1 == 0 || *rax_1 == 0xffffffff)
    rax_1.b = 0
    return rax_1

void* rax_2 = arg1[2]
void* rcx = &arg1[2]
int32_t rsi = 0
uint32_t count_1 = 0
int64_t r13 = 0
void* i_1 = (sx.q(*(rcx + 8)) << 5) + rax_2
int32_t r14 = 0
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x14)
int32_t r15 = 0
int64_t var_a8 = 0
uint32_t count_2 = 0
int32_t var_9c = 0
int64_t var_98 = 0
int32_t arg_18 = 0
int32_t var_8c = 0
int64_t var_88 = 0
int32_t var_7c = 0

if (rax_2 != i_1)
    int64_t* r15_1 = rax_2 + 8
    void* i = i_1
    int64_t* var_78_1 = r15_1
    int32_t var_b8_1
    
    do
        int32_t rax_3 = r15_1[2].d
        int64_t rbx_2 = r15_1[-1]
        int16_t rdi = r15_1[1].w
        void* r13_1 = *r15_1
        int64_t var_70 = rbx_2
        void* var_68 = r13_1
        int32_t var_5e_1 = 0xffffffff
        int64_t var_58_1 = 0
        int64_t var_50_1 = 0
        int64_t* rax_4
        
        if (rbx_2 == *arg2)
            if (r13_1 != arg2[1] || rdi != arg2[2].w)
                rax_4.b = 0
            else
                rax_4.b = 1
        
        if (rbx_2 != *arg2 || rax_4.b == 0)
            rax_4.b = 0
        else
            rax_4.b = 1
        
        if (rax_4.b != 0)
            r13 = var_c8
        else
            int64_t var_c0_1
            int64_t rax_10
            int64_t* r15_2
            
            if (sub_140834780(&var_68) == 0)
                void* const rdi_4
                
                if (rdi != 3)
                    void* rax_13
                    int64_t rax_14
                    void* rdx_7
                    
                    if (r13_1 != 0)
                        rax_13 = sub_140be01c0()
                        rdx_7 = *(r13_1 + 0x10)
                        rax_14 = sx.q(*(rax_13 + 0x38))
                    
                    if (r13_1 == 0 || rax_14.d s> *(rdx_7 + 0x38)
                            || *(*(rdx_7 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                        rdi_4 = nullptr
                    else
                        rdi_4 = r13_1
                else
                    rdi_4 = data_143ce3880
                
                void* rax_16 = sub_140d41340()
                int64_t rax_17
                
                if (rax_16 != 0)
                    rax_17 = sx.q(*(rax_16 + 0x38))
                
                if (rax_16 != 0 && rax_17.d s<= *(rdi_4 + 0x38)
                        && *(*(rdi_4 + 0x30) + (rax_17 << 3)) == rax_16 + 0x30)
                    int64_t rdi_5 = sx.q(var_b8_1)
                    int32_t rcx_17 = (rdi_5 + 1).d
                    var_b8_1 = rcx_17
                    
                    if (rcx_17 s> var_7c)
                        sub_1405a4d70(&var_88)
                        var_b8_1 = rcx_17
                    
                    int64_t r14_3 = sx.q(rsi)
                    r15_2 = var_88 + (rdi_5 << 3)
                    *r15_2 = 0
                    rsi = (r14_3 + 1).d
                    var_c0_1.d = rsi
                    
                    if (rsi s> var_c0_1:4.d)
                        sub_1405c4e40(&var_c8)
                        rsi = var_c0_1.d
                    
                    int64_t* rax_22 = (r14_3 << 5) + var_c8
                    *rax_22 = rbx_2
                    rax_22[1] = r13_1
                    rax_22[2].w = rdi
                    *(rax_22 + 0x12) = 0xffffffff
                    rax_22[3].d = rdi_5.d
                    rax_10 = arg1[8]
                    goto label_140838804
                
                int64_t count_4 = sx.q(count_2)
                uint32_t count = sub_14075e990(&var_70)
                int64_t rbx_4 = sx.q(rsi)
                rsi = (rbx_4 + 1).d
                var_c0_1.d = rsi
                
                if (rsi s> var_c0_1:4.d)
                    sub_1405c4e40(&var_c8)
                    rsi = var_c0_1.d
                
                r13 = var_c8
                uint32_t count_3 = count + count_4.d
                int64_t* rcx_26 = (rbx_4 << 5) + r13
                *rcx_26 = var_70
                rcx_26[1] = var_68
                rcx_26[2].w = rdi
                *(rcx_26 + 0x12) = 0xffffffff
                rcx_26[3].d = count_2
                count_2 = count_3
                
                if (count_3 s> var_9c)
                    sub_1405daba0(&var_a8)
                    count_2 = count_3
                
                memcpy(count_4 + var_a8, sx.q(rax_3) + arg1[4], count)
                
                if (var_58_1 != 0)
                    sub_140a74f90(var_58_1)
                
                r14 = arg_18
                i = i_1
            else
                int64_t rdi_1 = sx.q(r14)
                int32_t rcx_2 = (rdi_1 + 1).d
                arg_18 = rcx_2
                
                if (rcx_2 s> var_8c)
                    sub_1405a4d70(&var_98)
                    arg_18 = rcx_2
                
                int64_t r14_1 = sx.q(rsi)
                r15_2 = var_98 + (rdi_1 << 3)
                *r15_2 = 0
                rsi = (r14_1 + 1).d
                var_c0_1.d = rsi
                
                if (rsi s> var_c0_1:4.d)
                    sub_1405c4e40(&var_c8)
                    rsi = var_c0_1.d
                
                int64_t* rax_9 = (r14_1 << 5) + var_c8
                *rax_9 = rbx_2
                rax_9[1] = r13_1
                rax_9[2].w = rdi
                *(rax_9 + 0x12) = 0xffffffff
                rax_9[3].d = rdi_1.d
                rax_10 = arg1[6]
            label_140838804:
                r14 = arg_18
                *r15_2 = *(rax_10 + (sx.q(rax_3) << 3))
                r15_1 = var_78_1
                i = i_1
                r13 = var_c8
        
        r15_1 = &r15_1[4]
        var_78_1 = r15_1
    while (&r15_1[-1] != i)
    
    r15 = var_b8_1
    rcx = &arg1[2]
    count_1 = count_2

sub_140822520(rcx, &var_c8)
int64_t rsi_1

if (&arg1[4] == &var_a8)
    rsi_1 = var_a8
else
    int32_t r8_3 = *(arg1 + 0x2c)
    arg1[5].d = count_1
    
    if (count_1 != 0 || r8_3 != 0)
        sub_1405da9e0(&arg1[4], count_1, r8_3)
        rsi_1 = var_a8
        memcpy(arg1[4], rsi_1, count_1)
    else
        *(arg1 + 0x2c) = count_1
        rsi_1 = var_a8

int64_t r14_2

if (&arg1[6] == &var_98)
    r14_2 = var_98
else
    int32_t r8_4 = *(arg1 + 0x3c)
    arg1[7].d = r14
    
    if (r14 != 0 || r8_4 != 0)
        sub_1405c4a00(&arg1[6], r14, r8_4)
        r14_2 = var_98
        memcpy(arg1[6], r14_2, r14 << 3)
    else
        *(arg1 + 0x3c) = r14
        r14_2 = var_98

int64_t r15_3

if (&arg1[8] == &var_88)
    r15_3 = var_88
else
    int32_t r8_5 = *(arg1 + 0x4c)
    arg1[9].d = r15
    
    if (r15 != 0 || r8_5 != 0)
        sub_1405c4a00(&arg1[8], r15, r8_5)
        r15_3 = var_88
        memcpy(arg1[8], r15_3, r15 << 3)
    else
        *(arg1 + 0x4c) = r15
        r15_3 = var_88

int32_t rdx_6 = ((arg1[5].d + 0xf) & 0xfffffff0) + 0x10

if (*(arg1 + 0x2c) s< rdx_6 && rdx_6 s> *(arg1 + 0x2c))
    sub_1405c5510(&arg1[4], rdx_6)

sub_140835b50(arg1)
*(arg1 + 0xb4) += 1

if (r15_3 != 0)
    sub_140a74f90(r15_3)

if (r14_2 != 0)
    sub_140a74f90(r14_2)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

if (r13 != 0)
    sub_140a74f90(r13)

int64_t rax_12
rax_12.b = 1
return rax_12
