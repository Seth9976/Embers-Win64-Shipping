// 函数: sub_1428df960
// 地址: 0x1428df960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rsi = 1
int32_t rdx = data_143b85e30

if (rdx == 0xffffffff)
    int32_t rax = data_143fecca8
    
    if (rax == 0)
        rax = sub_1428a5060()
        data_143fecca8 = rax
    
    sub_1428a5670(rax, 0x64, 0x6b, "engines\e_capi.c", 0x122)
    return 0

uint32_t* rax_2 = sub_1428e3030(arg1, rdx)
int64_t* rax_4
int64_t r8
rax_4, r8 = sub_1428b6ee0(__acrt_iob_func(1), 0)

if (rax_4 == 0)
    int32_t rax_5 = data_143fecca8
    
    if (rax_5 == 0)
        rax_5 = sub_1428a5060()
        data_143fecca8 = rax_5
    
    sub_1428a5670(rax_5, 0x64, 0x73, "engines\e_capi.c", 0x128)
    return 0

uint32_t var_28
CHAR* var_20
int32_t rax_13

if (arg2 - 0xc8 u> 0xd)
    rax_13 = data_143fecca8
    
    if (rax_13 == 0)
        rax_13 = sub_1428a5060()
        data_143fecca8 = rax_13
    
    sub_1428a5670(rax_13, 0x64, 0x7d, "engines\e_capi.c", 0x182)
    rsi = 0
else
    switch (arg2)
        case 0xc8
            rsi = sub_1428e1900(rax_2, rax_4, 0)
        case 0xc9
            rsi = sub_1428e1900(rax_2, rax_4, arg4)
        case 0xca
            *rax_2 = arg3
            sub_1428df6c0(rax_2, "Setting debug level to %d\n", zx.q(arg3))
        case 0xcb
            int64_t rax_17 = sub_1428a6ba0(arg4)
            
            if (rax_17 == 0)
                rax_13 = data_143fecca8
                
                if (rax_13 == 0)
                    rax_13 = sub_1428a5060()
                    data_143fecca8 = rax_13
                
                sub_1428a5670(rax_13, 0x64, 0x41, "engines\e_capi.c", 0x15e)
                rsi = 0
            else
                *(rax_2 + 8) = rax_17
                sub_1428df6c0(rax_2, "Setting debug file to %s\n", rax_17)
        case 0xcc
            rax_2[4] = arg3
            sub_1428df6c0(rax_2, "Setting key type to %d\n", zx.q(arg3))
        case 0xcd
            sub_1428e1da0(rax_2, rax_4, r8)
            rsi = 1
        case 0xce
            if (sub_1428e1390(rax_2, &var_20, &var_28, arg3) != 1)
                rsi = 0
            else
                rsi = sub_1428dfd40(rax_2, var_20, var_28, 0)
                sub_1428a6780(var_20)
        case 0xcf
            rsi = sub_1428dfd40(rax_2, arg4, rax_2[8], 1)
        case 0xd0
            rax_2[8] = arg3
        case 0xd1
            rsi = sub_1428e1a20(rax_2, rax_4)
        case 0xd2
            rax_2[0x10] = arg3
        case 0xd3
            if (arg3 - 1 u> 2)
                int32_t rax_21 = data_143fecca8
                
                if (rax_21 == 0)
                    rax_21 = sub_1428a5060()
                    data_143fecca8 = rax_21
                
                sub_1428a5670(rax_21, 0x64, 0x78, "engines\e_capi.c", 0x172)
                sub_142899e70(rax_4)
                return 0
            
            rax_2[0xf] = arg3
        case 0xd4
            int64_t rax_12 = sub_1428a6ba0(arg4)
            
            if (rax_12 == 0)
                rax_13 = data_143fecca8
                
                if (rax_13 == 0)
                    rax_13 = sub_1428a5060()
                    data_143fecca8 = rax_13
                
                sub_1428a5670(rax_13, 0x64, 0x41, "engines\e_capi.c", 0x143)
                rsi = 0
            else
                sub_1428a6780(*(rax_2 + 0x28))
                *(rax_2 + 0x28) = rax_12
                sub_1428df6c0(rax_2, "Setting store name to %s\n", arg4)
        case 0xd5
            int32_t rcx_12 = rax_2[0xe]
            int32_t rcx_14 = (rcx_12 & 0xfffdffff) | 0x10000
            
            if ((1 & arg3.b) != 0)
                rcx_14 = (rcx_12 & 0xfffeffff) | 0x20000
            
            rax_2[0xe] = rcx_14
            sub_1428df6c0(rax_2, "Setting flags to %d\n", zx.q(arg3))
sub_142899e70(rax_4)
return zx.q(rsi)
