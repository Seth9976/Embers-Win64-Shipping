// 函数: sub_1410636f0
// 地址: 0x1410636f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockExclusive(arg1 + 0xc0)
char rax = data_143de5480
int64_t rbx = data_143e2c940
int64_t rcx_1

if (rax == 0)
    rcx_1 = 0
else
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    rax = data_143de5480
    rcx_1.b = cond:0_1

int64_t rbx_1 = data_143e2c958
int64_t r14
r14.b = *(rbx + (rcx_1 << 2)) != 0
int64_t rcx_2

if (rax == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

rbx_1.b = *(rbx_1 + (rcx_2 << 2)) != 0
*(arg1 + 0x1f0) = rbx_1.b
sub_141063dc0(arg1 + 0xc8, arg2, r14.b)
sub_141063dc0(arg1 + 0x128, arg3, r14.b)
sub_141063dc0(arg1 + 0x188, arg4, rbx_1.b)
*(arg1 + 0x100) = 0xc
*(arg1 + 0x160) = 0xc
uint64_t r15_1 = zx.q(*(arg1 + 0x1d4))
*(arg1 + 0x1c0) = r15_1 + 0xc

if (*(arg1 + 0x1f0) != 0)
    int64_t* r14_1 = *(*(arg1 + 8) + 0x20)
    
    if (r14_1 != 0)
        int64_t rbx_3
        
        if (r15_1 == 0)
            rbx_3 = 0
        else
            rbx_3 = *(arg1 + 0x198) + 0xc
        
        int64_t* rcx_6 = *(arg1 + 0x1e8)
        *(arg1 + 0x1e8) = 0
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x10))(rcx_6)
        
        int32_t rax_7 = (*(*r14_1 + 0x160))(r14_1, rbx_3, r15_1, &data_142f03a98, arg1 + 0x1e8)
        
        if ((0x80000000 & (rax_7 - 0x80000000)) == 0 && rax_7 != 0x887a0004)
            sub_14105eab0(arg1 + 0x188)
            int64_t* rcx_9 = *(arg1 + 0x1e8)
            *(arg1 + 0x1e8) = 0
            
            if (rcx_9 != 0)
                (*(*rcx_9 + 0x10))(rcx_9)
            
            int32_t rax_10 = (*(*r14_1 + 0x160))(r14_1, 0, 0, &data_142f03a98, arg1 + 0x1e8)
            
            if (rax_10 s< 0)
                int64_t var_38 = 0
                int64_t* var_40_1 = &var_38
                int64_t var_30_1 = 0
                sub_14106a020(rax_10, 
                    "pDevice1->CreatePipelineLibrary(nullptr, 0, IID_PPV_ARGS(PipelineLibrary."
                "GetInitReference()))", 
                    "D:"
                "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12PipelineState."
                "cpp", 0x240, nullptr)

return ReleaseSRWLockExclusive(arg1 + 0xc0) __tailcall
