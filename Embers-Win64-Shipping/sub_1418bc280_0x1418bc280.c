// 函数: sub_1418bc280
// 地址: 0x1418bc280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12 = zx.q(arg3)
int32_t r15 = arg4
EnterCriticalSection(&data_143efb208)
char rdx = arg6
void* const rdi = 0x38

if (arg2 != 0)
    rdi = 0x28

int64_t* rdi_1 = rdi + arg1
int32_t r13_1
void*** result

if (arg7 != 0)
    r13_1 = r12.d
else
    r13_1 = arg1[2].d
    int64_t var_68
    
    if (r12.d u< r13_1)
        int32_t i = 0
        
        if (rdi_1[1].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                void* rcx = *(r14_1 + *rdi_1)
                void* rax_2
                rax_2.b = *(*(rcx + 8) + 0x18) != 0
                
                if (rax_2.b == rdx)
                    var_68.d = arg9
                    void*** result_1 = sub_1418c8c60(rcx, r12.d, r15)
                    result = result_1
                    
                    if (result_1 != 0)
                        goto label_1418bc66d
                    
                    rdx = arg6
                    r15 = arg4
                
                i += 1
                r14_1 = &r14_1[1]
            while (i s< rdi_1[1].d)
    
    int32_t rbp_2 = 0
    
    if (arg1[0xa].d s> 0)
        int64_t* r14_2 = nullptr
        
        while (true)
            void* rbx_1 = *(r14_2 + arg1[9])
            void* rax_4
            rax_4.b = *(*(rbx_1 + 8) + 0x18) != 0
            
            if (rax_4.b == rdx)
                var_68.d = arg9
                void*** result_2 = sub_1418c8c60(rbx_1, r12.d, r15)
                result = result_2
                
                if (result_2 != 0)
                    int64_t* r10_1 = arg1[9]
                    uint64_t r9_2 = sx.q(arg1[0xa].d)
                    int64_t* rcx_2 = r10_1
                    void* rdx_3 = &r10_1[r9_2]
                    
                    if (r10_1 != rdx_3)
                        do
                            if (*rcx_2 == rbx_1)
                                int32_t rcx_4 = ((rcx_2 - r10_1) s>> 3).d
                                
                                if (rcx_4 != 0xffffffff)
                                    int32_t rax_8 = r9_2.d - rcx_4 - 1
                                    
                                    if (rax_8 s>= 1)
                                        rax_8 = 1
                                    
                                    if (rax_8 != 0)
                                        memcpy(&r10_1[sx.q(rcx_4)], &r10_1[sx.q(r9_2.d - rax_8)], 
                                            rax_8 << 3)
                                        r9_2 = zx.q(arg1[0xa].d)
                                    
                                    arg1[0xa].d = (r9_2 - 1).d
                                
                                break
                            
                            rcx_2 = &rcx_2[1]
                        while (rcx_2 != rdx_3)
                    
                    int64_t rsi_1 = sx.q(rdi_1[1].d)
                    int32_t rax_12 = (rsi_1 + 1).d
                    rdi_1[1].d = rax_12
                    
                    if (rax_12 s> *(rdi_1 + 0xc))
                        sub_1405a4d70(rdi_1)
                    
                    *(*rdi_1 + (rsi_1 << 3)) = rbx_1
                    goto label_1418bc66d
                
                rdx = arg6
            
            rbp_2 += 1
            r14_2 = &r14_2[1]
            
            if (rbp_2 s>= arg1[0xa].d)
                break
            
            r15 = arg4
    
    if (r12.d u>= 0x4000000)
        r13_1 = r12.d
    else if (r12.d u>= r13_1)
        r13_1 = r12.d

int32_t var_50_1 = arg9
int64_t var_58_1 = arg8
int32_t var_60_1 = 0x3f800000
uint64_t r15_1 = zx.q(r13_1)
int64_t var_68_1 = 0
int64_t* rax_15 = sub_1418bb2a0(**arg1 + 0x10, 1, zx.q(r13_1), arg1[1].d, 0)
int64_t* r14_3 = rax_15

if (rax_15 == 0 && r12.d != r13_1)
    var_50_1 = arg9
    var_58_1 = arg8
    var_60_1 = 0x3f800000
    var_68_1 = 0
    int64_t* rax_17 = sub_1418bb2a0(**arg1 + 0x10, 0, r12, arg1[1].d, 0)
    r14_3 = rax_17
    
    if (rax_17 == 0)
        uint64_t r9_6 = zx.q(arg1[1].d)
        int64_t zmm0_1
        zmm0_1.d = float.s(zx.q(r13_1))
        zmm0_1.d = zmm0_1.d f* 9.53674316e-07f
        var_68_1 = _mm_cvtps_pd(zmm0_1)
        sub_140af98a0("Unknown", 0x500, 
            Out of memory on Vulkan; MemoryTypeIndex=%d, AllocSize=%0.3fMB", r9_6)
        sub_140afbb40()

arg1[4].d += 1
void** rax_19 = j_sub_140a82f30(0x48)
void** rbx_3 = rax_19

if (rax_19 == 0)
    rbx_3 = nullptr
else
    int32_t rax_20 = arg1[4].d
    *rbx_3 = arg1
    rbx_3[1] = r14_3
    __builtin_memset(&rbx_3[2], 0, 0x20)
    rbx_3[6].d = rax_20
    rbx_3[7] = 0
    rbx_3[8] = 0
    int32_t rax_21 = *r14_3
    rbx_3[4].d = rax_21
    int32_t arg_c = rax_21
    int32_t arg_8 = 0
    sub_1418bace0(&rbx_3[7], &arg_8)

int64_t rbp_4 = sx.q(rdi_1[1].d)
int32_t rax_22 = (rbp_4 + 1).d
rdi_1[1].d = rax_22

if (rax_22 s> *(rdi_1 + 0xc))
    sub_1405a4d70(rdi_1)

*(*rdi_1 + (rbp_4 << 3)) = rbx_3
arg1[3] += r15_1

if (*(arg1 + 0x14) u>= r13_1)
    r13_1 = *(arg1 + 0x14)

*(arg1 + 0x14) = r13_1

if (arg6 != 0)
    var_60_1.q = &r14_3[3]
    var_68_1.d = 0
    int32_t rax_25 =
        data_143efb728(r14_3[1], r14_3[2], 0, r15_1, 0, 0x3f800000, var_58_1, var_50_1, arg5)
    
    if (rax_25 != 0)
        sub_141903f80(rax_25, 
            "VulkanRHI::vkMapMemory(DeviceHandle, Handle, Offset, InSize, 0, &MappedPointer)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")

var_68_1.d = arg9
result = sub_1418c8c60(rbx_3, r12.d, arg4)
label_1418bc66d:
LeaveCriticalSection(&data_143efb208)
return result
