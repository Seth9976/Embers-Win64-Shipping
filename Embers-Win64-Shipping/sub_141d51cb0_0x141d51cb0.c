// 函数: sub_141d51cb0
// 地址: 0x141d51cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1

if (sub_140b0f6c0(&arg_18, u"MEDIA") == 0)
    return 0

int64_t var_48
sub_140b294d0(&var_48, &arg_18, 0)
int64_t var_38
uint64_t result
int64_t rdx_2

if (sub_140a23cf0(&var_48, u"PLAY", 1, 0, 0xffffffff) != 0xffffffff)
    var_38 = 0
    int32_t var_30_1 = 0
    int32_t var_28_1 = 0xffffffff
    sub_140d3cc80(sub_141d5ec10(), &var_38, 1, 0x10, 0)
    int32_t r8_1 = var_30_1
    rdx_2 = var_38
    int32_t i = var_28_1 + 1
    int32_t i_2 = i
    
    if (i s< r8_1)
        while (*(rdx_2 + (sx.q(i) << 3)) == 0)
            result = zx.q(i + 1)
            i_2 = result.d
            i = result.d
            
            if (result.d s>= r8_1)
                break
    
    int128_t zmm6 = 0x3f800000
    
    while (i s>= 0)
        if (i s>= r8_1)
            break
        
        zmm6 = sub_141d510b0(*(*(rdx_2 + (sx.q(i) << 3)) + 0x110), zmm6)
        r8_1 = var_30_1
        rdx_2 = var_38
        i = i_2 + 1
        i_2 = i
        
        if (i s< r8_1)
            while (*(rdx_2 + (sx.q(i) << 3)) == 0)
                result = zx.q(i + 1)
                i_2 = result.d
                i = result.d
                
                if (result.d s>= r8_1)
                    break
    
    goto label_141d51dd2

if (sub_140a23cf0(&var_48, u"PAUSE", 1, 0, 0xffffffff).d != 0xffffffff)
    int32_t var_28_2 = 0xffffffff
    var_38 = 0
    int32_t var_30_2 = 0
    sub_140d3cc80(sub_141d5ec10(), &var_38, 1, 0x10, 0)
    int32_t r8_3 = var_30_2
    rdx_2 = var_38
    int32_t i_1 = var_28_2 + 1
    int32_t i_3 = i_1
    
    if (i_1 s< r8_3)
        while (*(rdx_2 + (sx.q(i_1) << 3)) == 0)
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
            
            if (result.d s>= r8_3)
                break
    
    while (i_1 s>= 0)
        if (i_1 s>= r8_3)
            break
        
        sub_141d510b0(*(*(rdx_2 + (sx.q(i_1) << 3)) + 0x110), zx.o(0))
        r8_3 = var_30_2
        rdx_2 = var_38
        i_1 = i_3 + 1
        i_3 = i_1
        
        if (i_1 s< r8_3)
            while (*(rdx_2 + (sx.q(i_1) << 3)) == 0)
                result = zx.q(i_1 + 1)
                i_3 = result.d
                i_1 = result.d
                
                if (result.d s>= r8_3)
                    break
    
label_141d51dd2:
    
    if (rdx_2 != 0)
        sub_140a74f90(rdx_2)

int64_t rcx_7 = var_48

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

result.b = 1
return result
