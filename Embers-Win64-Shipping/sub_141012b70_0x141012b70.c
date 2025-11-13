// 函数: sub_141012b70
// 地址: 0x141012b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2[3].d
int32_t rdx

if ((r8.b & 4) == 0)
    rdx = zx.d(not.b(r8.b)) u>> 3 & 1
else
    rdx = 2

uint64_t rax_2 = zx.q(rdx)
int64_t* rsi = arg1[rax_2 + 2]

if (rsi == 0)
    arg5 = sub_141025f90(arg1, rdx, r8)
    rsi = arg1[rax_2 + 2]

void* r14 = *(*rsi + 0x20)
char result
int512_t zmm0
result, zmm0 = sub_141044ca0(arg4, arg5)
int64_t rdx_3 = arg2[1].q

if (rdx_3 != 0)
    void** rcx_1 = rsi[2]
    int32_t r8_1 = 0xac3
    
    if (test_bit(arg3, 0xf))
        r8_1 = 0x400000
    
    int32_t arg_8 = r8_1
    
    if (rdx_3 u>= zx.q(rcx_1[2].d))
        goto label_141012ce3
    
    int32_t rbx_1 = rcx_1[0xe].d
    result = sub_141037c90(rcx_1, rdx_3.d, arg6, arg4, zmm0)
    int64_t var_40
    
    if (result == 0)
        r8_1 = arg_8
    label_141012ce3:
        int32_t r9_3 = *(rsi + 0xc)
        int32_t var_58_1 = arg2[3].d
        void* const var_48 = nullptr
        int32_t rax_12 = sub_1410481a0(r14, 1, rsi[1].d, r9_3, r8_1, arg2[1].q, &var_48, arg7)
        
        if (rax_12 s< 0)
            var_40 = 0
            int64_t* var_70_3 = &var_40
            int64_t var_38_2 = 0
            sub_14106a020(rax_12, 
                "Adapter->CreateBuffer(D3D12_HEAP_TYPE_DEFAULT, GetGPUMask(), GetVisibilityMask(), "
            "InitialState, Desc.Width, &NewResource, Name, Desc.Flags)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Allocation.cpp", 
                0x402, nullptr)
        
        return sub_141014320(arg4, var_48, arg2[1].d, 0)
    
    if (rbx_1 == 0)
        void* rax_5 = *(arg4 + 0x20)
        int32_t var_58
        var_58.b = 1
        void* r8_3 = *(rax_5 + 0x90)
        int64_t r9_2 = zx.q(*(rax_5 + 0x74)) * zx.q(*(arg4 + 0x28))
        void* const arg_10 = nullptr
        int32_t var_78
        var_78.q = &arg_8
        int32_t rax_8 = sub_141048c60(r14, arg2, r8_3, r9_2, var_78, nullptr, &arg_10, arg7.b)
        
        if (rax_8 s< 0)
            var_40 = 0
            int64_t* var_70_1 = &var_40
            int64_t var_38_1 = 0
            sub_14106a020(rax_8, 
                "Adapter->CreatePlacedResource(Desc, BackingHeap, HeapOffset, InitialState, nullptr, "
            "&NewResource, Name)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Allocation.cpp", 
                0x3f2, nullptr)
        
        return sub_14105ac70(arg4, arg_10)

return result
