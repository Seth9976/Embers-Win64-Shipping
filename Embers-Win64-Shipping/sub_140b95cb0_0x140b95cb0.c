// 函数: sub_140b95cb0
// 地址: 0x140b95cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e82ce8
InitializeCriticalSection(&arg1[1])
SetCriticalSectionSpinCount(&arg1[1], 0xfa0)
void*** arg_8 = arg1
__builtin_memset(&arg1[6], 0, 0x40)
void* rcx_2 = &arg1[0xe]
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
sub_140b99bc0(&arg_8, u"game", &data_143de5830)
sub_140b99bc0(&arg_8, u"engine", &data_143de5780)
arg1[0x16].b = 1
char* rax_1 = sub_140a752e0()
int64_t* rbx = *(rax_1 + 0x30)

if (rbx != 0)
    rbx[1].d += 1

int64_t* rax_2 = sub_140903440(*(rax_1 + 0x28))
int64_t var_58 = 0
int32_t rbp = rax_2[1].d
int64_t r15 = *rax_2
int32_t var_50 = rbp

if (rbp != 0)
    sub_1405a4c70(&var_58, rbp, 0)
    memcpy(var_58, r15, rbp * 2)
else
    int32_t var_4c_1 = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

void var_48
int64_t* rax_6 = sub_140ba7920(arg1, &var_48, &var_58)

if (&arg1[6] != rax_6)
    arg1[6] = *rax_6
    *rax_6 = 0
    int64_t rcx_12 = rax_6[1]
    int64_t* rbx_1 = arg1[7]
    
    if (rcx_12 != rbx_1)
        rax_6[1] = 0
        arg1[7] = rcx_12
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp2_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

char* rax_11 = sub_140a752e0()
void*** rax_12 = sub_140a84c80(0, 0x30, 0)

if (rax_12 != 0)
    rax_12[1] = arg1
    *rax_12 = &data_142d3fe58
    rax_12[2] = sub_140bab1d0
    rax_12[4] = sub_140a387b0()
    *rax_12 = &data_142d3feb0

if (rax_12 != 0)
    sub_140599630(&rax_11[8], 1)
    void arg_10
    (*rax_12)[6](rax_12, &arg_10)
    int64_t rbp_1 = sx.q(*(rax_11 + 0x10))
    int32_t rax_15 = (rbp_1 + 1).d
    *(rax_11 + 0x10) = rax_15
    
    if (rax_15 s> *(rax_11 + 0x14))
        sub_1405a4f90(&rax_11[8])
    
    void** rax_18 = (rbp_1 << 4) + *(rax_11 + 8)
    *rax_18 = rax_12
    rax_18[1].d = 3

void*** rax_19 = sub_140a84c80(0, 0x30, 0)

if (rax_19 != 0)
    *rax_19 = &data_142d3fe58
    rax_19[1] = arg1
    rax_19[2] = sub_140bab0c0
    rax_19[4] = sub_140a387b0()
    *rax_19 = &data_142d3feb0

if (rax_19 != 0)
    sub_140599630(&data_1439a9660, 1)
    void arg_18
    (*rax_19)[6](rax_19, &arg_18)
    int64_t rsi_3 = sx.q(data_1439a9668)
    int32_t rax_22 = (rsi_3 + 1).d
    bool cond:0_1 = rax_22 s<= data_1439a966c
    data_1439a9668 = rax_22
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_1439a9660)
    
    void** rax_25 = (rsi_3 << 4) + data_1439a9660
    *rax_25 = rax_19
    rax_25[1].d = 3

void*** rax_26 = sub_140a84c80(0, 0x30, 0)

if (rax_26 != 0)
    *rax_26 = &data_142d3fe58
    rax_26[1] = arg1
    rax_26[2] = sub_140bab030
    rax_26[4] = sub_140a387b0()
    *rax_26 = &data_142d3feb0

if (rax_26 != 0)
    sub_140599630(&data_1439a9678, 1)
    void arg_20
    (*rax_26)[6](rax_26, &arg_20)
    int64_t rsi_4 = sx.q(data_1439a9680)
    int32_t rax_29 = (rsi_4 + 1).d
    bool cond:1_1 = rax_29 s<= data_1439a9684
    data_1439a9680 = rax_29
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_1439a9678)
    
    void**** rax_32 = (rsi_4 << 4) + data_1439a9678
    *rax_32 = rax_26
    rax_32[1].d = 3

int64_t rcx_22 = var_58

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

return arg1
