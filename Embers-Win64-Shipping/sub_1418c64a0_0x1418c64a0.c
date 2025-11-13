// 函数: sub_1418c64a0
// 地址: 0x1418c64a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2[1].d)
int64_t* r15 = nullptr
int64_t rdi = *arg2
int64_t* var_38 = nullptr
int32_t var_30 = r14.d
int64_t* rdi_1

if (r14.d != 0)
    sub_1405c4a00(&var_38, r14.d, 0)
    r15 = var_38
    memcpy(r15, rdi, (r14 << 3).d)
    r14 = zx.q(var_30)
    rdi_1 = r15
else
    rdi_1 = nullptr

char const* const arg_8 = "VK_KHR_maintenance1"
void* r14_1 = &rdi_1[sx.q(r14.d)]

if (rdi_1 == r14_1)
label_1418c6538:
    rdi_1 = nullptr
else
    while (strcmp(*rdi_1, "VK_KHR_maintenance1") != 0)
        rdi_1 = &rdi_1[1]
        
        if (rdi_1 == r14_1)
            goto label_1418c6538

if (r15 != 0)
    sub_140a74f90(r15)

*arg1 &= 0xfffffffe
int32_t rax_2
rax_2.b = rdi_1 != 0
char** r15_1 = nullptr
*arg1 |= rax_2
int64_t r14_2 = sx.q(arg2[1].d)
int64_t rdi_2 = *arg2
var_38 = nullptr
int32_t var_30_1 = r14_2.d
char** rdi_3

if (r14_2.d != 0)
    sub_1405c4a00(&var_38, r14_2.d, 0)
    r15_1 = var_38
    memcpy(r15_1, rdi_2, (r14_2 << 3).d)
    r14_2 = zx.q(var_30_1)
    rdi_3 = r15_1
else
    rdi_3 = nullptr

int64_t rax_3 = sx.q(r14_2.d)
arg_8 = "VK_KHR_maintenance2"
void* r14_3 = &rdi_3[rax_3]

if (rdi_3 == r14_3)
label_1418c65ca:
    rdi_3 = nullptr
else
    while (true)
        rax_3 = strcmp(*rdi_3, "VK_KHR_maintenance2")
        
        if (rax_3.d == 0)
            break
        
        rdi_3 = &rdi_3[1]
        
        if (rdi_3 == r14_3)
            goto label_1418c65ca

if (r15_1 != 0)
    rax_3 = sub_140a74f90(r15_1)

*arg1 &= 0xfffffffd
char** r15_2 = nullptr
var_38 = nullptr
*arg1 |= sbb.d(rax_3.d, rax_3.d, rdi_3 != 0) & 2
int64_t r14_4 = sx.q(arg2[1].d)
int64_t rdi_4 = *arg2
int32_t var_30_2 = r14_4.d
char** rdi_5

if (r14_4.d != 0)
    sub_1405c4a00(&var_38, r14_4.d, 0)
    r15_2 = var_38
    memcpy(r15_2, rdi_4, (r14_4 << 3).d)
    r14_4 = zx.q(var_30_2)
    rdi_5 = r15_2
else
    rdi_5 = nullptr

int64_t rax_6 = sx.q(r14_4.d)
arg_8 = "VK_EXT_validation_cache"
void* r14_5 = &rdi_5[rax_6]

if (rdi_5 == r14_5)
label_1418c665c:
    rdi_5 = nullptr
else
    while (true)
        rax_6 = strcmp(*rdi_5, "VK_EXT_validation_cache")
        
        if (rax_6.d == 0)
            break
        
        rdi_5 = &rdi_5[1]
        
        if (rdi_5 == r14_5)
            goto label_1418c665c

if (r15_2 != 0)
    rax_6 = sub_140a74f90(r15_2)

*arg1 &= 0xfffffff7
*arg1 |= sbb.d(rax_6.d, rax_6.d, rdi_5 != 0) & 8

