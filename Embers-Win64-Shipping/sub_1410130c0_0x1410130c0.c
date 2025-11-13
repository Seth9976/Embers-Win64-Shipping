// 函数: sub_1410130c0
// 地址: 0x1410130c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg3)
uint64_t r15 = zx.q(arg2)

if (arg2 u> arg1[4].d)
    int64_t rsi = 0
    void* rcx = *(*arg1 + 0x20)
    
    if (arg3 != 0 && modu.dp.d(0:0x10000, rbp.d) == 0)
        rbp = 0
    
    uint64_t r9 = zx.q(*(arg1 + 0xc))
    int32_t r8 = arg1[1].d
    uint32_t rbx = (r15 + rbp).d
    int32_t var_40_1 = 0
    int32_t rdx_1 = *(arg1 + 0x24)
    void* arg_8 = nullptr
    int32_t rax_3 = sub_141048240(rcx, rdx_1, r8, r9, zx.q(rbx), &arg_8, 0x42efea90)
    
    if (rax_3 s< 0)
        int64_t var_38 = 0
        int64_t* var_50_2 = &var_38
        int64_t var_30_1 = 0
        sub_14106a020(rax_3, 
            "Adapter->CreateBuffer(PagePool.GetHeapType(), GetGPUMask(), GetVisibilityMask(), Size + "
        "Alignment, &Resource, TEXT("Stand Alone Fast Allocation"))", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Allocation.cpp", 
            0x537, nullptr)
    
    int32_t rax_4 = *(arg1 + 0x24)
    
    if (rax_4 == 2)
        rsi = sub_141027200(arg_8, 0)
    else if (rax_4 == 4 && arg1[5].d - 2 u<= 1)
        rsi = sub_141027200(arg_8, 0)
    
    sub_141014320(arg4, arg_8, rbx, 0)
    return rsi

EnterCriticalSection(&arg1[0xa])
int32_t* r8_2 = arg1[9]
int32_t rsi_1

if (r8_2 == 0)
    rsi_1 = 0
else
    rsi_1 = r8_2[4]

int32_t rsi_3 = divu.dp.q(0:(zx.q(rsi_1) - 1 + rbp), rbp) * rbp.d
int64_t* rsi_4

if (r8_2 == 0)
    rsi_4 = &arg1[2]
label_14101322b:
    int32_t* rax_13 = sub_1410337b0(rsi_4)
    r8_2 = rax_13
    arg1[9] = rax_13
    rsi_3 = divu.dp.q(0:(zx.q(rax_13[4]) - 1 + rbp), rbp) * rbp.d
else if (arg1[4].d u< rsi_3 + r15.d)
    rsi_4 = &arg1[2]
    sub_141034c30(rsi_4, r8_2)
    goto label_14101322b
void* rdx_8 = *(r8_2 + 8)
int64_t rbp_1 = *(r8_2 + 0x18)
uint64_t r12_2 = zx.q(rsi_3)
int64_t r13_1 = *(rdx_8 + 0x108)
*(arg4 + 8) = 3
sub_14105ac70(arg4, rdx_8)
*(arg4 + 0x58) = r15
*(arg4 + 0x50) = r12_2

if (rbp_1 != 0)
    *(arg4 + 0x40) = r12_2 + rbp_1

*(arg4 + 0x48) = r12_2 + r13_1
*(arg1[9] + 0x10) = rsi_3 + r15.d
void* rsi_5 = arg1[9]
void* rdi_1 = *(*(*(*(rsi_5 + 8) + 0x10) + 0x20) + 0x4e8)
int64_t rcx_12

if (sub_140a80f10() == 0)
    rcx_12 = *(rdi_1 + 0x38)
else
    rcx_12 = *(rdi_1 + 0x40) + 1

if (*(rsi_5 + 0x20) u>= rcx_12)
    rcx_12 = *(rsi_5 + 0x20)

*(rsi_5 + 0x20) = rcx_12
int64_t rdi_2 = *(arg4 + 0x40)
LeaveCriticalSection(&arg1[0xa])
return rdi_2
