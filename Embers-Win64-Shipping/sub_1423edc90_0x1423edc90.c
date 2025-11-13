// 函数: sub_1423edc90
// 地址: 0x1423edc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142006940()
sub_1423e28e0(arg1, arg4, zx.q(arg6))
int32_t i = 0

if (arg1[0x8e].d s> 0)
    int32_t r14_1 = 0
    
    do
        int64_t rdi_1 = arg1[0x8d]
        void* rcx_1 = &arg1[0x77]
        arg1[0x86] = &arg1[0x32]
        arg1[0x87] = *arg1
        void* rax_2 = arg1[0x84]
        
        if (rax_2 != 0)
            rcx_1 = rax_2
        
        *(rcx_1 + 0x40) = r14_1
        int64_t* rax_3 = sub_142006940()
        (*(*rax_3 + 0xa0))(rax_3, arg2, arg3, arg4, &arg1[0x77], arg5, 
            rdi_1 + 0x60 + sx.q(i) * 0x64, 0)
        i += 1
        r14_1 += 3
    while (i s< arg1[0x8e].d)

(*(arg1[0x75] + 0x30))(&arg1[0x75])
(*(arg1[0x32] + 0x30))(&arg1[0x32])
(*(arg1[0xc] + 0x30))(&arg1[0xc])
(*(arg1[0x22] + 0x30))(&arg1[0x22])
(*(arg1[0x11] + 0x30))(&arg1[0x11])
jump(*(arg1[0x2a] + 0x30))
