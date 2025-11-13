// 函数: sub_141c51970
// 地址: 0x141c51970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 9) = *(arg2 + 9)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
sub_141ae65e0(arg1 + 0x28, arg2 + 0x28)
*(arg1 + 0xb0) ^= (*(arg1 + 0xb0) ^ *(arg2 + 0xb0)) & 1
char rax_8 = *(arg1 + 0xb0)
char rcx_1 = ((rax_8 ^ *(arg2 + 0xb0)) & 2) ^ rax_8
*(arg1 + 0xb0) = rcx_1
char rax_9 = ((rcx_1 ^ *(arg2 + 0xb0)) & 4) ^ rcx_1
*(arg1 + 0xb0) = rax_9
char rcx_2 = ((rax_9 ^ *(arg2 + 0xb0)) & 8) ^ rax_9
*(arg1 + 0xb0) = rcx_2
char rax_10 = ((rcx_2 ^ *(arg2 + 0xb0)) & 0x10) ^ rcx_2
*(arg1 + 0xb0) = rax_10
char rcx_3 = ((rax_10 ^ *(arg2 + 0xb0)) & 0x20) ^ rax_10
*(arg1 + 0xb0) = rcx_3
char rax_11 = ((rcx_3 ^ *(arg2 + 0xb0)) & 0x40) ^ rcx_3
*(arg1 + 0xb0) = rax_11
*(arg1 + 0xb0) = ((rax_11 ^ *(arg2 + 0xb0)) & 0x7f) ^ *(arg2 + 0xb0)
*(arg1 + 0xb1) ^= (*(arg1 + 0xb1) ^ *(arg2 + 0xb1)) & 1
char rax_13 = *(arg1 + 0xb1)
char rcx_4 = ((*(arg2 + 0xb1) ^ rax_13) & 2) ^ rax_13
*(arg1 + 0xb1) = rcx_4
char rdx_1 = ((*(arg2 + 0xb1) ^ rcx_4) & 4) ^ rcx_4
*(arg1 + 0xb1) = rdx_1
*(arg1 + 0xb1) = ((*(arg2 + 0xb1) ^ rdx_1) & 8) ^ rdx_1
*(arg1 + 0xb2) = *(arg2 + 0xb2)
*(arg1 + 0xb4) = *(arg2 + 0xb4)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xb9) = *(arg2 + 0xb9)
*(arg1 + 0xba) = *(arg2 + 0xba)
*(arg1 + 0xbb) = *(arg2 + 0xbb)
*(arg1 + 0xbc) = *(arg2 + 0xbc)
*(arg1 + 0xc0) = *(arg2 + 0xc0)
*(arg1 + 0xc4) = *(arg2 + 0xc4)
*(arg1 + 0xc8) = *(arg2 + 0xc8)
sub_141ae65e0(arg1 + 0xd0, arg2 + 0xd0)
sub_141ae65e0(arg1 + 0x158, arg2 + 0x158)
*(arg1 + 0x1e0) = *(arg2 + 0x1e0)
*(arg1 + 0x1e4) = *(arg2 + 0x1e4)
*(arg1 + 0x1e8) = *(arg2 + 0x1e8)
*(arg1 + 0x1ec) = *(arg2 + 0x1ec)
*(arg1 + 0x1f0) = *(arg2 + 0x1f0)
*(arg1 + 0x1f4) = *(arg2 + 0x1f4)
*(arg1 + 0x1f8) = *(arg2 + 0x1f8)
*(arg1 + 0x1fc) = *(arg2 + 0x1fc)
*(arg1 + 0x200) = *(arg2 + 0x200)
*(arg1 + 0x204) = *(arg2 + 0x204)
*(arg1 + 0x208) = *(arg2 + 0x208)
*(arg1 + 0x20c) = *(arg2 + 0x20c)
*(arg1 + 0x210) = *(arg2 + 0x210)
*(arg1 + 0x214) = *(arg2 + 0x214)
*(arg1 + 0x218) = *(arg2 + 0x218)
*(arg1 + 0x21c) = *(arg2 + 0x21c)
*(arg1 + 0x220) = *(arg2 + 0x220)
*(arg1 + 0x224) = *(arg2 + 0x224)
*(arg1 + 0x228) = *(arg2 + 0x228)
*(arg1 + 0x22c) = *(arg2 + 0x22c)
*(arg1 + 0x230) = *(arg2 + 0x230)
*(arg1 + 0x234) = *(arg2 + 0x234)
sub_141ae65e0(arg1 + 0x238, arg2 + 0x238)

