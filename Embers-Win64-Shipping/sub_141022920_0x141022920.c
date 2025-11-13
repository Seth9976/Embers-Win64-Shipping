// 函数: sub_141022920
// 地址: 0x141022920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x28)
int64_t arg_8
(*(*rcx + 0x80))(rcx, &arg_8)
int64_t frequency
QueryPerformanceFrequency(&frequency)
int64_t* rcx_2 = *(arg1 + 0x28)
int64_t arg_10
int64_t arg_20
int32_t rax_2 = (*(*rcx_2 + 0x88))(rcx_2, &arg_10, &arg_20)

if (rax_2 s< 0)
    int64_t var_28
    int64_t* var_30_1 = &var_28
    var_28 = 0
    int64_t var_20_1 = 0
    sub_14106a020(rax_2, "D3DCommandQueue->GetClockCalibration(&GPUTimestamp, &CPUTimestamp)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12DirectCommandListManager.cpp", 
        0x1e2, nullptr)

int64_t rax_3 = arg_8
double zmm3 = 1.8446744073709552e+19
int64_t zmm2 = float.d(rax_3)

if (rax_3 s< 0)
    zmm2 = zmm2 f+ zmm3

int64_t rax_4 = arg_10
double zmm1 = 1000000.0
double zmm0 = zmm1 f/ zmm2
zmm2 = float.d(rax_4)

if (rax_4 s< 0)
    zmm2 = zmm2 f+ zmm3

zmm0 = zmm0 f* zmm2
int64_t rcx_4 = 0
zmm2 = 0x43e0000000000000

if (not(zmm0 f< zmm2))
    zmm0 = zmm0 f- zmm2
    
    if (not(zmm0 f>= zmm2))
        rcx_4 = -0x8000000000000000

int64_t rax_5 = int.q(zmm0)
zmm0 = float.d(frequency)
*arg2 = rax_5 + rcx_4
int64_t rax_7 = arg_20
zmm1 = zmm1 / zmm0
zmm0 = float.d(rax_7)

if (rax_7 s< 0)
    zmm0 = zmm0 + zmm3

zmm1 = zmm1 * zmm0
int64_t rcx_5 = 0

if (not(zmm1 f< zmm2))
    zmm1 = zmm1 f- zmm2
    
    if (not(zmm1 f>= zmm2))
        rcx_5 = -0x8000000000000000

arg2[1] = int.q(zmm1) + rcx_5
return arg2
