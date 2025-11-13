// 函数: sub_1418bf1e0
// 地址: 0x1418bf1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* var_1b0 = arg5
int64_t* r12 = nullptr
*arg7 = 0
uint64_t var_198 = 0
void* var_200 = nullptr
int64_t var_1f8 = 1
sub_1418c5e10(&var_200)
void* r15 = var_200
*(r15 + 0x208) = 0
*(r15 + 0x210) = 0
memset(r15, 0, 0x208)
int32_t var_214 = 0
int128_t* var_1d8 = nullptr
int32_t var_1cc = 0
int128_t* r14 = nullptr
int32_t rax_5 = data_143efb6f0(arg1, &var_214, 0)

if ((0x80000000 & (rax_5 - 0x80000000)) == 0 && rax_5 != 0xfffffffd)
    sub_141903f80(rax_5, "VulkanRHI::vkEnumerateDeviceLayerProperties(Gpu, &Count, nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")

int64_t rdi = sx.q(var_214)
int32_t rbx = rdi.d
int32_t var_1d0 = rbx

if (rdi.d s> 0)
    sub_140a5a880(&var_1d8)
    rbx = var_1d0
    r14 = var_1d8

memset(r14, 0, rdi * 0x208)
int32_t rax_6 = data_143efb6f0(arg1, &var_214, r14)

if ((0x80000000 & (rax_6 - 0x80000000)) == 0 && rax_6 != 0xfffffffd)
    sub_141903f80(rax_6, 
        "VulkanRHI::vkEnumerateDeviceLayerProperties(Gpu, &Count, Properties.GetData())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")

int32_t r13 = var_1f8.d
int128_t* rdi_1 = r14
void* rsi_2 = sx.q(rbx) * 0x208 + r14

if (r14 != rsi_2)
    do
        int64_t rbx_1 = sx.q(r13)
        r13 = (rbx_1 + 1).d
        var_1f8.d = r13
        
        if (r13 s> var_1f8:4.d)
            sub_1418c5e10(&var_200)
            r13 = var_1f8.d
            r15 = var_200
        
        void* rbx_3 = rbx_1 * 0x218 + r15
        *(rbx_3 + 0x208) = 0
        *(rbx_3 + 0x210) = 0
        memset(rbx_3, 0, 0x208)
        int128_t* rax_8 = rdi_1
        int64_t i_5 = 4
        int64_t i
        
        do
            rbx_3 += 0x80
            int128_t zmm0_1 = *rax_8
            rax_8 = &rax_8[8]
            *(rbx_3 - 0x80) = zmm0_1
            *(rbx_3 - 0x70) = rax_8[-7]
            *(rbx_3 - 0x60) = rax_8[-6]
            *(rbx_3 - 0x50) = rax_8[-5]
            *(rbx_3 - 0x40) = rax_8[-4]
            *(rbx_3 - 0x30) = rax_8[-3]
            *(rbx_3 - 0x20) = rax_8[-2]
            *(rbx_3 - 0x10) = rax_8[-1]
            i = i_5
            i_5 -= 1
        while (i != 1)
        rdi_1 += 0x208
        *rbx_3 = *rax_8
    while (rdi_1 != rsi_2)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t* var_1e8
__builtin_memset(&var_1e8, 0, 0x20)
int128_t* rbx_4 = nullptr
int32_t rax_10 = 0
int32_t var_1f0 = 0
int32_t r14_1 = 0
int32_t rdi_2 = 0
void** var_210

