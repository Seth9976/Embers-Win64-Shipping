// 函数: sub_141cc2e50
// 地址: 0x141cc2e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int64_t* rdx_5

if (*(arg1 + 0x68) == *(arg1 + 0x94))
label_141cc2ede:
    rdx_5 = nullptr
else
    int64_t rax_1 = *arg2
    int32_t rax_3 = sub_140b5ead0(rax_1.d) + rax_1:4.d
    void* r8_1 = arg1 + 0x98
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0xa8)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141cc2ede_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_5) << 5) + *(arg1 + 0x60)
            
            if (*rdx_5 == *arg2)
                break
            
            rax_5 = rdx_5[3].d
            
            if (rax_5 == 0xffffffff)
                goto label_141cc2ede_2
        
        if (rax_5 == 0xffffffff)
        label_141cc2ede_2:
            rdx_5 = nullptr

void* rax_6 = &rdx_5[1]

if (rdx_5 == 0)
    rax_6 = nullptr

void* rcx_2

if (rax_6 != 0)
    rbx = *(rax_6 + 8)
    rcx_2 = *rax_6
    
    if (rbx != 0)
        rbx[1].d += 1

int16_t rdi_1

if (rax_6 == 0 || rcx_2 == 0)
    rdi_1 = *(arg1 + 0x34)
else
    rdi_1 = *(rcx_2 + 0x48)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_6 = *rbx
        (*rdx_6)(rbx, rdx_6)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_3 = *rbx
            (*(r8_3 + 8))(rbx, 1, r8_3)

return zx.q(rdi_1)
