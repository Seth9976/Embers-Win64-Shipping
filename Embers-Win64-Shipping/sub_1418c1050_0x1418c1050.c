// 函数: sub_1418c1050
// 地址: 0x1418c1050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
void* r12 = *arg1
int64_t* rsi = arg1
int64_t rbx = sx.q(rsi[4].d)
void* r13 = &rsi[3]
int64_t rdi = sx.q(*(r12 + 0x10))
uint32_t i_3 = (1 << rdi.b) - 1
int32_t rax_2 = (rbx + rdi).d
*(r13 + 8) = rax_2

if (rax_2 s> *(r13 + 0xc))
    sub_1405a4d70(r13)

memset(*r13 + (rbx << 3), 0, rdi << 3)
void* rax_4 = r12 + 0x10
uint64_t i_6 = 4
int32_t var_248
int32_t* rcx_3 = &var_248
uint64_t i

do
    rcx_3 = &rcx_3[0x20]
    int128_t zmm0_1 = *rax_4
    int128_t zmm1 = *(rax_4 + 0x10)
    rax_4 += 0x80
    *(rcx_3 - 0x80) = zmm0_1
    zmm0_1 = *(rax_4 - 0x60)
    *(rcx_3 - 0x70) = zmm1
    zmm1 = *(rax_4 - 0x50)
    *(rcx_3 - 0x60) = zmm0_1
    zmm0_1 = *(rax_4 - 0x40)
    *(rcx_3 - 0x50) = zmm1
    zmm1 = *(rax_4 - 0x30)
    *(rcx_3 - 0x40) = zmm0_1
    zmm0_1 = *(rax_4 - 0x20)
    *(rcx_3 - 0x30) = zmm1
    zmm1 = *(rax_4 - 0x10)
    *(rcx_3 - 0x20) = zmm0_1
    *(rcx_3 - 0x10) = zmm1
    i = i_6
    i_6 -= 1
while (i != 1)
int32_t* r14 = nullptr
*rcx_3 = *rax_4
uint64_t rbx_1 = 0
int32_t r15 = var_248
int32_t i_9 = 0
int32_t* var_258 = nullptr
uint32_t i_1 = i_3
int32_t i_8 = i_6.d

if (r15 != 0)
    while (i_1 != 0)
        char var_244[0x20c]
        
        if ((i_1.b & 1) != 0 && (var_244[rbx_1 << 3] & 1) != 0)
            int64_t i_10 = sx.q(i_9)
            i_9 = (i_10 + 1).d
            
            if (i_9 s> i_6.d)
                sub_1405a4cf0(&var_258)
                i_6 = zx.q(i_8)
                r14 = var_258
            
            r14[i_10] = rbx_1.d
        
        i_1 u>>= 1
        rbx_1 = zx.q(rbx_1.d + 1)
        
        if (rbx_1.d u>= r15)
            break
    
    if (i_9 s> 0)
        void* rsi_1 = r12 + 0x14
        int32_t* rdi_1 = r14
        uint64_t i_7 = zx.q(i_9)
        uint64_t i_2
        
        do
            uint64_t rbx_3 = *(r12 + sx.q(*(r12 + (zx.q(*rdi_1) << 3) + 0x18)) * 0x10 + 0x118) u>> 3
            int64_t** rax_7 = j_sub_140a82f30(0x58)
            int64_t** rdx_3 = rax_7
            
            if (rax_7 == 0)
                rdx_3 = nullptr
            else
                rax_7[1].d = *rdi_1
                int32_t rcx_8 = 0x10000000
                *rax_7 = arg1
                *(rax_7 + 0xc) = 0
                
                if (rbx_3 u<= 0x10000000)
                    rcx_8 = rbx_3.d
                
                rax_7[2].d = rcx_8
                *(rdx_3 + 0x14) = 0
                rdx_3[3] = 0
                rdx_3[4].d = 0
                __builtin_memset(&rdx_3[5], 0, 0x30)
            
            *(*r13 + (sx.q(*rdi_1) << 3)) = rdx_3
            *(*(*r13 + (sx.q(*rdi_1) << 3)) + 0xc) = (*rsi_1 u>> 3).b & 1
            int64_t rdx_6 = sx.q(*rdi_1)
            rdi_1 = &rdi_1[1]
            int32_t r8_2 = *rsi_1
            rsi_1 += 8
            *(*(*r13 + (rdx_6 << 3)) + 0xd) = (r8_2 u>> 4).b & 1
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    if (r14 != 0)
        sub_140a74f90(r14)
    
    rsi = arg1

