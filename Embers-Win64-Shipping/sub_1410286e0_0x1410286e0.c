// 函数: sub_1410286e0
// 地址: 0x1410286e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t* result = __security_cookie ^ &var_198
int64_t* result_1 = result

if (data_1439c7a38 != 1 && data_1439b4ac8 != 0)
    int32_t rax_1 = *(arg1 + 0x130)
    int32_t r12_1
    
    if (rax_1 != 0)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(rax_1)
        r12_1 = temp0_1
        int32_t var_148_1 = r12_1
    else
        r12_1 = rax_1 + 0x20
    
    int64_t r13_1 = sx.q(arg3[1].d)
    void* var_58_1 = nullptr
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 8
    void* var_a8_1 = nullptr
    int32_t var_a0_1 = 0
    int32_t var_9c_1 = 8
    void var_e8
    void var_98
    
    if (r13_1 s> 0)
        int64_t r14_1 = *arg3
        int64_t rsi_1 = 0
        
        do
            int64_t* rcx = *(r14_1 + (rsi_1 << 3))
            void* const rbx_1
            
            if (rcx == 0)
                rbx_1 = nullptr
            else
                void* rax_3 = (*(*rcx + 0x48))(rcx)
                rbx_1 = rax_3
                
                if (rax_3 != 0 && data_1439c7a34 u> 1)
                    void* rcx_1 = *(rax_3 + 0xe8)
                    
                    if (rcx_1 != rax_3)
                        rbx_1 = rcx_1
                    
                    if (rbx_1 != 0)
                        while (*(rbx_1 + 8) != *(arg1 + 0x138))
                            rbx_1 = *(rbx_1 + 0xb8)
                            
                            if (rbx_1 == 0)
                                break
            
            int64_t rdi_1 = sx.q(var_50_1)
            int32_t rax_5 = (rdi_1 + 1).d
            var_50_1 = rax_5
            
            if (rax_5 s> var_4c_1)
                sub_140809370(&var_98, rdi_1.d)
            
            void* rcx_3 = &var_98
            
            if (var_58_1 != 0)
                rcx_3 = var_58_1
            
            *(rcx_3 + (rdi_1 << 3)) = rbx_1
            int32_t rcx_4 = data_1439c7a38
            int64_t* rcx_5 = *(r14_1 + (rsi_1 << 3))
            void* const rdi_2
            
            if (rcx_5 == 0)
                rdi_2 = nullptr
            else
                void* rax_12 = (*(*rcx_5 + 0x48))(rcx_5)
                rdi_2 = rax_12
                
                if (rax_12 != 0 && data_1439c7a34 u> 1)
                    void* rax_13 = *(rax_12 + 0xe8)
                    
                    if (rax_13 != rdi_2)
                        rdi_2 = rax_13
                    
                    if (rdi_2 != 0)
                        while (*(*(rdi_2 + 8) + 0x18) != divu.dp.d(0:r12_1, rcx_4) * rcx_4
                                + modu.dp.d(0:(r12_1 + 1), rcx_4))
                            rdi_2 = *(rdi_2 + 0xb8)
                            
                            if (rdi_2 == 0)
                                break
            
            int64_t rbx_5 = sx.q(var_a0_1)
            int32_t rax_15 = (rbx_5 + 1).d
            var_a0_1 = rax_15
            
            if (rax_15 s> var_9c_1)
                sub_140809370(&var_e8, rbx_5.d)
            
            void* rcx_7 = &var_e8
            
            if (var_a8_1 != 0)
                rcx_7 = var_a8_1
            
            rsi_1 += 1
            *(rcx_7 + (rbx_5 << 3)) = rdi_2
        while (rsi_1 s< r13_1)
    
    void* r14_2 = *(arg1 + 0x138)
    int64_t* rax_17 = sub_141024080(*(r14_2 + 0x20), arg2)
    
    if (r13_1 s> 0)
        int64_t rbx_6 = 0
        
        do
            void* rdx_4 = &var_98
            
            if (var_58_1 != 0)
                rdx_4 = var_58_1
            
            sub_141037220(arg1 + 0x1c0, *(*(rdx_4 + (rbx_6 << 3)) + 0x58), 0, 0xffffffff)
            void* rdx_7 = &var_e8
            
            if (var_a8_1 != 0)
                rdx_7 = var_a8_1
            
            sub_141037220(arg1 + 0x1c0, *(*(rdx_7 + (rbx_6 << 3)) + 0x58), 0, 0xffffffff)
            rbx_6 += 1
        while (rbx_6 s< r13_1)
    
    void* rbx_7 = *(arg1 + 0x1c8)
    int32_t rdx_10 = *(rbx_7 + 0x128)
    int64_t* rcx_12 = *(rbx_7 + 0x30)
    
    if (rdx_10 != 0)
        (*(*rcx_12 + 0xd0))(rcx_12, rdx_10, *(rbx_7 + 0x120))
        *(rbx_7 + 0x128) = 0
    
    void** var_128
    int32_t r8_1 = sub_141022330(arg1, &var_128, 0)
    var_128 = &data_142efcd90
    int64_t* var_120
    
    if (var_120 != 0)
        int32_t rax_20 = *(var_120 + 0x14)
        *(var_120 + 0x14) -= 1
        
        if (rax_20 == 1)
            r8_1 = sub_141011360(var_120, rax_20.b)
    
    uint64_t rdi_3 = zx.q(r12_1)
    sub_141036450(rax_17, rdi_3.d, sbb.d(r8_1, r8_1, *(arg1 + 0x136) != 0) & 2)
    int32_t* rbx_8 = rax_17[2]
    void* rax_24 = &rbx_8[sx.q(rax_17[3].d) * 8]
    
    if (rbx_8 == rax_24)
    label_141028a0d:
        rbx_8 = nullptr
    else
        while ((*rbx_8 & 1 << rdi_3.b) == 0)
            rbx_8 = &rbx_8[8]
            
            if (rbx_8 == rax_24)
                goto label_141028a0d
    
    int64_t* rcx_20 = *(*(*((rdi_3 << 3) + 0x9d8 + *rax_17) + 0x40) + 0x28)
    int64_t r9_2 = *rcx_20
    int32_t rax_28 = (*(r9_2 + 0x78))(rcx_20, *(*(rbx_8 + 0x18) + 0x18), *(rbx_8 + 8), r9_2)
    int64_t* var_178
    int64_t* var_170
    
    if (rax_28 s< 0)
        int64_t var_118 = 0
        var_170 = &var_118
        int64_t var_110_1 = 0
        var_178 = nullptr
        sub_14106a020(rax_28, 
            "CommandQueue->Wait(CrossGPUFence->FenceCore->GetFence(), CrossGPUFence->LastSignaledFence)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12CommandContext.cpp", 
            0x332, var_178)
    
    *(rbx_8 + 0x10) = *(rbx_8 + 8)
    int64_t* rax_30 = sub_141027590(r14_2 + 0x50)
    int64_t* rdi_4 = *(r14_2 + 0x40)
    void** var_f8
    sub_141027760(rdi_4, &var_f8, rax_30)
    int64_t* var_f0
    var_f0[4] = arg1
    
    if (r13_1 s> 0)
        int64_t rbx_9 = 0
        
        do
            void* rdx_17 = &var_98
            int64_t* rcx_24 = var_f0[6]
            
            if (var_58_1 != 0)
                rdx_17 = var_58_1
            
            int64_t r9_3 = *rcx_24
            void* rdx_18 = &var_e8
            
            if (var_a8_1 != 0)
                rdx_18 = var_a8_1
            
            (*(r9_3 + 0x88))(rcx_24, *(*(*(rdx_18 + (rbx_9 << 3)) + 0x58) + 0x20), 
                *(*(*(rdx_17 + (rbx_9 << 3)) + 0x58) + 0x20), r9_3, var_178, var_170, r12_1, arg2)
            rbx_9 += 1
        while (rbx_9 s< r13_1)
    
    sub_1410179a0(var_f0)
    int32_t i_2 = 1
    void*** var_158 = nullptr
    sub_1405a4f90(&var_158)
    void*** rax_35 = var_158
    *rax_35 = &data_142efcd90
    rax_35[1] = var_f0
    *(var_f0 + 0x14) += 1
    *rax_35 = &data_142efcd90
    (*(*rdi_4 + 8))(rdi_4, &var_158, 0)
    int32_t i_1 = i_2
    
    if (i_1 != 0)
        void* rbx_11 = &var_158[1]
        int32_t i
        
        do
            void* rcx_28 = *rbx_11
            *(rbx_11 - 8) = &data_142efcd90
            
            if (rcx_28 != 0)
                int32_t rax_37 = *(rcx_28 + 0x14)
                *(rcx_28 + 0x14) -= 1
                
                if (rax_37 == 1)
                    int64_t* rcx_29 = *rbx_11
                    
                    if (rcx_29 != 0)
                        sub_141011360(rcx_29, rax_37.b)
            
            rbx_11 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void*** rcx_30 = var_158
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    EnterCriticalSection(r14_2 + 0x80)
    int64_t* rax_38 = j_sub_140a82f30(0x10)
    
    if (rax_38 != 0)
        rax_38[1] = rax_30
        *rax_38 = 0
        void** rcx_33 = *(r14_2 + 0x70)
        *(r14_2 + 0x70) = rax_38
        *rcx_33 = rax_38
    
    if (r14_2 != -0x80)
        LeaveCriticalSection(r14_2 + 0x80)
    
    int32_t* r8_8 = rax_17[2]
    void* rax_41 = &r8_8[sx.q(rax_17[3].d) * 8]
    
    if (r8_8 == rax_41)
    label_141028c51:
        r8_8 = nullptr
    else
        while ((*r8_8 & 1 << r12_1.b) == 0)
            r8_8 = &r8_8[8]
            
            if (r8_8 == rax_41)
                goto label_141028c51
    
    int64_t* rcx_38 = *(*(*((rdi_3 << 3) + 0x9d8 + *rax_17) + 0x40) + 0x28)
    *(r8_8 + 8) += 1
    int64_t r9_4 = *rcx_38
    result = (*(r9_4 + 0x70))(rcx_38, *(*(r8_8 + 0x18) + 0x18), *(r8_8 + 8), r9_4, var_178, 
        var_170, r12_1, arg2)
    
    if (result.d s< 0)
        int64_t var_108 = 0
        int64_t* var_170_1 = &var_108
        int64_t var_100_1 = 0
        result = sub_14106a020(result.d, 
            "CommandQueue->Signal(CrossGPUFence->FenceCore->GetFence(), "
        "++CrossGPUFence->LastSignaledFence)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12CommandContext.cpp", 
            0x33f, nullptr)
    
    int32_t rsi_2 = *(var_f0 + 0x14)
    *(var_f0 + 0x14) -= 1
    
    if (rsi_2 == 1)
        result = sub_141011360(var_f0, 1)
    
    if (var_a8_1 != 0)
        result = sub_140a74f90(var_a8_1)
    
    if (var_58_1 != 0)
        result = sub_140a74f90(var_58_1)

__security_check_cookie(result_1 ^ &var_198)
return result
