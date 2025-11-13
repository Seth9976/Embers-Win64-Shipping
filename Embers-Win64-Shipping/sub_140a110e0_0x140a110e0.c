// 函数: sub_140a110e0
// 地址: 0x140a110e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    rbx[9].d += 1

if (rbx != 0)
    rbx[9].d += 1

int32_t i_2 = arg2[1].d
int64_t r14 = *arg2
int64_t* rsi = nullptr
int64_t* var_90 = nullptr
int32_t i_3 = i_2

if (i_2 != 0)
    sub_1405a4be0(&var_90, i_2, 0)
    rsi = var_90
    int64_t* rax_1 = rsi
    void* r14_1 = r14 - rsi
    int32_t i
    
    do
        *rax_1 = *(r14_1 + rax_1)
        void* rcx_2 = *(r14_1 + rax_1 + 8)
        rax_1[1] = rcx_2
        
        if (rcx_2 != 0)
            *(rcx_2 + 8) += 1
        
        rax_1 = &rax_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_3
else
    int32_t var_84_1 = 0

int64_t var_68 = 0
void*** rax_2 = sub_140a82f30(0x28, 8)
*rax_2 = &data_142e4d540
rax_2[1] = arg1
rax_2[2] = rbx
rax_2[3] = 0
rax_2[4].d = i_2
int64_t* var_98_1 = nullptr

if (i_2 != 0)
    sub_1405a4be0(&rax_2[3], i_2, 0)
    int64_t* rcx_6 = rax_2[3]
    int32_t i_1
    
    do
        *rcx_6 = *rsi
        void* rax_4 = rsi[1]
        rcx_6[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        rcx_6 = &rcx_6[2]
        rsi = &rsi[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
else
    *(rax_2 + 0x24) = 0

*rax_2 = &data_142e4d560
int64_t (* var_78)(int64_t** arg1)
int64_t (* rax_5)(int64_t** arg1) = var_78

if (rax_2 != -8)
    rax_5 = sub_140a10140

void var_b8
void** rax_6 = sub_140958c20(&var_b8, nullptr, 0xff)
void* rdx_2 = *rax_6
*(rdx_2 + 0x10) = rax_5
*(rdx_2 + 0x20) = rax_2
int128_t* var_68_2 = nullptr
int128_t var_58
*(rdx_2 + 0x30) = var_58
int128_t var_48
*(rdx_2 + 0x40) = var_48
int64_t (* rax_7)(int64_t** arg1) = rax_5

if (*(rdx_2 + 0x10) != 0)
    rax_7 = nullptr

*(rdx_2 + 0x50) = 0xff
void* rcx_10 = *rax_6
int32_t r8 = rax_6[2].d
int64_t* rdx_3 = rax_6[1]
int64_t* rsi_1 = *(rcx_10 + 0x68)
int64_t* arg_10 = rsi_1

if (rsi_1 != 0)
    rsi_1[9].d += 1

void** r9
r9.b = 1
sub_1409787e0(rcx_10, rdx_3, r8, r9.b)

if (rax_7 != 0)
    int128_t* rcx_11 = &var_58
    
    if (var_68_2 != 0)
        rcx_11 = var_68_2
    
    (*(*rcx_11 + 0x10))(rcx_11)

if (arg1 + 0x10 != &arg_10)
    int64_t* rcx_12 = *(arg1 + 0x10)
    *(arg1 + 0x10) = rsi_1
    
    if (rcx_12 != 0)
        rcx_12[9].d -= 1
        
        if (rcx_12[9].d == 1)
            sub_140a2f6e0(rcx_12)
else if (rsi_1 != 0)
    rsi_1[9].d -= 1
    
    if (rsi_1[9].d == 1)
        sub_140a2f6e0(arg_10)

int32_t result = sub_140596d80(&var_90)

if (var_98_1 != 0)
    result = var_98_1[9].d
    var_98_1[9].d -= 1
    
    if (result == 1)
        result = sub_140a2f6e0(var_98_1)

if (rbx != 0)
    rbx[9].d -= 1
    
    if (rbx[9].d == 1)
        return sub_140a2f6e0(rbx)

return result
