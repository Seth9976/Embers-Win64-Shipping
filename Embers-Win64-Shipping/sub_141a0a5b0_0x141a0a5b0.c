// 函数: sub_141a0a5b0
// 地址: 0x141a0a5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = &arg1[7]
    void* r9_1 = *(r10_1 + 8)
    int64_t rcx_7 = (sx.q((((arg3[7] << 8 ^ arg3[6]) << 3 ^ arg3[9]) << 0xa ^ arg3[8]) << 3)
        ^ sx.q(arg3[3]) ^ sx.q(arg3[1]) ^ sx.q(arg3[5]) ^ sx.q(*arg3) ^ sx.q(arg3[2])
        ^ sx.q(arg3[4])) & (sx.q(arg1[9].d) - 1)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    rbx_1 = *(r10_1 + (rcx_7 << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_141a0a6ba:
    *arg2 = 0xffffffff
else
    int64_t rcx_8 = *arg1
    
    while (true)
        void* r14_1 = sx.q(rbx_1) * 0x68
        int32_t* rdi_1 = r14_1 + rcx_8
        
        if (*(r14_1 + rcx_8 + 0x10) == arg3[4] && rdi_1[5] == arg3[5] && rdi_1[6] == arg3[6]
                && rdi_1[7] == arg3[7] && sub_14077a170(rdi_1, arg3) != 0
                && sub_14077a170(&rdi_1[2], &arg3[2]) != 0 && rdi_1[8] == arg3[8]
                && rdi_1[9] == arg3[9])
            *arg2 = rbx_1
            break
        
        rcx_8 = *arg1
        rbx_1 = *(r14_1 + rcx_8 + 0x60)
        
        if (rbx_1 == 0xffffffff)
            goto label_141a0a6ba

return arg2
