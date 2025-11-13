// 函数: sub_1429bb4b0
// 地址: 0x1429bb4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg2
int64_t rcx = arg2
int64_t rdx_1 = (arg3 - 1) s>> 1

while (rcx s< rdx_1)
    int64_t r8 = rcx * 2
    int64_t* rcx_1 = *(arg1 + (r8 << 3) + 8)
    rcx = sbb.q(rcx_1, rcx_1, *rcx_1 u< **(arg1 + (r8 << 3) + 0x10)) + 2 + r8
    *(arg1 + (r10 << 3)) = *(arg1 + (rcx << 3))
    r10 = rcx

if (rcx == rdx_1 && (arg3.b & 1) == 0)
    *(arg1 + (r10 << 3)) = *(arg1 + (arg3 << 3) - 8)
    r10 = arg3 - 1

if (arg2 s< r10)
    int64_t rax_6
    
    do
        int64_t* rcx_4 = *arg4
        rax_6 = (r10 - 1) s>> 1
        int64_t* r8_1 = *(arg1 + (rax_6 << 3))
        
        if (*r8_1 u<= *rcx_4)
            *(arg1 + (r10 << 3)) = rcx_4
            return rax_6
        
        *(arg1 + (r10 << 3)) = r8_1
        r10 = rax_6
    while (arg2 s< rax_6)

int64_t rax_7 = *arg4
*(arg1 + (r10 << 3)) = rax_7
return rax_7