if (data_143efb318 != 0)
    int64_t r14_6 = sx.q(arg2[1].d)
    char** r15_3 = nullptr
    int64_t rdi_7 = *arg2
    var_38 = nullptr
    int32_t var_30_3 = r14_6.d
    char** rdi_8
    
    if (r14_6.d != 0)
        sub_1405c4a00(&var_38, r14_6.d, 0)
        r15_3 = var_38
        memcpy(r15_3, rdi_7, (r14_6 << 3).d)
        r14_6 = zx.q(var_30_3)
        rdi_8 = r15_3
    else
        rdi_8 = nullptr
    
    int64_t rax_9 = sx.q(r14_6.d)
    arg_8 = "VK_AMD_buffer_marker"
    void* r14_7 = &rdi_8[rax_9]
    
    if (rdi_8 == r14_7)
    label_1418c66fb:
        rdi_8 = nullptr
    else
        while (true)
            rax_9 = strcmp(*rdi_8, "VK_AMD_buffer_marker")
            
            if (rax_9.d == 0)
                break
            
            rdi_8 = &rdi_8[1]
            
            if (rdi_8 == r14_7)
                goto label_1418c66fb
    
    if (r15_3 != 0)
        rax_9 = sub_140a74f90(r15_3)
    
    *arg1 &= 0xffffffef
    *arg1 |= sbb.d(rax_9.d, rax_9.d, rdi_8 != 0) & 0x10
    
    if (data_143efb318 != 0)
        int64_t r14_8 = sx.q(arg2[1].d)
        char** r15_4 = nullptr
        int64_t rdi_10 = *arg2
        var_38 = nullptr
        int32_t var_30_4 = r14_8.d
        char** rdi_11
        
        if (r14_8.d != 0)
            sub_1405c4a00(&var_38, r14_8.d, 0)
            r15_4 = var_38
            memcpy(r15_4, rdi_10, (r14_8 << 3).d)
            r14_8 = zx.q(var_30_4)
            rdi_11 = r15_4
        else
            rdi_11 = nullptr
        
        int64_t rax_12 = sx.q(r14_8.d)
        arg_8 = "VK_NV_device_diagnostic_checkpoints"
        void* r14_9 = &rdi_11[rax_12]
        
        if (rdi_11 == r14_9)
        label_1418c679a:
            rdi_11 = nullptr
        else
            while (true)
                rax_12 = strcmp(*rdi_11, "VK_NV_device_diagnostic_checkpoints")
                
                if (rax_12.d == 0)
                    break
                
                rdi_11 = &rdi_11[1]
                
                if (rdi_11 == r14_9)
                    goto label_1418c679a
        
        if (r15_4 != 0)
            rax_12 = sub_140a74f90(r15_4)
        
        *arg1 &= 0xffffffdf
        *arg1 |= sbb.d(rax_12.d, rax_12.d, rdi_11 != 0) & 0x20

int64_t r14_10 = sx.q(arg2[1].d)
int64_t* r15_5 = nullptr
int64_t rdi_13 = *arg2
var_38 = nullptr
int32_t var_30_5 = r14_10.d
int64_t* rdi_14

if (r14_10.d != 0)
    sub_1405c4a00(&var_38, r14_10.d, 0)
    r15_5 = var_38
    memcpy(r15_5, rdi_13, (r14_10 << 3).d)
    r14_10 = zx.q(var_30_5)
    rdi_14 = r15_5
else
    rdi_14 = nullptr

arg_8 = "VK_KHR_sampler_ycbcr_conversion"
void* r14_11 = &rdi_14[sx.q(r14_10.d)]

if (rdi_14 == r14_11)
label_1418c682c:
    rdi_14 = nullptr
else
    while (strcmp(*rdi_14, "VK_KHR_sampler_ycbcr_conversion") != 0)
        rdi_14 = &rdi_14[1]
        
        if (rdi_14 == r14_11)
            goto label_1418c682c

if (r15_5 != 0)
    sub_140a74f90(r15_5)

int32_t rax_20

if (rdi_14 == 0)
    rax_20 = 0
else
    int64_t r14_12 = sx.q(arg2[1].d)
    int64_t* r15_6 = nullptr
    int64_t rdi_15 = *arg2
    var_38 = nullptr
    int32_t var_30_6 = r14_12.d
    int64_t* rdi_16
    
    if (r14_12.d != 0)
        sub_1405c4a00(&var_38, r14_12.d, 0)
        r15_6 = var_38
        memcpy(r15_6, rdi_15, (r14_12 << 3).d)
        r14_12 = zx.q(var_30_6)
        rdi_16 = r15_6
    else
        rdi_16 = nullptr
    
    arg_8 = "VK_KHR_bind_memory2"
    void* r14_13 = &rdi_16[sx.q(r14_12.d)]
    
    if (rdi_16 == r14_13)
    label_1418c68ba:
        rdi_16 = nullptr
    else
        while (strcmp(*rdi_16, "VK_KHR_bind_memory2") != 0)
            rdi_16 = &rdi_16[1]
            
            if (rdi_16 == r14_13)
                goto label_1418c68ba
    
    if (r15_6 != 0)
        sub_140a74f90(r15_6)
    
    if (rdi_16 == 0)
        rax_20 = 0
    else
        int64_t rdi_17 = sx.q(arg2[1].d)
        int64_t r14_14 = *arg2
        var_38 = nullptr
        int32_t var_30_7 = rdi_17.d
        
        if (rdi_17.d != 0)
            sub_1405c4a00(&var_38, rdi_17.d, 0)
            memcpy(var_38, r14_14, (rdi_17 << 3).d)
        else
            int32_t var_2c_1 = rdi_17.d
        
        if (sub_1418c0ec0(&var_38, "VK_KHR_get_memory_requirements2") == 0)
            rax_20 = 0
        else
            rax_20 = 0x80

