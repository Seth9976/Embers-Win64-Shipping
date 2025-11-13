// 函数: sub_140b3b1b0
// 地址: 0x140b3b1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[3].d
int32_t i_6 = (arg1[2]).d - rcx
int32_t rdx_1 = arg2[1].d + i_6

if (rdx_1 s> *(arg2 + 0xc))
    sub_1405a5130(arg2, rdx_1)
    rcx = arg1[3].d

uint64_t i_3 = 0
uint64_t r14 = zx.q(rcx.b)

if (i_6 != 0)
    int64_t rcx_2 = arg1[3]
    i_3 = zx.q(i_6)
    uint64_t i
    
    do
        if (rcx_2 == arg1[4] + 0x100)
            void* rcx_3 = *arg1
            r14 = 0
            *arg1 = *(rcx_3 + 0x1800)
            j_sub_140a74f90(rcx_3)
            arg1[4] = arg1[3]
        
        int64_t rbp_1 = sx.q(arg2[1].d)
        int128_t* r15_1 = *arg1 + r14 * 0x18
        int32_t rax_6 = (rbp_1 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_1405a4df0(arg2)
        
        int64_t rax_7 = *arg2
        int64_t rcx_7 = rbp_1 * 3
        r14 = zx.q(r14.d + 1)
        *(rax_7 + (rcx_7 << 3)) = *r15_1
        *(rax_7 + (rcx_7 << 3) + 0x10) = r15_1[1].q
        arg1[3] += 1
        rcx_2 = arg1[3]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t rcx_8 = arg1[8].d
int32_t i_7 = (arg1[7]).d - rcx_8
int32_t rdx_5 = arg3[1].d + i_7

if (rdx_5 s> *(arg3 + 0xc))
    sub_1405a51b0(arg3, rdx_5)
    rcx_8 = arg1[8].d

uint32_t r14_1 = zx.d(rcx_8.b)

if (i_7 != 0)
    int64_t rcx_10 = arg1[8]
    uint64_t i_4 = zx.q(i_7)
    uint64_t i_1
    
    do
        if (rcx_10 == arg1[9] + 0x100)
            void* rcx_11 = arg1[5]
            r14_1 = i_3.d
            arg1[5] = *(rcx_11 + 0x2000)
            j_sub_140a74f90(rcx_11)
            arg1[9] = arg1[8]
        
        int64_t rbp_2 = sx.q(arg3[1].d)
        int128_t* rdi_4 = (zx.q(r14_1) << 5) + arg1[5]
        int32_t rax_13 = (rbp_2 + 1).d
        arg3[1].d = rax_13
        
        if (rax_13 s> *(arg3 + 0xc))
            sub_1405c4e40(arg3)
        
        uint64_t rax_14 = *arg3
        int64_t rcx_14 = rbp_2 << 5
        r14_1 += 1
        *(rcx_14 + rax_14) = *rdi_4
        *(rcx_14 + rax_14 + 0x10) = rdi_4[1]
        arg1[8] += 1
        rcx_10 = arg1[8]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int32_t result = (arg1[0xc]).d
int32_t r14_2 = arg1[0xd].d
int32_t i_8 = result - r14_2
int32_t rdx_9 = arg4[1].d + i_8

if (rdx_9 s> *(arg4 + 0xc))
    result = sub_1405a51b0(arg4, rdx_9)
    r14_2 = arg1[0xd].d

int32_t r14_3 = r14_2 & 0x1f

if (i_8 != 0)
    int64_t rcx_16 = arg1[0xd]
    uint64_t i_5 = zx.q(i_8)
    uint64_t i_2
    
    do
        if (rcx_16 == arg1[0xe] + 0x20)
            void* rbp_3 = arg1[0xa]
            r14_3 = i_3.d
            int64_t* rsi_1 = rbp_3 + 0x400
            arg1[0xa] = *rsi_1
            
            if (rbp_3 != 0)
                for (int64_t j = 0x20; j != 0; )
                    int64_t rcx_17 = rsi_1[-4]
                    rsi_1 = &rsi_1[-4]
                    j -= 1
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                
                j_sub_140a74f90(rbp_3)
            
            arg1[0xe] = arg1[0xd]
        
        int64_t rsi_2 = sx.q(arg4[1].d)
        uint64_t* rdi_8 = (zx.q(r14_3) << 5) + arg1[0xa]
        int32_t rax_19 = (rsi_2 + 1).d
        arg4[1].d = rax_19
        
        if (rax_19 s> *(arg4 + 0xc))
            sub_1405c4e40(arg4)
        
        r14_3 += 1
        uint64_t* rcx_22 = (rsi_2 << 5) + *arg4
        *rcx_22 = i_3
        *rcx_22 = *rdi_8
        *rdi_8 = i_3
        rcx_22[1].d = rdi_8[1].d
        *(rcx_22 + 0xc) = *(rdi_8 + 0xc)
        rdi_8[1] = 0
        rcx_22[2] = rdi_8[2]
        result = rdi_8[3].d
        rcx_22[3].d = result
        arg1[0xd] += 1
        rcx_16 = arg1[0xd]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

return result
