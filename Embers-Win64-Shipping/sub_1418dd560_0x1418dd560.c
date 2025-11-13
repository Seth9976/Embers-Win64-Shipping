// 函数: sub_1418dd560
// 地址: 0x1418dd560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
void* r13 = arg1
int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t r8
r8.b = 1
int64_t* rax_3
int64_t r8_1
rax_3, r8_1 = (*(*rcx + 0xb0))(rcx, u"r.ShaderDevelopmentMode", r8)
int64_t rbx

if (rax_3 == 0)
    rbx = 0
else
    int64_t rdx_1 = *rax_3
    int64_t rax_4
    rax_4, r8_1 = (*(rdx_1 + 0x58))(rax_3, rdx_1)
    rbx = rax_4

int64_t* rcx_2 = data_143db18d0

if (rcx_2 == 0)
    sub_140a53c40()
    rcx_2 = data_143db18d0

r8_1.b = 1
int64_t* rax_6 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.DisableEngineAndAppRegistration", r8_1)
int64_t r14

if (rax_6 == 0)
label_1418dd64d:
    int64_t rcx_5
    
    if (rbx != 0)
        if (data_143de5480 == 0)
            rcx_5 = 0
        else
            rcx_5.b = GetCurrentThreadId() != data_143de5470
    
    if (rbx == 0 || *(rbx + (rcx_5 << 2)) == 0)
        r14.b = 0
    else
        r14.b = 1
else
    int64_t rdx_2 = *rax_6
    int64_t rax_7 = (*(rdx_2 + 0x58))(rax_6, rdx_2)
    
    if (rax_7 == 0)
        goto label_1418dd64d
    
    int64_t rcx_4
    
    if (data_143de5480 == 0)
        rcx_4 = 0
    else
        rcx_4.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rax_7 + (rcx_4 << 2)) == 0)
        goto label_1418dd64d
    
    r14.b = 1

int64_t var_358
int64_t* rax_11 = sub_140b29040(j_sub_140b17d00(), &var_358, 1)
int16_t* var_348
int64_t* rax_12 = sub_140af3ab0(&var_348)
int32_t rcx_8 = rax_12[1].d
int16_t* var_370
int32_t rdi_2
int16_t* r15

if (rcx_8 s> 1)
    int32_t rax_13 = rax_11[1].d
    int32_t rdi_3 = rax_13 - 1
    
    if (rax_13 == 0)
        rdi_3 = 0
    
    int32_t r8_2
    
    if (rcx_8 == 0)
        r8_2 = rcx_8 + 1
    
    if (rcx_8 != 0 || rdi_3 == 0)
        r8_2 = 0
    
    int16_t* rax_14 = *rax_12
    *rax_12 = 0
    var_370 = rax_14
    int32_t rax_15 = *(rax_12 + 0xc)
    rax_12[1] = 0
    int32_t rdx_6 = rdi_3 + r8_2 + rcx_8
    int32_t var_364_1 = rax_15
    
    if (rdx_6 s> rax_15)
        sub_1405947f0(&var_370, rdx_6)
    
    sub_140a20ba0(&var_370, *rax_11, rdi_3)
    r15 = var_370
    rdi_2 = rcx_8
else
    r15 = *rax_11
    *rax_11 = 0
    rdi_2 = rax_11[1].d
    rax_11[1] = 0

int16_t* rcx_11 = var_348

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = var_358

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int16_t* const rdx_8 = &data_142d40450

if (rdi_2 != 0)
    rdx_8 = r15

void var_1f8
sub_140685ed0(&var_1f8, rdx_8)
void* var_218 = nullptr
void* rsi = nullptr
int64_t rbx_2 = -1

do
    rbx_2 += 1
while ((*u"Embers")[rbx_2] != 0)

int32_t var_378 = 0
sub_14060af80(&var_378, (rbx_2 << 2).d, u"Embers", rbx_2.d)
int32_t rax_16 = var_378
int32_t var_208 = rax_16

if (rax_16 + 1 u> 0x80 && rax_16 != 0xffffffff)
    void* rax_17 = sub_140a84c80(0, sx.q(rax_16 + 1), 0)
    rsi = rax_17
    var_218 = rax_17

void var_298
void* rcx_15 = &var_298

if (rsi != 0)
    rcx_15 = rsi

