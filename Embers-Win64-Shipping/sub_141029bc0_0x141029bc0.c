// 函数: sub_141029bc0
// 地址: 0x141029bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg3 + 0x20)
uint64_t r15 = zx.q(arg5)
int32_t r14 = arg4
wchar16 const* const var_58
int32_t var_50
void* var_48

if (rbx == 0)
label_141029c3e:
    int32_t r8 = *(arg1 + 0x130)
    var_50 = 0
    var_58 = u"StagedRead"
    int32_t rax_4 =
        sub_141048240(*(*(arg1 + 0x138) + 0x20), 3, r8, zx.q(r8), r15, arg3 + 0x20, 0x42eff030)
    
    if (rax_4 s< 0)
        var_48 = nullptr
        int64_t* var_60_2 = &var_48
        int64_t var_40_1 = 0
        sub_14106a020(rax_4, 
            "GetParentDevice()->GetParentAdapter()->CreateBuffer(D3D12_HEAP_TYPE_READBACK, GetGPUMask(), "
        "GetGPUMask(), NumBytes, &StagingBuffer->StagedRead, TEXT("StagedRead"))", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Commands.cpp", 0x137, 
            nullptr)
    
    rbx = *(arg3 + 0x20)
    *(arg3 + 0x28) = r15.d
else if (*(arg3 + 0x28) u< r15.d)
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1 && rbx != 0)
            (**rbx)(rbx, 1)
        
        *(arg3 + 0x20) = 0
    
    goto label_141029c3e

void* r13_1 = *(arg2 + 0x78)
int32_t rsi_1 = 0x800
sub_14105c1a0(r13_1, arg1 + 0x1c0)
void* rax_5 = sub_141023fa0(arg1 + 0x1c0, r13_1)
int32_t rax_6 = sub_1410626f0(rax_5, 0)

if (rax_6 != 0xffffffff)
    int32_t rcx_11 = rax_6 | 0x800
    
    if ((rcx_11 & 0xac3) == rcx_11)
        rsi_1 = rcx_11
    
    if (rax_6 != rsi_1)
        sub_1410129f0(arg1 + 0x1c0, r13_1, rax_6, rsi_1, 0)
        sub_141069360(rax_5, 0, rsi_1)
else
    void* rdi_2 = *(arg1 + 0x1c8)
    var_48 = r13_1
    int64_t var_40_2 = 0x800
    int64_t r14_1 = sx.q(*(rdi_2 + 0xc0))
    int32_t rax_7 = (r14_1 + 1).d
    *(rdi_2 + 0xc0) = rax_7
    
    if (rax_7 s> *(rdi_2 + 0xc4))
        sub_1405a4f90(rdi_2 + 0xb8)
    
    *(*(rdi_2 + 0xb8) + r14_1 * 0x10) = var_48.o
    sub_141069360(rax_5, 0, 0x800)
    r14 = arg4

void* rdi_3 = *(arg1 + 0x1c8)
int32_t rdx_4 = *(rdi_3 + 0x128)
int64_t* rcx_14 = *(rdi_3 + 0x30)

if (rdx_4 != 0)
    (*(*rcx_14 + 0xd0))(rcx_14, rdx_4, *(rdi_3 + 0x120))
    *(rdi_3 + 0x128) = 0
    rdi_3 = *(arg1 + 0x1c8)

*(arg1 + 0x3b90) += 1
int64_t* rcx_15 = *(rdi_3 + 0x30)
(*(*rcx_15 + 0x78))(rcx_15, rbx[4], 0, *(r13_1 + 0x20), zx.q(r14), r15, var_58, var_50)
sub_14105c1a0(rbx, arg1 + 0x1c0)
return sub_14105c1a0(r13_1, arg1 + 0x1c0) __tailcall
