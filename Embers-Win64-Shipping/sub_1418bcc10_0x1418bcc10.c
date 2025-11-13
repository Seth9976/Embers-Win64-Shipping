// 函数: sub_1418bcc10
// 地址: 0x1418bcc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_78 = 3
int32_t rbx = 0
int64_t var_74
__builtin_memset(&var_74, 0, 0x44)
int64_t var_4c
var_4c:4.d = *(arg1 + 0x1ad8)
int64_t var_44 = *(arg1 + 0x1ad0)
int32_t rax_2 = *(arg1 + 0x1ae8)
int64_t var_5c
var_5c:4.d = rax_2

if (rax_2 == 0)
    int64_t var_54 = 0
else
    var_54 = *(arg1 + 0x1ae0)

int32_t rdx = -1
int32_t* r12 = nullptr
int32_t r8 = -1
int32_t var_a8 = 0xffffffff
int32_t r9 = -1
int32_t var_9c = 0xffffffff
int32_t i_2 = 0
int32_t var_a4 = 0xffffffff
int32_t rcx = 0
int32_t* var_98 = nullptr
int32_t rax_4 = 0
int32_t var_8c = 0
int32_t rsi = 0
int32_t var_a0 = 0

if (*(arg1 + 0xc28) s> 0)
    void* r15_1 = nullptr
    
    while (true)
        int64_t rax_5 = *(arg1 + 0xc20)
        r12.b = 0
        char rax_6 = (*(r15_1 + rax_5)).b
        
        if ((rax_6 & 1) != 0 && rdx == 0xffffffff)
            var_a8 = rsi
            r12.b = 1
        
        if ((rax_6 & 2) != 0 && r8 == 0xffffffff)
            int64_t r14_1 = data_143efb108
            int64_t rcx_1
            
            if (data_143de5480 == 0)
                rcx_1 = 0
            else
                rcx_1.b = GetCurrentThreadId() != data_143de5470
            
            int64_t rcx_2
            int64_t r14_2
            
            if (*(r14_1 + (rcx_1 << 2)) == 0)
                r14_2 = data_143efb120
                
                if (data_143de5480 == 0)
                    rcx_2 = 0
                else
                    rcx_2.b = GetCurrentThreadId() != data_143de5470
            
            if (*(r14_1 + (rcx_1 << 2)) == 0 && *(r14_2 + (rcx_2 << 2)) == 0)
                rcx = var_8c
                r9 = var_a4
            else
                rcx = var_8c
                r9 = var_a4
                
                if (var_a8 != rsi)
                    var_9c = rsi
                    r12.b = 1
        
        int64_t rdx_2 = rax_5
        char rax_9 = (*(r15_1 + rdx_2)).b
        
        if ((rax_9 & 4) == 0 || r9 != 0xffffffff || (rax_9 & 3) != 0)
            if (r12.b != 0)
                goto label_1418bcd9a
            
            r12 = var_98
            rax_4 = var_a0
        else
            r9 = rsi
            var_a4 = rsi
        label_1418bcd9a:
            int64_t i_3 = sx.q(i_2)
            i_2 = (i_3 + 1).d
            
            if (i_2 s> rcx)
                sub_1405c4ec0(&var_98)
                rdx_2 = rax_5
                r9 = var_a4
            
            r12 = var_98
            int64_t rcx_4 = i_3 * 5
            *(r12 + (rcx_4 << 3)) = 0
            *(r12 + (rcx_4 << 3) + 8) = 0
            *(r12 + (rcx_4 << 3) + 0x10) = 0
            *(r12 + (rcx_4 << 3) + 0x18) = 0
            *(r12 + (rcx_4 << 3) + 0x20) = 0
            int64_t rcx_5 = i_3 * 5
            r12[rcx_5 * 2] = 2
            r12[rcx_5 * 2 + 5] = rsi
            r12[rcx_5 * 2 + 6] = *(r15_1 + rdx_2 + 4)
            rax_4 = var_a0 + *(r15_1 + rdx_2 + 4)
            var_a0 = rax_4
        
        rcx = var_8c
        rsi += 1
        r15_1 += 0x18
        
        if (rsi s>= *(arg1 + 0xc28))
            break
        
        rdx = var_a8
        r8 = var_9c

var_98 = nullptr
int32_t* r14_3 = nullptr
int32_t var_8c_1 = 0
int32_t var_90_2 = rax_4

