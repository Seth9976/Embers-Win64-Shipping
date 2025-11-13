// 函数: sub_140ff2090
// 地址: 0x140ff2090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
uint32_t rdx = zx.d(arg3[1])
int32_t rsi = 1
int32_t var_80 = 0
int32_t var_6c = 0
int32_t r8 = 4
int32_t rax_2

if (rdx == 1)
    rax_2 = 3
else if (rdx == 2)
    rax_2 = 2
else if (rdx == 3)
    rax_2 = 4
else
    rax_2 = 1

uint32_t rcx = zx.d(arg3[2])
int32_t var_7c = rax_2
int32_t rax_3

if (rcx == 1)
    rax_3 = 3
else if (rcx == 2)
    rax_3 = 2
else if (rcx == 3)
    rax_3 = 4
else
    rax_3 = 1

uint32_t rcx_3 = zx.d(arg3[3])
int32_t var_78 = rax_3

if (rcx_3 == 1)
    r8 = 3
else if (rcx_3 == 2)
    r8 = 2
else if (rcx_3 != 3)
    r8 = 1

int32_t r15 = *(arg3 + 0x10)
int32_t var_70 = *(arg3 + 4)
int32_t var_74 = r8
TEB* gsbase

if (data_143e2b900 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2b900)
    
    if (data_143e2b900 == 0xffffffff)
        int64_t* rcx_23 = data_143db18d0
        
        if (rcx_23 == 0)
            sub_140a53c40()
            rcx_23 = data_143db18d0
        
        int64_t* rax_27 = (*(*rcx_23 + 0xb0))(rcx_23, u"r.MaxAnisotropy", 1)
        int64_t rax_25
        
        if (rax_27 == 0)
            rax_25 = 0
        else
            rax_25 = (*(*rax_27 + 0x58))(rax_27)
        
        data_143e2b8f8 = rax_25
        _Init_thread_footer(&data_143e2b900)

int64_t r14 = data_143e2b8f8
int64_t rcx_8

if (data_143de5480 == 0)
    rcx_8 = 0
else
    rcx_8.b = GetCurrentThreadId() != data_143de5470

int32_t rcx_9 = *(r14 + (rcx_8 << 2))

if (r15 s> 0)
    rcx_9 = r15

int32_t rax_7

if (rcx_9 s>= 1)
    rax_7 = 0x10
    
    if (rcx_9 s< 0x10)
        rax_7 = rcx_9
else
    rax_7 = 1

char rdx_3 = *arg3
char rcx_10 = arg3[0x18]
int32_t var_54 = *(arg3 + 8)
int32_t var_50 = *(arg3 + 0xc)
int32_t var_6c_1 = rax_7

if (rdx_3 == 0)
    var_80 = sbb.d(rax_7, rax_7, rcx_10 != 0) & 0x80
else
    int32_t rax_8
    
    if (rdx_3 == 1)
        rax_8 = 0x14
        
        if (rcx_10 != 0)
            rax_8 = 0x94
        
        var_80 = rax_8
    else if (rdx_3 == 2)
    label_140ff2202:
        rax_8 = 0x15
        
        if (rcx_10 != 0)
            rax_8 = 0x95
        
        var_80 = rax_8
    else if (rdx_3 u> 2 && rdx_3 u<= 4)
        if (rax_7 == 1)
            goto label_140ff2202
        
        rax_8 = 0x55
        
        if (rcx_10 != 0)
            rax_8 = 0xd5
        
        var_80 = rax_8

int32_t var_c0 = *(arg3 + 0x14)
int128_t var_b0
sub_140acc920(&var_b0, &var_c0)
int128_t var_64 = var_b0

if (arg3[0x18] == 1)
    rsi = 2

int64_t* rcx_12 = *(arg1 + 0x168)
int32_t var_68 = rsi
int64_t* var_c8 = nullptr
int32_t rax_12 = (*(*rcx_12 + 0xb8))(rcx_12, &var_80, &var_c8)

if (rax_12 s< 0)
    int64_t var_d8_1 = *(arg1 + 0x168)
    sub_140fff020(rax_12, 
        "Direct3DDevice->CreateSamplerState(&SamplerDesc, SamplerStateHandle.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11State.cpp", 0xb5)

int64_t* rbx_1 = var_c8
int32_t var_bc
sub_140865c40(&data_1439b49f0, &var_bc, rbx_1)
int64_t rax_14 = sx.q(var_bc)
void* const r8_3

if (rax_14.d == 0xffffffff)
    r8_3 = nullptr
else
    r8_3 = data_1439b49f0 + rax_14 * 0x18

int64_t* rcx_14 = r8_3 + 8

if (r8_3 == 0)
    rcx_14 = nullptr

if (rcx_14 == 0)
    void*** rax_16 = j_sub_140a82f30(0x20)
    void*** rcx_17 = rax_16
    
    if (rax_16 == 0)
        rcx_17 = nullptr
    else
        *rcx_17 = &data_142d3ff08
        rcx_17[1].d = 0
        *rcx_17 = &data_142ef5830
        *(rcx_17 + 0xc) = 0
        rcx_17[2].w = 0x100
        rcx_17[3] = 0
    
    int64_t* rax_17 = var_c8
    void*** var_b8 = rcx_17
    int64_t* rbx_2 = rcx_17[3]
    rcx_17[3] = rax_17
    int64_t* rcx_18 = var_c8
    
    if (rcx_18 != 0)
        (*(*rcx_18 + 8))(rcx_18)
    
    if (rbx_2 != 0)
        (*(*rbx_2 + 0x10))(rbx_2)
    
    void*** rax_20 = var_b8
    rax_20[1].d += 1
    int64_t* var_98 = var_c8
    int64_t** var_90 = &var_98
    void**** var_88_1 = &var_b8
    void var_a0
    sub_140fd48b0(&data_1439b49f0, &var_a0, &var_90, nullptr)
    void*** rax_22 = var_b8
    *arg2 = rax_22
    
    if (rax_22 != 0)
        rax_22[1].d += 1
    
    int64_t* rcx_20 = var_c8
    
    if (rcx_20 != 0)
        (*(*rcx_20 + 0x10))(rcx_20)
else
    void* rcx_15 = *rcx_14
    *arg2 = rcx_15
    
    if (rcx_15 != 0)
        *(rcx_15 + 8) += 1
        rbx_1 = var_c8
    
    if (rbx_1 != 0)
        int64_t rdx_8 = *rbx_1
        (*(rdx_8 + 0x10))(rbx_1, rdx_8)

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