if (arg1 + 0x2c0 != arg2 + 0x2c0)
    int32_t i_3 = *(arg1 + 0x2c8)
    
    if (i_3 != 0)
        int64_t* rbx_2 = *(arg1 + 0x2c0) + 0x90
        int32_t i
        
        do
            int64_t rcx_8 = *rbx_2
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rbx_2[-0xe] = &data_142d6a040
            int64_t rcx_9 = rbx_2[-3]
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            sub_1405ae180(&rbx_2[-0xd])
            rbx_2 = &rbx_2[0x15]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = *(arg2 + 0x2c8)
    void* rbx_3 = *(arg2 + 0x2c0)
    int32_t r8_1 = *(arg1 + 0x2cc)
    *(arg1 + 0x2c8) = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140976950(arg1 + 0x2c0, i_2, r8_1)
        int64_t* rdi_1 = *(arg1 + 0x2c0)
        
        if (i_2 != 0)
            void* rbx_4 = rbx_3 + 8
            int32_t i_1
            
            do
                *rdi_1 = *(rbx_4 - 8)
                rdi_1[1].b = *rbx_4
                *(rdi_1 + 0xc) = *(rbx_4 + 4)
                rdi_1[2].d = *(rbx_4 + 8)
                *(rdi_1 + 0x14) = *(rbx_4 + 0xc)
                rdi_1[3].d = *(rbx_4 + 0x10)
                *(rdi_1 + 0x1c) = *(rbx_4 + 0x14)
                sub_141adec50(&rdi_1[4], rbx_4 + 0x18)
                int64_t rax_54 = *(rbx_4 + 0x98)
                rbx_4 += 0xa8
                rdi_1[0x14] = rax_54
                rdi_1 = &rdi_1[0x15]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x2cc) = 0

*(arg1 + 0x2d0) = *(arg2 + 0x2d0)
*(arg1 + 0x2d4) = *(arg2 + 0x2d4)
*(arg1 + 0x2d8) = *(arg2 + 0x2d8)
*(arg1 + 0x2dc) = *(arg2 + 0x2dc)
*(arg1 + 0x2e0) = *(arg2 + 0x2e0)
sub_141ae65e0(arg1 + 0x2e8, arg2 + 0x2e8)

if (arg1 + 0x370 != arg2 + 0x370)
    int64_t rdi_2 = sx.q(*(arg2 + 0x378))
    int64_t rsi_1 = *(arg2 + 0x370)
    int32_t r8_2 = *(arg1 + 0x37c)
    *(arg1 + 0x378) = rdi_2.d
    
    if (rdi_2.d != 0 || r8_2 != 0)
        sub_1405c4a00(arg1 + 0x370, rdi_2.d, r8_2)
        memcpy(*(arg1 + 0x370), rsi_1, (rdi_2 << 3).d)
    else
        *(arg1 + 0x37c) = 0

if (arg1 + 0x380 != arg2 + 0x380)
    int64_t rsi_2 = sx.q(*(arg2 + 0x388))
    int64_t r15_1 = *(arg2 + 0x380)
    int32_t r8_5 = *(arg1 + 0x38c)
    *(arg1 + 0x388) = rsi_2.d
    
    if (rsi_2.d != 0 || r8_5 != 0)
        sub_1405c4a00(arg1 + 0x380, rsi_2.d, r8_5)
        memcpy(*(arg1 + 0x380), r15_1, (rsi_2 << 3).d)
    else
        *(arg1 + 0x38c) = 0

if (arg1 + 0x390 != arg2 + 0x390)
    int64_t rdi_4 = sx.q(*(arg2 + 0x398))
    int64_t rsi_3 = *(arg2 + 0x390)
    int32_t r8_8 = *(arg1 + 0x39c)
    *(arg1 + 0x398) = rdi_4.d
    
    if (rdi_4.d != 0 || r8_8 != 0)
        sub_1405c4a00(arg1 + 0x390, rdi_4.d, r8_8)
        memcpy(*(arg1 + 0x390), rsi_3, (rdi_4 << 3).d)
    else
        *(arg1 + 0x39c) = 0

return arg1
