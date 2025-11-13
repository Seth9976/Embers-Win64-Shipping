// 函数: sub_1407441e0
// 地址: 0x1407441e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d40488
int32_t rsi = 0
arg1[1].d = GetCurrentThreadId()
int16_t* var_38 = nullptr
int64_t var_30 = 0
*arg1 = &data_142d9ef48
int16_t* r15 = nullptr
arg1[2] = 0
arg1[3] = 0
__builtin_memset(&arg1[4], 0, 0x20)
int32_t r12 = arg1[1].d

if (r12 == data_143de5470)
    sub_1405947f0(&var_38, 0xb)
    int32_t rax_1 = var_30.d + 0xb
    var_30.d = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_38)
    
    r15 = var_38
    __builtin_wcscpy(r15, u"GameThread")
    goto label_14074434a

if (r12 == data_143de5474)
    sub_1405947f0(&var_38, 0xd)
    int32_t rax_2 = var_30.d + 0xd
    var_30.d = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_38)
    
    r15 = var_38
    __builtin_wcscpy(r15, u"RenderThread")
    goto label_14074434a

sub_140a755d0()
int64_t* rax_3 = sub_140a7c900(&data_143db7b50, r12)
int16_t* const r8_3

if (&var_38 == rax_3)
    r8_3 = &data_142d40450
else
    int32_t r12_1 = rax_3[1].d
    int64_t r13_1 = *rax_3
    var_30.d = r12_1
    
    if (r12_1 == 0)
        r8_3 = &data_142d40450
    else
        sub_1405a4c70(&var_38, r12_1, 0)
        r15 = var_38
        memcpy(r15, r13_1, r12_1 * 2)
    label_14074434a:
        r8_3 = r15
        
        if (var_30.d == 0)
            r8_3 = &data_142d40450

arg1[1].d
sub_140a2e390(&var_38, u"NiagaraCRInfo_%s_%u", r8_3)

if (&arg1[2] == &var_38)
    int16_t* rcx_8 = var_38
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
else
    int64_t rcx_7 = arg1[2]
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    arg1[2] = var_38
    arg1[3].d = var_30.d
    *(arg1 + 0x1c) = var_30:4.d

int64_t* rax_7 = sub_140a300d0(&arg1[2], &var_38, &data_142d404d4, &data_142d99650, 1)

if (&arg1[2] != rax_7)
    int64_t rcx_10 = arg1[2]
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    arg1[2] = *rax_7
    *rax_7 = 0
    arg1[3].d = rax_7[1].d
    *(arg1 + 0x1c) = *(rax_7 + 0xc)
    rax_7[1] = 0

int16_t* rcx_12 = var_38

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

if (arg1[4] != u"None")
    arg1[5].d = 0
    
    if (*(arg1 + 0x2c) != 5)
        sub_1405947f0(&arg1[4], 5)
        rsi = arg1[5].d
    
    arg1[5].d = rsi + 5
    
    if (rsi + 5 s> *(arg1 + 0x2c))
        sub_140594770(&arg1[4])
    
    __builtin_wcscpy(arg1[4], u"None")

EnterCriticalSection(&data_143cdfd68)
int64_t* rdx_7 = data_143cdfd90
int64_t rdi_1 = sx.q(data_143cdfd98)
int64_t* rcx_16 = rdx_7
void* r8_4 = &rdx_7[rdi_1]

if (rdx_7 != r8_4)
    while (*rcx_16 != arg1)
        rcx_16 = &rcx_16[1]
        
        if (rcx_16 == r8_4)
            goto label_1407444bd

if (rdx_7 == r8_4 || ((rcx_16 - rdx_7) s>> 3).d == 0xffffffff)
label_1407444bd:
    int32_t rax_11 = (rdi_1 + 1).d
    bool cond:1_1 = rax_11 s<= data_143cdfd9c
    data_143cdfd98 = rax_11
    
    if (not(cond:1_1))
        sub_1405a4d70(&data_143cdfd90)
        rdx_7 = data_143cdfd90
    
    rdx_7[rdi_1] = arg1

LeaveCriticalSection(&data_143cdfd68)

if (r15 != 0)
    sub_140a74f90(r15)

return arg1
