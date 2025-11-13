// 函数: sub_141d6b1c0
// 地址: 0x141d6b1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t j_1
sub_140910250(arg1, &j_1, arg2)
int64_t j = sx.q(j_1)
int32_t i = 0
int64_t rcx

if (j.d == 0xffffffff)
    rcx = 0
else
    int64_t r9 = j * 5
    j = *arg1
    rcx = j + (r9 << 3)

int64_t* rdi = rcx + 0x10

if (rcx == 0)
    rdi = nullptr

if (rdi != 0 && rdi[1].d s> 0)
    j_1.q = 0
    
    do
        int64_t r15_1 = sx.q(i) * 0x38
        j = sub_141d6b920(*rdi + r15_1, arg4, 0)
        int64_t* rcx_3 = *arg3
        void* r8_1 = &rcx_3[sx.q(arg3[1].d)]
        
        if (rcx_3 == r8_1)
        label_141d6b26e:
            i += 1
        else
            while (*rcx_3 != j)
                rcx_3 = &rcx_3[1]
                
                if (rcx_3 == r8_1)
                    goto label_141d6b26e
            
            int64_t* r14_1 = *rdi
            int64_t rcx_4 = r14_1[sx.q(i) * 7 + 5]
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = r14_1[sx.q(i) * 7 + 3]
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = r14_1[sx.q(i) * 7]
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int32_t rcx_9 = rdi[1].d
            int32_t rax_2 = rcx_9 - i
            
            if (rax_2 != 1)
                int64_t r9_1 = *rdi
                memmove(r9_1 + r15_1, sx.q(i + 1) * 0x38 + r9_1, (rax_2 - 1) * 0x38)
                rcx_9 = rdi[1].d
            
            rdi[1].d = rcx_9 - 1
            j = sub_1407c4070(rdi)
    while (i s< rdi[1].d)

return j
