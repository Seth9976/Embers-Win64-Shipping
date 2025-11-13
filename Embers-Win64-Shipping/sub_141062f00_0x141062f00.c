// 函数: sub_141062f00
// 地址: 0x141062f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* rbx = *(arg1 + 0x20)
void* rdi_2 = &rbx[sx.q(*(arg1 + 0x28)) * 2]
void* const r14 = arg1
void* const var_128 = arg1

if (rbx != rdi_2)
    do
        sub_140a8cee0(*rbx, r14)
        rbx = &rbx[2]
    while (rbx != rdi_2)
    
    rbx = *(r14 + 0x20)

int16_t* rsi_1 = *rbx + 0x60
data_143f0f1b0 = *(rsi_1 + 0x100)

if (sub_1419767d0() != 0 && *(r14 + 0x60) != 0)
    agsInit(r14 + 0x38, nullptr, nullptr)

int64_t* i = *(r14 + 0x20)

for (void* rdi_5 = &i[sx.q(*(r14 + 0x28)) * 2]; i != rdi_5; i = &i[2])
    sub_1410261c0(*i)

if (data_143e2c338 != 0)
    sub_1419767d0()

if (sub_1419767d0() != 0 && *(r14 + 0x60) != 0)
    uint8_t rax_6 = (*(r14 + 0x40) u>> 0xe).b & 1
    data_143f0f1bd = rax_6
    bool cond:2_1
    
    if (rax_6 != 0)
        cond:2_1 = (*(r14 + 0x40) & 0x1000) != 0
        data_143f0f1bd = 1
    
    if (rax_6 == 0 || not(cond:2_1))
        data_143f0f1bd = 0

if (sub_1419767f0() != 0 && *(r14 + 0x60) != 0 && sub_142c49460() == 0)
    sub_142c48a80(*(**(r14 + 0x20) + 0x18), 0x14, &data_143f0f1bd)

bool cond:0 = data_143f024b8 == rsi_1
data_143f0f200 = 0

if (not(cond:0))
    int32_t rbx_2
    
    if (*rsi_1 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rsi_1[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    int32_t rcx_5 = data_143f024c4
    int32_t rdx_2 = 0
    data_143f024c0 = 0
    
    if (rcx_5 != rbx_2)
        sub_1405947f0(&data_143f024b8, rbx_2)
        rcx_5 = data_143f024c4
        rdx_2 = data_143f024c0
    
    int32_t rax_10 = rbx_2 + rdx_2
    data_143f024c0 = rax_10
    
    if (rax_10 s> rcx_5)
        sub_140594770(&data_143f024b8)
    
    if (rbx_2 != 0)
        memcpy(data_143f024b8, rsi_1, rbx_2 * 2)

data_143f0f1a8 = *(rsi_1 + 0x104)
data_143f0f1ac = *(rsi_1 + 0x10c)
void var_f8
sub_140b68140(&var_f8, &data_143f024b8)
int32_t r8_3 = data_143f024e4
int32_t var_b8
data_143f024e0 = var_b8
int64_t var_c0

if (var_b8 != 0 || r8_3 != 0)
    sub_1405a4c70(&data_143f024d8, var_b8, r8_3)
    memcpy(data_143f024d8, var_c0, var_b8 * 2)
else
    data_143f024e4 = 0

int32_t r8_6 = data_143f024d4
int32_t var_c8
data_143f024d0 = var_c8
int64_t var_d0

if (var_c8 != 0 || r8_6 != 0)
    sub_1405a4c70(&data_143f024c8, var_c8, r8_6)
    memcpy(data_143f024c8, var_d0, var_c8 * 2)
else
    data_143f024d4 = 0

uint64_t var_b0
uint64_t rbx_5 = var_b0
int32_t r8_9 = data_143f024f4
int32_t var_a8
data_143f024f0 = var_a8

if (var_a8 != 0 || r8_9 != 0)
    sub_1405a4c70(&data_143f024e8, var_a8, r8_9)
    memcpy(data_143f024e8, rbx_5, var_a8 * 2)
    rbx_5 = var_b0
else
    data_143f024f4 = 0

int64_t var_a0

if (var_a0 != 0)
    sub_140a74f90(var_a0)
    rbx_5 = var_b0

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

if (var_d0 != 0)
    sub_140a74f90(var_d0)

int64_t var_e0

if (var_e0 != 0)
    sub_140a74f90(var_e0)

int64_t var_f0

if (var_f0 != 0)
    sub_140a74f90(var_f0)

data_143e2c530 = *(rsi_1 + 0x110)
data_143e2c538 = *(rsi_1 + 0x118)
data_143e2c540 = *(rsi_1 + 0x120)
sub_140b673e0()
int64_t* rax_16 = *(r14 + 0x20)
int64_t* var_110 = nullptr
int64_t* rcx_18 = *(*rax_16 + 0x198)
int32_t rax_18 = (**rcx_18)(rcx_18, &data_142efa7c8, &var_110)
int64_t* var_148
int64_t* var_140
int64_t* var_138

if (rax_18 s< 0)
    var_138 = nullptr
    var_140 = &var_138
    int64_t var_130_1 = 0
    var_148 = nullptr
    sub_14106a020(rax_18, 
        "GetAdapter().GetAdapter()->QueryInterface(IID_PPV_ARGS(DxgiAdapter3.GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp", 
        0x282, var_148)

int64_t* rcx_20 = var_110
int64_t var_58
int32_t rax_20 = (*(*rcx_20 + 0x70))(rcx_20, 0, 0, &var_58, var_148, var_140)

if (rax_20 s< 0)
    var_138 = nullptr
    var_140 = &var_138
    int64_t var_130_2 = 0
    var_148 = nullptr
    sub_14106a020(rax_20, 
        "DxgiAdapter3->QueryVideoMemoryInfo(0, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, &LocalVideoMemoryInfo)", 
        "
        D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp", 
        0x284, var_148)

int64_t rax_21 = var_58
uint128_t zmm0
zmm0.d = float.s(rax_21)

if (rax_21 s< 0)
    zmm0.d = zmm0.d f+ 1.84467441e+19f

zmm0.d = zmm0.d f* 0.899999976f
int32_t rcx_22 = data_143f0f208
int64_t rax_22 = int.q(zmm0.d)
data_143e2c548 = rax_22
int64_t rax_24

if (rcx_22 s<= 0)
    rax_24 = data_143f0f200
else
    zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_22)).d f* 9.53674295e-09f
    zmm0.d = zmm0.d f* float.s(rax_22)
    truncf(zmm0.d)
    rax_24 = int.q(zmm0.d) << 0x14
    data_143f0f200 = rax_24

