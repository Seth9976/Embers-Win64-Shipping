// 函数: sub_14092deb0
// 地址: 0x14092deb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140925830(arg3 + 0x20, 0)
uint64_t result = zx.q(*(arg3 + 0x68))
int64_t rsi = 0
int64_t result_1

if (result.d s> 0)
    int64_t r8 = 0
    uint64_t i_3 = zx.q(result.d)
    uint64_t i
    
    do
        result_1 = *(arg3 + 0x60)
        result = arg3 + 0x58
        int64_t rdx_2 = (sx.q(*(arg3 + 0x68)) - 1) & r8
        
        if (result_1 != 0)
            result = result_1
        
        r8 += 1
        *(result + (rdx_2 << 2)) = 0xffffffff
        i = i_3
        i_3 -= 1
    while (i != 1)

if (arg2[2].b != 0)
    arg2[2].b = 1
    result.b = 1
else
    result_1 = sx.q(*(arg2 + 0xc))
    
    if ((result_1 + 4).d s> arg2[1].d)
        arg2[2].b = 1
        result.b = 1
    else
        char* rdx_4 = result_1 + *arg2
        *(arg3 + 8) =
            ((zx.d(rdx_4[1]) | zx.d(*rdx_4) << 8) << 8 | zx.d(rdx_4[2])) << 8 | zx.d(rdx_4[3])
        result_1 = sx.q(*(arg2 + 0xc))
        result = zx.q((result_1 + 4).d)
        *(arg2 + 0xc) = result.d
        
        if (arg2[2].b != 0 || result.d + 4 s> arg2[1].d)
            arg2[2].b = 1
            result.b = 1
        else
            int64_t rdx_6 = result_1 + *arg2
            *(arg3 + 0xc) =
                ((zx.d(*(rdx_6 + 4)) << 8 | zx.d(*(rdx_6 + 5))) << 8 | zx.d(*(rdx_6 + 6))) << 8
                | zx.d(*(rdx_6 + 7))
            *(arg2 + 0xc) += 4
            result = zx.q(arg2[2].b)

result_1.b = 0

if (result.b != 0)
    arg2[2].b = 1
else
    result = sx.q(*(arg2 + 0xc))
    
    if (result.d s>= arg2[1].d)
        arg2[2].b = 1
    else
        result_1 = zx.q(*(result + *arg2))
        *(arg2 + 0xc) = (result + 1).d

result.b = result_1.b != 0
*(arg3 + 0x10) = result.b

if (arg2[2].b == 0)
    result = sx.q(*(arg2 + 0xc))

if (arg2[2].b != 0 || result.d s>= arg2[1].d)
    arg2[2].b = 1
else
    result_1 = zx.q(*(result + *arg2))
    *(arg2 + 0xc) = (result + 1).d

result.b = result_1.b != 0
*(arg3 + 0x12) = result.b

if (arg2[2].b == 0)
    result = sx.q(*(arg2 + 0xc))

if (arg2[2].b != 0 || result.d s>= arg2[1].d)
    arg2[2].b = 1
else
    result_1 = zx.q(*(result + *arg2))
    *(arg2 + 0xc) = (result + 1).d

result.b = result_1.b != 0
*(arg3 + 0x13) = result.b

if (arg2[2].b == 0)
    result = sx.q(*(arg2 + 0xc))

if (arg2[2].b != 0 || result.d s>= arg2[1].d)
    arg2[2].b = 1
else
    result_1 = zx.q(*(result + *arg2))
    *(arg2 + 0xc) = (result + 1).d

result.b = result_1.b != 0
*(arg3 + 0x14) = result.b

if (arg2[2].b == 0)
    result = sx.q(*(arg2 + 0xc))

if (arg2[2].b != 0 || result.d s>= arg2[1].d)
    arg2[2].b = 1
else
    result_1 = zx.q(*(result + *arg2))
    *(arg2 + 0xc) = (result + 1).d

result.b = result_1.b != 0
*(arg3 + 0x11) = result.b

if (arg2[2].b == 0)
    result = sx.q(*(arg2 + 0xc))

if (arg2[2].b != 0 || result.d s>= arg2[1].d)
    arg2[2].b = 1
else
    result_1 = zx.q(*(result + *arg2))
    *(arg2 + 0xc) = (result + 1).d

result.b = result_1.b != 0
*(arg3 + 0x15) = result.b

if (arg2[2].b == 0)
    result = sx.q(*(arg2 + 0xc))

if (arg2[2].b != 0 || result.d s>= arg2[1].d)
    arg2[2].b = 1
else
    result_1 = zx.q(*(result + *arg2))
    *(arg2 + 0xc) = (result + 1).d

