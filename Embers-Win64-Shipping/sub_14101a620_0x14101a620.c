// 函数: sub_14101a620
// 地址: 0x14101a620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg9
int32_t* r11 = nullptr
int64_t* rdi = arg7
int128_t* rbx = nullptr
*arg1 = 0
int128_t* var_88 = nullptr
int32_t rdx_2 = rsi[1].d + 4 + arg3[1].d + arg4[1].d + arg6[1].d + rdi[1].d
int64_t var_80 = 0

if (rdx_2 s> 0)
    var_80.d = rdx_2
    sub_1405a4f90(&var_88)
    rbx = var_88
    r11 = nullptr
else if (rdx_2 s< 0 && rdx_2 != 0)
    var_80.d = rdx_2
    sub_1405a5010(&var_88)
    rbx = var_88
    r11 = nullptr

int32_t rax_1 = arg4[1].d
int128_t* r14 = nullptr
var_88 = nullptr
int64_t var_80_1 = 0

if (rax_1 s> 0)
    var_80_1.d = rax_1
    sub_1405a4df0(&var_88)
    r14 = var_88
    r11 = nullptr
else if (rax_1 s< 0 && rax_1 != 0)
    var_80_1.d = rax_1
    sub_1405fde90(&var_88)
    r14 = var_88
    r11 = nullptr

int32_t rax_2 = 0
int64_t* rdx_5 = *arg3
int64_t r8 = 0
uint64_t r9_1 = sx.q(arg3[1].d) << 3 u>> 3

if (rdx_5 u> &rdx_5[arg3[1]])
    r9_1 = 0

if (r9_1 != 0)
    do
        int64_t rcx_10 = *rdx_5
        rdx_5 = &rdx_5[1]
        var_88 = 5
        int64_t var_80_2 = rcx_10 + 0xd8
        r8 += 1
        int64_t rcx_12 = sx.q(rax_2)
        rax_2 += 1
        rbx[rcx_12] = var_88.o
    while (r8 != r9_1)

int32_t arg_8 = arg5
int32_t* var_80_3 = &arg_8
int64_t rdx_7 = sx.q(rax_2) * 2
var_88.d = 9
int32_t arg_c = 8
var_88.d = 7
*(rbx + (rdx_7 << 3)) = var_88.o
int32_t var_60 = arg4[1].d
int64_t var_58 = *arg4
void* var_68 = rbx + (rdx_7 << 3)
int64_t* var_80_4 = &var_68
int32_t rax_4 = rax_2 + 2
int32_t var_5c = 0
rbx[sx.q(rax_2 + 1)] = var_88.o
int64_t r8_1 = *arg6
int64_t rdx_8 = sx.q(arg6[1].d) * 5
int64_t r9_2 = r8_1 + (rdx_8 << 3)

while (r8_1 != r9_2)
    int64_t rcx_22 = sx.q(rax_4)
    rax_4 += 1
    int64_t var_80_5 = r8_1
    var_88.d = 0xb
    r8_1 += 0x28
    rbx[rcx_22] = var_88.o

var_88.d = 0xa
int64_t* var_80_6 = &arg7
int32_t i = 0
arg7.d = 1
var_88.d = 1
rbx[sx.q(rax_4)] = var_88.o
void arg_38
void* var_80_7 = &arg_38
int32_t rax_6 = rax_4 + 2
arg5 = rax_6
rbx[sx.q(rax_4 + 1)] = var_88.o

if (rdi[1].d s> 0)
    do
        int64_t i_4 = sx.q(i)
        i += 1
        var_88.d = 2
        rdx_8 = *rdi + (i_4 << 3)
        int64_t rcx_29 = sx.q(rax_6)
        int64_t var_80_8 = rdx_8
        rax_6 += 1
        rbx[rcx_29] = var_88.o
    while (i s< rdi[1].d)

int32_t i_1 = 0

if (arg4[1].d s> 0)
    int128_t* rdi_1 = r14
    
    do
        int32_t r9_3
        
        if (arg8[1].d == 0)
            r9_3 = 0
        else
            r9_3 = *(r11 + *arg8)
        
        int64_t i_5 = sx.q(i_1)
        i_1 += 1
        int64_t var_48_1 = 0
        r11 = &r11[1]
        *rdi_1 = 0.o
        var_88.d = 7
        rdi_1[1].q = 0
        *(rdi_1 + 8) = 1
        rdi_1[1].q = *arg4 + (i_5 << 3)
        *rdi_1 = &rbx[sx.q(r9_3 + arg5)]
        rdx_8 = r14 + i_5 * 0x18
        int64_t rcx_35 = sx.q(rax_6)
        rdi_1 += 0x18
        int64_t var_80_9 = rdx_8
        rax_6 += 1
        rbx[rcx_35] = var_88.o
    while (i_1 s< arg4[1].d)
    
    rsi = arg9

int32_t i_2 = 0

if (rsi[1].d s> 0)
    do
        int64_t i_3 = sx.q(i_2)
        i_2 += 1
        var_88.d = 6
        rdx_8 = *rsi + i_3 * 0x18
        int64_t rcx_38 = sx.q(rax_6)
        int64_t var_80_10 = rdx_8
        rax_6 += 1
        rbx[rcx_38] = var_88.o
    while (i_2 s< rsi[1].d)

int64_t* rcx_40 = *arg1
int32_t var_74 = rax_6
int128_t* var_70 = rbx
int32_t var_78 = arg10
*arg1 = 0

if (rcx_40 != 0)
    (*(*rcx_40 + 0x10))(rcx_40, rdx_8, i_2)

int32_t rax_10 = (*(*arg2 + 0x1f0))(arg2, &var_78, &data_142effb58, arg1)

if (rax_10 s< 0)
    int128_t** var_90_1 = &var_88
    var_88 = nullptr
    int64_t var_80_11 = 0
    sub_14106a020(rax_10, 
        "RayTracingDevice->CreateStateObject(&Desc, IID_PPV_ARGS(Result.GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RayTracing.cpp", 0x147, 
        nullptr)

if (r14 != 0)
    sub_140a74f90(r14)

if (rbx != 0)
    sub_140a74f90(rbx)

return arg1
