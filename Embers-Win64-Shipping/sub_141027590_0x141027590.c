// 函数: sub_141027590
// 地址: 0x141027590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[6])
int64_t* result
void* var_18

if (*arg1[5] == 0)
label_14102765f:
    int64_t* rax_7 = j_sub_140a82f30(0x20)
    
    if (rax_7 == 0)
        result = nullptr
    else
        result = sub_141009700(rax_7, *(*(*arg1 + 0x20) + 0x18), &arg1[0xb])
    
    int64_t rbp_1 = sx.q(arg1[2].d)
    int32_t rax_9 = (rbp_1 + 1).d
    arg1[2].d = rax_9
    
    if (rax_9 s> *(arg1 + 0x14))
        sub_1405a4d70(&arg1[1])
    
    *(arg1[1] + (rbp_1 << 3)) = result
    void* rcx_9 = *(*(*arg1 + 0x20) + 0x4e8)
    var_18 = rcx_9
    int64_t var_10_2 = sub_141037da0(rcx_9)
    *(result + 8) = var_18.o
else
    result = *(*arg1[5] + 8)
    bool z_1
    
    if (0 == result[3].d)
        result[3].d = 0
        z_1 = true
    else
        result[3].d
        z_1 = false
    
    if (not(z_1))
        goto label_14102765f
    
    if (sub_1410645f0(&result[1]) == 0)
        goto label_14102765f
    
    int64_t* rcx_2 = *result
    int32_t rax_5 = (*(*rcx_2 + 0x40))(rcx_2)
    
    if (rax_5 s< 0)
        var_18 = nullptr
        int64_t* var_20_1 = &var_18
        int64_t var_10_1 = 0
        sub_14106a020(rax_5, "CommandAllocator->Reset()", 
            "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\D3D12CommandList.h", 0x16, 
            nullptr)
    
    void* rdx_2 = *arg1[5]
    
    if (rdx_2 != 0)
        result = *(rdx_2 + 8)
        int64_t rcx_4 = arg1[5]
        arg1[5] = rdx_2
        *(rdx_2 + 8) = 0
        j_sub_140a74f90(rcx_4)

if (arg1 != -0x30)
    LeaveCriticalSection(&arg1[6])

return result