result.b = result_1.b != 0
*(arg3 + 0x16) = result.b

if (arg2[2].b == 0)
    result = sx.q(*(arg2 + 0xc))

if (arg2[2].b != 0 || result.d s>= arg2[1].d)
    arg2[2].b = 1
else
    result_1 = zx.q(*(result + *arg2))
    *(arg2 + 0xc) = (result + 1).d

result.b = result_1.b != 0
*(arg3 + 0x17) = result.b

if (arg2[2].b == 0)
    result = sx.q(*(arg2 + 0xc))

if (arg2[2].b != 0 || result.d s>= arg2[1].d)
    arg2[2].b = 1
else
    result_1 = zx.q(*(result + *arg2))
    *(arg2 + 0xc) = (result + 1).d

result.b = result_1.b != 0
*(arg3 + 0x18) = result.b

if (arg2[2].b == 0)
    result = sx.q(*(arg2 + 0xc))

if (arg2[2].b != 0 || result.d s>= arg2[1].d)
    arg2[2].b = 1
else
    result_1 = zx.q(*(result + *arg2))
    *(arg2 + 0xc) = (result + 1).d

result.b = result_1.b != 0
*(arg3 + 0x19) = result.b
int64_t rcx_23

if (arg2[2].b == 0)
    rcx_23 = sx.q(*(arg2 + 0xc))

if (arg2[2].b != 0 || (rcx_23 + 4).d s> arg2[1].d)
    arg2[2].b = 1
    result.b = 1
else
    int64_t rdx_18 = rcx_23 + *arg2
    *(arg3 + 0x1c) = ((zx.d(*(rdx_18 + 1)) | zx.d(*rdx_18) << 8) << 8 | zx.d(*(rdx_18 + 2))) << 8
        | zx.d(*(rdx_18 + 3))
    *(arg2 + 0xc) += 4
    result = zx.q(arg2[2].b)

if (result.b != 0)
    arg2[2].b = 1
else
    result = sx.q(*(arg2 + 0xc))
    int32_t r8_1 = (result + 4).d
    
    if (r8_1 s> arg2[1].d)
        arg2[2].b = 1
    else
        int32_t r12_1 = 0
        uint64_t rdx_20 = result + *arg2
        result = zx.q(*(rdx_20 + 3))
        int32_t r13_6 =
            ((zx.d(*(rdx_20 + 1)) | zx.d(*rdx_20) << 8) << 8 | zx.d(*(rdx_20 + 2))) << 8 | result.d
        *(arg2 + 0xc) = r8_1
        
        if (r13_6 s> 0)
            while (arg2[2].b == 0)
                int32_t var_58 = 0
                int64_t var_50
                __builtin_memset(&var_50, 0, 0x14)
                int32_t var_3c_1 = 0xffffffff
                int16_t* var_68 = nullptr
                int32_t var_60_1 = 0
                sub_14091c220(arg2, &var_68)
                int16_t* rdx_22 = &data_142d40450
                int16_t* r15_1 = var_68
                
                if (var_60_1 != 0)
                    rdx_22 = r15_1
                
                void arg_18
                int64_t* rax_14
                bool r8_2
                rax_14, r8_2 = sub_140b58260(&arg_18, rdx_22, 1)
                int64_t rbx_1 = *rax_14
                
                if (r15_1 != 0)
                    r8_2 = sub_140a74f90(r15_1)
                
                sub_14091c530(arg2, &var_58, r8_2)
                
                if (arg2[2].b == 0)
                    int64_t rax_15 = sx.q(*(arg2 + 0xc))
                    char rax_17
                    
                    if (rax_15.d s>= arg2[1].d)
                        rax_17 = arg4
                        arg2[2].b = 1
                    else
                        rax_17 = *(rax_15 + *arg2)
                        arg4 = rax_17
                        *(arg2 + 0xc) = (rax_15 + 1).d
                    
                    uint32_t var_40_1 = zx.d(rax_17)
                
                sub_140943ad0(arg3, rbx_1, &var_58)
                result = sub_14093ee40(&var_58)
                r12_1 += 1
                
                if (r12_1 s>= r13_6)
                    break

if (arg2[2].b != 0)
    sub_140925830(arg3 + 0x20, 0)
    result = zx.q(*(arg3 + 0x68))
    
    if (result.d s> 0)
        uint64_t i_2 = zx.q(result.d)
        uint64_t i_1
        
        do
            uint64_t result_2 = *(arg3 + 0x60)
            result = arg3 + 0x58
            int64_t rdx_28 = (sx.q(*(arg3 + 0x68)) - 1) & rsi
            
            if (result_2 != 0)
                result = result_2
            
            rsi += 1
            *(result + (rdx_28 << 2)) = 0xffffffff
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
