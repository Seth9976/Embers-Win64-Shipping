// 函数: sub_141034ce0
// 地址: 0x141034ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410101f0(arg1 + 0xa0, arg1 + 0x28)
*(arg1 + 0xc4) = 0
int64_t* rax = j_sub_140a82f30(0x30)
uint64_t rsi = 0

if (rax != 0)
    *rax = 0
    void* rax_1 = *(arg1 + 0xa8)
    rax[1] = &data_142efcd90
    rax[2] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 0x14) += 1
    
    rax[1] = &data_142efcd90
    rax[3] = *(arg1 + 0xb0)
    rax[4].d = *(arg1 + 0xb8)
    *(rax + 0x24) = *(arg1 + 0xbc)
    rax[5].d = *(arg1 + 0xc0)
    *(rax + 0x2c) = *(arg1 + 0xc4)
    void** rax_7 = *(arg1 + 0x80)
    *(arg1 + 0x80) = rax
    *rax_7 = rax

uint64_t result

if (**(arg1 + 0x88) == 0)
label_141034e3e:
    int64_t* rbx_2 = *(arg1 + 0x20)
    int64_t* rcx_11 = rbx_2[0xc]
    
    if (rcx_11 != 0)
        goto label_141034e94
    
    result = j_sub_140a82f30(0xc0)
    
    if (result != 0)
        rsi = sub_14100d820(result, *rbx_2, rbx_2[1].d, rbx_2)
    
    rbx_2[0xc] = rsi
    
    if (rsi != 0)
        sub_141025490(rsi, *(rbx_2 + 0x274), 0)
        rcx_11 = rbx_2[0xc]
    label_141034e94:
        (*(*rcx_11 + 0x10))(rcx_11, arg1 + 0x28)
        rbx_2[0xa] = rbx_2[0xc]
        return sub_141035290(rbx_2)
else
    void* rbx_1 = **(arg1 + 0x88)
    sub_141010280(arg1 + 0xa0, rbx_1 + 8)
    *(arg1 + 0xb8) = *(rbx_1 + 0x20)
    *(arg1 + 0xbc) = *(rbx_1 + 0x24)
    *(arg1 + 0xc0) = *(rbx_1 + 0x28)
    *(arg1 + 0xc4) = *(rbx_1 + 0x2c)
    
    if (*(arg1 + 0xc4) == 0)
        uint64_t rcx_4 = *(arg1 + 0xa8)
        
        if (rcx_4 == 0)
            goto label_141034e04
        
        if (sub_1410270d0(rcx_4, *(arg1 + 0xb0)) == 0)
            goto label_141034e3e
        
        goto label_141034e04
    
label_141034e04:
    sub_14101c2d0(arg1 + 0x80, arg1 + 0xa0)
    void* r8_1 = *(arg1 + 0x90)
    int32_t rdx_4 = *(arg1 + 0xb8)
    *(arg1 + 0x50) = 0
    *(arg1 + 0x40) = zx.q(*(r8_1 + 0x38) * rdx_4) + *(r8_1 + 0x40)
    *(arg1 + 0x48) = zx.q(*(r8_1 + 0x38) * rdx_4) + *(r8_1 + 0x48)

result.b = 0
return result
