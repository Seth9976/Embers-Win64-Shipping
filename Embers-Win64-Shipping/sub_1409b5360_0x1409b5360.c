// 函数: sub_1409b5360
// 地址: 0x1409b5360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
int32_t i = 0
int32_t rdx = arg2[1].d
arg3[1].d = 0
void*** r13 = arg1

if (rdx s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, rdx)

void* rcx_1 = r13[5]
sub_1409d93a0(rcx_1 + 0x38, *(rcx_1 + 0x40) - *(rcx_1 + 0x6c) + arg2[1].d)
int32_t* rsi = *arg2
void* rax_2 = &rsi[sx.q(arg2[1].d) * 8]
int32_t* arg_20 = rsi
int64_t var_80
uint64_t arg_18

while (rsi != rax_2)
    void* r12_1 = r13[5]
    int32_t rbx_1 = rsi[6]
    int32_t rdi_1 = *rsi
    
    if (rbx_1 == data_143a1c6b8)
        int32_t var_68 = data_143a1c6b4
        int64_t var_60_1 = 0
        int64_t var_58_1 = 0
        rbx_1 = sub_14090b490(r12_1 + 0x38, &var_68)
        
        if (var_60_1 != 0)
            sub_140a74f90(var_60_1)
        
        sub_141cdb490(r12_1, rbx_1, rdi_1)
    else
        int32_t rsi_1 = data_143a1c6b4
        int32_t* rcx_4 = *(sub_1409ca9d0(r12_1 + 0x38, &var_80, rbx_1) + 8)
        
        if (rcx_4 != 0)
            *rcx_4 = rsi_1
            *(rcx_4 + 8) = 0
            *(rcx_4 + 0x10) = 0
        
        sub_141cdb490(r12_1, rbx_1, rdi_1)
        rsi = arg_20
    
    int64_t rdi_2 = sx.q(arg3[1].d)
    int32_t rax_6 = (rdi_2 + 1).d
    arg3[1].d = rax_6
    
    if (rax_6 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
    
    *(*arg3 + (rdi_2 << 2)) = rbx_1
    int32_t var_90
    sub_1409afd50(&r13[0x99], &var_90)
    int32_t* var_88
    *var_88 = *rsi
    int32_t rax_8 = var_90
    var_88[1] = 0xffffffff
    sub_1409b8a30(&r13[0x99], &arg_18, *var_88, var_88, rax_8, nullptr)
    rsi = &rsi[8]
    arg_20 = rsi

int32_t rax_9 = arg3[1].d
int32_t rbx_2 = 0
int64_t rsi_2 = 0
int32_t rdi_3 = 0
__builtin_memset(&var_80, 0, 0x11)
int32_t var_74

if (rax_9 s> 0)
    sub_1405dadb0(&var_80, rax_9)
    rax_9 = arg3[1].d
    int32_t var_78
    rbx_2 = var_78
    rsi_2 = var_80
    rdi_3 = var_74

int64_t r12_2 = sx.q(rax_9 - 1)

if (rax_9 - 1 s>= 0)
    int32_t r13_1 = var_74
    int64_t temp1_1
    
    do
        uint64_t rax_11 = *arg3
        int64_t rdi_4 = sx.q(rbx_2)
        arg_18 = rax_11
        rbx_2 = (rdi_4 + 1).d
        
        if (rbx_2 s> r13_1)
            sub_1405a4cf0(&var_80)
            rax_11 = arg_18
            rsi_2 = var_80
            r13_1 = var_74
        
        int32_t rax_12 = *(rax_11 + (r12_2 << 2))
        temp1_1 = r12_2
        r12_2 -= 1
        *(rsi_2 + (rdi_4 << 2)) = rax_12
    while (temp1_1 - 1 s>= 0)
    r13 = arg_8
    rdi_3 = var_74

void*** rax_13 = j_sub_140a82f30(0x20)

if (rax_13 == 0)
    rax_13 = nullptr
else
    *rax_13 = &data_142e3f5f8
    rax_13[1] = rsi_2
    rsi_2 = 0
    rax_13[2].d = rbx_2
    *(rax_13 + 0x14) = rdi_3
    char var_70
    rax_13[3].b = var_70

arg_8 = rax_13
sub_1409afc10(r13, &arg_8)

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

int64_t rdi_5 = 0
int64_t* rbx_3 = r13[0x77]
void* result = &rbx_3[r13[0x78]]
uint64_t rsi_4 = sx.q(r13[0x78].d) << 3 u>> 3

if (rbx_3 u> result)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        int64_t* rcx_18 = *rbx_3
        result = (*(*rcx_18 + 0x2f0))(rcx_18, r13, arg3)
        rdi_5 += 1
        rbx_3 = &rbx_3[1]
    while (rdi_5 != rsi_4)

if (arg3[1].d s> 0)
    int64_t r12_3 = 0
    
    do
        int64_t rax_17 = *arg2
        void* j = *(rax_17 + r12_3 + 8)
        result = sx.q(*(rax_17 + r12_3 + 0x10))
        
        for (void* rdi_8 = result * 0x60 + j; j != rdi_8; j += 0x60)
            result = sub_1409de350(r13, *((sx.q(i) << 2) + *arg3), j)
        
        i += 1
        r12_3 += 0x20
    while (i s< arg3[1].d)

return result
