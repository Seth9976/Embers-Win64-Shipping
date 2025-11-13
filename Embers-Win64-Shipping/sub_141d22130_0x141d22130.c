// 函数: sub_141d22130
// 地址: 0x141d22130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[1].d == 0)
    return 

sub_141d1f690(arg1, *arg2)
int64_t rax_1 = *arg2
int16_t arg_18

if (rax_1 == data_143f37078)
    int64_t rax_2 = arg1[0x4f]
    int32_t rbp_1 = 0
    int64_t var_38 = 0
    int64_t var_30_1 = 0
    
    if ((*(rax_2 + 0x48))(&arg1[0x4f]) s> 0)
        int32_t* r12_1 = nullptr
        int32_t rax_7
        
        do
            for (int32_t* i = *arg3; i != &i[sx.q(arg3[1].d)]; i = &i[1])
                if (*i == *(r12_1 + arg1[0x50]))
                    int64_t rsi_1 = sx.q(var_30_1.d)
                    int32_t rax_4 = (rsi_1 + 1).d
                    var_30_1.d = rax_4
                    
                    if (rax_4 s> var_30_1:4.d)
                        sub_1405a4cf0(&var_38)
                    
                    *(var_38 + (rsi_1 << 2)) = rbp_1
                    break
            
            rbp_1 += 1
            r12_1 = &r12_1[1]
            rax_7 = (*(arg1[0x4f] + 0x48))(&arg1[0x4f])
        while (rbp_1 s< rax_7)
    
    sub_141d236b0(arg1, &var_38)
    arg_18 = 0x101
    sub_141d227f0(arg1, arg2, arg3, 0x101)
    int64_t rcx_7 = var_38
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
else if (rax_1 != data_143f36fc8)
    arg_18 = 0x101
    uint64_t rax
    
    if (rax_1 == data_143f36fc0)
        sub_141d227f0(arg1, arg2, arg3, 0x101)
        int64_t r12_2 = sx.q((*(arg1[0x43] + 0x48))(&arg1[0x43]))
        int64_t rdx_7 = arg1[0x4f]
        rax = (*(rdx_7 + 0x48))(&arg1[0x4f], rdx_7)
        
        if (rax.d s> 0)
            int64_t i_1 = 0
            
            do
                int64_t r14_1 = sx.q(*(arg1[0x62] + (i_1 << 2)))
                int64_t rdx_8 = r14_1
                
                if (r14_1.d == 0xffffffff)
                    *(arg1[0x65] + (i_1 << 2)) = 0
                else
                    int64_t r9 = rdx_8
                    int32_t* r8_3 = arg1[0x44] + r14_1 * 0xc
                    int64_t rcx_12 = arg1[0x41]
                    int32_t j = *(rcx_12 + (sx.q(*r8_3) << 2))
                    
                    do
                        rdx_8 = zx.q(rdx_8.d + 1)
                        r8_3 = &r8_3[3]
                        r9 += 1
                        
                        if (r9 s>= r12_2)
                            break
                    while (*(rcx_12 + (sx.q(*r8_3) << 2)) == j)
                    
                    *(arg1[0x65] + (i_1 << 2)) = rdx_8.d - r14_1.d
                
                i_1 += 1
            while (i_1 s< sx.q(rax.d))
    else if (rax_1 != data_143f36fd0)
        sub_141d227f0(arg1, arg2, arg3, 0x101)
    else
        sub_141d227f0(arg1, arg2, arg3, 0x101)
        int64_t r14_2 = sx.q((*(arg1[0x2e] + 0x48))(&arg1[0x2e]))
        int64_t rdx_10 = arg1[0x4f]
        rax = (*(rdx_10 + 0x48))(&arg1[0x4f], rdx_10)
        
        if (rax.d s> 0)
            int64_t i_2 = 0
            
            do
                int64_t r11_1 = sx.q(*(arg1[0x5c] + (i_2 << 2)))
                int64_t rcx_15 = r11_1
                
                if (r11_1.d == 0xffffffff)
                    *(arg1[0x5f] + (i_2 << 2)) = 0
                else
                    int64_t rax_17 = arg1[0x41]
                    int64_t r8_4 = rcx_15
                    int32_t* rdx_11 = rax_17 + (r11_1 << 2)
                    
                    do
                        rcx_15 = zx.q(rcx_15.d + 1)
                        rdx_11 = &rdx_11[1]
                        r8_4 += 1
                        
                        if (r8_4 s>= r14_2)
                            break
                    while (*rdx_11 == *(rax_17 + (r11_1 << 2)))
                    
                    *(arg1[0x5f] + (i_2 << 2)) = rcx_15.d - r11_1.d
                
                i_2 += 1
            while (i_2 s< sx.q(rax.d))
else
    sub_141d236b0(arg1, arg3)

if (arg4 == 0)
    return 

sub_141d1db30(arg1)
sub_141d1dce0(arg1)
sub_141d1e270(arg1)