*arg1 &= 0xffffff7f
char** r15_7 = nullptr
*arg1 |= rax_20
int64_t r14_15 = sx.q(arg2[1].d)
int64_t rdi_18 = *arg2
var_38 = nullptr
int32_t var_30_8 = r14_15.d
char** rdi_19

if (r14_15.d != 0)
    sub_1405c4a00(&var_38, r14_15.d, 0)
    r15_7 = var_38
    memcpy(r15_7, rdi_18, (r14_15 << 3).d)
    r14_15 = zx.q(var_30_8)
    rdi_19 = r15_7
else
    rdi_19 = nullptr

int64_t rax_21 = sx.q(r14_15.d)
arg_8 = "VK_EXT_memory_priority"
void* r14_16 = &rdi_19[rax_21]

if (rdi_19 == r14_16)
label_1418c69a8:
    rdi_19 = nullptr
else
    while (true)
        rax_21 = strcmp(*rdi_19, "VK_EXT_memory_priority")
        
        if (rax_21.d == 0)
            break
        
        rdi_19 = &rdi_19[1]
        
        if (rdi_19 == r14_16)
            goto label_1418c69a8

if (r15_7 != 0)
    rax_21 = sub_140a74f90(r15_7)

*arg1 &= 0xfffffeff
*arg1 |= sbb.d(rax_21.d, rax_21.d, rdi_19 != 0) & 0x100
sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"disablememorypriority") != 0)
    *arg1 &= 0xfffffeff

int64_t r14_17 = sx.q(arg2[1].d)
int64_t* r15_8 = nullptr
int64_t rdi_21 = *arg2
var_38 = nullptr
int32_t var_30_9 = r14_17.d
int64_t* rdi_22

if (r14_17.d != 0)
    sub_1405c4a00(&var_38, r14_17.d, 0)
    r15_8 = var_38
    memcpy(r15_8, rdi_21, (r14_17 << 3).d)
    r14_17 = zx.q(var_30_9)
    rdi_22 = r15_8
else
    rdi_22 = nullptr

int64_t rax_25 = sx.q(r14_17.d)
arg_8 = "VK_EXT_fragment_density_map"
void* r14_18 = &rdi_22[rax_25]

if (rdi_22 == r14_18)
label_1418c6a5d:
    rdi_22 = nullptr
else
    while (true)
        rax_25 = strcmp(*rdi_22, "VK_EXT_fragment_density_map")
        
        if (rax_25.d == 0)
            break
        
        rdi_22 = &rdi_22[1]
        
        if (rdi_22 == r14_18)
            goto label_1418c6a5d

if (r15_8 != 0)
    rax_25 = sub_140a74f90(r15_8)

*arg1 &= 0xfffffbff
int64_t* r15_9 = nullptr
var_38 = nullptr
*arg1 |= sbb.d(rax_25.d, rax_25.d, rdi_22 != 0) & 0x400
int64_t r14_19 = sx.q(arg2[1].d)
int64_t rdi_23 = *arg2
int32_t var_30_10 = r14_19.d
int64_t* rdi_24

if (r14_19.d != 0)
    sub_1405c4a00(&var_38, r14_19.d, 0)
    r15_9 = var_38
    memcpy(r15_9, rdi_23, (r14_19 << 3).d)
    r14_19 = zx.q(var_30_10)
    rdi_24 = r15_9
else
    rdi_24 = nullptr

int64_t rax_28 = sx.q(r14_19.d)
arg_8 = "VK_KHR_driver_properties"
void* r14_20 = &rdi_24[rax_28]

if (rdi_24 == r14_20)
label_1418c6aff:
    rdi_24 = nullptr