if (rax_4 s> 0)
    sub_1406105e0(&var_98)
    r14_3 = var_98

int32_t* rcx_7 = r14_3

if (i_2 s> 0)
    int32_t* r9_1 = &r12[5]
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rax_12 = sx.q(*r9_1)
        *(r9_1 + 0xc) = rcx_7
        int64_t r8_1 = *(arg1 + 0xc20)
        int64_t rdx_4 = rax_12 * 3
        int32_t j = 0
        
        if (*(r8_1 + (rdx_4 << 3) + 4) s> 0)
            do
                *rcx_7 = 0x3f800000
                j += 1
                rcx_7 = &rcx_7[1]
            while (j s< *(r8_1 + (rdx_4 << 3) + 4))
        
        r9_1 = &r9_1[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rsi_1 = data_143efb138
int64_t var_64
var_64.d = i_2
var_64 = r12
int64_t rdx_5

if (data_143de5480 == 0)
    rdx_5 = 0
else
    rdx_5.b = GetCurrentThreadId() != data_143de5470

int64_t var_3c = arg1 + 0xb40
int32_t rax_14
rax_14.b = *(rsi_1 + (rdx_5 << 2)) s> 0
*(arg1 + 0xb40) = rax_14
__builtin_memset(arg1 + 0xbe8, 0, 0x24)
*(arg1 + 0xc10) = 0
int32_t rax_15 = data_143efb6d8(*(arg1 + 0x7c0), &var_78, 0, arg1 + 8, var_a8, var_a0)

if (rax_15 == 0xfffffffd)
    sub_140b709d0(0, 
        Cannot create a Vulkan device. Try updating your video driver to a more recent version.\n", 
        Vulkan device creation failed")
    j_sub_140b721f0(1)
    sub_141903f80(rax_15, "Result", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanDevice.cpp")
else if (rax_15 s< 0)
    sub_141903f80(rax_15, "Result", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanDevice.cpp")

int64_t* rax_16 = j_sub_140a82f30(0x58)
int32_t rsi_3 = var_a8
int64_t* rax_17

if (rax_16 == 0)
    rax_17 = nullptr
else
    rax_17 = sub_1418cfed0(rax_16, arg1, rsi_3)

int32_t r15_2 = var_9c
*(arg1 + 0x1558) = rax_17

if (r15_2 != 0xffffffff)
    int64_t rsi_4 = data_143efb108
    int64_t rcx_12
    
    if (data_143de5480 == 0)
        rcx_12 = 0
    else
        rcx_12.b = GetCurrentThreadId() != data_143de5470
    
    rsi_3 = var_a8
    
    if (*(rsi_4 + (rcx_12 << 2)) != 0)
        *(arg1 + 0x1578) = 1
else
    r15_2 = rsi_3

int64_t* rax_19 = j_sub_140a82f30(0x58)
int64_t* rax_20

if (rax_19 == 0)
    rax_20 = nullptr
else
    rax_20 = sub_1418cfed0(rax_19, arg1, r15_2)

*(arg1 + 0x1560) = rax_20
int64_t* rax_21 = j_sub_140a82f30(0x58)
int64_t* rax_22

if (rax_21 == 0)
    rax_22 = nullptr
else
    if (var_a4 != 0xffffffff)
        r15_2 = var_a4
    
    rax_22 = sub_1418cfed0(rax_21, arg1, r15_2)

*(arg1 + 0x1568) = rax_22
int64_t result = *(arg1 + 0xc20)
uint64_t rcx_16 = zx.q(*(result + sx.q(rsi_3) * 0x18 + 8))

if (rcx_16 != 0)
    if (rcx_16 != 0x40)
        result = (1 << rcx_16.b) - 1
        *(arg1 + 0x1550) = result
    else
        *(arg1 + 0x1550) = -1

int64_t rdi_1 = data_143efb168
int64_t rcx_17

if (data_143de5480 == 0)
    rcx_17 = 0
else
    result = GetCurrentThreadId()
    rcx_17.b = result.d != data_143de5470

int32_t rcx_18 = *(rdi_1 + (rcx_17 << 2))

if (rcx_18 == 1)
    rbx = 1
else if (rcx_18 == 2)
    rbx = rcx_18

data_1439c7188 = rbx

if (r14_3 != 0)
    result = sub_140a74f90(r14_3)

if (r12 == 0)
    return result

return sub_140a74f90(r12)