int64_t* rcx_23 = var_110
*(r14 + 0x18) = rax_24
int64_t r9_1 = data_143e2c548
int64_t var_48

if (var_48 s<= r9_1)
    r9_1 = var_48

int32_t rax_26 = (*(*rcx_23 + 0x78))(zmm0, 0, 0, r9_1, var_148, var_140)

if (rax_26 s< 0)
    var_138 = nullptr
    int64_t* var_140_1 = &var_138
    int64_t var_130_3 = 0
    sub_14106a020(rax_26, 
        "DxgiAdapter3->SetVideoMemoryReservation(0, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, FMath::"
    "Min((int64)LocalVideoMemoryInfo.AvailableForReservation, FD3D12GlobalStats::"
    "GTotalGraphicsMem", 
        "
        D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp", 
        0x29d, nullptr)

TEB* gsbase

if (data_143e2c7dc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2c7dc)
    
    if (data_143e2c7dc == 0xffffffff)
        sub_140af2b60()
        data_143e2c7d8 = sub_140b21a10(&data_143dbb3f0, u"nod3dasync") == 0
        _Init_thread_footer(&data_143e2c7dc)

bool cond:4 = data_143f0f224 == 0
zmm0 = data_142ef4010
data_143f0f1bb = data_143e2c7d8
*U"1111" = zmm0
char rax_29

if (not(cond:4))
    rax_29 = sub_1419767d0()

if (cond:4 || rax_29 == 0)
    rax_29 = 0
else
    rax_29 = 1

data_143f0f1c5 = rax_29
rbx_5.b = 0
data_143f0f1c3 = *(**(r14 + 0x20) + 0x4c)
int64_t i_2 = sx.q(*(r14 + 0x28))

if (i_2 s> 0)
    int64_t* r15_1 = nullptr
    int64_t i_1
    
    do
        int32_t rdi_9 = 0
        int64_t* rsi_2 = *(*(r15_1 + *(r14 + 0x20)) + 0x198)
        int64_t* rcx_30
        
        while (true)
            int64_t rax_33 = *rsi_2
            int64_t* var_118 = nullptr
            int32_t rax_34 = (*(rax_33 + 0x38))(rsi_2, zx.q(rdi_9), &var_118)
            rcx_30 = var_118
            
            if (rax_34 != 0)
                break
            
            var_138 = nullptr
            
            if ((**rcx_30)(rcx_30, &data_142f03680, &var_138) s>= 0)
                int64_t* rcx_31 = var_138
                int32_t rax_38 = (*(*rcx_31 + 0xd8))(rcx_31, &var_f8)
                
                if (rax_38 s< 0)
                    int64_t var_108 = 0
                    int64_t* var_140_2 = &var_108
                    int64_t var_100_1 = 0
                    sub_14106a020(rax_38, "Output6->GetDesc1(&OutputDesc)", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device."
                    "cpp", 
                        0xca, nullptr)
                
                rbx_5 = zx.q(rbx_5.b)
                int32_t var_94
                
                if (var_94 == 0xc)
                    rbx_5 = 1
            
            int64_t* rcx_33 = var_138
            
            if (rcx_33 != 0)
                (*(*rcx_33 + 0x10))(rcx_33)
            
            int64_t* rcx_34 = var_118
            
            if (rcx_34 != 0)
                (*(*rcx_34 + 0x10))(rcx_34)
            
            rdi_9 += 1
        
        r14 = var_128
        
        if (rcx_30 != 0)
            (*(*rcx_30 + 0x10))(rcx_30)
        
        r15_1 = &r15_1[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

data_143f0f227 = rbx_5.b
data_1439c7a4c = 0x12
var_128 = nullptr
int32_t var_120 = 0
sub_1405947f0(&var_128, 6)
int32_t rax_42 = var_120 + 6
var_120 = rax_42

if (rax_42 s> 0)
    sub_140594770(&var_128)

UnDecorator::getReferenceType(var_128, u"D3D12", 0xc)
sub_142064b30(data_143f426f8, &var_128)
void* const rcx_39 = var_128

if (rcx_39 != 0)
    sub_140a74f90(rcx_39)

data_143f0f1f6 = 1
data_143f0f21d = 1
data_143f0f1d0 = 1
data_143f0f1d1 = 1
bool cond:6 = *(**(r14 + 0x20) + 0x38) != 0
data_143f0f220 = 1
data_143f0f21f = cond:6
void* rax_44 = sub_1410562e0(r14)
data_143f02bb8 = rax_44
data_143f02bc0 = rax_44
data_143f02d88 = sub_141056290(r14)
int64_t result = sub_1419a3ff0()
int64_t* rcx_42 = var_110
data_143f0f19c = 1

if (rcx_42 != 0)
    result = (*(*rcx_42 + 0x10))(rcx_42)

__security_check_cookie(rax_1 ^ &var_168)
return result
