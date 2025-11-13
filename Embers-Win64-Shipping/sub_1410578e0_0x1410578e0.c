// 函数: sub_1410578e0
// 地址: 0x1410578e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void** rcx_1 = *(**(arg1 + 0x20) + 0x9d8)
void** var_138 = rcx_1
void* rax_3 = rcx_1[4]
int32_t rbx = rcx_1[2].d
void* rax_5 = *rcx_1[0xdb]
void* r13

if (arg2 != 0)
    r13 = (*(*arg2 + 0x48))(arg2, arg5, 0)
else
    r13 = nullptr

int32_t rax_10 = arg3[2] - *arg3
void* rdx = *(r13 + 0x58)
int32_t r12_2 = (arg3[3] - arg3[1]) * rax_10
void* var_178 = rdx
arg4[1].d = 0

if (*(arg4 + 0xc) != r12_2)
    sub_1405c5570(arg4, r12_2)
    rdx = var_178

int32_t var_80 = *arg3
int32_t var_7c = arg3[1]
int32_t var_74 = arg3[2]
int32_t var_70 = arg3[3]
int64_t rax_15 = sx.q(*(arg2 + 0x3c))
int32_t r14_1 = 3
int32_t var_190 = 0
int32_t var_78 = 0
int32_t var_198 = 0
int32_t var_6c = 1
int64_t* result_1 = nullptr
int32_t r15_3 = ((&data_1439c85f4)[rax_15 * 0xa] * *(rdx + 0x98) + 0xff) & 0xffffff00
uint64_t rax_17 = zx.q(*(rdx + 0xa0) * r15_3)
uint32_t rax_18 = sub_141048240(rax_3, 3, rbx, zx.q(rbx), rax_17, &result_1, var_198)

if (rax_18 s< 0)
    int64_t var_110
    int64_t* var_1a0_1 = &var_110
    var_110 = 0
    int64_t var_108_1 = 0
    sub_14106a020(rax_18, 
        "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, Node, Node, MipBytesAligned, TempTexture2D."
    "GetInitReference(), nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp", 0x5f9, 
        nullptr)

rax_18.b = 0

if (r13 != 0x68)
    rax_18.b = *(r13 + 0x19c) & 1
else if (r13 != 0x70)
    rax_18.b = *(r13 + 0x19c) & 1

int32_t rbx_1 = 0
void* rcx_14

if (rax_18.b == 0)
    rcx_14 = var_178
else
    if (arg6 == 1)
        r14_1 = 1
    else if (arg6 == 2)
        r14_1 = 2
    else if (arg6 != 3)
        if (arg6 == 4)
            r14_1 = 4
        else if (arg6 == 5)
            r14_1 = 5
        else
            r14_1 = 0
    
    rcx_14 = var_178
    rbx_1 = (r14_1 + arg7 * 6) * zx.d(*(rcx_14 + 0xa6)) + arg8

int32_t var_150 = *(rcx_14 + 0xa0)
int32_t var_154 = *(rcx_14 + 0x98)
int32_t var_158 = *(rcx_14 + 0xa8)
int64_t* result_2 = result_1
int32_t var_e8 = r15_3
int32_t var_14c = 1
int128_t zmm0 = var_158.o
int64_t var_e0 = result_2[4]
int32_t var_d8 = 1
int32_t var_e4 = 0
var_178.d = 0xffffffff
int128_t var_c0 = zmm0
char var_188 = 0
int128_t var_d0 = 0.o
int64_t var_b0 = *(*(r13 + 0x58) + 0x20)
int32_t var_a8 = 0
int32_t var_a0 = rbx_1
void* rax_26 = *(r13 + 0x58)
var_158.q = rax_26
void** var_1a8

if (*(rax_26 + 0xfc) != 0)
    sub_141037220(rax_5 + 0x1c0, rax_26, 0x800, rbx_1)
