// 函数: sub_1418c25a0
// 地址: 0x1418c25a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint64_t r12 = zx.q(arg5)
uint64_t r15 = zx.q(arg4)
int64_t result

if (((*(arg1 + 0x10) u>> 2).b & 1) == 0)
    void* var_c8
    void* var_c0
    void*** var_b8
    void** var_a0
    
    if (arg3 != 0)
        uint64_t rdx_11 = zx.q(modu.dp.d(0:(*(arg1 + 0x1c) + 1), *(arg1 + 0x18)))
        *(arg1 + 0x1c) = rdx_11.d
        void* rcx_35 = *(arg1 + (rdx_11 << 3) + 0x20)
        *(arg1 + 0x38) = rcx_35
        *(arg1 + 0x40) = *(rcx_35 + 0x20)
        *(arg1 + 0x48) = *(rcx_35 + 0x28)
        void* rcx_36 = *(arg1 + 8)
        *(arg1 + 0x50) = zx.q(*(rcx_35 + 0x14))
        *(arg1 + 0x58) = r15
        
        if (*(rcx_36 + 0x220) == 0)
            int32_t var_a8_2 = arg3
            int32_t var_b0_2 = r12.d
            int32_t var_ac_2 = r15.d
            void*** rax_32 = sub_1418ba820(rcx_36 + 0x3f0, r15.d, 1, 4)
            var_b8 = rax_32
            void* rcx_39 = rax_32[2]
            int64_t result_2 = zx.q(*(rcx_39 + 0x24)) + *(*(rcx_39 + 0x28) + 0x18)
            EnterCriticalSection(&data_143efb198)
            var_c0 = arg1
            var_a0 = &var_c0
            void**** var_98_2 = &var_b8
            sub_1418b7d70(&data_1439c71e0, &var_c8, &var_a0, nullptr)
            LeaveCriticalSection(&data_143efb198)
            result = result_2
        else
            void* rdx_12 = *(arg1 + (rdx_11 << 3) + 0x20)
            result = *(*(*(rdx_12 + 0x20) + 0x18) + 0x18) + zx.q(*(rdx_12 + 0x14)) + r12
    else
        void* rdi_1 = *(arg1 + 8)
        
        if (*(rdi_1 + 0x220) == arg3.b)
            void* rdi_2 = *(rdi_1 + 0x1a50)
            void* rsi_1 = *(rdi_2 + 0x240)
            
            if (*(rsi_1 + 0x78) != 0)
                sub_1418c86c0(rsi_1, 0, 0)
            
            void* rsi_2 = *(rsi_1 + 0x70)
            
            if (rsi_2 != 0)
                char rcx_7 = *(rsi_2 + 0x2c)
                
                if (rcx_7 - 1 u<= 1)
                    if (rcx_7 == 2)
                        sub_1418e06b0(rdi_2 + 0x248, rsi_2)
                    
                    sub_1418c8030(*(rdi_2 + 0x240), nullptr)
                    
                    if (data_143efb314 == 0)
                        int64_t* rdi_3 = *(rdi_2 + 0x240)
                        EnterCriticalSection(&rdi_3[6])
                        int64_t rdx_4 = 0
                        double zmm0_1 = 10000000000.0
                        double zmm1_1 = 9.2233720368547758e+18
                        void* r13_1 = *(rsi_2 + 0x90)
                        
                        if (not(zmm0_1 < zmm1_1))
                            zmm0_1 = zmm0_1 - zmm1_1
                            
                            if (not(zmm0_1 >= zmm1_1))
                                rdx_4 = -0x8000000000000000
                        
                        int32_t var_f8
                        var_f8.q = int.q(zmm0_1) + rdx_4
                        int32_t rax_17 =
                            data_143efb7a8(*(*(*rdi_3 + 0x438) + 8), 1, r13_1, 1, var_f8)
                        
                        if (rax_17 == 0)
                            *(r13_1 + 8) = 1
                        else if (rax_17 != 2)
                            sub_141903f80(rax_17, "Result", 
                                "D:"
                            "/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory."
                            "cpp")
                        
                        sub_1418c4d80(rsi_2)
                        
                        if (rdi_3 != -0x30)
                            LeaveCriticalSection(&rdi_3[6])
            
            void* rax_19 = *(*(arg1 + 8) + 0x1a50)
            var_c8 = rax_19
            void*** rax_20 = sub_1418c0d30(*(rax_19 + 0x240))
            int64_t var_d0_1 = 0
            int32_t var_d8_1 = 0
            int32_t var_90
            int32_t* var_e0_1 = &var_90
            int32_t var_e8_1 = 1
            int64_t var_70_1 = *(*(arg1 + (zx.q(*(arg1 + 0x1c)) << 3) + 0x20) + 0x28)
            int64_t var_8c_1 = 0
            int32_t var_84_1 = 0
            int64_t var_78_1 = 0
            var_90 = 0x2c
            int32_t var_80_1 = 0x10000
            int32_t var_7c_1 = 0x8000
            uint64_t var_68_1 = r12
            uint64_t var_60_1 = r15
            data_143efba60(rax_20[8], 0x1000, 0x1000, 0, 0, 0, var_e8_1, var_e0_1, var_d8_1, 
                var_d0_1, var_c8)
            void*** rax_21 = sub_1418ba820(*(arg1 + 8) + 0x3f0, r15.d, 2, 8)
            uint64_t rcx_22 = zx.q(*(arg1 + 0x1c))
            uint64_t var_48_1 = r15
            uint64_t var_58 = r12
            int64_t var_50_1 = 0
            int32_t var_f8_1
            var_f8_1.q = &var_58
            data_143efb9f0(rax_20[8], *(*(arg1 + (rcx_22 << 3) + 0x20) + 0x28), rax_21[3], 1, 
                var_f8_1)
            int64_t rcx_24 = rax_21[3]
            int64_t var_d0_2 = 0
            int32_t var_d8_2 = 0
            int32_t* var_e0_2 = &var_90
            int32_t var_e8_2 = 1
            int64_t var_8c_2 = 0
            int32_t var_84_2 = 0
            int64_t var_78_2 = 0
            var_90 = 0x2c
            int32_t var_80_2 = 0x10000
            int32_t var_7c_2 = 0x2000
            int64_t var_70_2 = rcx_24
            int64_t var_68_2 = 0
            uint64_t var_60_2 = r15
            data_143efba60(rax_20[8], 0x1000, 0x4000, 0, 0, 0, var_e8_2, var_e0_2, var_d8_2, 
                var_d0_2)
            void* rdi_4 = var_c8
            sub_1418c86c0(*(rdi_4 + 0x240), 0, 0)
            void* rbx_3 = *(arg1 + 8)
            int32_t rax_22 = data_143efb710(*(rbx_3 + 8))
            
            if (rax_22 != 0)
                sub_141903f80(rax_22, "VulkanRHI::vkDeviceWaitIdle(Device)", 
                    "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanDevice.cpp")
            
            sub_1418c4f60(*(*(rbx_3 + 0x1a50) + 0x240), 0)
            void* rcx_31 = rax_21[2]
            sub_1418be950(*(rcx_31 + 0x28), zx.q(*(rcx_31 + 0x1c)), zx.q(*(rcx_31 + 0x18)))
            void* rax_23 = rax_21[2]
            int64_t result_1 = zx.q(*(rax_23 + 0x24)) + *(*(rax_23 + 0x28) + 0x18)
            int32_t var_b0_1 = 0
            int32_t var_ac_1 = r15.d
            int32_t var_a8_1 = 0
            var_b8 = rax_21
            EnterCriticalSection(&data_143efb198)
            var_c0 = arg1
            var_a0 = &var_c0
            void**** var_98_1 = &var_b8
            sub_1418b7d70(&data_1439c71e0, &var_c8, &var_a0, nullptr)
            LeaveCriticalSection(&data_143efb198)
            sub_1418c2ee0(*(rdi_4 + 0x240))
            result = result_1
        else
            void* rdx_1 = *(arg1 + (zx.q(*(arg1 + 0x1c)) << 3) + 0x20)
            result = *(*(*(rdx_1 + 0x20) + 0x18) + 0x18) + zx.q(*(rdx_1 + 0x14)) + r12
else if (arg3 == 0)
    result = 0
else
    sub_1418bb540(*(*(arg1 + 8) + 0x1a50) + 0x160, (r12 + r15).d, 0x100, arg1 + 0x60)
    *(arg1 + 0x78) += 1
    void* rcx_2 = *(arg1 + 0x68)
    *(arg1 + 0x40) = *(rcx_2 + 0x20)
    *(arg1 + 0x48) = *(rcx_2 + 0x28)
    *(arg1 + 0x50) = zx.q(*(rcx_2 + 0x14) + *(arg1 + 0x70))
    result = *(arg1 + 0x60)
    *(arg1 + 0x58) = r15

__security_check_cookie(rax_1 ^ &var_118)
return result
