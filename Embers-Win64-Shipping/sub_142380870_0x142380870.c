// 函数: sub_142380870
// 地址: 0x142380870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143336548
int32_t arg_8 = 0
char rsi = 0
void*** rax = j_sub_140a82f30(0x1b8)
void*** rax_1

if (rax == 0)
    rax_1 = nullptr
else
    memset(rax, 0, 0x1b8)
    rax_1 = sub_14237e5e0(rax)

arg1[1] = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1

__builtin_memset(&arg1[2], 0, 0x1c)
void*** rax_2 = j_sub_140a82f30(0x38)
void*** rbx_1 = rax_2
void*** var_28
int32_t var_20

if (rax_2 == 0)
    rbx_1 = nullptr
else
    var_28 = nullptr
    void*** rax_3 = sub_140a84c80(0, 0x20, 0)
    var_28 = rax_3
    var_20 = 2
    
    if (rax_3 != 0)
        rax_3[1] = arg1
        *rax_3 = &data_143336d48
        rax_3[3] = sub_140a387b0()
        *rax_3 = &data_143336da0
    
    rbx_1[1].d = 0
    *rbx_1 = &data_143336930
    sub_1423a4c80(&rbx_1[2], &var_28)
    rbx_1[6].d = 0
    rsi = 1

int64_t* rcx_3 = arg1[2]
arg1[2] = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        (**rcx_3)(rcx_3, 1)

if ((rsi & 1) != 0)
    void*** rax_7
    
    if (var_20 == 0)
        rax_7 = var_28
    label_1423809df:
        
        if (rax_7 != 0)
            sub_140a74f90(rax_7)
    else
        void*** rcx_4 = var_28
        
        if (rcx_4 != 0)
            (*rcx_4)[7](rcx_4, 0)
            rax_7 = var_28
            
            if (rax_7 != 0)
                rax_7 = sub_140a84c80(rax_7, 0, 0)
                var_28 = rax_7
            
            int32_t var_20_1 = 0
            goto label_1423809df

void* rbx_2 = arg1[2]

if (rbx_2 != 0)
    *(rbx_2 + 8) += 1

int64_t rbp = sx.q(*(arg2 + 0x18))
int32_t rax_8 = (rbp + 1).d
*(arg2 + 0x18) = rax_8

if (rax_8 s> *(arg2 + 0x1c))
    sub_1405a4d70(arg2 + 0x10)

*(*(arg2 + 0x10) + (rbp << 3)) = rbx_2
void*** rax_10 = j_sub_140a82f30(0x20)

if (rax_10 == 0)
    rax_10 = nullptr
else
    rax_10[1].d = 0
    *rax_10 = &data_143336938
    rax_10[2] = 0
    rax_10[3].d = 0

int64_t* rcx_8 = arg1[3]
arg1[3] = rax_10

if (rax_10 != 0)
    rax_10[1].d += 1

if (rcx_8 != 0)
    rcx_8[1].d -= 1
    
    if (rcx_8[1].d == 1)
        (**rcx_8)(rcx_8, 1)

void* rbx_3 = arg1[3]

if (rbx_3 != 0)
    *(rbx_3 + 8) += 1

int64_t rbp_1 = sx.q(*(arg2 + 0x28))
int32_t rax_12 = (rbp_1 + 1).d
*(arg2 + 0x28) = rax_12

if (rax_12 s> *(arg2 + 0x2c))
    sub_1405a4d70(arg2 + 0x20)

*(*(arg2 + 0x20) + (rbp_1 << 3)) = rbx_3
return arg1
