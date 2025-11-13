// 函数: sub_141caaef0
// 地址: 0x141caaef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0x78)
int32_t rbp_1 = rbp - 1

if (rbp - 1 s< 0)
    return 

int64_t r12_1 = sx.q(rbp_1) << 3
int64_t r13_1 = r12_1
int64_t r15_2 = sx.q(rbp_1 + 1) << 3
int32_t temp1_1

do
    char r9 = 0
    char arg_8 = 0
    void* rsi_1 = *(r12_1 + *(arg1 + 0x70))
    int64_t* r8_1 = *(rsi_1 + 0x20)
    int64_t* rcx = r8_1
    void* rdx_1 = &r8_1[sx.q(*(rsi_1 + 0x28))]
    
    if (r8_1 != rdx_1)
        do
            if (*rcx == arg1)
                r9 = 0
                
                if (((rcx - r8_1) s>> 3).d != 0xffffffff)
                    r9 = 1
                
                arg_8 = r9
                break
            
            rcx = &rcx[1]
        while (rcx != rdx_1)
    
    int64_t* r8_2 = *(rsi_1 + 0x30)
    int64_t* rcx_3 = r8_2
    void* rdx_2 = &r8_2[sx.q(*(rsi_1 + 0x38))]
    
    if (r8_2 != rdx_2)
        do
            if (*rcx_3 == arg1)
                char rax_6 = r9
                
                if (((rcx_3 - r8_2) s>> 3).d != 0xffffffff)
                    rax_6 = 1
                
                r9 = rax_6
                arg_8 = rax_6
                break
            
            rcx_3 = &rcx_3[1]
        while (rcx_3 != rdx_2)
    
    int64_t* r10_1 = *(rsi_1 + 0x60)
    uint64_t r8_3 = sx.q(*(rsi_1 + 0x68))
    int64_t* rcx_6 = r10_1
    void* rdx_3 = &r10_1[r8_3]
    
    if (r10_1 != rdx_3)
        do
            if (*rcx_6 == arg1)
                int32_t rcx_8 = ((rcx_6 - r10_1) s>> 3).d
                
                if (rcx_8 != 0xffffffff)
                    int32_t rax_8 = r8_3.d - rcx_8
                    
                    if (rax_8 != 1)
                        memmove(&r10_1[sx.q(rcx_8)], &r10_1[sx.q(rcx_8 + 1)], (rax_8 - 1) << 3)
                        r8_3 = zx.q(*(rsi_1 + 0x68))
                    
                    *(rsi_1 + 0x68) = (r8_3 - 1).d
                    sub_1405c53d0(rsi_1 + 0x60)
                    r9 = arg_8
                
                break
            
            rcx_6 = &rcx_6[1]
        while (rcx_6 != rdx_3)
    
    int64_t* r10_2 = *(rsi_1 + 0x50)
    int64_t r8_6 = sx.q(*(rsi_1 + 0x58))
    int64_t* rcx_11 = r10_2
    void* rdx_6 = &r10_2[r8_6]
    
    if (r10_2 != rdx_6)
        do
            if (*rcx_11 == arg1)
                int32_t rcx_13 = ((rcx_11 - r10_2) s>> 3).d
                
                if (rcx_13 != 0xffffffff)
                    int32_t rax_14 = r8_6.d - rcx_13
                    
                    if (rax_14 != 1)
                        memmove(&r10_2[sx.q(rcx_13)], &r10_2[sx.q(rcx_13 + 1)], (rax_14 - 1) << 3)
                        r8_6 = zx.q(*(rsi_1 + 0x58))
                    
                    *(rsi_1 + 0x58) = (r8_6 - 1).d
                    sub_1405c53d0(rsi_1 + 0x50)
                    r9 = arg_8
                
                break
            
            rcx_11 = &rcx_11[1]
        while (rcx_11 != rdx_6)
    
    int64_t r8_9 = *(rsi_1 + 0x40)
    int64_t rax = r8_9
    int64_t rdx_9 = r8_9 + (sx.q(*(rsi_1 + 0x48)) << 3)
    
    if (r8_9 != rdx_9)
        while (*rax != arg1)
            rax += 8
            
            if (rax == rdx_9)
                goto label_141cab0ee
    
    if (r8_9 == rdx_9 || ((rax - r8_9) s>> 3).d == 0xffffffff)
    label_141cab0ee:
        
        if (r9 == 0)
            int32_t rax_20 = *(arg1 + 0x78)
            int32_t rcx_18 = rax_20 - rbp_1
            
            if (rcx_18 != 1)
                int64_t rax_21 = *(arg1 + 0x70)
                memmove(rax_21 + r13_1, rax_21 + r15_2, (rcx_18 - 1) << 3)
                rax_20 = *(arg1 + 0x78)
            
            *(arg1 + 0x78) = rax_20 - 1
            sub_1405c53d0(arg1 + 0x70)
    
    r15_2 -= 8
    r13_1 -= 8
    r12_1 -= 8
    temp1_1 = rbp_1
    rbp_1 -= 1
while (temp1_1 - 1 s>= 0)
