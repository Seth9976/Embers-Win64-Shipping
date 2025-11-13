// 函数: sub_1425f4c60
// 地址: 0x1425f4c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int16_t* rcx

if (arg3[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg3

if (sub_140a54570(rcx, "aac") != 0)
    arg2[1].b = 0
else
    int128_t zmm0 = data_1434cbb60
    struct IMFMediaType ppMFType = 0
    int128_t var_48 = zmm0
    HRESULT rax_3 = MFCreateMediaType(&ppMFType)
    struct IMFMediaType ppMFType_1 = ppMFType
    
    if (rax_3 s< 0)
    label_1425f4d62:
        arg2[1].b = 0
        
        if (ppMFType_1 != 0)
            (*(*ppMFType_1 + 0x10))(ppMFType_1)
    else
        int32_t rax_5 = (*(*ppMFType_1 + 0xc0))(ppMFType_1, &data_1434cbb80, "auds")
        ppMFType_1 = ppMFType
        
        if (rax_5 s< 0)
            goto label_1425f4d62
        
        int32_t rax_7 = (*(*ppMFType_1 + 0xc0))(ppMFType_1, &data_1434cbb90, &var_48)
        ppMFType_1 = ppMFType
        
        if (rax_7 s< 0)
            goto label_1425f4d62
        
        int32_t rax_9 = (*(*ppMFType_1 + 0xa8))(ppMFType_1, &data_1434cbc00, 0x10)
        ppMFType_1 = ppMFType
        
        if (rax_9 s< 0)
            goto label_1425f4d62
        
        int32_t rax_11 = (*(*ppMFType_1 + 0xa8))(ppMFType_1, &data_1434cbbe0, zx.q(*arg4))
        ppMFType_1 = ppMFType
        
        if (rax_11 s< 0)
            goto label_1425f4d62
        
        int32_t rax_13 = (*(*ppMFType_1 + 0xa8))(ppMFType_1, &data_1434cbbd0, zx.q(arg4[1]))
        ppMFType_1 = ppMFType
        
        if (rax_13 s< 0)
            goto label_1425f4d62
        
        int32_t rax_16 = (*(*ppMFType_1 + 0xa8))(ppMFType_1, &data_1434cbbf0, zx.q(arg4[2]))
        int32_t var_50
        int32_t rax_18
        
        if (rax_16 s>= 0)
            int64_t* rcx_2 = *arg1
            struct IMFMediaType ppMFType_4 = ppMFType
            var_50 = 0
            rax_18 = (*(*rcx_2 + 0x18))(rcx_2, ppMFType_4, &var_50)
        
        if (rax_16 s>= 0 && rax_18 s>= 0)
            int64_t* rcx_3 = *arg1
            int32_t rax_21 = (*(*rcx_3 + 0x20))(rcx_3, zx.q(var_50), ppMFType, 0)
            struct IMFMediaType ppMFType_3 = ppMFType
            
            if (rax_21 s>= 0)
                *arg2 = var_50
                arg2[1].b = 1
                
                if (ppMFType_3 != 0)
                    (*(*ppMFType_3 + 0x10))(ppMFType_3)
            else
                arg2[1].b = 0
                
                if (ppMFType_3 != 0)
                    int64_t rdx_1 = *ppMFType_3
                    (*(rdx_1 + 0x10))(ppMFType_3, rdx_1)
        else
            struct IMFMediaType ppMFType_2 = ppMFType
            arg2[1].b = 0
            
            if (ppMFType_2 != 0)
                (*(*ppMFType_2 + 0x10))(ppMFType_2)

__security_check_cookie(rax_1 ^ &var_78)
return arg2
