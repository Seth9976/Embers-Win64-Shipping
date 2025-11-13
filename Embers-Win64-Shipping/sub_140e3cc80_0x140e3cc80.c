// 函数: sub_140e3cc80
// 地址: 0x140e3cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

int32_t r9 = *(arg1 + 0x24f8)
int32_t rcx_1 = *(arg1 + 0x24f4)
int32_t rdx_1 = rcx_1 - arg2
*(arg1 + 0x24f4) = rdx_1
char rcx_3
int32_t rbx_3

if (rdx_1 s> 0)
    rcx_3 = arg2.b
    rbx_3 = r9
else
    int32_t rax_2 = *(arg1 + 0x368)
    int32_t r9_1 = r9 << rcx_1.b
    *(arg1 + 0x24f8) = r9_1
    
    if (rax_2 s< 2)
    label_140e3cd3f:
        uint32_t rbx_4 = zx.d(sub_140e3ce00(arg1, arg3))
        char rax_8 = sub_140e3ce00(arg1, arg3)
        int32_t rdx_3 = *(arg1 + 0x24f4)
        rbx_3 = rbx_4 << 8 | *(arg1 + 0x24f8) | zx.d(rax_8)
        *(arg1 + 0x24f4) = rdx_3 + 0x10
        rcx_3 = (neg.d(rdx_3)).b
    else
        char* rcx_2 = arg1[0x36].q
        char r8_1 = *rcx_2
        
        if (r8_1 == 0xff)
            goto label_140e3cd3f
        
        char r10_1 = rcx_2[1]
        
        if (r10_1 == 0xff)
            goto label_140e3cd3f
        
        *(arg1 + 0x368) = rax_2 - 2
        arg1[0x36].q = &rcx_2[2]
        rbx_3 = zx.d(r8_1) << 8 | zx.d(r10_1) | r9_1
        *(arg1 + 0x24f4) = rdx_1 + 0x10
        rcx_3 = (neg.d(rdx_1)).b

*(arg1 + 0x24f8) = rbx_3 << rcx_3
return zx.q(r9 u>> (0x20 - arg2.b))
