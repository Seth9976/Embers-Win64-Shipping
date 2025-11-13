// 函数: sub_14284b9f0
// 地址: 0x14284b9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint64_t result

if (arg2 != 0)
    int64_t* var_30 = nullptr
    int32_t result_2 = (*(*arg2 + 0x68))(arg2, &var_30)
    int32_t result_1 = result_2
    
    if (result_2 s>= 0)
        int128_t var_48
        __builtin_memset(&var_48, 0, 0x18)
        char rdi
        
        if (arg1 s< 0)
            rdi = 0
        else if ((arg1 & 0x40) != 0)
            rdi = 1
        else if (arg4 - 0x1d u> 0x46)
            rdi = 0
        else
            switch (arg4)
                case 0x1d, 0x48, 0x4b, 0x4e, 0x5b, 0x5d, 0x63
                    rdi = 1
                case 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                        0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 
                        0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 
                        0x43, 0x44, 0x45, 0x46, 0x47, 0x49, 0x4a, 0x4c, 0x4d, 0x4f, 0x50, 0x51, 
                        0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5c, 0x5e, 0x5f, 
                        0x60, 0x61, 0x62
                    rdi = 0
        
        var_48.w = 0x1e
        var_48:8.q = "DirectXTex"
        
        if (*arg3 != 0x473c713f1b7cfaf4 || arg3[1] != -0x5051a0bdc89e3245)
            int64_t* rcx_6 = var_30
            (*(*rcx_6 + 0x38))(rcx_6, u"System.ApplicationName", &var_48)
            
            if (rdi != 0)
                var_48.w = 0x12
                var_48:8.w = 1
                int64_t* rcx_7 = var_30
                (*(*rcx_7 + 0x38))(rcx_7, u"System.Image.ColorSpace", &var_48)
        else
            int64_t* rcx_3 = var_30
            (*(*rcx_3 + 0x38))(rcx_3, u"/tEXt/{str=Software}", &var_48)
            int64_t* rcx_4 = var_30
            int128_t* r8_1 = &var_48
            
            if (rdi == 0)
                var_48.w = 0x13
                var_48:8.d = 0x186a0
                (*(*rcx_4 + 0x38))(rcx_4, u"/gAMA/ImageGamma", r8_1)
                int64_t* rcx_5 = var_30
                (*(*rcx_5 + 0x40))(rcx_5, u"/sRGB/RenderingIntent")
            else
                var_48.w = 0x11
                var_48:8.b = 0
                (*(*rcx_4 + 0x38))(rcx_4, u"/sRGB/RenderingIntent", r8_1)
    else if (result_1 == 0x88982f81)
        result_1 = 0
    
    int64_t* rcx_8 = var_30
    
    if (rcx_8 != 0)
        var_30 = nullptr
        (*(*rcx_8 + 0x10))(rcx_8)
    
    result = zx.q(result_1)
else
    result = 0x80004003

__security_check_cookie(rax_1 ^ &var_68)
return result
