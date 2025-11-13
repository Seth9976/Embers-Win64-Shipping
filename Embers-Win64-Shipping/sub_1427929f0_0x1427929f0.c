// 函数: sub_1427929f0
// 地址: 0x1427929f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1
void* arg_18 = arg1
sub_142782a10(arg1[2], arg1[3].d, arg1.b, &arg_18)
int64_t* i = *r14

for (void* rdi = &i[sx.q(r14[1].d)]; i != rdi; i = &i[1])
    void* rax_1 = *i
    *(rax_1 + 0xf0) = 0
    int32_t rax_2 = *(rax_1 + 0x104)
    *(rax_1 + 0x100) = 0
    
    if (rax_2 s< 0 && rax_2 != 0)
        sub_1405c5570(rax_1 + 0xf8, 0)

void* r12 = &r14[0x10]
int32_t rax_3 = *(r12 + 0xc)
*(r12 + 8) = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_1405c5570(r12, 0)

int64_t* i_1 = *r14
int32_t i_11 = 0
void* r10 = &i_1[sx.q(r14[1].d)]
arg_18 = r10

for (; i_1 != r10; i_1 = &i_1[1])
    void* r13_1 = *i_1
    int64_t r9_1 = sx.q(*(r13_1 + 0xc))
    
    if (r9_1.d != 0xffffffff)
        void* const rcx_6
        
        if (r14[7].d == *(r14 + 0x64))
        label_142792b40:
            rcx_6 = nullptr
        else
            void* rcx_4 = r14[0xe]
            void* r8_1 = &r14[0xd]
            
            if (rcx_4 != 0)
                r8_1 = rcx_4
            
            int32_t rax_8 = *(r8_1 + (((sx.q(r14[0xf].d) - 1) & r9_1) << 2))
            
            if (rax_8 == 0xffffffff)
            label_142792b40_1:
                rcx_6 = nullptr
            else
                int64_t r8_2 = r14[6]
                
                while (true)
                    int64_t rdx_5 = sx.q(rax_8) * 3
                    rcx_6 = r8_2 + (rdx_5 << 3)
                    
                    if (*(r8_2 + (rdx_5 << 3)) == r9_1.d)
                        break
                    
                    rax_8 = *(rcx_6 + 0x10)
                    
                    if (rax_8 == 0xffffffff)
                        goto label_142792b40_2
                
                if (rax_8 == 0xffffffff)
                label_142792b40_2:
                    rcx_6 = nullptr
        
        void* r14_1 = *(rcx_6 + 8)
        int64_t rsi_1 = sx.q(*(r14_1 + 0x100))
        int32_t rax_9 = (rsi_1 + 1).d
        *(r14_1 + 0x100) = rax_9
        
        if (rax_9 s> *(r14_1 + 0x104))
            sub_1405a4d70(r14_1 + 0xf8)
            r10 = arg_18
        
        *(*(r14_1 + 0xf8) + (rsi_1 << 3)) = r13_1
        *(*i_1 + 0xf0) = r14_1
        r14 = arg1
    else
        int64_t rbx = sx.q(*(r12 + 8))
        int32_t rax_5 = (rbx + 1).d
        *(r12 + 8) = rax_5
        
        if (rax_5 s> *(r12 + 0xc))
            sub_1405a4d70(r12)
            r10 = arg_18
        
        *(*r12 + (rbx << 3)) = r13_1
    
    i_11 += 1

sub_142790bd0(&r14[0x26], &data_143dbb0c0, i_11)
sub_142790bd0(&r14[0x28], &data_143dbb0c0, i_11)
sub_142790bd0(&r14[0x2a], &data_143dbb0c0, i_11)
r14[0x2d].d = 0

if (*(r14 + 0x16c) != i_11)
    sub_1405c5510(&r14[0x2c], i_11)

if (i_11 s> 0)
    uint64_t i_7 = zx.q(i_11)
    uint64_t i_2
    
    do
        int64_t rdi_1 = sx.q(r14[0x2d].d)
        int32_t rax_12 = (rdi_1 + 1).d
        r14[0x2d].d = rax_12
        
        if (rax_12 s> *(r14 + 0x16c))
            sub_1405daba0(&r14[0x2c])
        
        if (rdi_1 != neg.q(r14[0x2c]))
            *(rdi_1 + r14[0x2c]) = 0
        
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)

