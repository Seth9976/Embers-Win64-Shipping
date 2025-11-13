// 函数: sub_140fdc870
// 地址: 0x140fdc870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xa0)
int32_t rbp = 0
*(arg2 + 0x5c) = rax
int32_t i = 0

if (rax != 0)
    do
        uint64_t i_1 = zx.q(i)
        int64_t rax_2 = (i_1 + 7) * 3
        void* r14_1 = arg1 + (rax_2 << 3)
        uint64_t rax_3 = *(arg1 + (rax_2 << 3))
        
        if (rax_3 == 0)
            *(i_1 + arg2 + 0x60) = 0
            rax_3.b = 0
        else
            *(i_1 + arg2 + 0x60) = *(rax_3 + 0x3c)
            *(arg2 + (i_1 << 2) + 0x68) = *(*r14_1 + 0x40)
            int64_t* rcx_1 = *r14_1
            void* rax_7 = (*(*rcx_1 + 0x10))(rcx_1)
            
            if (rax_7 == 0 || *(rax_7 + 0x68) u<= 1)
                *(arg2 + 0x9d) = 0
                rax_3 = zx.q(*(i_1 + arg2 + 0x60))
            else
                *(arg2 + 0x9d) = 1
                rax_3 = zx.q(*(i_1 + arg2 + 0x60))
        
        if (rax_3.b != 0)
            *(arg2 + 0x98) = *(*r14_1 + 0x38)
        
        i += 1
    while (i u< *(arg2 + 0x5c))

void* rax_9 = *(arg1 + 0x168)

if (rax_9 == 0)
    *(arg2 + 0x88) = 0
else
    *(arg2 + 0x88) = *(rax_9 + 0x3c)
    *(arg2 + 0x8c) = *(*(arg1 + 0x168) + 0x40)
    int64_t* rcx_4 = *(arg1 + 0x168)
    void* rax_13 = (*(*rcx_4 + 0x10))(rcx_4)
    
    if (rax_13 == 0 || *(rax_13 + 0x68) u<= 1)
        rbp = *(arg2 + 0x88)
        *(arg2 + 0x9d) = 0
    else
        rbp = *(arg2 + 0x88)
        *(arg2 + 0x9d) = 1

*(arg2 + 0x90) = *(arg1 + 0x170)
*(arg2 + 0x91) = *(arg1 + 0x171)
*(arg2 + 0x92) = *(arg1 + 0x172)
*(arg2 + 0x93) = *(arg1 + 0x173)
*(arg2 + 0x94) = *(arg1 + 0x174)

if (rbp != 0)
    *(arg2 + 0x98) = *(*(arg1 + 0x168) + 0x38)

*(arg2 + 0x9a) = *(arg1 + 0x178)
*(arg2 + 0x9b) = *(arg1 + 0x179)
char result = *(arg1 + 0x17a)
*(arg2 + 0x9e) = result
return result
