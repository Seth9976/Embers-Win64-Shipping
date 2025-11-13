// 函数: sub_142ba7790
// 地址: 0x142ba7790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg1 + 0x98)
int32_t* r15 = nullptr
int64_t rbp
rbp.b = 0
int32_t arg_8 = 0
int32_t* rbx = arg3
uint64_t r14 = zx.q(arg2)
int32_t rax_1

if (*(arg1 + 0x410) == 0)
    rax_1 = sub_142ba7990(arg1, nullptr, arg4)
    arg_8 = rax_1

if (*(arg1 + 0x410) != 0 || rax_1 == 0)
    void* r13_1 = *(arg1 + 0x410)
    int32_t* rsi_1 = *(r13_1 + 0x18)
    int32_t r9_1 = *rsi_1
    
    if (r14.d u> r9_1)
        r14 = zx.q(r9_1)
    
    if (*(r13_1 + 8) == 0)
        *(r13_1 + 8) = sub_142b99a90(r12, 4, 0, r9_1, 0, &arg_8)
    
    if (*(r13_1 + 8) != 0 || arg_8 == 0)
        int32_t* rax_3 = *(r13_1 + 8)
        int32_t i_1 = 0
        
        if (r14.d != 0)
            i_1 = r14.d
            uint64_t i_2 = zx.q(r14.d)
            uint64_t i
            
            do
                int32_t rcx_1 = *rbx
                
                if (*rax_3 != rcx_1)
                    *rax_3 = rcx_1
                    rbp.b = 1
                
                rbx = &rbx[1]
                rax_3 = &rax_3[1]
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        int32_t rcx_2 = *(arg1 + 4)
        
        if ((rcx_2 & 0x7fff0000) != 0)
            int32_t* r8_3 = *(*(rsi_1 + 0x18) + (zx.q(rcx_2) u>> 0x10) * 0x10 - 0x10) + (r14 << 2)
            
            while (i_1 u< *rsi_1)
                int32_t rcx_5 = *r8_3
                
                if (*rax_3 != rcx_5)
                    *rax_3 = rcx_5
                    rbp.b = 1
                
                i_1 += 1
                r8_3 = &r8_3[1]
                rax_3 = &rax_3[1]
        else if (i_1 u< *rsi_1)
            int32_t* rcx_9 = (zx.q(r14.d) << 5) + 0xc + *(rsi_1 + 0x10)
            
            do
                int32_t rdx = *rcx_9
                
                if (*rax_3 != rdx)
                    *rax_3 = rdx
                    rbp.b = 1
                
                i_1 += 1
                rcx_9 = &rcx_9[8]
                rax_3 = &rax_3[1]
            while (i_1 u< *rsi_1)
        
        if (*(r13_1 + 0x10) != 0 && rbp.b == 0)
            return 0xffffffff
        
        int32_t* rax_5
        int512_t zmm0_1
        rax_5, zmm0_1 = sub_142b99a90(r12, 4, 0, *rsi_1, 0, &arg_8)
        r15 = rax_5
        
        if (arg_8 == 0)
            if (*(*(arg1 + 0x410) + 0x30) == 0)
                zmm0_1 = sub_142bb1220(arg1, zmm0_1)
            
            sub_142bb2650(arg1, r14.d, *(r13_1 + 8), r15)
            int32_t rax_6 = sub_142bb5000(arg1, *rsi_1, r15, 0, zmm0_1, arg4)
            arg_8 = rax_6
            
            if (rax_6 == 0)
                if (r14.d == 0)
                    *(arg1 + 8) &= 0xffff7fff
                else
                    *(arg1 + 8) |= 0x8000

sub_142b99980(r12, r15)
return zx.q(arg_8)
