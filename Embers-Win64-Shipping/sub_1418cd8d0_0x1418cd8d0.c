// 函数: sub_1418cd8d0
// 地址: 0x1418cd8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1 = arg7
int64_t rsi
rsi.b = 0
int64_t* r9 = arg3
int16_t* r13 = arg2
int32_t r8 = arg1

if (i_1 != 0)
    uint64_t rcx = 0
    arg7 = 0
    uint64_t i
    
    do
        i = i_1
        
        if ((i_1.b & 1) != 0)
            int64_t* r9_2 = *r9 + rcx
            void* rdx = *(arg5 + 8)
            int64_t r12_1 = sx.q(r9_2[1].d)
            uint64_t rax_1 = zx.q(*(rdx + 0x18))
            
            if (r8 u>= rax_1.d)
                rax_1 = zx.q(r8)
            
            int64_t r15_3 = not.q(rax_1 - 1) & (zx.q(rax_1.d) + *(rdx + 0x10) - 1)
            int64_t rax_4 = r15_3 + r12_1
            
            if (rax_4 u> *(rdx + 8))
                void* rax_5 = *(rdx + 0x28)
                
                if (rax_5 != 0)
                    *(rax_5 + 0x98)
                
                r15_3 = 0
                *(rdx + 0x10) = r12_1
                *(rdx + 0x28) = arg8
                *(rdx + 0x30) = *(arg8 + 0xa0)
            else
                *(rdx + 0x10) = rax_4
            
            memcpy(arg6 + r15_3, *r9_2, r12_1.d)
            uint64_t r14_2 = zx.q(*r13)
            void* rcx_5 = *(*(arg5 + 8) + 0x20)
            void* r8_2 = *(rcx_5 + 0x20)
            uint64_t r10_1 = zx.q(*(rcx_5 + 0x14))
            int64_t* r9_3 = *((zx.q(r14_2.d) << 6) + *arg4 + 0x30)
            uint64_t rax_10
            rax_10.b = 0
            
            if (data_1439c7a08 s> 1)
                int64_t r8_3 = *(r8_2 + 0x60)
                int64_t rdx_3 = *r9_3
                *r9_3 = r8_3
                bool cond:0_1 = r9_3[1] != r10_1
                r9_3[1] = r10_1
                uint64_t rcx_7
                rcx_7.b = cond:0_1
                bool cond:1_1 = r9_3[2] != r12_1
                r9_3[2] = r12_1
                rax_10.b = cond:1_1
                rax_10.b |= rcx_7.b
                rax_10 = zx.q(rax_10.b)
                
                if (rdx_3 != r8_3)
                    rax_10 = 1
            else
                int64_t rcx_8 = arg4[6]
                uint64_t rdx_2 = r14_2 * 3
                int32_t r11_1 = *(r8_2 + 0x68)
                
                if (*(rcx_8 + (rdx_2 << 2)) != r11_1)
                    *(rcx_8 + (rdx_2 << 2)) = r11_1
                    *r9_3 = *(r8_2 + 0x60)
                    rax_10.b = 1
                
                if (*(rcx_8 + (rdx_2 << 2) + 4) != r10_1.d)
                    *(rcx_8 + (rdx_2 << 2) + 4) = r10_1.d
                    rax_10.b = 1
                    r9_3[1] = r10_1
                
                if (*(rcx_8 + (rdx_2 << 2) + 8) != r12_1.d)
                    *(rcx_8 + (rdx_2 << 2) + 8) = r12_1.d
                    rax_10.b = 1
                    r9_3[2] = r12_1
                
                arg4[0xa].b |= rax_10.b
            
            *(arg4[2] + (zx.q(*(arg4[1] + r14_2)) << 2)) = r15_3.d
            
            if (rsi.b != 0 || rax_10.b != 0)
                rsi.b = 1
            
            r9 = arg3
            i = i_1
            r8 = arg1
            rcx = arg7
        
        rcx += 0x10
        i_1 u>>= 1
        r13 = &r13[1]
        arg7 = rcx
    while (i u>= 2)

return zx.q(rsi.b)
