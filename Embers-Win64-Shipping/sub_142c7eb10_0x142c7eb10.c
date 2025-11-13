// 函数: sub_142c7eb10
// 地址: 0x142c7eb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1

if (*(rax + 0x5e8) != 0)
    *(*(rax + 0x250) + 0x18) = 1

*arg3 = 0
int64_t* r8 = *(*arg1 + 0x3e0)
*(arg1 + 0x744) = 0
int32_t rax_3
int512_t zmm2

if (r8 == 0)
    rax_3, zmm2 = sub_142c7f0d0(arg1)
    
    if (rax_3 == 0)
        goto label_142c7ebba
else
    char* r8_1 = *r8
    
    if (*r8_1 != 0x2a)
        arg1[0xe9].d = 0
    else
        r8_1 = &r8_1[1]
        arg1[0xe9].d = 1
    
    rax_3, zmm2 = gzprintf(&arg1[0xd3], &data_1434ccff0, r8_1, arg4)
    
    if (rax_3 == 0)
        arg1[0xea].d = 0xc
    label_142c7ebba:
        int32_t rax_4
        int512_t zmm2_1
        rax_4, zmm2_1 = sub_142c8f150(&arg1[0xd3], 0, zmm2)
        *arg3 = arg1[0xea].d == 0
        uint32_t rcx_3 = zx.d(*(arg1 + 0x3fe))
        *arg2 = rcx_3.b
        sub_142c64850(*arg1, "ftp_perform ends with SECONDARY: %d\n", zx.q(rcx_3), zmm2_1)
        return rax_4
return rax_3
