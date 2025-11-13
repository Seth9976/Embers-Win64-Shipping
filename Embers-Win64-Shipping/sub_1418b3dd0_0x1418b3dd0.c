// 函数: sub_1418b3dd0
// 地址: 0x1418b3dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)

if ((*(*arg1 + 0x38))(arg1, zx.q(rbp.d)) == 0)
    return 0

int64_t rbx = *(arg1 + 0x214)
int64_t* rdx_6

if (arg1[0x23].d == *(arg1 + 0x144))
label_1418b3e7e:
    rdx_6 = nullptr
else
    int32_t rax_4 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = &arg1[0x29]
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_6 = *(r8_1 + (((sx.q(arg1[0x2b].d) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_1418b3e7e_1:
        rdx_6 = nullptr
    else
        while (true)
            rdx_6 = (sx.q(rax_6) << 5) + arg1[0x22]
            
            if (*rdx_6 == rbx)
                break
            
            rax_6 = rdx_6[3].d
            
            if (rax_6 == 0xffffffff)
                goto label_1418b3e7e_2
        
        if (rax_6 == 0xffffffff)
        label_1418b3e7e_2:
            rdx_6 = nullptr

void* rbx_1 = &rdx_6[1]

if (rdx_6 == 0)
    rbx_1 = nullptr

int64_t rbx_3 = *(*rbx_1 + (rbp << 3))
int64_t* rcx_6

if (arg1[0x2d].d == *(arg1 + 0x194))
label_1418b3f0e:
    rcx_6 = nullptr
else
    int32_t rax_9 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
    void* r8_3 = &arg1[0x33]
    void* rcx_3 = *(r8_3 + 8)
    
    if (rcx_3 != 0)
        r8_3 = rcx_3
    
    int32_t rax_11 = *(r8_3 + (((sx.q(arg1[0x35].d) - 1) & sx.q(rax_9)) << 2))
    
    if (rax_11 == 0xffffffff)
    label_1418b3f0e_1:
        rcx_6 = nullptr
    else
        while (true)
            rcx_6 = sx.q(rax_11) * 0x38 + arg1[0x2c]
            
            if (*rcx_6 == rbx_3)
                break
            
            rax_11 = rcx_6[6].d
            
            if (rax_11 == 0xffffffff)
                goto label_1418b3f0e_2
        
        if (rax_11 == 0xffffffff)
        label_1418b3f0e_2:
            rcx_6 = nullptr

if (rcx_6 == 0)
    return nullptr

return &rcx_6[1]
