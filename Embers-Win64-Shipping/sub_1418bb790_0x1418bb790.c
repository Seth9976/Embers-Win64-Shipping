// 函数: sub_1418bb790
// 地址: 0x1418bb790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t r12 = arg3
int128_t zmm6 = 0x3f000000
int32_t var_e4 = arg2
uint64_t rdx = *arg1
uint8_t rcx_1 = (r12 u>> 5).b & 1
int32_t rsi = 1
int32_t var_d8 = 1
int32_t rax_4

if ((r12.b & 0xc) != 0)
    rax_4 = *(rdx + 0xa28)
label_1418bb83f:
    
    if (rax_4 u<= 1)
        rax_4 = 1
    
    if (rcx_1 == 0)
        rsi = 0
    else
        rsi = *(rdx + 0xa38)
    
    if (rax_4 u>= rsi)
        rsi = rax_4
        var_d8 = rsi
    else
        var_d8 = rsi
else
    if (rcx_1 != 0)
        rax_4 = 0
        goto label_1418bb83f
    
    if ((r12.b & 0xc0) == 0)
        rsi = *(rdx + 0xa30)
        zmm6 = 0x3f400000
        
        if (rsi u<= 1)
            rsi = 1
        
        var_d8 = rsi
    else
        zmm6 = zx.o(0)

if ((r12 & 0x108) != 0)
    zmm6 = 0x3f800000

rdx.b = 7

if (data_143efaf60 != 0)
    for (int32_t i = 0; i s< 7; i += 1)
        if (*((sx.q(i) << 2) + 0x142febdc0) u>= arg2)
            rdx = zx.q(i.b)
            break

uint64_t rax_6 = zx.q(rdx.b)
int32_t var_d0 = rax_6.d
uint64_t rbx_1 = zx.q(rax_6.d)

if (rax_6.d != 7)
    var_e4 = *((rax_6 << 2) + 0x142febdc0)

EnterCriticalSection(&data_143efb2a8)
int32_t r14 = 0
int64_t r13_1 = (rbx_1 + 3) * 2
int32_t var_108
int64_t result

if (arg1[r13_1].d s> 0)
    uint64_t rax_9 = rbx_1 << 4
    uint64_t var_c8_1 = rax_9
    int64_t* rbx_2 = nullptr
    
    while (true)
        int64_t* rcx_2 = *(rbx_2 + *(rax_9 + arg1 + 0x28))
        
        if ((rcx_2[0xb].d & r12) == r12 && (*(rcx_2 + 0x14) & arg4) == arg4)
            var_108 = arg6
            int64_t result_1 = sub_1418c8dd0(rcx_2, var_e4, rsi)
            result = result_1
            
            if (result_1 != 0)
                goto label_1418bbd3e
        
        r14 += 1
        rbx_2 = &rbx_2[1]
        
        if (r14 s>= arg1[r13_1].d)
            rbx_1 = rax_6
            break
        
        rsi = var_d8
        rax_9 = var_c8_1

int32_t r14_1 = 0
int64_t rax_17 = (rbx_1 + 0xb) << 4

