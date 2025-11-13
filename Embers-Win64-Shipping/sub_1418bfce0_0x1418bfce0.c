// 函数: sub_1418bfce0
// 地址: 0x1418bfce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
int32_t r15 = 0
void* var_350 = nullptr
*arg3 = 0
int64_t var_348 = 1
sub_1418c5e10(&var_350)
void* rdi = var_350
*(rdi + 0x208) = 0
*(rdi + 0x210) = 0
memset(rdi, 0, 0x208)
sub_1418be280(0, rdi)
int64_t rbx = -1
int32_t i_15 = 0
int32_t i_9 = 0
int32_t r13 = 0
int32_t i_10 = 0
int32_t i = 0
int64_t* var_340 = nullptr
int32_t i_8 = 0
int64_t var_338 = 0
int64_t* var_328 = nullptr
int32_t var_31c = 0

if (*(rdi + 0x210) s> 0)
    do
        void var_288
        sub_1405eb940(&var_288, sx.q(i) * 0x104 + *(rdi + 0x208))
        int16_t* rsi_1 = nullptr
        int16_t* var_318 = nullptr
        int32_t r14 = 0
        int64_t var_310_1 = 0
        int16_t* var_180
        
        if (var_180 != 0 && *var_180 != 0)
            do
                rbx += 1
            while (var_180[rbx] != 0)
            
            if (rbx.d + 1 s> 0)
                sub_1405947f0(&var_318, rbx.d + 1)
                r15 = var_310_1:4.d
                r14 = var_310_1.d
                rsi_1 = var_318
            
            r14 += rbx.d + 1
            var_310_1.d = r14
            
            if (r14 s> r15)
                sub_140594770(&var_318)
                r15 = var_310_1:4.d
                r14 = var_310_1.d
                rsi_1 = var_318
            
            UnDecorator::getReferenceType(rsi_1, var_180, (rbx.d + 1) * 2)
        
        int64_t* rbx_2 = var_340
        void* rdi_4 = &rbx_2[sx.q(i_8) * 2]
        int64_t* rdx_8
        
        if (rbx_2 == rdi_4)
        label_1418bfea2:
            rdx_8 = var_340
        label_1418bfea7:
            int64_t i_13 = sx.q(i_8)
            int32_t i_11 = (i_13 + 1).d
            i_8 = i_11
            var_338.d = i_11
            
            if (i_11 s> r13)
                sub_1405a4f90(&var_340)
                r13 = var_338:4.d
                rdx_8 = var_340
                i_8 = var_338.d
            
            var_318 = nullptr
            int64_t rax_6 = i_13 * 2
            rdx_8[rax_6] = rsi_1
            *(&rdx_8[rax_6] + 0xc) = r15
            r15 = 0
            int64_t var_310_2 = 0
            rdx_8[rax_6 + 1].d = r14
        else
            while (true)
                int16_t* const rdx_7 = &data_142d40450
                
                if (r14 != 0)
                    rdx_7 = rsi_1
                
                int16_t* const rcx_6
                
                if (rbx_2[1].d == 0)
                    rcx_6 = &data_142d40450
                else
                    rcx_6 = *rbx_2
                
                if (sub_140a54510(rcx_6, rdx_7) == 0)
                    break
                
                rbx_2 = &rbx_2[2]
                
                if (rbx_2 == rdi_4)
                    goto label_1418bfea2
            
            rdx_8 = var_340
            
            if (((rbx_2 - rdx_8) s>> 4).d == 0xffffffff)
                goto label_1418bfea7
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            r15 = 0
        int64_t var_188
        
        if (var_188 != 0)
            sub_140a74f90(var_188)
        
        rdi = var_350
        i += 1
        rbx = -1
    while (i s< *(rdi + 0x210))
    
    i_15 = i_8

int128_t* var_2e0 = nullptr
int32_t var_2d8 = 0
int128_t* rsi_2 = nullptr
int32_t var_358 = 0
int32_t rax_7 = data_143efb660(&var_358, 0)

if ((0x80000000 & (rax_7 - 0x80000000)) == 0 && rax_7 != 0xfffffffd)
    sub_141903f80(rax_7, 
        "VulkanRHI::vkEnumerateInstanceLayerProperties(&InstanceLayerCount, nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")

int64_t rdi_5 = sx.q(var_358)
int32_t temp1 = rdi_5.d

