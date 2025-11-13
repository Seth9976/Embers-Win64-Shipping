// 函数: sub_142403e10
// 地址: 0x142403e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbp = &data_142d40450
int16_t* const r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

sub_140b44040(0, u"Cmd: %s", r8)
int64_t* arg_8 = arg2
sub_140688b80(&arg1[0xd], &arg_8)
int64_t r14 = sx.q(arg1[0xe].d)
int32_t rax = (r14 + 1).d
arg1[0xe].d = rax

if (rax s> *(arg1 + 0x74))
    sub_1405a4f90(&arg1[0xd])

sub_140596d10((r14 << 4) + arg1[0xd], arg2)
int32_t r8_1 = arg1[0xe].d

if (r8_1 u> 0x32)
    sub_1406a4a20(&arg1[0xd], 0, r8_1 - 0x32, 1)

sub_140ce6d40(arg1, 0x4000, nullptr, data_143ddb400)

if (arg2[1].d != 0)
    rbp = *arg2

int64_t var_28
sub_140a2e390(&var_28, u"\n>>> %s <<<", rbp)
(*(*arg1 + 0x280))(arg1, &var_28)
int64_t rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* rsi = nullptr
void* rcx_10 = nullptr

if (((arg1[1].d u>> 4).b & 1) == 0)
    rcx_10 = arg1[4]

void* rax_4 = TPI1::cbTotal(rcx_10)
void* rcx_11 = arg1[7]
int64_t result

if (rcx_11 == 0)
    int64_t* rax_6
    
    if (rax_4 != 0)
        rax_6 = sub_142029890(rax_4, 0)
    
    if (rax_4 == 0 || rax_6 == 0)
        if (((arg1[1].d u>> 4).b & 1) == 0)
            rsi = arg1[4]
        
        result = (*(*rsi + 0x2d0))(rsi, &var_28, arg2)
    else
        int64_t* rax_7
        int64_t r9_4
        rax_7, r9_4 = sub_142029890(rax_4, 0)
        r9_4.b = 1
        result = (*(*rax_7 + 0xc20))(rax_7, &var_28, arg2, r9_4)
else
    int64_t* rcx_12 = *(rcx_11 + 0x30)
    int64_t r9_3
    r9_3.b = 1
    result = (*(*rcx_12 + 0xc20))(rcx_12, &var_28, arg2, r9_3)

int64_t rcx_17 = var_28

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
