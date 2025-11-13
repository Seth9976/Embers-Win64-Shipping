// 函数: sub_1405faeb0
// 地址: 0x1405faeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2

if (data_143cda4a0 != 0)
    return 

data_143cda4a0 = 1
struct IMFMediaType ppMFType

for (void** i = &data_14395f9b0; i != &data_14395fa00; i = &i[2])
    for (void* const j = &data_142d5c350; j != &data_142d5c370; j += 4)
        int32_t rbx_1 = *j
        ppMFType = 0
        
        if (MFCreateMediaType(&ppMFType) s>= 0)
            struct IMFMediaType ppMFType_1 = ppMFType
            
            if ((*(*ppMFType_1 + 0xc0))(ppMFType_1, &data_1434cbb80, "auds") s>= 0)
                struct IMFMediaType ppMFType_2 = ppMFType
                
                if ((*(*ppMFType_2 + 0xc0))(ppMFType_2, &data_1434cbb90, *i) s>= 0)
                    struct IMFMediaType ppMFType_3 = ppMFType
                    
                    if ((*(*ppMFType_3 + 0xa8))(ppMFType_3, &data_1434cbba0, 1) s>= 0)
                        struct IMFMediaType ppMFType_4 = ppMFType
                        
                        if ((*(*ppMFType_4 + 0xa8))(ppMFType_4, &data_1434cbc00, zx.q(i[1].d))
                                s>= 0)
                            struct IMFMediaType ppMFType_5 = ppMFType
                            (*(*ppMFType_5 + 0xa8))(ppMFType_5, &data_1434cbbd0, zx.q(rbx_1))
        
        int64_t rbx_2 = sx.q(data_143cda260)
        int32_t rax_11 = (rbx_2 + 1).d
        data_143cda260 = rax_11
        
        if (rax_11 s> data_143cda264)
            sub_1405a4d70(&data_143cda258)
        
        (data_143cda258 + (rbx_2 << 3))->vtable = ppMFType
        struct IMFMediaType ppMFType_6 = ppMFType
        
        if (ppMFType_6 != 0)
            (*(*ppMFType_6 + 8))(ppMFType_6)
            ppMFType_6 = ppMFType
        
        if (ppMFType_6 != 0)
            (*(*ppMFType_6 + 0x10))(ppMFType_6)

ppMFType = 0

if (MFCreateMediaType(&ppMFType) s>= 0)
    struct IMFMediaType ppMFType_7 = ppMFType
    
    if ((*(*ppMFType_7 + 0xc0))(ppMFType_7, &data_1434cbb80, &data_1434cbd10) s>= 0)
        struct IMFMediaType ppMFType_8 = ppMFType
        (*(*ppMFType_8 + 0xa8))(ppMFType_8, &data_1434cbba0, 1)

int64_t rbx_3 = sx.q(data_143cda270)
int32_t rax_20 = (rbx_3 + 1).d
data_143cda270 = rax_20

if (rax_20 s> data_143cda274)
    sub_1405a4d70(&data_143cda268)

(data_143cda268 + (rbx_3 << 3))->vtable = ppMFType
struct IMFMediaType ppMFType_9 = ppMFType

if (ppMFType_9 != 0)
    (*(*ppMFType_9 + 8))(ppMFType_9)
    ppMFType_9 = ppMFType

if (ppMFType_9 != 0)
    (*(*ppMFType_9 + 0x10))(ppMFType_9)

ppMFType = 0

if (MFCreateMediaType(&ppMFType) s>= 0)
    struct IMFMediaType ppMFType_10 = ppMFType
    
    if ((*(*ppMFType_10 + 0xc0))(ppMFType_10, &data_1434cbb80, &data_1434cbcd0) s>= 0)
        struct IMFMediaType ppMFType_11 = ppMFType
        (*(*ppMFType_11 + 0xa8))(ppMFType_11, &data_1434cbba0, 1)

int64_t rbx_4 = sx.q(data_143cda280)
int32_t rax_29 = (rbx_4 + 1).d
data_143cda280 = rax_29

if (rax_29 s> data_143cda284)
    sub_1405a4d70(&data_143cda278)

(data_143cda278 + (rbx_4 << 3))->vtable = ppMFType
struct IMFMediaType ppMFType_12 = ppMFType

if (ppMFType_12 != 0)
    (*(*ppMFType_12 + 8))(ppMFType_12)
    ppMFType_12 = ppMFType

if (ppMFType_12 != 0)
    (*(*ppMFType_12 + 0x10))(ppMFType_12)

for (void** const i_1 = &data_142d5c370; i_1 != u"TextureY"; i_1 = &i_1[1])
    void* rbx_5 = *i_1
    ppMFType = 0
    
    if (MFCreateMediaType(&ppMFType) s>= 0)
        struct IMFMediaType ppMFType_13 = ppMFType
        
        if ((*(*ppMFType_13 + 0xc0))(ppMFType_13, &data_1434cbb80, "vids") s>= 0)
            struct IMFMediaType ppMFType_14 = ppMFType
            
            if ((*(*ppMFType_14 + 0xc0))(ppMFType_14, &data_1434cbb90, rbx_5) s>= 0)
                struct IMFMediaType ppMFType_15 = ppMFType
                
                if ((*(*ppMFType_15 + 0xa8))(ppMFType_15, &data_1434cbba0, 1) s>= 0)
                    struct IMFMediaType ppMFType_16 = ppMFType
                    (*(*ppMFType_16 + 0xa8))(ppMFType_16, &data_1434cbc40, 2)
    
    int64_t rbx_6 = sx.q(data_143cda290)
    int32_t rax_42 = (rbx_6 + 1).d
    data_143cda290 = rax_42
    
    if (rax_42 s> data_143cda294)
        sub_1405a4d70(&data_143cda288)
    
    (data_143cda288 + (rbx_6 << 3))->vtable = ppMFType
    struct IMFMediaType ppMFType_17 = ppMFType
    
    if (ppMFType_17 != 0)
        (*(*ppMFType_17 + 8))(ppMFType_17)
        ppMFType_17 = ppMFType
    
    if (ppMFType_17 != 0)
        (*(*ppMFType_17 + 0x10))(ppMFType_17)