void* var_360 = rcx_15
sub_14060ac90(&var_360, rax_16 + 1, u"Embers", (rbx_2 + 1).d)
int64_t var_2d0 = 0
int64_t var_2c8 = 0
int64_t var_2b8
__builtin_memset(&var_2b8, 0, 0x18)
void* rax_18 = rcx_15

if (r14.b != 0)
    rax_18 = nullptr

void* var_2c0 = rax_18
var_2b8.d = 0xdcca1d | (sbb.d(rbx_2.d, rbx_2.d, sub_1405949a0() != 0) & 0x80000000)
int64_t var_170
int64_t rax_21 = var_170

if (r14.b != 0)
    rax_21 = 0

int64_t var_2b0 = rax_21
int64_t* rdi_5 = r13 + 0x28
uint32_t rcx_17 = zx.d(*(j_sub_140b17d00() + 2))
int64_t var_324
__builtin_memset(&var_324, 0, 0x3c)
int64_t var_2a8
var_2a8.d = rcx_17
int64_t var_314 = &var_2d0
var_2a8:4.d = 0x401000
int32_t var_328 = 1
sub_1418bfce0(rdi_5, r13 + 0x38, r13 + 0x90)
int32_t rax_23 = *(r13 + 0x30)
int64_t var_2fc
var_2fc:4.d = rax_23

if (rax_23 == 0)
    int64_t var_2f4 = 0
else
    var_2f4 = *rdi_5

int32_t rax_25 = *(r13 + 0x40)
int64_t var_30c
var_30c:4.d = rax_25

if (rax_25 == 0)
    int64_t var_304 = 0
else
    var_304 = *(r13 + 0x38)

void* rsi_1 = r13 + 0x20
int32_t rax_27 = data_143efb640(&var_328, 0, rsi_1)
int64_t result

