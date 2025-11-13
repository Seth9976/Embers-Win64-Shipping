// 函数: sub_142bae300
// 地址: 0x142bae300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[3]
char* rdi = nullptr
uint64_t r13 = zx.q(arg2)
int32_t rbp = arg3
int32_t r9 = sx.d(*(rsi + 0x1a))
int32_t arg_8

if (r9 == 0xfffffffc || sx.d(*(rsi + 0x1a)) + 4 + sx.d(*(rsi + 0x62)) + r9 u<= rsi[1].d)
    arg_8 = 0
else
    int32_t rax_3
    rax_3, arg4, arg5 = sub_142b92690(rsi, r9 + 4, 0)
    arg_8 = rax_3
    
    if (rax_3 != 0)
        return rax_3

*(rsi[4] + (sx.q(*(rsi + 0x1a)) << 3)) = arg1[0xb]
*(rsi[4] + (sx.q(sx.d(*(rsi + 0x1a)) + 1) << 3)) = arg1[0xc]
*(rsi[4] + (sx.q(sx.d(*(rsi + 0x1a)) + 2) << 3)) = arg1[0x22]
*(rsi[4] + (sx.q(sx.d(*(rsi + 0x1a)) + 3) << 3)) = arg1[0x23]
*(sx.q(*(rsi + 0x1a)) + rsi[5]) = 0
*(sx.q(sx.d(*(rsi + 0x1a)) + 1) + rsi[5]) = 0
*(sx.q(sx.d(*(rsi + 0x1a)) + 2) + rsi[5]) = 0
*(sx.q(sx.d(*(rsi + 0x1a)) + 3) + rsi[5]) = 0
int64_t* r12 = arg1[5]
int32_t rax_24 = sub_142b97060(r12, arg1[0x1f].d, arg5)
arg_8 = rax_24

if (rax_24 == 0)
    int16_t rax_25 = sub_142b96f00(r12, &arg_8)
    rax_24 = arg_8
    
    if (rax_24 == 0)
        if (rax_25 u<= *(*arg1 + 0x18a))
            if (rax_25 == 0)
                return 0
            
            goto label_142bae505
        
        uint32_t rbp_1 = zx.d(rax_25)
        
        if (rbp_1 s> arg1[6].d)
            return 0x16
        
        void* r15_1 = arg1[0x1d]
        uint32_t r14_1 = *(r15_1 + 0x230)
        int32_t rax_29
        
        if (r14_1 u>= rbp_1)
            rax_29 = 0
        else
            int32_t arg_20
            int64_t rax_28
            rax_28, arg4 =
                sub_142b99a90(*(r15_1 + 0x10), 1, r14_1, rbp_1, *(r15_1 + 0x238), &arg_20)
            *(r15_1 + 0x238) = rax_28
            rax_29 = arg_20
            
            if (rax_29 == 0)
                r14_1 = rbp_1
                rax_29 = 0
        
        arg_8 = rax_29
        *(arg1[0x1d] + 0x230) = zx.d(r14_1.w)
        rax_24 = arg_8
        
        if (rax_24 == 0)
            rbp = arg3
        label_142bae505:
            uint32_t rsi_2 = zx.d(rax_25)
            rax_24 = sub_142b96990(r12, *(arg1[0x1d] + 0x238), rsi_2, arg4)
            arg_8 = rax_24
            
            if (rax_24 == 0)
                *(arg1[2] + 0xd0) = *(arg1[0x1d] + 0x238)
                *(arg1[2] + 0xd8) = rsi_2
                void* r8_2 = arg1[3]
                *(arg1 + 0xb4) = *(r8_2 + 0x1a) - r13.w
                *(arg1 + 0xb6) = *(r8_2 + 0x18) - rbp.w
                arg1[0x17] = *(r8_2 + 0x40) + (r13 << 3)
                arg1[0x18] = *(r8_2 + 0x20) + (r13 << 3)
                arg1[0x19] = *(r8_2 + 0x48) + (r13 << 3)
                arg1[0x1a] = *(r8_2 + 0x28) + r13
                arg1[0x1c].w = r13.w
                arg1[0x1b] = *(r8_2 + 0x30) + (zx.q(rbp) << 1)
                
                if (0 u< *(arg1 + 0xb4))
                    do
                        int64_t rax_40 = arg1[0x1a]
                        rdi[rax_40] &= 0xe7
                        rdi = zx.q(rdi.d + 1)
                    while (rdi.d u< zx.d(*(arg1 + 0xb4)))
                
                *(arg1 + 0xb4) += 4
                return sub_142bace40(arg1, 1)

return rax_24
