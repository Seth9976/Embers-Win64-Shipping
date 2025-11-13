// 函数: sub_140a11370
// 地址: 0x140a11370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ceffc8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ceffc8)
    
    if (data_143ceffc8 == 0xffffffff)
        data_143ceffc4 = sub_140a54ff0()
        _Init_thread_footer(&data_143ceffc8)

if (data_143ceffc4 == 0)
    return sub_140a11e30(arg1, arg2, arg3) __tailcall

int64_t* rbx = *(arg1 + 0x58)

if (rbx != 0)
    rbx[9].d += 1

if (rbx != 0)
    rbx[9].d += 1

int32_t i_2 = arg2[1].d
int64_t r14_1 = *arg2
int64_t* rsi = nullptr
int64_t* var_90 = nullptr
int32_t i_3 = i_2

if (i_2 != 0)
    sub_1405a4be0(&var_90, i_2, 0)
    rsi = var_90
    int64_t* rax_2 = rsi
    void* r14_2 = r14_1 - rsi
    int32_t i
    
    do
        *rax_2 = *(r14_2 + rax_2)
        void* rcx_2 = *(r14_2 + rax_2 + 8)
        rax_2[1] = rcx_2
        
        if (rcx_2 != 0)
            *(rcx_2 + 8) += 1
        
        rax_2 = &rax_2[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_3
else
    int32_t var_84_1 = 0

int64_t var_68 = 0
void*** rax_3 = sub_140a82f30(0x28, 8)
*rax_3 = &data_142e4d540
rax_3[1] = arg1
rax_3[2] = rbx
rax_3[3] = 0
rax_3[4].d = i_2
int64_t* var_98_1 = nullptr

if (i_2 != 0)
    sub_1405a4be0(&rax_3[3], i_2, 0)
    int64_t* rcx_6 = rax_3[3]
    int32_t i_1
    
    do
        *rcx_6 = *rsi
        void* rax_5 = rsi[1]
        rcx_6[1] = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        rcx_6 = &rcx_6[2]
        rsi = &rsi[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
else
    *(rax_3 + 0x24) = 0

*rax_3 = &data_142e4d560
int64_t (* var_78)(void** arg1)
int64_t (* rax_6)(void** arg1) = var_78

if (rax_3 != -8)
    rax_6 = sub_140a100e0

void var_b8
void** rax_7 = sub_140958c20(&var_b8, nullptr, 0xff)
void* rdx_2 = *rax_7
*(rdx_2 + 0x10) = rax_6
*(rdx_2 + 0x20) = rax_3
int128_t* var_68_2 = nullptr
int128_t var_58
*(rdx_2 + 0x30) = var_58
int128_t var_48
*(rdx_2 + 0x40) = var_48
int64_t (* rax_8)(void** arg1) = rax_6

if (*(rdx_2 + 0x10) != 0)
    rax_8 = nullptr

*(rdx_2 + 0x50) = 0xff
void* rcx_10 = *rax_7
int32_t r8_2 = rax_7[2].d
int64_t* rdx_3 = rax_7[1]
int64_t* rsi_1 = *(rcx_10 + 0x68)
int64_t* arg_20 = rsi_1

if (rsi_1 != 0)
    rsi_1[9].d += 1

void** r9
r9.b = 1
sub_1409787e0(rcx_10, rdx_3, r8_2, r9.b)

if (rax_8 != 0)
    int128_t* rcx_11 = &var_58
    
    if (var_68_2 != 0)
        rcx_11 = var_68_2
    
    (*(*rcx_11 + 0x10))(rcx_11)

if (arg1 + 0x58 != &arg_20)
    int64_t* rcx_12 = *(arg1 + 0x58)
    *(arg1 + 0x58) = rsi_1
    
    if (rcx_12 != 0)
        rcx_12[9].d -= 1
        
        if (rcx_12[9].d == 1)
            sub_140a2f6e0(rcx_12)
else if (rsi_1 != 0)
    rsi_1[9].d -= 1
    
    if (rsi_1[9].d == 1)
        sub_140a2f6e0(arg_20)

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
