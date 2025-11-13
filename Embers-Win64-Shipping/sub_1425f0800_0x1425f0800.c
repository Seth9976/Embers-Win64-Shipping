// 函数: sub_1425f0800
// 地址: 0x1425f0800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t var_38 = __security_cookie ^ &var_d8
struct IMFMediaType ppMFType
ppMFType.vtable.d = 0
int64_t result

if (*(arg1 + 0x40) != 0)
    result.b = 0
else
    int64_t var_a8 = 0
    int64_t var_a0_1 = 0
    int32_t var_48_1 = 0x17700
    int32_t var_44_1 = 0x1f400
    int32_t var_40_1 = 0x27100
    int32_t var_3c_1 = 0x2ee00
    int128_t* var_78 = nullptr
    int32_t var_70_1 = 4
    sub_1405c4a90(&var_78, 4, 0)
    *var_78 = var_48_1.o
    int32_t rbx_1 = 1
    int64_t* var_98
    struct IMFMediaTypeVTable** var_88
    int64_t rsi
    
    if (sub_1425f2560(u"AAC Bitrate", arg2[2], &var_78, &var_a8).b == 0)
        rsi.b = 1
    else
        rbx_1 = 3
        ppMFType.vtable.d = 0xac44
        ppMFType.vtable = 0xbb80
        var_88 = nullptr
        int32_t var_80_1 = 3
        sub_1405c4a90(&var_88, 3, 0)
        struct IMFMediaTypeVTable** rcx_2 = var_88
        *rcx_2 = ppMFType.vtable
        rcx_2[1].d = ppMFType.__offset(0x8).d
        
        if (sub_1425f2560(u"AAC Samplerate", *arg2, &var_88, &var_a8).b == 0)
            rsi.b = 1
        else
            int32_t var_58_1 = 1
            int32_t var_54_1 = 2
            int32_t var_50_1 = 6
            var_98 = nullptr
            int32_t var_90_1 = 3
            sub_1405c4a90(&var_98, 3, 0)
            int64_t* rcx_4 = var_98
            rbx_1 = 7
            *rcx_4 = var_58_1.q
            rcx_4[1].d = var_50_1
            
            if (sub_1425f2560(u"AAC NumChannels", arg2[1], &var_98, &var_a8).b == 0)
                rsi.b = 1
            else
                rsi.b = 0
    
    if ((rbx_1.b & 4) != 0)
        int64_t* rcx_5 = var_98
        rbx_1 &= 0xfffffffb
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    if ((rbx_1.b & 2) != 0)
        struct IMFMediaTypeVTable** rcx_6 = var_88
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    
    int128_t* rcx_7 = var_78
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = var_a8
    
    if (rsi.b == 0)
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        *(arg1 + 0x68) = *arg2
        *(arg1 + 0x6c) = arg2[1]
        *(arg1 + 0x70) = arg2[2]
        sub_142476260(arg1 + 0x78, &arg2[4])
        GUID* rclsid = &data_143449e18
        
        if (*(arg1 + 0x40) != 0)
            rclsid = nullptr
        
        if (CoCreateInstance(rclsid, 0, CLSCTX_INPROC_SERVER, &data_1434cbd80, arg1 + 0x88).d s< 0)
            result.b = 0
        else
            ppMFType.vtable = 0
            HRESULT rax_7 = MFCreateMediaType(&ppMFType)
            struct IMFMediaTypeVTable* vtable = ppMFType.vtable
            
            if (rax_7 s< 0)
                goto label_1425f0ad4
            
            int32_t rax_9 = (*(vtable->QueryInterface + 0xc0))(vtable, &data_1434cbb80, "auds")
            vtable = ppMFType.vtable
            
            if (rax_9 s< 0)
                goto label_1425f0ad4
            
            int32_t rax_11 =
                (*(vtable->QueryInterface + 0xc0))(vtable, &data_1434cbb90, &data_1434cbb30)
            vtable = ppMFType.vtable
            
            if (rax_11 s< 0)
                goto label_1425f0ad4
            
            int32_t rax_13 = (*(vtable->QueryInterface + 0xa8))(vtable, &data_1434cbc00, 0x10)
            vtable = ppMFType.vtable
            
            if (rax_13 s< 0)
                goto label_1425f0ad4
            
            int32_t rax_15 =
                (*(vtable->QueryInterface + 0xa8))(vtable, &data_1434cbbe0, zx.q(*(arg1 + 0x68)))
            vtable = ppMFType.vtable
            
            if (rax_15 s< 0)
                goto label_1425f0ad4
            
            if ((*(vtable->QueryInterface + 0xa8))(vtable, &data_1434cbbd0, zx.q(*(arg1 + 0x6c)))
                    s>= 0)
                int64_t* rcx_14 = *(arg1 + 0x88)
                int32_t rax_21 = (*(*rcx_14 + 0x78))(rcx_14, 0, ppMFType.vtable, 0)
                vtable = ppMFType.vtable
                
                if (rax_21 s< 0)
                    goto label_1425f0ad4
                
                if (vtable != 0)
                    (*(vtable->QueryInterface + 0x10))(vtable)
                
                if (sub_1425f19a0(arg1) == 0)
                    goto label_1425f0adf
                
                int64_t* rcx_16 = *(arg1 + 0x88)
                
                if ((*(*rcx_16 + 0x30))(rcx_16, 0, arg1 + 0x98) s< 0)
                    goto label_1425f0adf
                
                int64_t* rcx_17 = *(arg1 + 0x88)
                
                if ((*(*rcx_17 + 0x38))(rcx_17, 0, arg1 + 0xb0) s< 0)
                    goto label_1425f0adf
                
                int64_t* rcx_18 = *(arg1 + 0x88)
                
                if ((*(*rcx_18 + 0xb8))(rcx_18, 0x10000000, 0) s< 0)
                    goto label_1425f0adf
                
                int64_t* rcx_19 = *(arg1 + 0x88)
                
                if ((*(*rcx_19 + 0xb8))(rcx_19, 0x10000003, 0).d s< 0)
                    goto label_1425f0adf
                
                result.b = 1
            else
                vtable = ppMFType.vtable
            label_1425f0ad4:
                
                if (vtable == 0)
                    goto label_1425f0adf
                
                (*(vtable->QueryInterface + 0x10))(vtable)
            label_1425f0adf:
                int64_t* rcx_11 = *(arg1 + 0x88)
                (*(*rcx_11 + 0x10))(rcx_11)
                result.b = 0
    else
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        result.b = 0

__security_check_cookie(var_38 ^ &var_d8)
return result
