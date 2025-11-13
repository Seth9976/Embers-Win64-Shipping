// 函数: sub_1429651b0
// 地址: 0x1429651b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r12 = arg3
char* r13 = arg2

if (arg3 u>= 0x1000000000000000)
    uint64_t i_1 = arg3 u>> 0x3c
    uint64_t i
    
    do
        int32_t rbx_1 = arg1[0x10].d
        uint64_t j_1 = -0x8000000000000000
        arg1[0x11] += -0x8000000000000000
        int32_t r15_2 = rbx_1 & 7
        char* r14_1 = r13
        
        if (arg1[0x11] u< -0x8000000000000000)
            int64_t j = 1
            void* rax_3 = &arg1[0x12]
            
            do
                int64_t temp0_1 = *rax_3
                *rax_3 += 1
                
                if (temp0_1 != -1)
                    break
                
                j += 1
                rax_3 += 8
            while (j u< 4)
        
        if (r15_2 == 0)
            do
                uint64_t rsi_3
                
                if (rbx_1 == 0)
                    rsi_3 = j_1 u>> 9
                
                if (rbx_1 != 0 || rsi_3 == 0)
                    uint64_t r8_2 = zx.q(0x200 - rbx_1)
                    void* rcx_7 = &arg1[8] + (zx.q(rbx_1) u>> 3)
                    
                    if (j_1 u< r8_2)
                        memcpy(rcx_7, r14_1, (j_1 u>> 3).d)
                        rbx_1 += j_1.d
                        j_1 = 0
                    else
                        uint32_t count = (0x200 - rbx_1) u>> 3
                        j_1 -= r8_2
                        memcpy(rcx_7, r14_1, count)
                        r14_1 = &r14_1[zx.q(count)]
                        sub_1429750a0(arg1, &arg1[8], 1)
                        rbx_1 = 0
                    
                    arg1[0x10].d = rbx_1
                else
                    sub_1429750a0(arg1, r14_1, rsi_3)
                    r14_1 = &r14_1[rsi_3 << 9 u>> 3]
                    j_1 = zx.q(j_1.d) & 0x1ff
            while (j_1 != 0)
        else
            while (j_1 != 0)
                uint8_t rsi_1 = *r14_1
                uint64_t rax_5 = zx.q(rbx_1 u>> 3)
                uint64_t rdx = zx.q((rax_5 + 1).d)
                *(zx.q(rax_5.d) + arg1 + 0x40) = rsi_1 u>> r15_2.b | *(rax_5 + arg1 + 0x40)
                
                if (j_1 u<= 8)
                    rbx_1 += j_1.d
                    
                    if (rbx_1 == 0x200)
                        sub_1429750a0(arg1, &arg1[8], 1)
                        rdx = 0
                        rbx_1 = 0
                    
                    *(rdx + arg1 + 0x40) = rsi_1 << (8 - r15_2.b)
                    j_1 = 0
                    arg1[0x10].d = rbx_1
                else
                    rbx_1 += 8
                    j_1 -= 8
                    r14_1 = &r14_1[1]
                    
                    if (rbx_1 u>= 0x200)
                        sub_1429750a0(arg1, &arg1[8], 1)
                        rdx = 0
                        rbx_1 &= 0x1ff
                    
                    *(rdx + arg1 + 0x40) = rsi_1 << (8 - r15_2.b)
                    arg1[0x10].d = rbx_1
        
        r12 -= 0x1000000000000000
        r13 = &r13[0x1000000000000000]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r12 != 0)
    sub_142964d70(arg1, r13, r12 << 3)

return 1
