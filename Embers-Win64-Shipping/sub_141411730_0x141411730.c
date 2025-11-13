// 函数: sub_141411730
// 地址: 0x141411730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = arg1
*arg1 = &data_142f7e2b8
int64_t* rcx = arg2[4]
int64_t rax_1

if (rcx == 0)
    rax_1 = 0
else
    rax_1 = (*(*rcx + 0x248))(rcx)

result[1] = rax_1
void* r15 = &result[2]
*r15 = 0
int64_t rbx = sx.q(arg2[1].d)
int64_t rsi = *arg2
*(r15 + 8) = rbx.d

if (rbx.d != 0)
    sub_1405c4a00(r15, rbx.d, 0)
    memcpy(*r15, rsi, (rbx << 3).d)
else
    *(r15 + 0xc) = 0

*(r15 + 0x10) = arg2[2].d
*(r15 + 0x18) = arg2[3]
*(r15 + 0x20) = arg2[4]
*(r15 + 0x28) = arg2[5]
*(r15 + 0x30) = arg2[6].d
*(r15 + 0x34) = *(arg2 + 0x34)
*(r15 + 0x38) = arg2[7].d
*(r15 + 0x3c) = *(arg2 + 0x3c)
*(r15 + 0x40) = arg2[8].b
*(r15 + 0x41) = *(arg2 + 0x41)
*(r15 + 0x42) = *(arg2 + 0x42)
*(r15 + 0x43) = *(arg2 + 0x43)
*(r15 + 0x44) = *(arg2 + 0x44)
*(r15 + 0x48) = arg2[9].d
*(r15 + 0x4c) = *(arg2 + 0x4c)
*(r15 + 0x50) = arg2[0xa].b
*(r15 + 0x51) = *(arg2 + 0x51)
*(r15 + 0x54) = *(arg2 + 0x54)
*(r15 + 0x58) = arg2[0xb]
*(r15 + 0x60) = 0
int32_t i_4 = arg2[0xd].d
int64_t* rbx_1 = arg2[0xc]
*(r15 + 0x68) = i_4

if (i_4 != 0)
    sub_1405a4be0(r15 + 0x60, i_4, 0)
    int64_t* rcx_4 = *(r15 + 0x60)
    int32_t i
    
    do
        *rcx_4 = *rbx_1
        void* rax_22 = rbx_1[1]
        rcx_4[1] = rax_22
        
        if (rax_22 != 0)
            *(rax_22 + 8) += 1
        
        rcx_4 = &rcx_4[2]
        rbx_1 = &rbx_1[2]
        i = i_4
        i_4 -= 1
    while (i != 1)
else
    *(r15 + 0x6c) = 0

void* rsi_1 = &result[0x14]
*(r15 + 0x70) = arg2[0xe]
*(r15 + 0x78) = arg2[0xf].d
*(r15 + 0x7c) = *(arg2 + 0x7c)
*(r15 + 0x80) = arg2[0x10].d
*(r15 + 0x88) = arg2[0x11]
*rsi_1 = 0
*(rsi_1 + 8) = 0
sub_1422d6a20(&result[0x16], sub_1422e48a0(arg2))
sub_1422d6a20(&result[0x3a], sub_1422e48a0(arg2))
__builtin_memset(&result[0x5e], 0, 0x50)
result[0x6c] = 0
result[0x6d].d = 0
*(result + 0x36c) = 4
__builtin_memset(&result[0x6e], 0, 0x28)
*(result + 0x399) = 0
result[0x74] = 0
result[0x75] = 0
result[0x77].d = 0
result[0x78] = 0
result[0x79] = 0
result[0x7a].d = 1
int64_t* rcx_9 = result[1]
int32_t rax_30

if (rcx_9 == 0)
    rax_30 = data_14399fa50
else
    rax_30 = (*(*rcx_9 + 0x2c8))(rcx_9)

*(result + 0x4c) = rax_30
int64_t r13
r13.b = 0
int32_t i_3 = *(rsi_1 + 8)
int32_t r12 = arg2[1].d
void* rbx_2 = *rsi_1

if (i_3 != 0)
    int32_t i_1
    
    do
        sub_141413290(rbx_2)
        rbx_2 += 0x5240
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(rsi_1 + 8) = 0

if (*(rsi_1 + 0xc) != r12)
    sub_141427be0(rsi_1, r12)

int32_t i_2 = 0

if (arg2[1].d s> 0)
    void*** r12_1 = nullptr
    
    do
        int64_t rbx_3 = sx.q(*(rsi_1 + 8))
        int32_t rax_31 = (rbx_3 + 1).d
        *(rsi_1 + 8) = rax_31
        
        if (rax_31 s> *(rsi_1 + 0xc))
            sub_1414279e0(rsi_1)
        
        int64_t rcx_13 = rbx_3 * 0x5240
        void** rdx_9
        
        if (rcx_13 == neg.q(*rsi_1))
            rdx_9 = nullptr
        else
            rdx_9 = sub_1414122d0(rcx_13 + *rsi_1, *(r12_1 + *arg2))
        
        *(r12_1 + *r15) = rdx_9
        r13.b |= rdx_9[0x1af].b
        int64_t* rcx_15 = rdx_9[0x4a]
        *rdx_9 = r15
        
        if (rcx_15 != 0)
            void** var_60_1 = rdx_9
            void** const var_68 = &data_142f29fd0
            void** var_58_1 = rdx_9
            void* var_40_1 = &rdx_9[0x4de]
            int64_t* var_50_1 = nullptr
            int64_t r8
            int64_t var_48_1 = r8
            (**rcx_15)(rcx_15, rdx_9, &var_68)
            
            if (var_50_1 != 0)
                var_50_1[1].d -= 1
                
                if (var_50_1[1].d == 1)
                    (**var_50_1)(var_50_1, 1)
        
        i_2 += 1
        r12_1 = &r12_1[1]
    while (i_2 s< arg2[1].d)
    
    result = arg1

if ((result[7].d & 0x40000) != 0)
    sub_1422f6770(r15)

result[0x13] = 0
int64_t* rcx_18 = arg2[0x11]
result[0x13] = (*(*rcx_18 + 0x10))(rcx_18, r15)

if (r13.b != 0)
    result[9].d = 0
    result[8].d = 0

int64_t* rcx_19 = data_143ec8300

if (rcx_19 != 0)
    int32_t rbp = 0
    
    if (result[0x15].d s> 0)
        int64_t r15_1 = 0
        
        while (true)
            void* rbx_5 = *rsi_1 + r15_1
            rbp += 1
            r15_1 += 0x5240
            *(rbx_5 + 0x5160) = (**rcx_19)()
            
            if (rbp s>= result[0x15].d)
                break
            
            rcx_19 = data_143ec8300

int64_t* rcx_20 = arg2[3]
char rax_42 = (*(*rcx_20 + 0x30))(rcx_20)
void* rcx_21 = result[1]
result[0x73].b = rax_42
result[0x76].d = *(rcx_21 + 8)
*(result + 0x3b4) = (*U"1111")[sx.q(*(rcx_21 + 8))]
int32_t rax_45
rax_45.b = data_143eceb30 != 0
*(result + 0x3d4) = rax_45.b
data_143eceb30 = 0
return result