r14[5].d = 0

if (*(r14 + 0x2c) != i_11)
    sub_1405dadb0(&r14[4], i_11)

if (i_11 s> 0)
    uint64_t i_8 = zx.q(i_11)
    uint64_t i_3
    
    do
        int64_t rdi_2 = sx.q(r14[5].d)
        int32_t rax_15 = (rdi_2 + 1).d
        r14[5].d = rax_15
        
        if (rax_15 s> *(r14 + 0x2c))
            sub_1405a4cf0(&r14[4])
        
        int32_t* rdx_11 = r14[4] + (rdi_2 << 2)
        
        if (rdx_11 != 0)
            *rdx_11 = 0xffffffff
        
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)

r14[0x2f].d = 0

if (*(r14 + 0x17c) != i_11)
    sub_1405dadb0(&r14[0x2e], i_11)

if (i_11 s> 0)
    uint64_t i_9 = zx.q(i_11)
    uint64_t i_4
    
    do
        int64_t rbx_2 = sx.q(r14[0x2f].d)
        int32_t rax_17 = (rbx_2 + 1).d
        r14[0x2f].d = rax_17
        
        if (rax_17 s> *(r14 + 0x17c))
            sub_1405a4cf0(&r14[0x2e])
        
        int32_t* rdx_14 = r14[0x2e] + (rbx_2 << 2)
        
        if (rdx_14 != 0)
            *rdx_14 = 0xffffffff
        
        i_4 = i_9
        i_9 -= 1
    while (i_4 != 1)

int32_t rax_19 = *(r14 + 0x18c)
int64_t* rbx_3 = r14[0x30]
int32_t i_10 = r14[0x31].d
int32_t rbx_4
void* rdi_3

if (rax_19 s< 0)
    if (i_10 == 0)
        rdi_3 = &r14[0x30]
    else
        int32_t i_5
        
        do
            int64_t rcx_18 = *rbx_3
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            rbx_3 = &rbx_3[2]
            i_5 = i_10
            i_10 -= 1
        while (i_5 != 1)
        rdi_3 = &r14[0x30]
        rax_19 = *(rdi_3 + 0xc)
    
    *(rdi_3 + 8) = 0
    rbx_4 = 0
    
    if (rax_19 != 0)
        sub_1405a5410(rdi_3, 0)
        rbx_4 = r14[0x31].d
else
    if (i_10 != 0)
        int32_t i_6
        
        do
            int64_t rcx_17 = *rbx_3
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            rbx_3 = &rbx_3[2]
            i_6 = i_10
            i_10 -= 1
        while (i_6 != 1)
    
    rdi_3 = &r14[0x30]
    rbx_4 = 0

int32_t rax_20 = rbx_4 + i_11
*(rdi_3 + 8) = rax_20

if (rax_20 s> *(rdi_3 + 0xc))
    sub_1405a4f90(rdi_3)

memset((sx.q(rbx_4) << 4) + *rdi_3, 0, sx.q(i_11) << 4)
int32_t rdx_16 = r14[1].d
int32_t result_2 = 0
int64_t* var_a8 = nullptr
int32_t result_3 = 0
int32_t var_9c = 0

if (rdx_16 s> 0)
    sub_1405c5570(&var_a8, rdx_16)
    result_2 = result_3

int32_t r14_2 = result_2 + 1

if (r14_2 s> var_9c)
    sub_1405a4d70(&var_a8)

int64_t* rcx_26 = var_a8
int32_t r8_9 = 0
int64_t result = sx.q(result_2)
int32_t arg_20 = 0
rcx_26[result] = r12
int32_t arg_10 = 0

