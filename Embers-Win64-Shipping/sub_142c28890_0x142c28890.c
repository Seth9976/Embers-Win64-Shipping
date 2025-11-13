// 函数: sub_142c28890
// 地址: 0x142c28890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 4).b != 0 && zx.w(*arg1) * 0x100 + zx.w(arg1[1]) == 1
        && sub_142c25cc0(&arg1[4], arg2, arg1).b != 0 && sub_142c25c10(&arg1[6], arg2, arg1).b != 0
        && sub_142c263c0(&arg1[8], arg2, arg1).b != 0)
    result = sub_142c25cc0(&arg1[0xa], arg2, arg1)
    
    if (result.b != 0)
        if ((((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8) + zx.d(arg1[3])
                u>= 0x10002)
            result = sub_142c26510(&arg1[0xc], arg2, arg1)
        
        if ((((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8) + zx.d(arg1[3])
                u< 0x10002 || result.b != 0)
            if ((((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8) + zx.d(arg1[3])
                    u>= 0x10003)
                result = sub_142c05480(&arg1[0xe], arg2, arg1)
            
            if ((((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8) + zx.d(arg1[3])
                    u< 0x10003 || result.b != 0)
                result.b = 1
                return result

result.b = 0
return result