if (r13 s> 0)
    void* rsi_3 = r15 + 0x210
    int64_t var_1e0_1
    
    do
        if (rax_10 != 0)
            void* rax_17 = sx.q(rax_10) * 0x218 + r15
            void var_178
            sub_1405eb940(&var_178, rax_17)
            var_210 = nullptr
            void** r14_3 = nullptr
            int32_t var_208
            var_208.q = 0
            int32_t r15_1 = 0
            int32_t r12_1 = 0
            int16_t* var_70
            
            if (var_70 != 0 && *var_70 != 0)
                int64_t rbx_5 = -1
                
                do
                    rbx_5 += 1
                while (var_70[rbx_5] != 0)
                
                int32_t var_204
                
                if (rbx_5.d + 1 s> 0)
                    sub_1405947f0(&var_210, rbx_5.d + 1)
                    r12_1 = var_204
                    r15_1 = var_208
                    r14_3 = var_210
                
                r15_1 += rbx_5.d + 1
                
                if (r15_1 s> r12_1)
                    sub_140594770(&var_210)
                    r12_1 = var_204
                    r14_3 = var_210
                
                UnDecorator::getReferenceType(r14_3, var_70, (rbx_5.d + 1) * 2)
            
            int64_t* rbx_7 = var_1e8
            void* rdi_6 = &rbx_7[sx.q(var_1e0_1.d) * 2]
            
            if (rbx_7 == rdi_6)
            label_1418bf642:
                int64_t rbx_8 = sx.q(var_1e0_1.d)
                int32_t rax_19 = (rbx_8 + 1).d
                var_1e0_1.d = rax_19
                
                if (rax_19 s> var_1e0_1:4.d)
                    sub_1405a4f90(&var_1e8)
                
                void*** rax_22 = &var_1e8[rbx_8 * 2]
                var_210 = nullptr
                var_208.q = 0
                *rax_22 = r14_3
                rax_22[1].d = r15_1
                *(rax_22 + 0xc) = r12_1
            else
                while (true)
                    void** rdx_11 = &data_142d40450
                    
                    if (r15_1 != 0)
                        rdx_11 = r14_3
                    
                    int16_t* const rcx_25
                    
                    if (rbx_7[1].d == 0)
                        rcx_25 = &data_142d40450
                    else
                        rcx_25 = *rbx_7
                    
                    if (sub_140a54510(rcx_25, rdx_11) == 0)
                        break
                    
                    rbx_7 = &rbx_7[2]
                    
                    if (rbx_7 == rdi_6)
                        goto label_1418bf642
                
                if (((rbx_7 - var_1e8) s>> 4).d == 0xffffffff)
                    goto label_1418bf642
                
                if (r14_3 != 0)
                    sub_140a74f90(r14_3)
            
            int64_t var_78
            
            if (var_78 != 0)
                sub_140a74f90(var_78)
            
            var_214 = 0
            int32_t rax_23 = data_143efb6e8(arg1, rax_17, &var_214, 0)
            
            if ((0x80000000 & (rax_23 - 0x80000000)) == 0 && rax_23 != 0xfffffffd)
                sub_141903f80(rax_23, 
                    "VulkanRHI::vkEnumerateDeviceExtensionProperties(Device, LayerName, &Count, nullptr)", 
                    "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")
            
            int32_t rax_24 = var_214
            
            if (rax_24 != 0)
                int32_t rdx_14 = 0
                *rsi_3 = 0
                
                if (*(rsi_3 + 4) != rax_24)
                    sub_1418c5f30(rsi_3 - 8, rax_24)
                    rdx_14 = *rsi_3
                    rax_24 = var_214
                
                int32_t rax_25 = rax_24 + rdx_14
                *rsi_3 = rax_25
                
                if (rax_25 s> *(rsi_3 + 4))
                    sub_1418c5ea0(rsi_3 - 8)
                
                int32_t rax_26 = data_143efb6e8(arg1, rax_17, &var_214, *(rsi_3 - 8))
                
                if ((0x80000000 & (rax_26 - 0x80000000)) == 0 && rax_26 != 0xfffffffd)
                    sub_141903f80(rax_26, 
                        "VulkanRHI::vkEnumerateDeviceExtensionProperties(Device, LayerName, &Count, "
                    "OutLayer.ExtensionProps.GetData())", 
                        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")
            
            r15 = var_200
        else
            var_214 = 0
            int32_t rax_11 = data_143efb6e8(arg1, 0, &var_214, 0)
            
            if ((0x80000000 & (rax_11 - 0x80000000)) == 0 && rax_11 != 0xfffffffd)
                sub_141903f80(rax_11, 
                    "VulkanRHI::vkEnumerateDeviceExtensionProperties(Device, LayerName, &Count, nullptr)", 
                    "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")
            
            int32_t rax_12 = var_214
            
            if (rax_12 != 0)
                int32_t rdx_5 = 0
                *rsi_3 = 0
                
                if (*(rsi_3 + 4) != rax_12)
                    sub_1418c5f30(rsi_3 - 8, rax_12)
                    rdx_5 = *rsi_3
                    rax_12 = var_214
                
                int32_t rax_13 = rax_12 + rdx_5
                *rsi_3 = rax_13
                
                if (rax_13 s> *(rsi_3 + 4))
                    sub_1418c5ea0(rsi_3 - 8)
                
                int32_t rax_14 = data_143efb6e8(arg1, 0, &var_214, *(rsi_3 - 8))
                
                if ((0x80000000 & (rax_14 - 0x80000000)) == 0 && rax_14 != 0xfffffffd)
                    sub_141903f80(rax_14, 
                        "VulkanRHI::vkEnumerateDeviceExtensionProperties(Device, LayerName, &Count, "
                    "OutLayer.ExtensionProps.GetData())", 
                        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")
        
        sub_1418baf00(sx.q(var_1f0) * 0x218 + r15, &var_1d8)
        rsi_3 += 0x218
        rax_10 = var_1f0 + 1
        var_1f0 = rax_10
    while (rax_10 s< r13)
    
    rdi_2 = var_1d0
    rbx_4 = var_1d8
    r14_1 = var_1e0_1.d
    r12 = var_1e8

char var_218
sub_140688010(r12, r14_1, var_218)
sub_140597970(arg6, &var_1e8)
sub_140688010(rbx_4, rdi_2, var_218)
sub_140597970(var_1b0, &var_1d8)
int64_t* rcx_43 = data_143efb1c0

if (rcx_43 != 0)
    (*(*rcx_43 + 8))(rcx_43, arg1, arg3)

bool cond:0 = *(r15 + 0x210) s<= 0
void** rdx_23 = nullptr
int32_t rcx_44 = 0
var_210 = nullptr
int32_t var_208_1 = 0
int32_t r8_11 = 0
int32_t var_204_1 = 0
int32_t i_1 = 0

if (not(cond:0))
    do
        int64_t rdi_7 = sx.q(rcx_44)
        int64_t rsi_5 = sx.q(i_1) * 0x104 + *(r15 + 0x208)
        rcx_44 = (rdi_7 + 1).d
        var_208_1 = rcx_44
        
        if (rcx_44 s> r8_11)
            sub_1405a4d70(&var_210)
            r8_11 = var_204_1
            rcx_44 = var_208_1
            rdx_23 = var_210
        
        i_1 += 1
        rdx_23[rdi_7] = rsi_5
    while (i_1 s< *(r15 + 0x210))

uint64_t rbx_12 = 0
int32_t i_2 = 0

if (arg4[1].d s> 0)
    int64_t* r14_5 = nullptr
    
    do
        int32_t r9_8 = 1
        int64_t r10_1 = 1
        
        if (r13 s> 1)
            do
                void* rcx_47 = sx.q(r9_8) * 0x218 + r15
                void* r8_13 = *(r14_5 + *arg4) - rcx_47
                uint32_t j
                uint32_t rdx_25
                
                do
                    rdx_25 = zx.d(*rcx_47)
                    j = zx.d(*(rcx_47 + r8_13))
                    
                    if (rdx_25 != j)
                        break
                    
                    rcx_47 += 1
                while (j != 0)
                
                if (rdx_25 - j == 0)
                    if (r9_8 s< r13)
                        int64_t rdi_8 = r10_1 * 0x218
                        
                        if (*(rdi_8 + r15 + 0x210) s> 0)
                            do
                                var_1b0 = sx.q(rbx_12.d) * 0x104 + *(rdi_8 + r15 + 0x208)
                                sub_1405a7050(&var_210, &var_1b0)
                                rbx_12 = zx.q(rbx_12.d + 1)
                            while (rbx_12.d s< *(rdi_8 + r15 + 0x210))
                        
                        rbx_12 = 0
                    
                    break
                
                r9_8 += 1
                r10_1 += 1
            while (r9_8 s< r13)
        
        i_2 += 1
        r14_5 = &r14_5[1]
    while (i_2 s< arg4[1].d)

sub_1418c8b70(&var_210)
int64_t* var_1a8 = nullptr
int32_t var_1a0 = 0
sub_1418fb110(arg2, &var_1a8)
int64_t* r14_6 = var_1a8
int64_t r15_2 = 0
void** r13_1 = var_210
void* rcx_53 = &r14_6[sx.q(var_1a0)]
uint64_t rax_35 = sx.q(var_208_1)
uint64_t r12_6 = (rcx_53 - r14_6 + 7) u>> 3

if (r14_6 u> rcx_53)
    r12_6 = 0

if (r12_6 != 0)
    void* rsi_7 = &r13_1[rax_35]
    
    do
        int64_t rdi_9 = *r14_6
        int64_t* r9_9 = r13_1
        
        if (r13_1 != rsi_7)
            do
                char* rax_36 = *r9_9
                void* r8_15 = rdi_9 - rax_36
                uint32_t i_3
                uint32_t rdx_29
                
                do
                    rdx_29 = zx.d(*rax_36)
                    i_3 = zx.d(*(rax_36 + r8_15))
                    
                    if (rdx_29 != i_3)
                        break
                    
                    rax_36 = &rax_36[1]
                while (i_3 != 0)
                
                if (rdx_29 - i_3 == 0)
                    int64_t rbx_13 = sx.q(arg3[1].d)
                    int32_t rax_37 = (rbx_13 + 1).d
                    arg3[1].d = rax_37
                    
                    if (rax_37 s> *(arg3 + 0xc))
                        sub_1405a4d70(arg3)
                    
                    *(*arg3 + (rbx_13 << 3)) = rdi_9
                    break
                
                r9_9 = &r9_9[1]
            while (r9_9 != rsi_7)
        
        r14_6 = &r14_6[1]
        r15_2 += 1
    while (r15_2 != r12_6)
    
    rax_35 = zx.q(var_208_1)
    rbx_12 = 0

char const (** rdi_10)[0x11] = &data_1439c71b0

do
    char const (* r11_2)[0x11] = *rdi_10
    
    if (r11_2 == 0)
        break
    
    void** r9_10 = r13_1
    void* r10_3 = &r13_1[sx.q(rax_35.d)]
    
    if (r13_1 != r10_3)
        do
            void* rax_40 = *r9_10
            void* r8_17 = r11_2 - rax_40
            uint32_t i_4
            uint32_t rdx_33
            
            do
                rdx_33 = zx.d(*rax_40)
                i_4 = zx.d(*(rax_40 + r8_17))
                
                if (rdx_33 != i_4)
                    break
                
                rax_40 += 1
            while (i_4 != 0)
            
            if (rdx_33 - i_4 == 0)
                int64_t rbx_14 = sx.q(arg3[1].d)
                int32_t rax_41 = (rbx_14 + 1).d
                arg3[1].d = rax_41
                
                if (rax_41 s> *(arg3 + 0xc))
                    sub_1405a4d70(arg3)
                
                *(*arg3 + (rbx_14 << 3)) = *rdi_10
                rbx_12 = var_198
                break
            
            r9_10 = &r9_10[1]
        while (r9_10 != r10_3)
    
    rax_35 = zx.q(var_208_1)
    rbx_12 = zx.q(rbx_12.d + 1)
    rdi_10 = &rdi_10[1]
    var_198 = rbx_12
while (rbx_12.d u< 6)

if (arg3[1].d s> 0)
    sub_1418c8b70(arg3)

if (arg4[1].d s> 0)
    sub_1418c8b70(arg4)

int64_t* rcx_58 = var_1a8

if (rcx_58 != 0)
    sub_140a74f90(rcx_58)

if (r13_1 != 0)
    sub_140a74f90(r13_1)

sub_140597000(&var_1d8)
sub_140597000(&var_1e8)
int64_t result = sub_1418b9510(&var_200)
__security_check_cookie(rax_1 ^ &var_238)
return result
