// 函数: sub_14106a230
// 地址: 0x14106a230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_1410271d0(arg1, arg2)

if (result != 0)
    return result

int32_t i_1 = *(arg1 + 0x30)

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    int32_t rsi_2 = temp0_1
    
    if (i_1 != 0)
        int32_t i
        
        do
            void* rbp_1 = *(arg1 + (zx.q(rsi_2) << 3) + 0x98)
            int64_t* rcx = *(rbp_1 + 0x18)
            
            if (arg2 u> (*(*rcx + 0x40))(rcx))
                EnterCriticalSection(arg1 + 0x50)
                int64_t* rcx_2 = *(rbp_1 + 0x18)
                int32_t rax_4 = (*(*rcx_2 + 0x48))(rcx_2, arg2, *(rbp_1 + 0x20))
                
                if (rax_4 s< 0)
                    int64_t var_28 = 0
                    int64_t* var_30_1 = &var_28
                    int64_t var_20_1 = 0
                    sub_14106a020(rax_4, 
                        "FenceCore->GetFence()->SetEventOnCompletion(FenceValue, "
                    "FenceCore->GetCompletionEvent())", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Fence."
                    "cpp", 0x2e, nullptr)
                
                WaitForSingleObject(*(rbp_1 + 0x20), 0xffffffff)
                
                if (arg1 != -0x50)
                    LeaveCriticalSection(arg1 + 0x50)
            
            int32_t rax_5 = 1 << rsi_2.b
            rsi_2 = 0x20
            i = not.d(rax_5) & i_1
            i_1 = i
            
            if (i != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(i)
                rsi_2 = temp0_2
        while (i != 0)

return sub_141037da0(arg1)
