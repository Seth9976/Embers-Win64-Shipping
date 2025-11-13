// 函数: sub_1418fa940
// 地址: 0x1418fa940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
char* rax = arg2 + 0x18
int32_t rbx = 1
void* r9 = &(arg2 + 0x18)[sx.q(*(arg2 + 0x98)) << 3]

if (arg2 + 0x18 != r9)
    do
        if (test_bit(arg3, zx.d(rax[3])))
            uint64_t rdx_1 = zx.q(*rax)
            void* r8 = &arg1[rdx_1 * 3]
            
            if (not(test_bit(arg1[0xe], rdx_1.d)))
                *(r8 + 0xe0) = rdx_1.d
                int32_t rcx_3
                rcx_3.b = *(rax + 6) != 0
                *(r8 + 0xe8) = rcx_3
                *(r8 + 0xe4) = zx.d(*(rax + 4))
                arg1[0xe] |= 1 << *rax
            
            arg3 = arg_18
        
        rax = &rax[8]
    while (rax != r9)

arg1[0xd] = 0
sub_140908eb0(&arg1[0x10])
sub_140908eb0(&arg1[0x24])
int32_t i = 0
void* rbp = &arg1[0x38]
uint64_t rax_4

do
    if ((arg1[0xe] & rbx) != 0)
        int32_t i_2 = i
        sub_140d42420(&arg1[0x10], &arg1[0xd], &i_2)
        i_2 = i
        sub_140d42420(&arg1[0x24], &i_2, &arg1[0xd])
        uint64_t rcx_10 = zx.q(arg1[0xd]) * 3
        *(arg1 + (rcx_10 << 2) + 0xe0) = *rbp
        arg1[rcx_10 + 0x3a] = *(rbp + 8)
        arg1[rcx_10 + 0x38] = arg1[0xd]
        arg1[0xd] += 1
    
    rax_4 = zx.q(arg1[0xd])
    i += 1
    rbx = rol.d(rbx, 1)
    rbp += 0xc
while (i u< 0x10)

memset(&arg1[rax_4 * 3 + 0x38], 0, 0xc0 - rax_4 * 0xc)
uint64_t result = sx.q(*(arg2 + 0x98))
void* rbx_1 = &(arg2 + 0x18)[result << 3]

if (arg2 + 0x18 != rbx_1)
    void* r14_1 = arg2 + 0x1b
    
    do
        if (test_bit(arg_18, zx.d(*r14_1)) && arg1[0x26] != arg1[0x31])
            void* rdx_5 = *(arg1 + 0xd0)
            void* r8_5 = &arg1[0x32]
            uint64_t r9_1 = zx.q(*(r14_1 - 3))
            
            if (rdx_5 != 0)
                r8_5 = rdx_5
            
            int32_t i_1 = *(r8_5 + (((sx.q(arg1[0x36]) - 1) & r9_1) << 2))
            
            if (i_1 != 0xffffffff)
                int64_t rdx_6 = *(arg1 + 0x90)
                
                do
                    int64_t rcx_16 = sx.q(i_1) * 2
                    
                    if (*(rdx_6 + (rcx_16 << 3)) == r9_1.d)
                        if (i_1 != 0xffffffff)
                            int32_t rcx_17 = arg1[0x68]
                            void* r10_3 = &arg1[zx.q(rcx_17) * 4]
                            arg1[0x68] = rcx_17 + 1
                            int32_t* rdx_10
                            
                            if (arg1[0x26] == arg1[0x31])
                            label_1418fab8f:
                                rdx_10 = nullptr
                            else
                                void* rdx_7 = *(arg1 + 0xd0)
                                void* r8_6 = &arg1[0x32]
                                uint64_t r9_2 = zx.q(*(r14_1 - 3))
                                
                                if (rdx_7 != 0)
                                    r8_6 = rdx_7
                                
                                int32_t rax_11 = *(r8_6 + (((sx.q(arg1[0x36]) - 1) & r9_2) << 2))
                                
                                if (rax_11 == 0xffffffff)
                                label_1418fab8f_1:
                                    rdx_10 = nullptr
                                else
                                    while (true)
                                        rdx_10 = (sx.q(rax_11) << 4) + *(arg1 + 0x90)
                                        
                                        if (*rdx_10 == r9_2.d)
                                            break
                                        
                                        rax_11 = rdx_10[2]
                                        
                                        if (rax_11 == 0xffffffff)
                                            goto label_1418fab8f_2
                                    
                                    if (rax_11 == 0xffffffff)
                                    label_1418fab8f_2:
                                        rdx_10 = nullptr
                            
                            *(r10_3 + 0x1a8) = rdx_10[1]
                            *(r10_3 + 0x1a4) = zx.d(*r14_1)
                            int32_t rax_15 = zx.d(*(r14_1 - 1)) - 1
                            int32_t rax_17
                            
                            if (rax_15 u> 0x13)
                                rax_17 = 0
                            else
                                switch (rax_15)
                                    case 0
                                        rax_17 = 0x64
                                    case 1
                                        rax_17 = 0x67
                                    case 2
                                        rax_17 = 0x6a
                                    case 3
                                        rax_17 = 0x6d
                                    case 4
                                        rax_17 = 0x26
                                    case 5
                                        rax_17 = 0x29
                                    case 6
                                        rax_17 = 0x25
                                    case 7
                                        rax_17 = 0x2c
                                    case 8
                                        rax_17 = 0x52
                                    case 9
                                        rax_17 = 0x60
                                    case 0xa
                                        rax_17 = 0x4e
                                    case 0xb
                                        rax_17 = 0x53
                                    case 0xc
                                        rax_17 = 0x61
                                    case 0xd
                                        rax_17 = 0x5c
                                    case 0xe
                                        rax_17 = 0x51
                                    case 0xf
                                        rax_17 = 0x5f
                                    case 0x10
                                        rax_17 = 0x4d
                                    case 0x11
                                        rax_17 = 0x5b
                                    case 0x12
                                        rax_17 = 0x40
                                    case 0x13
                                        rax_17 = 0x62
                            
                            *(r10_3 + 0x1ac) = rax_17
                            *(r10_3 + 0x1b0) = zx.d(*(r14_1 - 2))
                        
                        break
                    
                    i_1 = *(rdx_6 + (rcx_16 << 3) + 8)
                while (i_1 != 0xffffffff)
        
        r14_1 += 8
        result = r14_1 - 3
    while (result != rbx_1)

uint64_t rdx_11 = zx.q(arg1[0xd])
*arg1 = 0x13

if (rdx_11.d != 0)
    int32_t rax_19 = arg1[0x68]
    arg1[5] = rdx_11.d
    *(arg1 + 0x18) = &arg1[0x38]
    arg1[8] = rax_19
    *(arg1 + 0x28) = &arg1[0x69]
    int32_t rax_20 = sub_140b21160(&arg1[0x38], (rdx_11 * 3).d << 2, 0)
    int32_t rdx_15 = arg1[0x68] << 4
    arg1[0xc] = rax_20
    result = sub_140b21160(&arg1[0x69], rdx_15, rax_20)
    arg1[0xc] = result.d

return result