if (rax_27 != 0xfffffff7)
    if (rax_27 == 0xfffffff9)
        var_348 = nullptr
        int32_t var_340_1 = 0
        data_143efb658(0, &var_378, 0)
        int64_t rcx_20 = sx.q(var_378)
        int16_t* r15_1 = nullptr
        var_370 = nullptr
        int32_t var_368
        var_368.q = 0
        int32_t temp1_1 = rcx_20.d
        int16_t* rbx_5
        
        if (temp1_1 s> 0)
            var_368 = rcx_20.d
            sub_1418c5ea0(&var_370)
            r15_1 = var_370
        else if (temp1_1 s< 0)
            rbx_5 = zx.q(neg.d(rcx_20.d))
            
            if (rbx_5.d != 0)
                rbx_5 = zx.q(neg.d(rbx_5.d))
                int32_t rax_28 = rbx_5.d
                
                if (rax_28 != rcx_20.d)
                    memmove(rcx_20 * 0x104, nullptr, (rax_28 - rcx_20.d) * 0x104)
                
                var_368 = rbx_5.d
                sub_1418ecca0(&var_370)
                r15_1 = var_370
        
        data_143efb658(0, &var_378, r15_1)
        int64_t* r12_1 = *rdi_5
        int64_t r13_1 = 0
        void* rcx_25 = sx.q(rdi_5[1].d) << 3 u>> 3
        
        if (r12_1 u> &r12_1[rdi_5[1]])
            rcx_25 = nullptr
        
        var_360 = rcx_25
        
        if (rcx_25 != 0)
            int32_t r10_1 = var_378
            int32_t rdi_6 = 0
            
            do
                char* r11_1 = *r12_1
                rbx_5.b = 0
                int32_t r9_2 = 0
                
                if (r10_1 != 0)
                    do
                        void* rax_35 = sx.q(r9_2) * 0x104 + r15_1
                        void* r8_10 = r11_1 - rax_35
                        uint32_t i
                        uint32_t rdx_17
                        
                        do
                            rdx_17 = zx.d(*rax_35)
                            i = zx.d(*(rax_35 + r8_10))
                            
                            if (rdx_17 != i)
                                break
                            
                            rax_35 += 1
                        while (i != 0)
                        
                        if (rdx_17 - i == 0)
                            rbx_5.b = 1
                            break
                        
                        r9_2 += 1
                    while (r9_2 u< r10_1)
                    
                    rcx_25 = var_360
                
                if (rbx_5.b == 0)
                    void var_158
                    sub_1405eb940(&var_158, r11_1)
                    var_358 = 0
                    int64_t r14_1 = 0
                    int64_t var_350_1 = 0
                    int32_t rax_36 = 0
                    int16_t* var_50
                    
                    if (var_50 != 0 && *var_50 != 0)
                        int64_t rbx_7 = -1
                        
                        do
                            rbx_7 += 1
                        while (var_50[rbx_7] != 0)
                        
                        if (rbx_7.d + 1 s> 0)
                            sub_1405947f0(&var_358, rbx_7.d + 1)
                            rax_36 = var_350_1:4.d
                            rdi_6 = var_350_1.d
                            r14_1 = var_358
                        
                        rdi_6 += rbx_7.d + 1
                        var_350_1.d = rdi_6
                        
                        if (rdi_6 s> rax_36)
                            sub_140594770(&var_358)
                            rdi_6 = var_350_1.d
                            r14_1 = var_358
                        
                        UnDecorator::getReferenceType(r14_1, var_50, (rbx_7.d + 1) * 2)
                    
                    int64_t var_58
                    int64_t rcx_30 = var_58
                    
                    if (rcx_30 != 0)
                        rcx_30 = sub_140a74f90(rcx_30)
                    
                    var_370 = nullptr
                    sub_1405a4c70(&var_370, sbb.d(rcx_30.d, rcx_30.d, rdi_6 != 0) + 2 + rdi_6, 0)
                    memcpy(var_370, r14_1, rdi_6 * 2)
                    sub_140a20ba0(&var_370, &data_142d576a0, 1)
                    int32_t rax_39 = rdi_6
                    rbx_5 = var_370
                    rdi_6 = 0
                    var_370 = nullptr
                    var_368.q = 0
                    int32_t r8_15 = rax_39 - 1
                    
                    if (rax_39 == 0)
                        r8_15 = 0
                    
                    sub_140a20ba0(&var_348, rbx_5, r8_15)
                    
                    if (rbx_5 != 0)
                        sub_140a74f90(rbx_5)
                    
                    if (r14_1 != 0)
                        sub_140a74f90(r14_1)
                    
                    rcx_25 = var_360
                    r10_1 = var_378
                
                r12_1 = &r12_1[1]
                r13_1 += 1
            while (r13_1 != rcx_25)
        
        int16_t* rbx_9 = &data_142d40450
        int16_t* const r8_16 = &data_142d40450
        
        if (var_340_1 != 0)
            r8_16 = var_348
        
        sub_140a2e390(&var_370, 
            Vulkan driver doesn't contain specified extensions:\n%s;\n\t\t\tmake sure your layers path "
        "is set appropriately.", r8_16)
        
        if (var_368 != 0)
            rbx_9 = var_370
        
        sub_140b709d0(0, rbx_9, u"Incomplete Vulkan driver found!")
        int16_t* rcx_39 = var_370
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        int16_t* rcx_41 = var_348
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        sub_141903f80(0xfffffff9, "Result", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanRHI.cpp")
        r13 = arg1
        goto label_1418ddc25
    
    if (rax_27 == 0)
    label_1418ddc25:
        
        if (sub_1418fc5d0(*rsi_1) == 0)
            sub_140b709d0(0, 
                Failed to find all required Vulkan entry points! Try updating your driver.", 
                No Vulkan entry points found!")
        
        result = sub_1418c6d10(r13 + 0xc0, rdi_5)
    else
        sub_140b709d0(0, 
            Vulkan failed to create instance (apiVersion=0x%x)\n\nDo you have a compatible Vulkan driver "
        "(ICD) installed?\nPlease look at the Getting Started guide for additional information.", 
            No Vulkan driver found!")
        result = j_sub_140b721f0(1)
else
    sub_140b709d0(0, 
        Cannot find a compatible Vulkan driver (ICD).\n\nPlease look at the Getting Started guide", 
        Incompatible Vulkan driver found!")
    result = j_sub_140b721f0(1)

if (var_218 != 0)
    result = sub_140a74f90(var_218)

int64_t var_178

if (var_178 != 0)
    result = sub_140a74f90(var_178)

if (r15 != 0)
    result = sub_140a74f90(r15)

__security_check_cookie(rax_1 ^ &var_398)
return result