if (r14_2 s> 0)
    result = 0
    int64_t result_1 = 0
    
    do
        int64_t* rax_21 = *(rcx_26 + result)
        int64_t r12_1 = 0
        int64_t* rsi_3 = *rax_21
        int64_t* var_90_1 = rsi_3
        uint64_t rdx_19 = sx.q(rax_21[1].d) << 3 u>> 3
        
        if (rsi_3 u> &rsi_3[rax_21[1]])
            rdx_19 = 0
        
        if (rdx_19 != 0)
            void** var_68 = &arg_18
            int32_t* var_60_1 = &arg_10
            int32_t* var_58 = &arg_10
            void** var_50_1 = &arg_18
            void* rbx_5 = &arg1[0x1c]
            void* var_70_1 = rbx_5
            
            do
                void* r13_2 = *rsi_3
                arg_18.d = *(r13_2 + 8)
                int32_t var_80
                sub_1409fa3d0(&arg1[0x12], &var_80, &var_68, nullptr)
                int32_t var_7c
                sub_1409fa3d0(rbx_5, &var_7c, &var_58, nullptr)
                void* rcx_29 = *(r13_2 + 0xf0)
                
                if (rcx_29 != 0)
                    int32_t* rcx_35
                    
                    if (arg1[0x13].d == *(arg1 + 0xc4))
                    label_142792f20:
                        rcx_35 = nullptr
                    else
                        int64_t r9_2 = sx.q(*(rcx_29 + 8))
                        void* r8_12 = &arg1[0x19]
                        void* rdx_22 = *(r8_12 + 8)
                        
                        if (rdx_22 != 0)
                            r8_12 = rdx_22
                        
                        int32_t rax_27 = *(r8_12 + (((sx.q(arg1[0x1b].d) - 1) & r9_2) << 2))
                        
                        if (rax_27 == 0xffffffff)
                        label_142792f20_1:
                            rcx_35 = nullptr
                        else
                            while (true)
                                rcx_35 = (sx.q(rax_27) << 4) + arg1[0x12]
                                
                                if (*rcx_35 == r9_2.d)
                                    break
                                
                                rax_27 = rcx_35[2]
                                
                                if (rax_27 == 0xffffffff)
                                    goto label_142792f20_2
                            
                            if (rax_27 == 0xffffffff)
                            label_142792f20_2:
                                rcx_35 = nullptr
                    
                    int64_t rsi_4 = sx.q(rcx_35[1])
                    int64_t* rbx_8 = (rsi_4 << 4) + *rdi_3
                    int64_t rdi_4 = sx.q(rbx_8[1].d)
                    int32_t rax_28 = (rdi_4 + 1).d
                    rbx_8[1].d = rax_28
                    
                    if (rax_28 s> *(rbx_8 + 0xc))
                        sub_1405a4cf0(rbx_8)
                    
                    *(*rbx_8 + (rdi_4 << 2)) = arg_10
                    *(arg1[0x2e] + (sx.q(arg_10) << 2)) = rsi_4.d
                    rsi_3 = var_90_1
                
                int64_t rax_32 = sx.q(arg_10)
                int32_t rdx_25 = *(r13_2 + 0x100)
                uint64_t* rcx_41 = (rax_32 << 4) + r14[0x30]
                
                if (rdx_25 s> *(rcx_41 + 0xc))
                    sub_1405dadb0(rcx_41, rdx_25)
                    rax_32 = zx.q(arg_10)
                
                arg_10 = rax_32.d + 1
                
                if (*(r13_2 + 0x100) == 0)
                    rcx_26 = var_a8
                else
                    int64_t rbx_9 = sx.q(r14_2)
                    r14_2 = (rbx_9 + 1).d
                    
                    if (r14_2 s> var_9c)
                        sub_1405a4d70(&var_a8)
                    
                    rcx_26 = var_a8
                    rcx_26[rbx_9] = r13_2 + 0xf8
                
                rdi_3 = &r14[0x30]
                rsi_3 = &rsi_3[1]
                rbx_5 = var_70_1
                r12_1 += 1
                var_90_1 = rsi_3
            while (r12_1 != rdx_19)
            
            r8_9 = arg_20
        
        r8_9 += 1
        result = result_1 + 8
        arg_20 = r8_9
        result_1 = result
    while (r8_9 s< r14_2)

if (rcx_26 == 0)
    return result

return sub_140a74f90(rcx_26)
