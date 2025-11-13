// 函数: sub_1418e86d0
// 地址: 0x1418e86d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x240)

if (*(rdi + 0x78) != 0)
    sub_1418c86c0(rdi, 0, 0)

void* rdi_1 = *(rdi + 0x70)

if (*(rdi_1 + 0x2c) == 2)
    sub_1418bdeb0(rdi_1)
    *(arg1 + 0x410) = 0
    
    if (data_143efb2f8 != 0)
        sub_1418c8030(*(arg1 + 0x240), nullptr)
        sub_1418c2ee0(*(arg1 + 0x240))
        void* rdi_2 = *(arg1 + 0x240)
        
        if (*(rdi_2 + 0x78) != 0)
            sub_1418c86c0(rdi_2, 0, 0)
        
        rdi_1 = *(rdi_2 + 0x70)

sub_1418f9bc0(*(arg1 + 0x540), rdi_1)
sub_1418fdf20(arg2, arg1, rdi_1, *(arg1 + 0x148), *(*(arg1 + 0x140) + 0x1570), arg4)
sub_1405d16e0(*(arg1 + 0x130) + 0x70, nullptr)
int64_t* rcx_9 = *(arg1 + 0x540)

if (rcx_9 == 0)
    data_143f5b2a4 = 0
else
    int64_t rax_2 = sub_1418fb620(rcx_9, 0)
    double zmm2_1 = 1.8446744073709552e+19
    double zmm0_1[0x2] = zx.o(0)
    zmm0_1[0] = float.d(rax_2)
    
    if (rax_2 s< 0)
        zmm0_1[0] = zmm0_1[0] + zmm2_1
    
    int64_t rax_3 = data_143f0f168
    int64_t zmm1_1 = float.d(rax_3)
    
    if (rax_3 s< 0)
        zmm1_1 = zmm1_1 f+ zmm2_1
    
    zmm0_1[0] = zmm0_1[0] f/ zmm1_1
    zmm0_1[0] = zmm0_1[0] f/ data_143d796f8
    data_143f5b2a4 = int.d(_mm_cvtpd_ps(zmm0_1)[0].d)

void* rdi_3 = *(arg1 + 0x240)

if (*(rdi_3 + 0x78) != 0)
    sub_1418c86c0(rdi_3, 0, 0)

return sub_1419032a0(*(arg1 + 0x540), *(rdi_3 + 0x70)) __tailcall
