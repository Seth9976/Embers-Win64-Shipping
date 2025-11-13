// 函数: sub_140e3ce00
// 地址: 0x140e3ce00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x368)
uint32_t rdx_1
uint64_t result

if (rcx != 0)
label_140e3ce48:
    char* rax_2 = arg1[0x36].q
    rdx_1 = zx.d(*rax_2)
    int32_t rcx_3 = rcx - 1
    arg1[0x36].q = &rax_2[1]
    *(arg1 + 0x368) = rcx_3
    
    if (rdx_1 == 0xff)
        if (rcx_3 != 0)
        label_140e3cea8:
            char* rax_4 = arg1[0x36].q
            uint32_t rdx_2 = zx.d(*rax_4)
            arg1[0x36].q = &rax_4[1]
            *(arg1 + 0x368) = rcx_3 - 1
            
            if (rdx_2 != 0)
                arg1[0x36].q = rax_4
                *rax_4 = rdx_2.b
                *(arg1 + 0x368) += 1
                goto label_140e3ce89
        else
            sub_140e41c20(arg1, arg2)
            rcx_3 = *(arg1 + 0x368)
            
            if (rcx_3 != 0)
                goto label_140e3cea8
            
            *(arg1 + 0x36c) ^= 1
        label_140e3ce89:
            arg1[0x36].q -= 1
            *arg1[0x36].q = 0xff
            *(arg1 + 0x368) += 1
        
        result.b = 0xff
        return result
else
    sub_140e41c20(arg1, arg2)
    rcx = *(arg1 + 0x368)
    
    if (rcx != 0)
        goto label_140e3ce48
    
    int32_t rcx_2 = *(arg1 + 0x36c)
    *(arg1 + 0x36c) = rcx_2 ^ 1
    
    if (rcx_2 == 0)
        result.b = 0xff
        return result
    
    rdx_1 = 0xd9
return zx.q(rdx_1.b)
