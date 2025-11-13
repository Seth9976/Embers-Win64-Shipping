// 函数: sub_1429d2de0
// 地址: 0x1429d2de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t rcx = sx.q(*(rax + 0x4c))
int32_t r10_1 = *(rax + 0x34) + rcx.d

if (rcx.d s< r10_1)
    int64_t r9_1 = sx.q(*(*(arg1[4] + 0x60) + (rcx << 2)))
    uint64_t i_2 = zx.q(r10_1 - rcx.d)
    uint64_t i
    
    do
        r9_1 += 1
        *(r9_1 + *(arg1[4] + 0xa8) - 1) = 0
        i = i_2
        i_2 -= 1
    while (i != 1)

char arg_8
char* rdi = &arg_8
char arg_10 = 1
arg_8 = 9
void* rax_4 = *arg1

if (*(arg1[2] + 0xd) != 0)
    rdi = &arg_10

int64_t rcx_2 = sx.q(*(rax_4 + 0x50))
int64_t r10_3 = rcx_2
int64_t r11 = sx.q(*(rax_4 + 0x38) + rcx_2.d)

if (rcx_2 s< r11)
    do
        void* rcx_3 = arg1[4]
        char* rax_9 = sx.q(*(*(rcx_3 + 0x60) + (r10_3 << 2))) + *(rcx_3 + 0xa8)
        uint64_t r9_2 = zx.q(*(*(rcx_3 + 0x48) + (r10_3 << 1)))
        
        if ((*(sx.q(*(*(*arg1 + 0x138) + (r10_3 << 2))) + *(arg1[2] + 0x30)) & 9) != 0)
            void* rcx_9 = &rax_9[r9_2]
            void* i_1 = rcx_9 - rax_9
            
            if (rax_9 u> rcx_9)
                i_1 = nullptr
            
            if (i_1 != 0)
                char r9_3 = *rdi
                int64_t r8_5 = neg.q(rax_9)
                
                do
                    *rax_9 = r9_3
                    rax_9 = &rax_9[1]
                while (&rax_9[r8_5] != i_1)
        else
            char* rdx_4 = nullptr
            void* rcx_8 = &rax_9[sx.q(r9_2.d)]
            void* r8_3 = rcx_8 - rax_9
            
            if (rax_9 u> rcx_8)
                r8_3 = nullptr
            
            if (r8_3 != 0)
                do
                    *(rdx_4 + rax_9) = 0
                    rdx_4 = &rdx_4[1]
                while (rdx_4 != r8_3)
        
        r10_3 += 1
    while (r10_3 s< r11)

void* rax_10 = *arg1
int64_t rcx_11 = sx.q(*(rax_10 + 0x54))
int64_t rdi_1 = rcx_11
int32_t result = *(rax_10 + 0x3c) + rcx_11.d
int64_t result_1 = sx.q(result)

if (rcx_11 s< result_1)
    do
        void* r9_4 = arg1[2]
        int64_t r8_6 = sx.q(*(*(*arg1 + 0x138) + (rdi_1 << 2)))
        void* r9_5 = arg1[4]
        result = memcpy(sx.q(*(*(r9_5 + 0x60) + (rdi_1 << 2))) + *(r9_5 + 0xa8), 
            sx.q(*(*(r9_4 + 0x60) + (r8_6 << 2))) + *(r9_4 + 0xa8), 
            zx.d(*(*(r9_4 + 0x48) + (r8_6 << 1))))
        rdi_1 += 1
    while (rdi_1 s< result_1)

return result
