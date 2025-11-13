// 函数: sub_1418cdae0
// 地址: 0x1418cdae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t arg_8 = arg1
uint64_t i_1 = arg7
int64_t rdi
rdi.b = 0
int16_t* r12 = arg2

if (i_1 != 0)
    int64_t r13_1 = 0
    uint64_t i
    
    do
        i = i_1
        
        if ((i_1.b & 1) != 0)
            int64_t* r9 = *arg3
            void* rdx = *(arg5 + 8)
            int64_t rbp_1 = sx.q(*(r9 + r13_1 + 8))
            uint64_t rax_2 = zx.q(*(rdx + 0x18))
            
            if (arg1.d u>= rax_2.d)
                rax_2 = zx.q(arg1.d)
            
            int64_t r14_3 = not.q(rax_2 - 1) & (zx.q(rax_2.d) + *(rdx + 0x10) - 1)
            int64_t rax_5 = r14_3 + rbp_1
            
            if (rax_5 u> *(rdx + 8))
                void* rax_6 = *(rdx + 0x28)
                
                if (rax_6 != 0)
                    *(rax_6 + 0x98)
                
                r14_3 = 0
                *(rdx + 0x10) = rbp_1
                *(rdx + 0x28) = arg8
                *(rdx + 0x30) = *(arg8 + 0xa0)
            else
                *(rdx + 0x10) = rax_5
            
            memcpy(arg6 + r14_3, *(r9 + r13_1), rbp_1.d)
            uint64_t rdx_2 = zx.q(*r12)
            void* rcx_5 = *(*(arg5 + 8) + 0x20)
            void* r8_1 = *(rcx_5 + 0x20)
            int64_t r10_2 = zx.q(*(rcx_5 + 0x14)) + r14_3
            int64_t* r9_1 = *((zx.q(rdx_2.d) << 6) + *arg4 + 0x30)
            uint64_t rax_11
            rax_11.b = 0
            
            if (data_1439c7a08 s> 1)
                int64_t r8_2 = *(r8_1 + 0x60)
                int64_t rdx_4 = *r9_1
                *r9_1 = r8_2
                bool cond:0_1 = r9_1[1] != r10_2
                r9_1[1] = r10_2
                uint64_t rcx_7
                rcx_7.b = cond:0_1
                bool cond:1_1 = r9_1[2] != rbp_1
                r9_1[2] = rbp_1
                rax_11.b = cond:1_1
                rax_11.b |= rcx_7.b
                rax_11 = zx.q(rax_11.b)
                
                if (rdx_4 != r8_2)
                    rax_11 = 1
            else
                int64_t rcx_8 = arg4[6]
                uint64_t rdx_3 = rdx_2 * 3
                int32_t r11_1 = *(r8_1 + 0x68)
                
                if (*(rcx_8 + (rdx_3 << 2)) != r11_1)
                    *(rcx_8 + (rdx_3 << 2)) = r11_1
                    *r9_1 = *(r8_1 + 0x60)
                    rax_11.b = 1
                
                if (*(rcx_8 + (rdx_3 << 2) + 4) != r10_2.d)
                    *(rcx_8 + (rdx_3 << 2) + 4) = r10_2.d
                    rax_11.b = 1
                    r9_1[1] = r10_2
                
                if (*(rcx_8 + (rdx_3 << 2) + 8) != rbp_1.d)
                    *(rcx_8 + (rdx_3 << 2) + 8) = rbp_1.d
                    rax_11.b = 1
                    r9_1[2] = rbp_1
                
                arg4[0xa].b |= rax_11.b
            
            if (rdi.b != 0 || rax_11.b != 0)
                rdi.b = 1
            
            arg3 = arg_18
            i = i_1
            arg1 = arg_8
        
        i_1 u>>= 1
        r13_1 += 0x10
        r12 = &r12[1]
    while (i u>= 2)

return zx.q(rdi.b)
