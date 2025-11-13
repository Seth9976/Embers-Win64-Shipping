// 函数: sub_1418c1530
// 地址: 0x1418c1530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
data_143efb6a8(*(arg1 + 0x7c0), arg1 + 0xb40)
sub_1418bcc10(arg1)
sub_1418c6e90(arg1)
*(arg1 + 0x228) = arg1
*(arg1 + 0x230) = 0
*(arg1 + 0x218) = *(arg1 + 8)
data_143efb6d0(*(arg1 + 0x7c0), arg1 + 0x10)
int32_t i_6 = *(arg1 + 0x114)
int64_t r15 = sx.q(*(arg1 + 0x240))
int32_t rax_3 = r15.d + i_6
*(arg1 + 0x240) = rax_3

if (rax_3 s> *(arg1 + 0x244))
    sub_1405c4ec0(arg1 + 0x238)

int64_t* rdx_3 = *(arg1 + 0x238) + r15 * 0x28

if (i_6 != 0)
    void* rax_5 = rdx_3 + 0x24
    int32_t i
    
    do
        *rdx_3 = 0
        rdx_3 = &rdx_3[5]
        __builtin_memset(rax_5 - 0x1c, 0, 0x20)
        rax_5 += 0x28
        i = i_6
        i_6 -= 1
    while (i != 1)

int32_t i_1 = 0

if (*(arg1 + 0x114) u> 0)
    do
        int64_t i_5 = sx.q(i_1)
        uint64_t i_8 = zx.q(i_1)
        i_1 += 1
        *(*(arg1 + 0x238) + i_5 * 0x28) = *(arg1 + i_8 * 0x10 + 0x118)
    while (i_1 u< *(arg1 + 0x114))

int32_t i_2 = 0
*(arg1 + 0x220) = 0

if (*(arg1 + 0x114) u> 0)
    do
        if ((*(arg1 + (zx.q(i_2) + 0x11) * 0x10 + 0x10) & 1) != 0)
            int64_t r9 = *(arg1 + 0x238)
            int64_t r8_2 = sx.q(i_2) * 5
            int64_t rax_11 = *(r9 + (r8_2 << 3))
            int32_t zmm0_1 = float.s(rax_11)
            
            if (rax_11 s< 0)
                zmm0_1 = zmm0_1 f+ 1.84467441e+19f
            
            zmm0_1 = zmm0_1 f* 0.949999988f
            int64_t rdx_5 = 0
            
            if (not(zmm0_1 f< 9.22337204e+18f))
                zmm0_1 = zmm0_1 f- 9.22337204e+18f
                
                if (not(zmm0_1 f>= 9.22337204e+18f))
                    rdx_5 = -0x8000000000000000
            
            *(r9 + (r8_2 << 3)) = int.q(zmm0_1) + rdx_5
        
        i_2 += 1
    while (i_2 u< *(arg1 + 0x114))

sub_1418c1050(arg1 + 0x248)
*(arg1 + 0x438) = arg1
*(arg1 + 0x430) = arg1
int32_t var_1a8
void* var_1a0
int32_t var_198
char const* const var_190
int32_t var_188