if (temp1 != 0)
    int32_t rbx_5 = rdi_5.d
    
    if (temp1 s> 0)
        sub_140a5a880(&var_2e0)
        rsi_2 = var_2e0
    
    memset(rsi_2, 0, rdi_5 * 0x208)
    int32_t rax_11 = data_143efb660(&var_358, sx.q(rbx_5 - var_358) * 0x208 + rsi_2)
    
    if ((0x80000000 & (rax_11 - 0x80000000)) == 0 && rax_11 != 0xfffffffd)
        sub_141903f80(rax_11, 
            "VulkanRHI::vkEnumerateInstanceLayerProperties(&InstanceLayerCount, "
        "&GlobalLayerProperties[GlobalLayerProperties.Num() - InstanceLayerCount])", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")
    
    if (rbx_5 s> 0)
        int128_t* r13_1 = rsi_2
        int32_t var_2e8
        var_2e8.q = zx.q(rbx_5)
        int128_t* r12 = rsi_2
        int64_t i_1
        
        do
            int64_t rdi_6 = sx.q(var_348.d)
            int32_t rax_13 = (rdi_6 + 1).d
            var_348.d = rax_13
            
            if (rax_13 s> var_348:4.d)
                sub_1418c5e10(&var_350)
            
            int64_t rdi_7 = rdi_6 * 0x218
            void* rdi_8 = rdi_7 + var_350
            int32_t r14_1
            
            if (rdi_7 == neg.q(var_350))
                r14_1 = 0
                rdi_8 = nullptr
            else
                r14_1 = 0
                *(rdi_8 + 0x208) = 0
                *(rdi_8 + 0x210) = 0
                memset(rdi_8, 0, 0x208)
            
            void* rcx_20 = rdi_8
            int128_t* rax_14 = r13_1
            int64_t j_2 = 4
            int64_t j
            
            do
                rcx_20 += 0x80
                int128_t zmm0_1 = *rax_14
                rax_14 = &rax_14[8]
                *(rcx_20 - 0x80) = zmm0_1
                *(rcx_20 - 0x70) = rax_14[-7]
                *(rcx_20 - 0x60) = rax_14[-6]
                *(rcx_20 - 0x50) = rax_14[-5]
                *(rcx_20 - 0x40) = rax_14[-4]
                *(rcx_20 - 0x30) = rax_14[-3]
                *(rcx_20 - 0x20) = rax_14[-2]
                *(rcx_20 - 0x10) = rax_14[-1]
                j = j_2
                j_2 -= 1
            while (j != 1)
            *rcx_20 = *rax_14
            int32_t var_354 = 0
            int32_t rax_16 = data_143efb658(r12, &var_354, 0)
            
            if ((0x80000000 & (rax_16 - 0x80000000)) == 0 && rax_16 != 0xfffffffd)
                sub_141903f80(rax_16, 
                    "VulkanRHI::vkEnumerateInstanceExtensionProperties(LayerName, &Count, nullptr)", 
                    "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")
            
            int32_t rax_17 = var_354
            
            if (rax_17 != 0)
                int32_t rdx_15 = 0
                *(rdi_8 + 0x210) = 0
                
                if (*(rdi_8 + 0x214) != rax_17)
                    sub_1418c5f30(rdi_8 + 0x208, rax_17)
                    rdx_15 = *(rdi_8 + 0x210)
                    rax_17 = var_354
                
                int32_t rax_18 = rax_17 + rdx_15
                *(rdi_8 + 0x210) = rax_18
                
                if (rax_18 s> *(rdi_8 + 0x214))
                    sub_1418c5ea0(rdi_8 + 0x208)
                
                int32_t rax_19 = data_143efb658(r12, &var_354, *(rdi_8 + 0x208))
                
                if ((0x80000000 & (rax_19 - 0x80000000)) == 0 && rax_19 != 0xfffffffd)
                    sub_141903f80(rax_19, 
                        "VulkanRHI::vkEnumerateInstanceExtensionProperties(LayerName, &Count, OutLayer."
                    "ExtensionProps.GetData())", 
                        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")
            
            sub_1418baf00(rdi_8, &var_340)
            void var_168
            sub_1405eb940(&var_168, r12)
            int32_t r15_1 = 0
            int16_t* var_308 = nullptr
            int16_t* rsi_3 = nullptr
            int64_t var_300_1 = 0
            int16_t* var_60
            
            if (var_60 != 0 && *var_60 != 0)
                int64_t rbx_8 = -1
                
                do
                    rbx_8 += 1
                while (var_60[rbx_8] != 0)
                
                if (rbx_8.d + 1 s> 0)
                    sub_1405947f0(&var_308, rbx_8.d + 1)
                    r15_1 = var_300_1:4.d
                    r14_1 = var_300_1.d
                    rsi_3 = var_308
                
                r14_1 += rbx_8.d + 1
                var_300_1.d = r14_1
                
                if (r14_1 s> r15_1)
                    sub_140594770(&var_308)
                    r15_1 = var_300_1:4.d
                    r14_1 = var_300_1.d
                    rsi_3 = var_308
                
                UnDecorator::getReferenceType(rsi_3, var_60, (rbx_8.d + 1) * 2)
            
            int64_t* rbx_10 = var_328
            void* rdi_12 = &rbx_10[sx.q(i_9) * 2]
            int64_t* rdx_24
            
            if (rbx_10 == rdi_12)
            label_1418c02a8:
                rdx_24 = var_328
            label_1418c02ad:
                int64_t i_14 = sx.q(i_9)
                int32_t i_12 = (i_14 + 1).d
                i_9 = i_12
                i_10 = i_12
                
                if (i_12 s> var_31c)
                    sub_1405a4f90(&var_328)
                    rdx_24 = var_328
                    i_9 = i_10
                
                int64_t rax_23 = i_14 * 2
                var_308 = nullptr
                int64_t var_300_2 = 0
                rdx_24[rax_23] = rsi_3
                rdx_24[rax_23 + 1].d = r14_1
                *(&rdx_24[rax_23] + 0xc) = r15_1
            else
                while (true)
                    int16_t* const rdx_23 = &data_142d40450
                    
                    if (r14_1 != 0)
                        rdx_23 = rsi_3
                    
                    int16_t* const rcx_34
                    
                    if (rbx_10[1].d == 0)
                        rcx_34 = &data_142d40450
                    else
                        rcx_34 = *rbx_10
                    
                    if (sub_140a54510(rcx_34, rdx_23) == 0)
                        break
                    
                    rbx_10 = &rbx_10[2]
                    
                    if (rbx_10 == rdi_12)
                        goto label_1418c02a8
                
                rdx_24 = var_328
                
                if (((rbx_10 - rdx_24) s>> 4).d == 0xffffffff)
                    goto label_1418c02ad
                
                if (rsi_3 != 0)
                    sub_140a74f90(rsi_3)
            int64_t var_68
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            r12 += 0x208
            r13_1 += 0x208
            i_1 = var_2e8.q
            var_2e8.q -= 1
        while (i_1 != 1)
        i_15 = var_338.d
        rsi_2 = var_2e0
        i_8 = i_15
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)

char var_35c
sub_140688010(var_328, i_9, var_35c)
char var_35b
sub_140688010(var_340, i_15, var_35b)
char var_368 = 0
sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"vktrace") != 0)
    int32_t rdi_13 = var_348.d
    int32_t rbx_11 = 1
    
    if (rdi_13 s> 1)
        do
            if (strcmp(sx.q(rbx_11) * 0x218 + var_350, "VK_LAYER_LUNARG_vktrace") == 0)
                if (rbx_11 != 0xffffffff)
                    int64_t rbx_14 = sx.q(arg2[1].d)
                    int32_t rax_27 = (rbx_14 + 1).d
                    arg2[1].d = rax_27
                    
                    if (rax_27 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                    
                    var_368 = 1
                    *(*arg2 + (rbx_14 << 3)) = "VK_LAYER_LUNARG_vktrace"
                
                break
            
            rbx_11 += 1
        while (rbx_11 s< rdi_13)

void var_2a8
int64_t rbx_15 = *sub_1418c08c0(&var_2a8)
sub_140a387e0()
void* r8_8 = data_14399e720

if ((*(r8_8 + 8))(&data_14399e720, rbx_15, r8_8) s> 0)
    void var_2a0
    int64_t rbx_16 = *sub_1418c08c0(&var_2a0)
    sub_140a387e0()
    int64_t* r12_1 = nullptr
    void** var_2b8_1 = &data_14399e720
    int32_t rdi_15 = 0
    int64_t* var_2d0 = nullptr
    int64_t var_2c8_1 = 0
    void* r8_9 = data_14399e720
    void** rsi_4 = &data_14399e720
    int32_t r13_2 = 0
    int32_t rax_32 = (*(r8_9 + 8))(&data_14399e720, rbx_16, r8_9)
    int32_t r14_2 = 0
    
    if (rax_32 s> 0)
        do
            void* r9_5 = *rsi_4
            int64_t rax_33 = (*(r9_5 + 0x10))(rsi_4, rbx_16, zx.q(r14_2), r9_5, var_368, i_9)
            int64_t r15_2
            
            if (rax_33 == 0)
                r15_2 = 0
            else
                r15_2 = rax_33 - 8
            
            int64_t rsi_5 = sx.q(rdi_15)
            rdi_15 = (rsi_5 + 1).d
            var_2c8_1.d = rdi_15
            
            if (rdi_15 s> r13_2)
                sub_1405a4d70(&var_2d0)
                r13_2 = var_2c8_1:4.d
                rdi_15 = var_2c8_1.d
                r12_1 = var_2d0
            
            r14_2 += 1
            r12_1[rsi_5] = r15_2
            rsi_4 = var_2b8_1
        while (r14_2 s< rax_32)
    
    char var_35a
    sub_1405ea950(r12_1, rdi_15, var_35a)
    int64_t* rbx_17 = *r12_1
    sub_140a74f90(r12_1)
    void var_298
    int64_t* rax_35 = (*(*rbx_17 + 0x80))(rbx_17, &var_298)
    
    if (&data_143efb1c0 != rax_35)
        data_143efb1c0 = *rax_35
        *rax_35 = 0
        sub_1405aeff0(&data_143efb1c8, &rax_35[1])
    
    int64_t* var_290
    
    if (var_290 != 0)
        var_290[1].d -= 1
        
        if (var_290[1].d == 1)
            (**var_290)(var_290)
            int32_t rdi_16 = *(var_290 + 0xc)
            *(var_290 + 0xc) -= 1
            
            if (rdi_16 == 1)
                (*(*var_290 + 8))(var_290, zx.q(rdi_16))
        
        i_8 = var_338.d
        i_9 = i_10
    
    int64_t* rcx_54 = data_143efb1c0
    
    if (rcx_54 != 0)
        (**rcx_54)(rcx_54, arg1)

int64_t* var_2f8 = nullptr
int32_t var_2f0 = 0
sub_1418fb340(&var_2f8)
int64_t* r14_3 = var_2f8
int64_t r15_3 = 0
int32_t r13_3 = var_348.d
void* rcx_56 = &r14_3[sx.q(var_2f0)]
uint64_t r12_5 = (rcx_56 - r14_3 + 7) u>> 3

if (r14_3 u> rcx_56)
    r12_5 = 0

if (r12_5 != 0)
    do
        int64_t rdi_17 = *r14_3
        int32_t rsi_6 = 0
        
        if (r13_3 s> 0)
            void* rbx_20 = var_350 + 0x208
            
            do
                int32_t r10_1 = *(rbx_20 + 8)
                int32_t r9_6 = 0
                
                if (r10_1 s> 0)
                    while (true)
                        char* rcx_58 = sx.q(r9_6) * 0x104 + *rbx_20
                        void* r8_13 = rdi_17 - rcx_58
                        uint32_t i_2
                        uint32_t rdx_38
                        
                        do
                            rdx_38 = zx.d(*rcx_58)
                            i_2 = zx.d(*(rcx_58 + r8_13))
                            
                            if (rdx_38 != i_2)
                                break
                            
                            rcx_58 = &rcx_58[1]
                        while (i_2 != 0)
                        
                        if (rdx_38 - i_2 == 0)
                            int64_t rbx_21 = sx.q(arg1[1].d)
                            int32_t rax_44 = (rbx_21 + 1).d
                            arg1[1].d = rax_44
                            
                            if (rax_44 s> *(arg1 + 0xc))
                                sub_1405a4d70(arg1)
                            
                            *(*arg1 + (rbx_21 << 3)) = rdi_17
                            break
                        
                        r9_6 += 1
                        
                        if (r9_6 s>= r10_1)
                            goto label_1418c0664
                    
                    break
                
            label_1418c0664:
                rsi_6 += 1
                rbx_20 += 0x218
            while (rsi_6 s< r13_3)
        
        r14_3 = &r14_3[1]
        r15_3 += 1
    while (r15_3 != r12_5)
    
    r14_3 = var_2f8

char const (* i_3)[0x24] = data_1439c7190

if (i_3 != 0)
    int64_t r15_4 = 0
    char const (** r14_4)[0x24] = &data_1439c7190
    
    do
        int32_t rsi_8 = 0
        
        if (r13_3 s> 0)
            void* rbx_23 = var_350 + 0x208
            
            do
                int32_t r10_2 = *(rbx_23 + 8)
                int32_t r9_7 = 0
                
                if (r10_2 s> 0)
                    while (true)
                        void* rax_48 = sx.q(r9_7) * 0x104 + *rbx_23
                        void* r8_15 = i_3 - rax_48
                        uint32_t j_1
                        uint32_t rdx_41
                        
                        do
                            rdx_41 = zx.d(*rax_48)
                            j_1 = zx.d(*(rax_48 + r8_15))
                            
                            if (rdx_41 != j_1)
                                break
                            
                            rax_48 += 1
                        while (j_1 != 0)
                        
                        if (rdx_41 - j_1 == 0)
                            int64_t rbx_24 = sx.q(arg1[1].d)
                            int32_t rax_49 = (rbx_24 + 1).d
                            arg1[1].d = rax_49
                            
                            if (rax_49 s> *(arg1 + 0xc))
                                sub_1405a4d70(arg1)
                            
                            *(*arg1 + (rbx_24 << 3)) = *r14_4
                            break
                        
                        r9_7 += 1
                        
                        if (r9_7 s>= r10_2)
                            goto label_1418c0734
                    
                    break
                
            label_1418c0734:
                rsi_8 += 1
                rbx_23 += 0x218
            while (rsi_8 s< r13_3)
        
        r15_4 += 1
        i_3 = (&data_1439c7190)[r15_4]
        r14_4 = &(&data_1439c7190)[r15_4]
    while (i_3 != 0)
    
    r14_3 = var_2f8

int64_t* rdi_19

if (var_368 != 0 || *arg3 == 0)
    rdi_19 = arg1
else
    rdi_19 = arg1
    
    if (sub_1418be3a0(&var_350, "VK_EXT_debug_utils") != 0)
        int64_t rbx_25 = sx.q(rdi_19[1].d)
        int32_t rax_53 = (rbx_25 + 1).d
        rdi_19[1].d = rax_53
        
        if (rax_53 s> *(rdi_19 + 0xc))
            sub_1405a4d70(rdi_19)
        
        *(*rdi_19 + (rbx_25 << 3)) = "VK_EXT_debug_utils"
        r14_3 = var_2f8

if (arg2[1].d s> 0)
    sub_1418c8b70(arg2)
    r14_3 = var_2f8

if (rdi_19[1].d s> 0)
    sub_1418c8b70(rdi_19)
    r14_3 = var_2f8

if (r14_3 != 0)
    sub_140a74f90(r14_3)

int64_t* rsi_9 = var_328
int32_t i_6 = i_9
int64_t* rbx_26 = rsi_9

if (i_6 != 0)
    int32_t i_4
    
    do
        int64_t rcx_67 = *rbx_26
        
        if (rcx_67 != 0)
            sub_140a74f90(rcx_67)
        
        rbx_26 = &rbx_26[2]
        i_4 = i_6
        i_6 -= 1
    while (i_4 != 1)

if (rsi_9 != 0)
    sub_140a74f90(rsi_9)

int64_t* rsi_10 = var_340
int32_t i_7 = i_8
int64_t* rbx_27 = rsi_10

if (i_7 != 0)
    int32_t i_5
    
    do
        int64_t rcx_69 = *rbx_27
        
        if (rcx_69 != 0)
            sub_140a74f90(rcx_69)
        
        rbx_27 = &rbx_27[2]
        i_5 = i_7
        i_7 -= 1
    while (i_5 != 1)

if (rsi_10 != 0)
    sub_140a74f90(rsi_10)

int64_t result = sub_1418b9510(&var_350)
__security_check_cookie(rax_1 ^ &var_388)
return result
