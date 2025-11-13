// 函数: sub_141013c60
// 地址: 0x141013c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
EnterCriticalSection(&arg1[1])
arg1[8].d += 1
int64_t rdi = 0
void* rdx = *arg1
int64_t r8 = sx.q(arg1[7].d)
int64_t var_78 = 0
int64_t r15 = *(*(*(rdx + 0x38) + 0xe8) + 0x48)
int32_t rcx_2 = 0
uint64_t var_90

if (r8.d s<= 0)
label_141013cf4:
    int32_t i = 0
    void* rcx_3 = rdx
    
    if (r8.d s> 0)
        do
            int64_t* rcx_4 = arg1[6]
            
            if (*(rcx_4 + rdi + 8) + 0x64 u> r15)
                i += 1
                rdi += 0x18
            else
                int64_t* rcx_5 = *(rcx_4 + rdi)
                (*(*rcx_5 + 0x10))(rcx_5)
                uint128_t* rdx_1 = arg1[6]
                int64_t rcx_6 = sx.q(arg1[7].d) * 3
                *(rdx_1 + rdi) = *(rdx_1 + (rcx_6 << 3) - 0x18)
                *(rdx_1 + rdi + 0x10) = *(rdx_1 + (rcx_6 << 3) - 8)
                arg1[7].d -= 1
        while (i s< arg1[7].d)
        
        rdx = *arg1
        rcx_3 = rdx
    
    bool cond:0_1 = data_143f0f1d8 == 0
    int32_t var_60_1 = 1
    int32_t var_68 = arg3
    int32_t var_64_1 = arg4
    
    if (cond:0_1)
        rdx = rcx_3
        int32_t var_5c_2 = *(rcx_3 + 0x10)
    else
        int32_t var_5c_1 = 1
    
    int64_t var_98 = 0
    int64_t* rcx_8 = *(*(rdx + 0x20) + 0x18)
    int32_t rax_12 = (*(*rcx_8 + 0x70))(rcx_8, &var_68, &data_142efce18, &var_98)
    
    if (rax_12 s< 0)
        var_90 = 0
        int64_t* var_a0_1 = &var_90
        int64_t var_88_1 = 0
        sub_14106a020(rax_12, 
            "GetParentDevice()->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(&D3D12Heap))", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RayTracing.cpp", 
            0x315, nullptr)
    
    uint128_t var_80
    var_80.q = var_98
    int32_t var_6c_1 = arg3
    *arg2 = var_80
    arg2[1].q = arg4.q
else
    void* r10_1 = arg1[6]
    int64_t* rax_3 = r10_1 + 0x10
    
    while (*(rax_3 + 4) != arg3 || *rax_3 u< arg4 || rax_3[-1] u> r15)
        rcx_2 += 1
        rax_3 = &rax_3[3]
        
        if (rcx_2 s>= r8.d)
            goto label_141013cf4
    
    int64_t r8_1 = r8 * 3
    uint128_t var_80_1 = *(rax_3 - 0x10)
    var_90 = *rax_3
    int64_t rdx_2 = sx.q(rcx_2) * 3
    *(r10_1 + (rdx_2 << 3)) = *(r10_1 + (r8_1 << 3) - 0x18)
    *(r10_1 + (rdx_2 << 3) + 0x10) = *(r10_1 + (r8_1 << 3) - 8)
    arg1[7].d -= 1
    sub_1405fde90(&arg1[6])
    *arg2 = var_80_1
    arg2[1].q = var_90

if (arg1 != -8)
    LeaveCriticalSection(&arg1[1])

__security_check_cookie(rax_1 ^ &var_c8)
return arg2