if (data_143efb318 != 0)
    char rax_14 = (*(arg1 + 0x1af0)).b
    
    if ((rax_14 & 0x10) != 0)
        int64_t rcx_8 = *(arg1 + 8)
        int32_t var_d0 = 0xc
        int64_t var_b4_1 = 0
        int64_t var_bc_1 = 0
        var_bc_1 = 0x2000
        var_b4_1:4.d = 2
        int64_t var_cc_1 = 0
        int64_t var_c4_1 = 0
        int64_t var_ac
        __builtin_memset(&var_ac, 0, 0x14)
        int32_t rax_15 = data_143efb800(rcx_8, &var_d0, 0, arg1 + 0x1580)
        
        if (rax_15 != 0)
            sub_141903f80(rax_15, 
                "VulkanRHI::vkCreateBuffer(Device, &CreateInfo, VULKAN_CPU_ALLOCATOR, &CrashMarker."
            "Buffer)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanDevice.cpp")
        
        int64_t rdx_7 = *(arg1 + 0x1580)
        int64_t rcx_10 = *(arg1 + 8)
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x14)
        data_143efb760(rcx_10, rdx_7, &var_98)
        var_188 = 0x381
        var_190 = "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanDevice.cpp"
        var_198 = 0x3f000000
        uint32_t var_88
        int64_t* rax_16 =
            sub_1418bb1b0(arg1 + 0x10, 0, var_bc_1, var_88, 6, 0, var_198, var_190, var_188)
        *(arg1 + 0x1588) = rax_16
        var_1a0 = &rax_16[3]
        var_1a8 = 0
        int32_t rax_17 = data_143efb728(rax_16[1], rax_16[2], 0, -1, var_1a8, var_1a0)
        
        if (rax_17 != 0)
            sub_141903f80(rax_17, 
                "VulkanRHI::vkMapMemory(DeviceHandle, Handle, Offset, InSize, 0, &MappedPointer)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
        
        *rax_16[3] = 0
        int32_t rax_20 =
            data_143efb750(*(arg1 + 8), *(arg1 + 0x1580), *(*(arg1 + 0x1588) + 0x10), 0)
        
        if (rax_20 != 0)
            sub_141903f80(rax_20, 
                "VulkanRHI::vkBindBufferMemory(Device, CrashMarker.Buffer, CrashMarker."
            "Allocation->GetHandle(), 0)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanDevice.cpp")
    else if ((rax_14 & 0x20) != 0)
        var_188 = 0x38c
        var_190 = "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanDevice.cpp"
        var_198 = 0x3f000000
        int64_t* rax_21 =
            sub_1418bb1b0(arg1 + 0x10, 0, 0x2000, 0xffffffff, 6, 0, var_198, var_190, var_188)
        *(arg1 + 0x1588) = rax_21
        var_1a0 = &rax_21[3]
        var_1a8 = 0
        int32_t rax_22 = data_143efb728(rax_21[1], rax_21[2], 0, -1, var_1a8, var_1a0)
        
        if (rax_22 != 0)
            sub_141903f80(rax_22, 
                "VulkanRHI::vkMapMemory(DeviceHandle, Handle, Offset, InSize, 0, &MappedPointer)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
        
        *rax_21[3] = 0

if (data_1439c7a08 s> 1)
    void** rax_26 = j_sub_140a82f30(0x48)
    void** rdi = rax_26
    
    if (rax_26 == 0)
        rdi = nullptr
    else
        __builtin_memset(rax_26, 0, 0x48)
        InitializeCriticalSection(&rax_26[2])
        SetCriticalSectionSpinCount(&rdi[2], 0xfa0)
        rdi[7] = 0
        rdi[8] = 0
    
    *(arg1 + 0x468) = rdi
    *rdi = arg1
else
    int64_t* rax_24 = j_sub_140a82f30(0x28)
    
    if (rax_24 == 0)
        *(arg1 + 0x460) = 0
    else
        *(arg1 + 0x460) = sub_1418cf390(rax_24, arg1)

int64_t* rax_27 = j_sub_140a82f30(0x2e0)
int64_t* rax_28

if (rax_27 == 0)
    rax_28 = nullptr
else
    rax_28 = sub_1418cfa40(rax_27, arg1)

*(arg1 + 0x1b00) = rax_28
int64_t* var_148
sub_1418c0940(&var_148)
int64_t* rax_29
int32_t rdx_13
rax_29, rdx_13 = sub_140b257f0()
bool c = rax_29[1].d != 0
int64_t var_158 = 0
int32_t rbx_3 = rax_29[1].d
int64_t rdi_1 = *rax_29
sub_1405a4c70(&var_158, sbb.d(rdx_13, rdx_13, c) + 0x11 + rbx_3, 0)
memcpy(var_158, rdi_1, rbx_3 * 2)
sub_140a2cf70(&var_158, u"VulkanPSO.cache", 0xf)
int32_t var_140
int64_t rbx_4 = sx.q(var_140)
int32_t i_10 = (rbx_4 + 1).d
int32_t var_13c

if (i_10 s> var_13c)
    sub_1405a4f90(&var_148)

int64_t* rcx_31 = &var_148[rbx_4 * 2]
*rcx_31 = 0
*rcx_31 = var_158
var_158 = 0
rcx_31[1].d = rbx_3
int32_t var_14c
*(rcx_31 + 0xc) = var_14c
int64_t rcx_32 = var_158
int32_t var_150
var_150.q = 0

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

void*** rax_33 = j_sub_140a82f30(0x558)
void*** rax_34

if (rax_33 == 0)
    rax_34 = nullptr
else
    rax_34 = sub_1418cf240(rax_33, data_143efbb58, arg1, *(arg1 + 0x1558))

void* rcx_34 = *(arg1 + 0x1558)
*(arg1 + 0x1a50) = rax_34
int64_t rcx_35
int64_t rbx_5

if (*(rcx_34 + 8) != *(*(arg1 + 0x1560) + 8))
    rbx_5 = data_143efb108
    
    if (data_143de5480 == 0)
        rcx_35 = 0
    else
        rcx_35.b = GetCurrentThreadId() != data_143de5470

if (*(rcx_34 + 8) == *(*(arg1 + 0x1560) + 8) || *(rbx_5 + (rcx_35 << 2)) == 0)
    *(arg1 + 0x1a58) = *(arg1 + 0x1a50)
else
    void*** rax_38 = j_sub_140a82f30(0x558)
    
    if (rax_38 == 0)
        *(arg1 + 0x1a58) = 0
        data_1439c79e0 = 1
    else
        *(arg1 + 0x1a58) = sub_1418cf240(rax_38, data_143efbb58, arg1, *(arg1 + 0x1560))
        data_1439c79e0 = 1

int64_t* rcx_37 = data_143efb500

if ((*(*rcx_37 + 0x90))(rcx_37) s> 1)
    int64_t* rax_43 = sub_140a242a0()
    int64_t rdx_21 = *rax_43
    int32_t i_11 = (*(rdx_21 + 0x18))(rax_43, rdx_21)
    
    if (i_11 s> 0)
        uint64_t i_9 = zx.q(i_11)
        uint64_t i_3
        
        do
            void*** rax_44 = j_sub_140a82f30(0x558)
            void*** r14_1
            
            if (rax_44 == 0)
                r14_1 = nullptr
            else
                var_1a8.q = *(arg1 + 0x1a50)
                r14_1 = sub_1418cedd0(rax_44, data_143efbb58, arg1, *(arg1 + 0x1558), var_1a8)
            
            int64_t rdi_2 = sx.q(*(arg1 + 0x1a68))
            int32_t rax_46 = (rdi_2 + 1).d
            *(arg1 + 0x1a68) = rax_46
            
            if (rax_46 s> *(arg1 + 0x1a6c))
                sub_1405a4d70(arg1 + 0x1a60)
            
            *(*(arg1 + 0x1a60) + (rdi_2 << 3)) = r14_1
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)

if ((*(arg1 + 0x1af0) & 8) != 0)
    int64_t r14_2 = *(arg1 + 8)
    int64_t var_104
    __builtin_memset(&var_104, 0, 0x24)
    int32_t var_108 = 0x3b9d3b00
    int32_t* var_168 = nullptr
    int64_t var_160_1 = 0
    int64_t* rax_48
    int32_t rdx_24
    rax_48, rdx_24 = sub_140b257f0()
    bool c_1 = rax_48[1].d != 0
    int16_t* var_138 = nullptr
    int32_t rbx_6 = rax_48[1].d
    int64_t rdi_3 = *rax_48
    sub_1405a4c70(&var_138, sbb.d(rdx_24, rdx_24, c_1) + 0x18 + rbx_6, 0)
    memcpy(var_138, rdi_3, rbx_6 * 2)
    sub_140a2cf70(&var_138, u"VulkanValidation.cache", 0x16)
    int16_t* const rdx_29 = &data_142d40450
    
    if (rbx_6 != 0)
        rdx_29 = var_138
    
    int64_t var_f4
    int64_t var_ec
    
    if (sub_140b1ef70(&var_168, rdx_29, 2) == 0 || var_160_1.d s<= 0)
    label_1418c1d03:
        int64_t rcx_48 = sx.q(var_160_1.d)
        var_f4 = rcx_48
        
        var_ec = rcx_48.d s<= 0 ? 0 : var_168
    else
        int32_t* rax_50 = var_168
        bool cond:3_1
        
        if (*rax_50 s<= 0)
            int32_t rax_53 = var_160_1:4.d
            cond:3_1 = rax_53 == 0
            
            if (rax_53 s< 0)
            label_1418c1cf0:
                var_160_1.d = 0
                
                if (not(cond:3_1))
                    sub_1405c5510(&var_168, 0)
                
                goto label_1418c1d03
        else
            if (rax_50[1] == 1)
                goto label_1418c1d03
            
            int32_t rax_51 = var_160_1:4.d
            cond:3_1 = rax_51 == 0
            
            if (rax_51 s< 0)
                goto label_1418c1cf0
        var_160_1.d = 0
        var_f4 = 0
        var_ec = 0
    int64_t rax_54 = data_143efb650(r14_2, "vkCreateValidationCacheEXT")
    
    if (rax_54 != 0)
        rax_54(r14_2, &var_108, 0, arg1 + 0x1af8, var_1a8, var_1a0, var_198, var_190, var_188)
    
    int16_t* rcx_51 = var_138
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
    
    int32_t* rcx_52 = var_168
    
    if (rcx_52 != 0)
        sub_140a74f90(rcx_52)

sub_1418e2c00(*(arg1 + 0x1b00), &var_148)
int64_t* rcx_54 = data_143f0f180
int32_t var_11c = 0x7f7fffff
int32_t var_128 = 0
int64_t var_124 = 0
int64_t var_118 = 0
char var_110 = 0
int64_t* var_d8
(*(*rcx_54 + 0x28))(rcx_54, &var_d8, &var_128)
int64_t* rbx_7 = var_d8
*(arg1 + 0x798) = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        char rax_56
        
        if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
            rax_56 = sub_1405949a0()
        
        if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_56 != 0))
            (**rbx_7)(rbx_7, 1)
        else
            bool z_1
            
            if (0 == *(rbx_7 + 0xc))
                *(rbx_7 + 0xc) = 1
                z_1 = true
            else
                *(rbx_7 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx_7)

