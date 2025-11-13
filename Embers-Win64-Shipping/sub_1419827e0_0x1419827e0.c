// 函数: sub_1419827e0
// 地址: 0x1419827e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rbp = 0
void* r14 = &arg1[7]
int64_t r15_1 = sx.q(arg1[9].d) - 1
void* rax_2 = r14
int64_t rcx_2 = sx.q(sub_141973d30(arg2)) & r15_1

if (*(r14 + 8) != 0)
    rax_2 = *(r14 + 8)

int32_t i = *(rax_2 + (rcx_2 << 2))

if (i != 0xffffffff)
    void* r10_1 = *arg1
    
    do
        int64_t r9_2 = sx.q(i) << 6
        
        if (*(r9_2 + r10_1) == *arg2 && *(r9_2 + r10_1 + 8) == arg2[1]
                && *(r9_2 + r10_1 + 0x10) == arg2[2] && *(r9_2 + r10_1 + 0x18) == arg2[3]
                && *(r9_2 + r10_1 + 0x20) == arg2[4] && *(r9_2 + r10_1 + 0x28) == arg2[5])
            void* rax_8 = *(r14 + 8)
            int64_t rcx_5 = sx.q(*(r9_2 + r10_1 + 0x3c)) & r15_1
            
            if (rax_8 != 0)
                r14 = rax_8
            
            int32_t j = *(r14 + (rcx_5 << 2))
            void* r8_1 = r14 + (rcx_5 << 2)
            
            for (; j != 0xffffffff; j = *r8_1)
                if (j == i)
                    *r8_1 = *(r9_2 + r10_1 + 0x38)
                    break
                
                r8_1 = r10_1 + 0x38 + (sx.q(j) << 6)
            
            rbp = 1
            void* r10_2 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *((sx.q(arg1[6].d) << 6) + *arg1) = i
            
            int32_t* rcx_9 = *arg1
            int32_t rax_13 = -1
            rcx_9[sx.q(i) * 0x10] = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_13 = arg1[6].d
            
            rcx_9[sx.q(i) * 0x10 + 1] = rax_13
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            void* rcx_10 = *(r10_2 + 0x10)
            
            if (rcx_10 != 0)
                r10_2 = rcx_10
            
            int64_t rcx_11 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(r10_2 + (rcx_11 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(r9_2 + r10_1 + 0x38)
    while (i != 0xffffffff)

return zx.q(rbp)
