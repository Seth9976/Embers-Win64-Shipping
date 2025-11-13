// 函数: sub_141a97290
// 地址: 0x141a97290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a97580(arg1, arg2)
sub_141e170b0(&arg1[0xf], arg2)
int32_t* i = arg1[0x11]
int64_t* r15_1 = *arg2 + 0x4a0

for (void* rsi_2 = &i[sx.q(arg1[0x12].d) * 4]; i != rsi_2; i = &i[4])
    sub_141ea5640(i, r15_1)

int32_t* i_1 = arg1[0x13]

for (void* rsi_5 = &i_1[sx.q(arg1[0x14].d) * 4]; i_1 != rsi_5; i_1 = &i_1[4])
    sub_141ea5640(i_1, r15_1)

sub_141ea5640(&arg1[0x1d], r15_1)
void* i_2 = arg1[0x11]
int32_t i_4 = 0
int64_t i_3

for (void* r8_2 = (sx.q(arg1[0x12].d) << 4) + i_2; i_2 != r8_2; i_2 += 0x10)
    int32_t rax_1 = *(i_2 + 8)
    int32_t rax_5
    
    if (rax_1 s>= 0)
        rax_5 = *(i_2 + 0xc)
    label_141a9737a:
        
        if (rax_5 s>= 0 && rax_5 s< arg1[0xe].d)
            *(arg1[0xd] + (sx.q(rax_5) << 2)) = 0
    else
        i_3 = zx.q(rax_1 * 2)
        
        if ((i_3.d & 0xfffffffe) != 0xfffffffe)
            rax_5 = *(r15_1[0x10] + (sx.q(i_3.d) s>> 1 << 2))
            goto label_141a9737a

int32_t rax_7 = *(arg1 + 0xe4)
arg1[0x1c].d = 0

if (rax_7 s< 0 && rax_7 != 0)
    sub_1405dadb0(&arg1[0x1b], 0)

if ((*(arg1 + 0x126) & 1) != 0)
    char rax_8
    rax_8, i_3 = sub_140d3e110(&arg1[7])
    
    if (rax_8 != 0)
        int64_t* var_38
        sub_141e433e0(sub_140d3c6e0(&arg1[7]), &var_38)
        int64_t* rsi_6 = var_38
        int32_t var_30
        void* r13_1 = &rsi_6[sx.q(var_30)]
        
        if (rsi_6 != r13_1)
            do
                if ((*(arg1 + 0x126) & 1) != 0)
                    i_3 = arg1[0x13]
                    
                    for (int64_t rdx_7 = (sx.q(arg1[0x14].d) << 4) + i_3; i_3 != rdx_7; i_3 += 0x10)
                        if (*i_3 == *rsi_6)
                            goto label_141a974b9
                    
                    int32_t rax_12 = sub_141ea40e0(r15_1, rsi_6)
                    int16_t* r8_3 = *r15_1
                    int16_t* rbx_1 = r8_3
                    void* rdx_9 = &r8_3[sx.q(r15_1[1].d)]
                    
                    if (r8_3 != rdx_9)
                        do
                            if (zx.d(*rbx_1) == rax_12)
                                int32_t rbx_3 = ((rbx_1 - r8_3) s>> 1).d
                                
                                if (rbx_3 != 0xffffffff)
                                    *(arg1[0xd] + (sx.q(rbx_3) << 2)) = 0
                                    int64_t rbp_1 = sx.q(arg1[0x1c].d)
                                    int32_t rax_14 = (rbp_1 + 1).d
                                    arg1[0x1c].d = rax_14
                                    
                                    if (rax_14 s> *(arg1 + 0xe4))
                                        sub_1405a4cf0(&arg1[0x1b])
                                    
                                    *(arg1[0x1b] + (rbp_1 << 2)) = rbx_3
                                
                                break
                            
                            rbx_1 = &rbx_1[1]
                        while (rbx_1 != rdx_9)
                
            label_141a974b9:
                rsi_6 = &rsi_6[1]
            while (rsi_6 != r13_1)
            
            rsi_6 = var_38
        
        if (rsi_6 != 0)
            sub_140a74f90(rsi_6)

int64_t rsi_7 = sx.q(arg1[0xc].d)
uint64_t result = zx.q(arg1[0xe].d)

if (result.d s> rsi_7.d)
    arg1[0xc].d = result.d
    
    if (result.d s> *(arg1 + 0x64))
        sub_140679a80(&arg1[0xb])
    
    result, i_3 = memset(rsi_7 + arg1[0xb], 0, sx.q(result.d - rsi_7.d))
else if (result.d s< rsi_7.d && result.d != rsi_7.d)
    arg1[0xc].d = result.d
    result, i_3 = sub_1405dac10(&arg1[0xb])

if (arg1[0xe].d s> 0)
    int64_t rdx_12 = 0
    
    do
        rdx_12 += 1
        float temp0_1 = *(arg1[0xd] + (rdx_12 << 2) - 4)
        9.99999994e-09f - temp0_1
        result = arg1[0xb]
        i_3.b = 9.99999994e-09f < temp0_1
        i_4 += 1
        *(rdx_12 + result - 1) = i_3.b
    while (i_4 s< arg1[0xe].d)

return result
