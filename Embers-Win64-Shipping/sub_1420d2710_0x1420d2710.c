// 函数: sub_1420d2710
// 地址: 0x1420d2710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int32_t r8

if (arg2 s>= 0)
    r8 = *(arg1 + 0x50)
    
    if (rbx.d s< r8)
        int64_t r9_1 = *(arg1 + 0x48)
        void* rcx_1 = rbx * 0x38 + r9_1
        char rbp_1 = *(rcx_1 + 0x34)
        int128_t zmm7 = *(rcx_1 + 0x14)
        int128_t zmm8 = *(rcx_1 + 0x24)
        int128_t var_48 = *(rcx_1 + 4)
        int32_t rax_2 = r8 - rbx.d
        
        if (rax_2 != 1)
            memmove(rcx_1, sx.q((rbx + 1).d) * 0x38 + r9_1, (rax_2 - 1) * 0x38)
            r8 = *(arg1 + 0x50)
        
        *(arg1 + 0x50) = r8 - 1
        sub_1407c4070(arg1 + 0x48)
        int32_t rax_7
        rax_7, r8 = sub_14207d2c0(arg1 + 0x48, arg3, &var_48)
        rbx = sx.q(rax_7)
        int64_t rcx_4 = rbx * 0x38
        *(*(arg1 + 0x48) + rcx_4 + 0x34) = rbp_1
        *(*(arg1 + 0x48) + rcx_4 + 0x14) = zmm7
        *(*(arg1 + 0x48) + rcx_4 + 0x24) = zmm8

r8.b = 1
sub_14207d710(arg1 + 0x48, *(arg1 + 0x60), r8.b)
return zx.q(rbx.d)
