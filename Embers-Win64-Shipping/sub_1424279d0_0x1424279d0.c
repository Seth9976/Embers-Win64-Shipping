// 函数: sub_1424279d0
// 地址: 0x1424279d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t j_9 = sx.q(arg5)
int64_t r14 = sx.q(arg6)
int64_t j_8 = sx.q(arg3)
uint64_t rax

if (j_9.d s> 0)
    void* r10_1 = arg1
    uint64_t i_2 = zx.q(j_9.d)
    uint64_t r8_1 = sx.q((arg4 - 1) * r14.d) + arg1
    uint64_t i
    
    do
        if (j_8 s> 0)
            void* rax_4 = r10_1
            int64_t j_4 = j_8
            int64_t j
            
            do
                rax_4 += 0x10
                *(rax_4 - 0x10) = *arg2
                j = j_4
                j_4 -= 1
            while (j != 1)
            rax = r8_1
            int64_t j_5 = j_8
            int64_t j_1
            
            do
                rax += 0x10
                *(rax - 0x10) = *arg2
                j_1 = j_5
                j_5 -= 1
            while (j_1 != 1)
        
        r10_1 += r14
        r8_1 += sx.q(neg.d(r14.d))
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t rsi_1 = arg4 - j_9.d

if (j_9.d s>= rsi_1)
    return 

void* r8_3 = sx.q(j_9.d * r14.d) + arg1
uint64_t i_3 = zx.q(rsi_1 - j_9.d)
uint64_t i_1

do
    if (j_9.d s> 0)
        void* rax_6 = r8_3
        int64_t j_6 = j_9
        int64_t j_2
        
        do
            rax_6 += 0x10
            *(rax_6 - 0x10) = *arg2
            j_2 = j_6
            j_6 -= 1
        while (j_2 != 1)
        int64_t j_7 = j_9
        rax = ((j_8 - j_9) << 4) + r8_3
        int64_t j_3
        
        do
            rax += 0x10
            *(rax - 0x10) = *arg2
            j_3 = j_7
            j_7 -= 1
        while (j_3 != 1)
    
    r8_3 += r14
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
