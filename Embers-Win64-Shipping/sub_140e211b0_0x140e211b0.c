// 函数: sub_140e211b0
// 地址: 0x140e211b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_10 = arg2
int64_t r9 = sx.q(*(arg1 + 0xa08))
void* const* rax

if (r9.d != 0)
    int32_t rbx_1 = 0
    int32_t r14_1 = 0
    int32_t arg_8 = 0
    int64_t r13
    r13.b = **(arg1 + 0xa00) != *arg2
    int64_t rsi_1 = 0
    
    do
        int64_t r9_1 = sx.q(r14_1)
        rsi_1 += 1
        r14_1 += 1
        
        if (rsi_1 s< r9)
            int64_t* rcx_2 = (rsi_1 << 4) + *(arg1 + 0xa00)
            
            do
                rax.b = *rcx_2 != *arg2
                
                if (zx.d(r13.b) != rax.d)
                    break
                
                r14_1 += 1
                rsi_1 += 1
                rcx_2 = &rcx_2[2]
            while (rsi_1 s< r9)
        
        int32_t i_2 = r14_1 - r9_1.d
        
        if (r13.b != 0)
            if (rbx_1 != r9_1.d)
                int64_t rax_1 = *(arg1 + 0xa00)
                memmove((sx.q(rbx_1) << 4) + rax_1, (r9_1 << 4) + rax_1, i_2 << 4)
            
            rbx_1 += i_2
            arg_8 = rbx_1
        else if (i_2 != 0)
            int64_t* rdi_4 = (r9_1 << 4) + 8 + *(arg1 + 0xa00)
            int32_t i
            
            do
                int64_t* rbx_2 = *rdi_4
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp2_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_4 = &rdi_4[2]
                i = i_2
                i_2 -= 1
            while (i != 1)
            rbx_1 = arg_8
        
        arg2 = arg_10
        r13.b ^= 1
    while (rsi_1 s< r9)
    
    *(arg1 + 0xa08) = rbx_1

int32_t i_1 = 0

if (*(arg1 + 0xa08) s> 0)
    int64_t rdi_5 = 0
    
    do
        int64_t* rsi_2 = *(arg1 + 0xa00)
        int32_t r9_2
        rax, r9_2 = sub_140e211b0(*(rsi_2 + rdi_5))
        
        if (rax.b != 0)
            void* rcx_9 = *(rsi_2 + rdi_5)
            uint64_t rax_5 = *(arg1 + 0x898) + 0xf48
            int64_t* rdx_4 = *(rcx_9 + 0x8a8)
            *(rcx_9 + 0x8a0) = rax_5
            
            if (rdx_4 != 0)
                uint64_t var_58 = rax_5
                char var_50_1 = 1
                int64_t var_48 = 0
                int32_t var_40_1 = 0
                sub_140e245f0(&rdx_4[0x55], rdx_4, &var_58, r9_2)
                sub_140745b20(&var_48)
            
            rax_5.b = 1
            return rax_5
        
        i_1 += 1
        rdi_5 += 0x10
    while (i_1 s< *(arg1 + 0xa08))

rax.b = 0
return rax