else
    int32_t rcx_16 = *(rax_26 + 0xf0)
    var_178.d = rcx_16
    
    if (rcx_16 != 0x800)
        var_188 = 1
        var_1a8.d = rbx_1
        sub_1410129f0(rax_5 + 0x1c0, rax_26, rcx_16, 0x800, var_1a8.d)

*(rax_5 + 0x3b90) += 1
void* r14_3 = *(rax_5 + 0x1c8)
int32_t rdx_5 = *(r14_3 + 0x128)
int64_t* rcx_19 = *(r14_3 + 0x30)

if (rdx_5 != 0)
    (*(*rcx_19 + 0xd0))(rcx_19, rdx_5, *(r14_3 + 0x120))
    *(r14_3 + 0x128) = 0
    r14_3 = *(rax_5 + 0x1c8)

int64_t* rcx_20 = *(r14_3 + 0x30)
var_1a8.d = 0
(*(*rcx_20 + 0x80))(rcx_20, &var_e0, 0, 0, var_1a8, &var_b0, &var_80, var_190, var_188, 
    rax_5 + 0x1c0, var_178, r15_3)
void* rdx_7 = *(r13 + 0x58)
void* rax_31 = *(rdx_7 + 0x28)

if (rax_31 == 0)
    if (data_1439b4ad4 != 0 && *(rdx_7 + 0x38) != 0)
        sub_141026da0(*(*(rax_5 + 0x1c8) + 0x118), rdx_7 + 0x30)
else if (data_1439b4ad4 != 0 && *(rax_31 + 0x30) != 0)
    sub_141026da0(*(*(rax_5 + 0x1c8) + 0x118), rax_31 + 0x28)

if (var_188 != 0)
    var_1a8.d = rbx_1
    sub_1410129f0(rax_5 + 0x1c0, var_158.q, 0x800, var_178.d, var_1a8.d)

sub_141022330(*var_138[0xdb], &var_138, 1)
var_138 = &data_142efcd90
int64_t* var_130

if (var_130 != 0)
    int32_t rax_32 = *(var_130 + 0x14)
    *(var_130 + 0x14) -= 1
    
    if (rax_32 == 1 && var_130 != 0)
        sub_14100eba0(var_130)
        j_sub_140a74f90(var_130)

uint64_t var_60 = rax_17
int64_t var_68 = 0
int64_t* rcx_31 = result_2[4]
int64_t var_118
int32_t rax_35 = (*(*rcx_31 + 0x40))(rcx_31, 0, &var_68, &var_118, var_1a8)

if (rax_35 s< 0)
    var_158.q = 0
    int32_t* var_1a0_3 = &var_158
    var_150.q = 0
    sub_14106a020(rax_35, "TempTexture2D->GetResource()->Map(0, &Range, &pData)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp", 0x640, 
        nullptr)

int64_t rbx_5 = sx.q(arg4[1].d)

if (r12_2 s>= rbx_5.d)
    int32_t rax_36 = rbx_5.d + r12_2
    arg4[1].d = rax_36
    
    if (rax_36 s> *(arg4 + 0xc))
        sub_1405a4d70(arg4)
    
    memset(*arg4 + (rbx_5 << 3), 0, sx.q(r12_2) << 3)

for (int32_t i = arg3[1]; i s< arg3[3]; i += 1)
    int32_t rcx_36 = i - arg3[1]
    memcpy(*arg4 + (sx.q(rcx_36 * rax_10) << 3), zx.q(rcx_36 * r15_3) + var_118, rax_10 << 3)

int64_t* rcx_40 = result_2[4]
(*(*rcx_40 + 0x48))(rcx_40, 0, 0)
int64_t* result = result_1
int32_t r15_4 = result[1].d
result[1].d -= 1

if (r15_4 == 1)
    int64_t* result_3 = result_1
    result = (**result_3)(result_3, zx.q(r15_4))

__security_check_cookie(rax_1 ^ &var_1c8)
return result