int128_t zmm1 = data_143dbb1e0
int32_t var_68 = 1
int32_t rax_60 = (1 << (data_1439c7a34).b) - 1
int128_t var_78 = zx.o(0)
int32_t var_54 = rax_60
int128_t var_64 = zmm1
char var_50 = 0
int64_t var_48 = 0
int32_t var_40 = 0
void*** rax_61 = j_sub_140a82f30(0x78)
void*** r8_14

if (rax_61 == 0)
    r8_14 = nullptr
else
    var_190.d = 1
    var_1a0.d = 1
    r8_14 = sub_1418f20e0(rax_61, arg1, 1, 2, 1, var_1a0.d, 1, var_190.d, 1, 1, 9, &var_78)

int128_t* var_170
var_170.b = 0
int32_t var_178_2 = 1
int32_t var_180_2 = 0
int32_t var_188_2 = 1
var_190.d = 0
*(arg1 + 0x7a0) = r8_14
var_1a0.d = 2
uint64_t result = sub_1418f7420(arg1 + 0x7a8, arg1, r8_14[2], 1, r8_14[0xe].d, var_1a0.d, 0x2c, 
    var_190.d, var_188_2, var_180_2, var_178_2, var_170.b)
int32_t i_7 = i_10
int64_t* rbx_8 = var_148

if (i_7 != 0)
    int32_t i_4
    
    do
        int64_t rcx_59 = *rbx_8
        
        if (rcx_59 != 0)
            result = sub_140a74f90(rcx_59)
        
        rbx_8 = &rbx_8[2]
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)
    rbx_8 = var_148

if (rbx_8 != 0)
    result = sub_140a74f90(rbx_8)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