if (arg1[(rbx_1 + 0xb) * 2].d s<= 0)
label_1418bb9d9:
    int32_t var_a8 = 0xc
    int64_t var_8c_1 = 0
    int32_t rax_25 = *((rbx_1 << 2) + 0x142febde0)
    int64_t var_94_1 = 0
    
    if (var_e4 u>= rax_25)
        rax_25 = var_e4
    
    uint64_t rbx_4 = zx.q(rax_25)
    void* rax_26 = *arg1
    int64_t var_a4_1 = 0
    int64_t var_9c_1 = 0
    int64_t var_84
    __builtin_memset(&var_84, 0, 0x14)
    var_94_1 = rbx_4
    var_8c_1:4.d = r12
    int64_t var_b8
    int32_t rax_27 = data_143efb800(*(rax_26 + 8), &var_a8, 0, &var_b8, var_108)
    
    if (rax_27 != 0)
        sub_141903f80(rax_27, 
            "VulkanRHI::vkCreateBuffer(Device->GetInstanceHandle(), &BufferCreateInfo, "
        "VULKAN_CPU_ALLOCATOR, &Buffer)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
    
    int64_t var_70
    data_143efb760(*(*arg1 + 8), var_b8, &var_70)
    int32_t r14_2 = var_d8
    void* rdx_5 = *arg1
    uint32_t var_60
    uint32_t rcx_9 = var_60
    int32_t var_68
    
    if (var_68 u>= r14_2)
        r14_2 = var_68
    
    int32_t rsi_1 = 0
    int32_t r8_3 = *(rdx_5 + 0x10)
    
    if (r8_3 == 0)
    label_1418bbac9:
        sub_141903f80(0xfffffff8, 
            "Device->GetMemoryManager().GetMemoryTypeFromProperties(MemReqs.memoryTypeBits, "
        "MemoryPropertyFlags, &MemoryTypeIndex)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
        rsi_1 = var_d0
    else
        void* rdx_6 = rdx_5 + 0x14
        
        while (true)
            if (rcx_9 == 0)
                goto label_1418bbac9
            
            if ((rcx_9.b & 1) != 0 && (*rdx_6 & arg4) == arg4)
                break
            
            rcx_9 u>>= 1
            rsi_1 += 1
            rdx_6 += 8
            
            if (rsi_1 u>= r8_3)
                goto label_1418bbac9
    
    int32_t var_100_1 = zmm6.d
    var_108.q = 0
    int64_t* rax_33 = sub_1418bb2a0(*arg1 + 0x10, 0, var_70, rsi_1, var_108)
    int32_t rax_35 = data_143efb750(*(*arg1 + 8), var_b8, rax_33[2], 0)
    
    if (rax_35 != 0)
        sub_141903f80(rax_35, 
            "VulkanRHI::vkBindBufferMemory(Device->GetInstanceHandle(), Buffer, "
        "DeviceMemoryAllocation->GetHandle(), 0)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
    
    if (((rax_33[4].d u>> 8).b & 1) != 0)
        var_100_1.q = &rax_33[3]
        int32_t rax_39 = data_143efb728(rax_33[1], rax_33[2], 0, rbx_4, 0, var_100_1, arg5, arg6, 
            arg3, arg6, var_d8, var_d0, rax_17, arg5)
        
        if (rax_39 != 0)
            sub_141903f80(rax_39, 
                "VulkanRHI::vkMapMemory(DeviceHandle, Handle, Offset, InSize, 0, &MappedPointer)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
    
    int32_t var_e8_1 = 0
    
    if (data_1439c7a08 s<= 1)
        int32_t rax_40 = (data_143efb4d0).d
        data_143efb4d0 += 1
        var_e8_1 = rax_40 + 1
    
    int64_t* rax_42 = j_sub_140a82f30(0x70)
    int64_t* rbx_5 = rax_42
    
    if (rax_42 == 0)
        rbx_5 = nullptr
    else
        int64_t rax_43 = var_b8
        *rbx_5 = &data_142febd90
        *(rbx_5 + 0x24) = var_68
        rbx_5[5].d = 0
        rbx_5[6] = 0
        rbx_5[1] = arg1
        rbx_5[2].d = rsi_1
        *(rbx_5 + 0x14) = arg4
        rbx_5[3] = rax_33
        __builtin_memset(&rbx_5[7], 0, 0x20)
        int32_t rax_45 = *rax_33
        rbx_5[4].d = rax_45
        int64_t r15_1 = sx.q(rbx_5[8].d)
        int32_t var_d4_1 = rax_45
        int32_t var_d8_1 = 0
        int32_t rax_46 = (r15_1 + 1).d
        rbx_5[8].d = rax_46
        
        if (rax_46 s> *(rbx_5 + 0x44))
            sub_1405a4d70(&rbx_5[7])
        
        *(rbx_5[7] + (r15_1 << 3)) = var_d8_1.q
        *rbx_5 = &data_142febda8
        rbx_5[0xc] = rax_43
        rbx_5[0xd].d = var_e8_1
        *(rbx_5 + 0x6c) = var_d0
        rbx_5[0xb].d = r12
    
    void* rdi_2 = &arg1[rax_6 * 2]
    int64_t rsi_2 = sx.q(*(rdi_2 + 0x30))
    int32_t rax_61 = (rsi_2 + 1).d
    *(rdi_2 + 0x30) = rax_61
    
    if (rax_61 s> *(rdi_2 + 0x34))
        sub_1405a4d70(rdi_2 + 0x28)
    
    *(*(rdi_2 + 0x28) + (rsi_2 << 3)) = rbx_5
    int32_t var_108_2 = arg6
    result = sub_1418c8dd0(rbx_5, var_e4, r14_2)
else
    int32_t rcx_3 = arg3
    int64_t* r12_1 = nullptr
    
    while (true)
        int64_t* rbx_3 = *(r12_1 + arg1[rbx_1 * 2 + 0x15])
        
        if ((rbx_3[0xb].d & rcx_3) == rcx_3 && (*(rbx_3 + 0x14) & arg4) == arg4)
            var_108 = arg6
            int64_t result_2 = sub_1418c8dd0(rbx_3, var_e4, var_d8)
            result = result_2
            
            if (result_2 != 0)
                int32_t rdx_10 = arg1[rbx_1 * 2 + 0x16].d
                int32_t rax_53 = rdx_10 - r14_1 - 1
                
                if (rax_53 s>= 1)
                    rax_53 = 1
                
                if (rax_53 != 0)
                    int64_t rcx_18 = arg1[rbx_1 * 2 + 0x15]
                    memcpy(rcx_18 + (sx.q(r14_1) << 3), rcx_18 + (sx.q(rdx_10 - rax_53) << 3), 
                        rax_53 << 3)
                    rdx_10 = arg1[rbx_1 * 2 + 0x16].d
                
                arg1[rbx_1 * 2 + 0x16].d = rdx_10 - 1
                void* rdi_1 = &arg1[rbx_1 * 2]
                int64_t r14_3 = sx.q(*(rdi_1 + 0x30))
                int32_t rax_57 = (r14_3 + 1).d
                *(rdi_1 + 0x30) = rax_57
                
                if (rax_57 s> *(rdi_1 + 0x34))
                    sub_1405a4d70(rdi_1 + 0x28)
                
                *(*(rdi_1 + 0x28) + (r14_3 << 3)) = rbx_3
                break
            
            rcx_3 = arg3
        
        r14_1 += 1
        r12_1 = &r12_1[1]
        
        if (r14_1 s>= arg1[(rbx_1 + 0xb) * 2].d)
            r12 = arg3
            rbx_1 = rax_6
            goto label_1418bb9d9

label_1418bbd3e:
LeaveCriticalSection(&data_143efb2a8)
__security_check_cookie(rax_1 ^ &var_128)
return result
