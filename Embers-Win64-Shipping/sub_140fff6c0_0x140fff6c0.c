// 函数: sub_140fff6c0
// 地址: 0x140fff6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int32_t i_1 = arg2
int64_t* result = nullptr
int64_t* result_3 = nullptr

if (arg2 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(arg2)
    int32_t r15_1 = temp0_1
    int32_t i
    
    do
        void* rdi_1 = *(arg1 + (zx.q(r15_1) << 3) + 0x9d8)
        int64_t* result_2 = j_sub_140a82f30(0x78)
        int64_t* result_1 = result_2
        
        if (result_2 == 0)
            result_1 = nullptr
        else
            *result_2 = rdi_1
            result_2[1] = 0
            result_2[2].b = 1
            result_2[3] = 0
            result_2[4].d = 0
            __builtin_memset(&result_2[5], 0, 0x40)
        
        int32_t rcx = 1
        
        if (data_143f0f1d8 == 0)
            rcx = *(rdi_1 + 0x10)
        
        *(*arg3 + 8) = rcx
        int64_t* rcx_1 = result_1[3]
        result_1[3] = 0
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x10))(rcx_1)
        
        int64_t* rcx_2 = *arg3[1]
        int64_t var_48
        int64_t* var_40
        int32_t rax_6 =
            (*(*rcx_2 + 0x138))(rcx_2, *arg3, &data_142eff778, &result_1[3], var_48, var_40)
        
        if (rax_6 s< 0)
            int64_t var_38 = 0
            var_40 = &var_38
            int64_t var_30_1 = 0
            var_48 = 0
            sub_14106a020(rax_6, 
                "D3DDevice->CreateQueryHeap(&QueryHeapDesc, IID_PPV_ARGS(NewHeap->Heap."
            "GetInitReference()))", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Query.cpp", 0x30e, 
                nullptr)
        
        result_1[3]
        uint64_t rcx_6 = zx.q(*(*arg3 + 4)) << 3
        
        if (data_1439b4ad4 != 0)
            result_1[5] = result_1[3]
            result_1[6] = rcx_6
            
            if (data_1439b4ad4 != 0)
                sub_1410146b0(*(*arg3[2] + 0x9d8) + 0x910, &result_1[4])
        
        if (result_3 != 0)
            void* rsi_1 = result_3[1]
            result_3[1] = result_1
            int64_t* rcx_10 = result_1[3]
            
            if (rcx_10 != 0)
                (*(*rcx_10 + 8))(rcx_10)
            
            if (rsi_1 != 0)
                int64_t* rcx_11 = *(rsi_1 + 0x18)
                
                if (rcx_11 != 0)
                    (*(*rcx_11 + 0x10))(rcx_11)
            
            result_1[2].b = 0
        else
            result = result_1
        
        result_3 = result_1
        int32_t rax_13 = not.d(1 << r15_1.b)
        r15_1 = 0x20
        i = rax_13 & i_1
        i_1 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i)
            r15_1 = temp0_2
        
        arg1 = arg_8
    while (i != 0)

return result