int32_t r9 = *(r12 + 0x10)
int32_t rbx_4 = 0
uint32_t i_4 = i_3
int32_t rdx_8 = 0
int32_t rdi_2 = -8

if (r9 == 0)
label_1418c12f6:
    sub_141903f80(0xfffffff8, 
        "MemoryManager.GetMemoryTypeFromProperties(TypeBits, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | "
    "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, &TypeIndex)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
else
    void* r8_4 = r12 + 0x14
    
    while (true)
        if (i_4 == 0)
            goto label_1418c12f6
        
        if ((i_4.b & 1) != 0 && ((*r8_4).b & 6) == 6)
            rbx_4 = rdx_8
            break
        
        i_4 u>>= 1
        rdx_8 += 1
        r8_4 += 8
        
        if (rdx_8 u>= r9)
            goto label_1418c12f6

int64_t** rax_13 = j_sub_140a82f30(0x58)
int64_t** rdx_9 = rax_13

if (rax_13 == 0)
    rdx_9 = nullptr
else
    *rax_13 = rsi
    rax_13[1].d = rbx_4
    *(rax_13 + 0xc) = 0
    rax_13[2] = 0x2000000
    rax_13[3] = 0
    rax_13[4].d = 0
    __builtin_memset(&rax_13[5], 0, 0x30)

int32_t r10 = 0
int32_t rbx_5 = 0
*(*r13 + (sx.q(rbx_4) << 3)) = rdx_9
uint32_t i_5 = i_3
uint64_t r9_2 = zx.q(*(r12 + 0x10))
int32_t rdx_10 = 0
int32_t r8_6

if (r9_2.d == 0)
label_1418c1390:
    r8_6 = -8
else
    void* r8_5 = r12 + 0x14
    
    while (true)
        if (i_5 == 0)
            goto label_1418c1390
        
        if ((i_5.b & 1) != 0 && ((*r8_5).b & 0xa) == 0xa)
            r10 = rdx_10
            r8_6 = 0
            break
        
        i_5 u>>= 1
        rdx_10 += 1
        r8_5 += 8
        
        if (rdx_10 u>= r9_2.d)
            goto label_1418c1390

int32_t rdx_11 = 0
int32_t rax_17 = 0

if (r9_2.d != 0)
    void* rcx_14 = r12 + 0x14
    
    while (i_3 != 0)
        if ((i_3.b & 1) != 0 && (*rcx_14 & 2) != 0)
            rdx_11 = rax_17
            rdi_2 = 0
            break
        
        i_3 u>>= 1
        rax_17 += 1
        rcx_14 += 8
        
        if (rax_17 u>= r9_2.d)
            break

if (r8_6 == 0)
    rbx_5 = r10
else if (rdi_2 != 0)
    sub_140af98a0("Unknown", 0x594, 
        No Memory Type found supporting VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT!", r9_2)
    sub_140afbb40()
else
    rbx_5 = rdx_11

int64_t** rax_18 = j_sub_140a82f30(0x58)
int64_t** rdx_12 = rax_18

if (rax_18 == 0)
    rdx_12 = nullptr
else
    *rax_18 = rsi
    rax_18[1].d = rbx_5
    *(rax_18 + 0xc) = 0
    rax_18[2] = 0x2000000
    rax_18[3] = 0
    rax_18[4].d = 0
    __builtin_memset(&rax_18[5], 0, 0x30)

int64_t result = *r13
*(result + (sx.q(rbx_5) << 3)) = rdx_12
__security_check_cookie(rax_1 ^ &var_288)
return result
