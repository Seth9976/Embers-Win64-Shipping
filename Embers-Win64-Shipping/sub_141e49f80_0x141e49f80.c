// 函数: sub_141e49f80
// 地址: 0x141e49f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
void* const rcx_3

if (*(arg1 + 0x298) == *(arg1 + 0x2c4))
label_141e4a010:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = arg1 + 0x2c8
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x2d8)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e4a010_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x290)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 3
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == rbx)
                break
            
            rax_4 = *(rcx_3 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_141e4a010_2
        
        if (rax_4 == 0xffffffff)
        label_141e4a010_2:
            rcx_3 = nullptr

void* rbx_1 = rcx_3 + 8

if (rcx_3 == 0)
    rbx_1 = nullptr

if (rbx_1 != 0)
    int64_t r8_2 = *rbx_1
    
    if (r8_2 != *arg3)
        for (int64_t* i = *(arg1 + 0x280); i != &i[sx.q(*(arg1 + 0x288)) * 3]; i = &i[3])
            if (*i == r8_2)
                if (i != 0)
                    int64_t* r9_1 = i[1]
                    uint64_t r10_1 = sx.q(i[2].d)
                    int64_t* rcx_5 = r9_1
                    void* rdx_4 = &r9_1[r10_1]
                    
                    if (r9_1 != rdx_4)
                        do
                            if (*rcx_5 == *arg2)
                                int32_t rcx_7 = ((rcx_5 - r9_1) s>> 3).d
                                
                                if (rcx_7 != 0xffffffff)
                                    int32_t rax_10 = r10_1.d - rcx_7 - 1
                                    
                                    if (rax_10 s>= 1)
                                        rax_10 = 1
                                    
                                    if (rax_10 != 0)
                                        memcpy(&r9_1[sx.q(rcx_7)], &r9_1[sx.q(r10_1.d - rax_10)], 
                                            rax_10 << 3)
                                        r10_1 = zx.q(i[2].d)
                                    
                                    i[2].d = (r10_1 - 1).d
                                    sub_1405c53d0(&i[1])
                                
                                break
                            
                            rcx_5 = &rcx_5[1]
                        while (rcx_5 != rdx_4)
                
                break
    
    int64_t result = *arg3
    
    if (*rbx_1 == result)
        return result

int64_t* rdx_6 = *(arg1 + 0x280)
int64_t rdi_2 = sx.q(*(arg1 + 0x288))
void* rax_14 = &rdx_6[rdi_2 * 3]

if (rdx_6 == rax_14)
label_141e4a12e:
    rdx_6 = nullptr
else
    while (*rdx_6 != *arg3)
        rdx_6 = &rdx_6[3]
        
        if (rdx_6 == rax_14)
            goto label_141e4a12e

if (rdx_6 == 0)
    int32_t rax_15 = (rdi_2 + 1).d
    *(arg1 + 0x288) = rax_15
    
    if (rax_15 s> *(arg1 + 0x28c))
        sub_1405a4df0(arg1 + 0x280)
    
    int64_t rax_16 = *(arg1 + 0x280)
    int64_t rcx_13 = rdi_2 * 3
    *(rax_16 + (rcx_13 << 3)) = 0
    *(rax_16 + (rcx_13 << 3) + 8) = 0
    *(rax_16 + (rcx_13 << 3) + 0x10) = 0
    rdx_6 = *(arg1 + 0x280) + sx.q(*(arg1 + 0x288) - 1) * 0x18
    *rdx_6 = *arg3

int64_t rdi_3 = sx.q(rdx_6[2].d)
int32_t rax_22 = (rdi_3 + 1).d
rdx_6[2].d = rax_22

if (rax_22 s> *(rdx_6 + 0x14))
    sub_1405a4d70(&rdx_6[1])

*(rdx_6[1] + (rdi_3 << 3)) = *arg2
return sub_141e35350(arg1 + 0x290, arg2, arg3)
