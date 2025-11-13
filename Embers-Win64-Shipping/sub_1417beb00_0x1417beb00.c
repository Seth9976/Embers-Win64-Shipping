// 函数: sub_1417beb00
// 地址: 0x1417beb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *arg2
int64_t rbp = 0
int64_t rdi = sx.q(r15[1].d)
int128_t zmm0
float zmm2

if (rdi s>= 4)
    void* r10_1 = *r15
    int64_t r9 = *arg4
    int32_t* rdx = r10_1 + 4
    int64_t rbx_1 = *arg2[1]
    int32_t* r10_2 = r10_1 + 0x14
    int64_t i_2 = ((rdi - 4) u>> 2) + 1
    rbp = i_2 << 2
    int64_t i
    
    do
        *(r9 + (sx.q(*rdx) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_1 = sx.q(rdx[-1]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_1 << 2))
        zmm2 = *(rbx_1 + (rcx_1 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d
            + *(rbx_1 + (rcx_1 << 2) + 8) f* *(arg3 + 8) f- *(arg3 + 0xc)
        
        if (not(zmm2 >= 0f) && not(zmm2 f<= (*(arg1 + 0x20) ^ 0x80000000).d))
            *(r9 + (sx.q(*rdx) << 2)) = *(arg1 + 0x10)
        
        *(r9 + (sx.q(r10_2[-2]) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_4 = sx.q(rdx[1]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_4 << 2))
        zmm2 = *(rbx_1 + (rcx_4 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d
            + *(rbx_1 + (rcx_4 << 2) + 8) f* *(arg3 + 8) f- *(arg3 + 0xc)
        
        if (not(zmm2 >= 0f) && not(zmm2 f<= (*(arg1 + 0x20) ^ 0x80000000).d))
            *(r9 + (sx.q(r10_2[-2]) << 2)) = *(arg1 + 0x10)
        
        *(r9 + (sx.q(*r10_2) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_7 = sx.q(rdx[3]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_7 << 2))
        zmm2 = *(rbx_1 + (rcx_7 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d
            + *(rbx_1 + (rcx_7 << 2) + 8) f* *(arg3 + 8) f- *(arg3 + 0xc)
        
        if (not(zmm2 >= 0f) && not(zmm2 f<= (*(arg1 + 0x20) ^ 0x80000000).d))
            *(r9 + (sx.q(*r10_2) << 2)) = *(arg1 + 0x10)
        
        *(r9 + (sx.q(r10_2[2]) << 2)) = *(arg1 + 0x1c)
        uint64_t rcx_10 = sx.q(rdx[5]) * 3
        zmm0.d = (*arg3).d f* *(rbx_1 + (rcx_10 << 2))
        zmm2 = *(rbx_1 + (rcx_10 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d
            + *(rbx_1 + (rcx_10 << 2) + 8) f* *(arg3 + 8) f- *(arg3 + 0xc)
        
        if (not(zmm2 >= 0f) && not(zmm2 f<= (*(arg1 + 0x20) ^ 0x80000000).d))
            *(r9 + (sx.q(r10_2[2]) << 2)) = *(arg1 + 0x10)
        
        rdx = &rdx[8]
        r10_2 = &r10_2[8]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rbp s>= rdi)
    return 

int64_t i_3 = rdi - rbp
int64_t r9_1 = *arg4
int64_t r10_3 = *arg2[1]
int32_t* rdx_1 = *r15 + (rbp << 3)
int64_t i_1

do
    *(r9_1 + (sx.q(rdx_1[1]) << 2)) = *(arg1 + 0x1c)
    uint64_t rcx_13 = sx.q(*rdx_1) * 3
    zmm0.d = (*arg3).d f* *(r10_3 + (rcx_13 << 2))
    zmm2 = *(r10_3 + (rcx_13 << 2) + 4) f* *(arg3 + 4) f+ zmm0.d
        + *(r10_3 + (rcx_13 << 2) + 8) f* *(arg3 + 8) f- *(arg3 + 0xc)
    
    if (not(zmm2 >= 0f) && not(zmm2 f<= (*(arg1 + 0x20) ^ 0x80000000).d))
        *(r9_1 + (sx.q(rdx_1[1]) << 2)) = *(arg1 + 0x10)
    
    rdx_1 = &rdx_1[2]
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
