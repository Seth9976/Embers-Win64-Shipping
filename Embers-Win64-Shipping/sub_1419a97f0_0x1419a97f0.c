// 函数: sub_1419a97f0
// 地址: 0x1419a97f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int128_t zmm0 = *(arg2 + 0x20)
int64_t r9 = *(arg1 + 0x100)
char rbp = *(arg1 + 0x108)
void* r14 = arg2
char var_40 = rbp
char var_3f = arg3
int64_t rsi = zmm0:8.q
uint64_t result

if (zmm0.q == r9 && rsi.b == rbp)
    result = rsi u>> 8

if (zmm0.q != r9 || rsi.b != rbp || result.b != arg3)
    result = *(arg2 + 0x80)
    int64_t i = *(result + 8)
    
    if (i != 0)
        char r12_1 = *(arg2 + 0x18) & 2
        
        if (r12_1 != 0 && (rsi u>> 8).b == 0 && arg3 == 1)
            int64_t* r8 = *(arg1 + 8)
            int64_t rdx = sx.q(*(arg1 + 0x10))
            int64_t* rcx = r8
            void* rax_4 = &r8[rdx]
            
            if (r8 != rax_4)
                while (*rcx != i)
                    rcx = &rcx[1]
                    
                    if (rcx == rax_4)
                        goto label_1419a98d2
            
            if (r8 == rax_4 || ((rcx - r8) s>> 3).d == 0xffffffff)
            label_1419a98d2:
                int32_t rax_5 = (rdx + 1).d
                *(arg1 + 0x10) = rax_5
                
                if (rax_5 s> *(arg1 + 0x14))
                    sub_14083a440(arg1 + 8, rdx.d)
                
                *((rdx << 3) + *(arg1 + 8)) = i
            
            r14 = arg_10
        
        int32_t r9_1 = 0
        int32_t rbx_1
        rbx_1.b = arg3 == 1
        arg_10.d = rbx_1
        
        if (rsi.b == 0)
            if (rbp == 0 || zx.d(rbp) != 1)
                r9_1 = 2
        else if (zx.d(rsi.b) != 1)
            r9_1 = 2
        else
            uint32_t rcx_5 = zx.d(rbp)
            
            if (rbp == 0)
                r9_1 = 1
            else if (rcx_5 != 1)
                r9_1 = 2
            else
                r9_1 = rcx_5 + 2
        
        arg_10:4.d = r9_1
        int32_t r10_4 = (arg_10 u>> 0x20).d << 8 | rbx_1
        void* rbx_2
        
        if (*(arg1 + 0x30) == *(arg1 + 0x5c))
        label_1419a99c1:
            rbx_2 = sub_141990630(arg1 + 0x28, r10_4, &arg_10)
        else
            void* rcx_7 = *(arg1 + 0x68)
            void* r8_1 = arg1 + 0x60
            
            if (rcx_7 != 0)
                r8_1 = rcx_7
            
            int32_t rax_9 = *(r8_1 + (((sx.q(*(arg1 + 0x70)) - 1) & sx.q(r10_4)) << 2))
            
            if (rax_9 == 0xffffffff)
            label_1419a99c1_1:
                rbx_2 = sub_141990630(arg1 + 0x28, r10_4, &arg_10)
            else
                int32_t* rdx_6
                
                while (true)
                    rdx_6 = (sx.q(rax_9) << 5) + *(arg1 + 0x28)
                    
                    if (*rdx_6 == rbx_1 && rdx_6[1] == r9_1)
                        break
                    
                    rax_9 = rdx_6[6]
                    
                    if (rax_9 == 0xffffffff)
                        goto label_1419a99c1_2
                
                if (rax_9 == 0xffffffff || rdx_6 == 0)
                label_1419a99c1_2:
                    rbx_2 = sub_141990630(arg1 + 0x28, r10_4, &arg_10)
                else
                    rbx_2 = &rdx_6[2]
        
        int32_t rcx_10 = *(rbx_2 + 0xc)
        
        if (rcx_10 s< 8)
            sub_14083ad10(rbx_2, 8)
            rcx_10 = *(rbx_2 + 0xc)
        
        int64_t rsi_1 = sx.q(*(rbx_2 + 8))
        int32_t rax_11 = (rsi_1 + 1).d
        *(rbx_2 + 8) = rax_11
        
        if (rax_11 s> rcx_10)
            sub_14083a440(rbx_2, rsi_1.d)
        
        result = *rbx_2
        *(result + (rsi_1 << 3)) = i
        bool cond:1_1 = r12_1 == 0
        
        if (r12_1 != 0)
            if (zmm0:9.b == 1 && arg3 == 0)
                int64_t* rdx_9 = *(arg1 + 0x18)
                int64_t r8_4 = sx.q(*(arg1 + 0x20))
                int64_t* rcx_12 = rdx_9
                result = &rdx_9[r8_4]
                
                if (rdx_9 != result)
                    while (*rcx_12 != i)
                        rcx_12 = &rcx_12[1]
                        
                        if (rcx_12 == result)
                            goto label_1419a9a67
                
                if (rdx_9 == result || ((rcx_12 - rdx_9) s>> 3).d == 0xffffffff)
                label_1419a9a67:
                    int32_t rax_12 = (r8_4 + 1).d
                    *(arg1 + 0x20) = rax_12
                    
                    if (rax_12 s> *(arg1 + 0x24))
                        sub_14083a440(arg1 + 0x18, r8_4.d)
                    
                    result = *(arg1 + 0x18)
                    *((r8_4 << 3) + result) = i
            
            cond:1_1 = r12_1 == 0
        
        if (not(cond:1_1) && *(arg1 + 0x100) == 0)
            uint64_t rdx_11 = *(arg1 + 0xf0)
            int64_t r8_5 = sx.q(*(arg1 + 0xf8))
            uint64_t rcx_16 = rdx_11
            int64_t rsi_3 = r8_5 << 3
            result = rdx_11 + rsi_3
            
            if (rdx_11 != result)
                while (*rcx_16 != i)
                    rcx_16 += 8
                    
                    if (rcx_16 == result)
                        goto label_1419a9ade
            
            if (rdx_11 == result || ((rcx_16 - rdx_11) s>> 3).d == 0xffffffff)
            label_1419a9ade:
                int32_t rax_13 = (r8_5 + 1).d
                *(arg1 + 0xf8) = rax_13
                
                if (rax_13 s> *(arg1 + 0xfc))
                    sub_14083a440(arg1 + 0xf0, r8_5.d)
                
                result = *(arg1 + 0xf0)
                *(rsi_3 + result) = i
        
        *(r14 + 0x20) = r9.o

return result
