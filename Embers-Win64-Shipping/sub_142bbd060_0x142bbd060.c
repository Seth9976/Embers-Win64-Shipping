// 函数: sub_142bbd060
// 地址: 0x142bbd060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg1[1]
int32_t rsi = 0
*(arg2 + 0x240) = arg1
*(arg2 + 0x239) = 0

if (*(arg2 + 0x74) != 0 && *(arg2 + 0x78) != 0)
    memset(arg2 + 0xc0, 0, 0x178)
    *(arg2 + 0x188) = 7
    *(arg2 + 0x18c) = 1
    *(arg2 + 0x20c) = 0xffffffff
    *(arg2 + 0x214) = 0xf5c
    *(arg2 + 0x184) = 0x27a000
    *(arg2 + 0x230) = arg2
    *(arg2 + 0x268) = arg3
    *(arg2 + 0x270) = arg4
    char rax_1 = *(arg1 + 0x2c)
    int32_t rcx_2
    
    if (rax_1 == 0)
        rcx_2 = 0x61
    else
        rcx_2 = arg1[0xd3].d + 1
    
    int32_t rdx = 0x2000
    int16_t var_78_1 = *(arg2 + 0xb2)
    
    if (rax_1 != 0)
        rdx = 0x5000
    
    int64_t* var_68
    
    if (sub_142bc1100(&var_68, rdx, arg2 + 0xc0, *arg1, rcx_2, *(arg2 + 0xb0)) == 0)
        int32_t rax_5 = sub_142b97060(rbp, arg1[3].d + *(arg2 + 0x74), arg5)
        rsi = rax_5
        
        if (rax_5 == 0)
            int32_t rax_6 = sub_142b96500(rbp, *(arg2 + 0x78))
            rsi = rax_6
            
            if (rax_6 == 0)
                rsi = sub_142bc11d0(&var_68, rbp[7], rbp[8])
                sub_142b96620(rbp)
                
                if (rsi == 0)
                    *(arg2 + 0xc0) &= 0xfe
                    int32_t rax_8 = *(arg2 + 0x218)
                    
                    if (rax_8 s< 0)
                        *(arg2 + 0x218) = neg.d(rax_8)
                    else if (rax_8 == 0)
                        *(arg2 + 0x218) = 0x3ade68b1
                    
                    if (*(arg2 + 0x188) u> 0x3e8)
                        *(arg2 + 0x188) = 7
                    
                    if (*(arg2 + 0x18c) u> 0x3e8)
                        *(arg2 + 0x18c) = 1
    
    int64_t* rcx_8 = var_68
    *(arg2 + 0x280) = *(arg2 + 0x278)
    *(arg2 + 0x288) = 0
    int64_t var_48
    sub_142b99980(*rcx_8, var_48)

return zx.q(rsi)