else
    while (true)
        rax_28 = strcmp(*rdi_24, "VK_KHR_driver_properties")
        
        if (rax_28.d == 0)
            break
        
        rdi_24 = &rdi_24[1]
        
        if (rdi_24 == r14_20)
            goto label_1418c6aff

if (r15_9 != 0)
    rax_28 = sub_140a74f90(r15_9)

*arg1 &= 0xfffffdff
int64_t* r15_10 = nullptr
var_38 = nullptr
*arg1 |= sbb.d(rax_28.d, rax_28.d, rdi_24 != 0) & 0x200
int64_t r14_21 = sx.q(arg2[1].d)
int64_t rdi_25 = *arg2
int32_t var_30_11 = r14_21.d
int64_t* rdi_26

if (r14_21.d != 0)
    sub_1405c4a00(&var_38, r14_21.d, 0)
    r15_10 = var_38
    memcpy(r15_10, rdi_25, (r14_21 << 3).d)
    r14_21 = zx.q(var_30_11)
    rdi_26 = r15_10
else
    rdi_26 = nullptr

int64_t rax_31 = sx.q(r14_21.d)
arg_8 = "VK_EXT_fragment_density_map"
void* r14_22 = &rdi_26[rax_31]

if (rdi_26 == r14_22)
label_1418c6b98:
    rdi_26 = nullptr
else
    while (true)
        rax_31 = strcmp(*rdi_26, "VK_EXT_fragment_density_map")
        
        if (rax_31.d == 0)
            break
        
        rdi_26 = &rdi_26[1]
        
        if (rdi_26 == r14_22)
            goto label_1418c6b98

if (r15_10 != 0)
    rax_31 = sub_140a74f90(r15_10)

*arg1 &= 0xfffffbff
int64_t* r15_11 = nullptr
var_38 = nullptr
*arg1 |= sbb.d(rax_31.d, rax_31.d, rdi_26 != 0) & 0x400
int64_t r14_23 = sx.q(arg2[1].d)
int64_t rdi_27 = *arg2
int32_t var_30_12 = r14_23.d
int64_t* rdi_28

if (r14_23.d != 0)
    sub_1405c4a00(&var_38, r14_23.d, 0)
    r15_11 = var_38
    memcpy(r15_11, rdi_27, (r14_23 << 3).d)
    r14_23 = zx.q(var_30_12)
    rdi_28 = r15_11
else
    rdi_28 = nullptr

int64_t rax_34 = sx.q(r14_23.d)
arg_8 = "VK_EXT_full_screen_exclusive"
void* r14_24 = &rdi_28[rax_34]

if (rdi_28 == r14_24)
label_1418c6c38:
    rdi_28 = nullptr
else
    while (true)
        rax_34 = strcmp(*rdi_28, "VK_EXT_full_screen_exclusive")
        
        if (rax_34.d == 0)
            break
        
        rdi_28 = &rdi_28[1]
        
        if (rdi_28 == r14_24)
            goto label_1418c6c38

if (r15_11 != 0)
    rax_34 = sub_140a74f90(r15_11)

*arg1 &= 0xfffff7ff
int64_t* r14_25 = nullptr
var_38 = nullptr
*arg1 |= sbb.d(rax_34.d, rax_34.d, rdi_28 != 0) & 0x800
int64_t r15_12 = sx.q(arg2[1].d)
int64_t rdi_29 = *arg2
int32_t var_30_13 = r15_12.d
char** rdi_30

if (r15_12.d != 0)
    sub_1405c4a00(&var_38, r15_12.d, 0)
    r14_25 = var_38
    memcpy(r14_25, rdi_29, (r15_12 << 3).d)
    r15_12 = zx.q(var_30_13)
    rdi_30 = r14_25
else
    rdi_30 = nullptr

int64_t rax_37 = sx.q(r15_12.d)
arg_8 = "VK_KHR_image_format_list"
void* rsi_1 = &rdi_30[rax_37]

if (rdi_30 == rsi_1)
label_1418c6cd8:
    rdi_30 = nullptr
else
    while (true)
        rax_37 = strcmp(*rdi_30, "VK_KHR_image_format_list")
        
        if (rax_37.d == 0)
            break
        
        rdi_30 = &rdi_30[1]
        
        if (rdi_30 == rsi_1)
            goto label_1418c6cd8

if (r14_25 != 0)
    rax_37 = sub_140a74f90(r14_25)

*arg1 &= 0xffffefff
int32_t result = sbb.d(rax_37.d, rax_37.d, rdi_30 != 0) & 0x1000
*arg1 |= result
return result
