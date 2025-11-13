// 函数: sub_141ca74d0
// 地址: 0x141ca74d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int64_t rsi = 0
int64_t rdi = *arg2
int16_t* var_68 = nullptr
int32_t var_60 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_68, rbx, 0)
    memcpy(var_68, rdi, rbx * 2)
else
    int32_t var_5c_1 = 0

char rax
int64_t r9
rax, r9 = sub_140a237d0(&var_68, &data_142d5a024, 0)

if (rax != 0)
    int32_t rax_1 = var_60
    int32_t r10_1 = rax_1 - 1
    
    if (rax_1 == 0)
        r10_1 = 0
    
    if (r10_1 - 1 s< 0)
        r10_1 = 0
    else if (r10_1 - 1 s< r10_1)
        r10_1 -= 1
    
    int32_t rbx_1 = rax_1 - 1
    
    if (rax_1 == 0)
        rbx_1 = 0
    
    int32_t rbx_2 = rbx_1 - r10_1
    
    if (rbx_2 s> 1)
        rbx_2 = 1
    
    if (rbx_2 != 0)
        int32_t rcx_5 = rax_1 - rbx_2
        
        if (rcx_5 != r10_1)
            int16_t* r9_1 = var_68
            memmove(&r9_1[sx.q(r10_1)], &r9_1[sx.q(rbx_2 + r10_1)], (rcx_5 - r10_1) * 2)
            rax_1 = var_60
        
        var_60 = rax_1 - rbx_2

int64_t rax_5 = *(arg1 + 0x28)
r9.b = 1
int64_t* var_48 = nullptr
int64_t var_40 = 0
int64_t* var_58 = nullptr
int64_t* r12 = nullptr
int32_t var_50 = 0
int32_t r15 = 0
(*(rax_5 + 0xd8))(arg1 + 0x28, &var_68, &var_58, r9)
int64_t rbx_3 = sx.q(var_50)
int32_t i_2 = (rbx_3 + 1).d

if (i_2 s> 0)
    sub_1405a4f90(&var_58)

int64_t* rbx_5 = &var_58[rbx_3 * 2]
*rbx_5 = 0
int16_t* r14 = var_68
rbx_5[1].d = var_60

if (var_60 != 0)
    sub_1405a4c70(rbx_5, var_60, 0)
    memcpy(*rbx_5, r14, var_60 * 2)
else
    *(rbx_5 + 0xc) = 0

int64_t* rdi_2 = var_58
void* rax_8 = &rdi_2[sx.q(i_2) * 2]
void* arg_10 = rax_8
uint64_t* arg_8

if (rdi_2 != rax_8)
    do
        int16_t* rdx_7
        
        if (rdi_2[1].d == 0)
            rdx_7 = &data_142d40450
        else
            rdx_7 = *rdi_2
        
        void arg_20
        uint64_t* rbx_6 = *sub_140b58260(&arg_20, rdx_7, 1)
        int32_t rax_10 = *(arg1 + 0xd8)
        arg_8 = rbx_6
        int64_t* rdx_13
        
        if (rax_10 == *(arg1 + 0x104))
        label_141ca76de:
            rdx_13 = nullptr
        else
            int32_t rax_12 = sub_140b5ead0(rbx_6.d) + arg_8:4.d
            void* r8_8 = arg1 + 0x108
            void* rcx_15 = *(r8_8 + 8)
            
            if (rcx_15 != 0)
                r8_8 = rcx_15
            
            int32_t rax_14 = *(r8_8 + (((sx.q(*(arg1 + 0x118)) - 1) & sx.q(rax_12)) << 2))
            
            if (rax_14 == 0xffffffff)
            label_141ca76de_1:
                rdx_13 = nullptr
            else
                while (true)
                    rdx_13 = (sx.q(rax_14) << 5) + *(arg1 + 0xd0)
                    
                    if (*rdx_13 == rbx_6)
                        break
                    
                    rax_14 = rdx_13[3].d
                    
                    if (rax_14 == 0xffffffff)
                        goto label_141ca76de_2
                
                if (rax_14 == 0xffffffff)
                label_141ca76de_2:
                    rdx_13 = nullptr
        
        void* rbx_7 = &rdx_13[1]
        
        if (rdx_13 == 0)
            rbx_7 = nullptr
        
        if (rbx_7 != 0)
            int64_t r14_1 = sx.q(*(rbx_7 + 8))
            
            if (r14_1.d != 0)
                int32_t rdx_14 = r15 + r14_1.d
                
                if (rdx_14 s> var_40:4.d)
                    sub_1405c5570(&var_48, rdx_14)
                    r15 = var_40.d
                    r12 = var_48
                
                memcpy(&r12[sx.q(r15)], *rbx_7, (r14_1 << 3).d)
                r15 += r14_1.d
                var_40.d = r15
        
        rdi_2 = &rdi_2[2]
    while (rdi_2 != arg_10)
    
    rdi_2 = var_58

int64_t* rbx_8 = r12
void* rcx_18 = &r12[sx.q(r15)]
uint64_t r14_5 = (rcx_18 - r12 + 7) u>> 3

if (r12 u> rcx_18)
    r14_5 = 0

if (r14_5 != 0)
    do
        sub_141caa8e0(arg1, *rbx_8)
        rsi += 1
        rbx_8 = &rbx_8[1]
    while (rsi != r14_5)
    
    rdi_2 = var_58

int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_20 = *rdi_2
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        rdi_2 = &rdi_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi_2 = var_58

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

if (r12 != 0)
    sub_140a74f90(r12)

int16_t* rdx_17 = &data_142d40450

if (var_60 != 0)
    rdx_17 = var_68

uint64_t* rdx_18 = *sub_140b58260(&arg_10, rdx_17, 1)
arg_8 = rdx_18
char result = sub_141cab530(arg1 + 0x448, rdx_18)

if (result != 0)
    result = sub_140920c10(arg1 + 0x578, sub_140b63b70(&arg_8, &var_48))
    int64_t* rcx_27 = var_48
    
    if (rcx_27 != 0)
        result = sub_140a74f90(rcx_27)

int16_t* rcx_28 = var_68

if (rcx_28 == 0)
    return result

return sub_140a74f90(rcx_28)
