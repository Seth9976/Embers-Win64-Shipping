// 函数: sub_142ba2150
// 地址: 0x142ba2150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2) * 0x898
int64_t rax = sx.q(*(r8 + arg1 + 0x38))
void* r9 = *(r8 + arg1 + 0x40)
void* r8_1 = r9 + rax * 0x48

if (arg2 != 0)
    if (r9 u< r8_1)
        void* r10_2 = r9 + 0x40
        int64_t rdx_2
        rdx_2:rax = mulu.dp.q(-0x1c71c71c71c71c71, r8_1 - r9 - 1)
        int64_t i_3 = (r8_1 - r9 - 1) u/ 0x48 + 1
        int64_t i
        
        do
            void* r8_7 = *(r10_2 - 0x30)
            
            if (r8_7 != 0)
                rax = *(r10_2 - 8)
                int64_t r9_2 = *r10_2
                int32_t rcx_2 = *(r8_7 + 8)
                *rax |= 8
                *(rax + 0x14) = rcx_2
                
                while (rax != r9_2)
                    rax = *(rax + 0x20)
                    *(rax + 0x14) = *(r8_7 + 8)
                    *rax |= 8
            
            r10_2 += 0x48
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (r9 u< r8_1)
    int64_t* r10_1 = r9 + 0x40
    int32_t rax_1
    int64_t rdx
    rdx:rax_1 = mulu.dp.q(-0x1c71c71c71c71c71, r8_1 - r9 - 1)
    int64_t i_2 = (r8_1 - r9 - 1) u/ 0x48 + 1
    int64_t i_1
    
    do
        void* r8_4 = r10_1[-6]
        
        if (r8_4 != 0)
            int16_t* rcx_1 = r10_1[-1]
            int64_t r9_1 = *r10_1
            rax_1 = *(r8_4 + 8)
            *rcx_1 |= 4
            *(rcx_1 + 0x10) = rax_1
            
            while (rcx_1 != r9_1)
                rcx_1 = *(rcx_1 + 0x20)
                rax_1 = *(r8_4 + 8)
                *(rcx_1 + 0x10) = rax_1
                *rcx_1 |= 4
        
        r10_1 = &r10_1[9]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    return rax_1

return rax
