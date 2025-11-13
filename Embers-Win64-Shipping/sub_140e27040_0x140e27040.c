// 函数: sub_140e27040
// 地址: 0x140e27040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rbx = arg2
void* rcx = data_143e20d08

if (rcx == 0)
    return 

sub_140dc00e0(rcx, arg2)
int64_t r8_1 = sx.q(*(arg1 + 0x170))

if (r8_1.d != 0)
    int32_t r12_1 = 0
    int32_t r14_1 = 0
    bool r10_1 = **(arg1 + 0x168) != *rbx
    int64_t rsi_1 = 0
    bool arg_18 = r10_1
    
    do
        int64_t r9_1 = sx.q(r14_1)
        rsi_1 += 1
        r14_1 += 1
        
        if (rsi_1 s< r8_1)
            int64_t* rcx_4 = (rsi_1 << 4) + *(arg1 + 0x168)
            
            do
                uint64_t rax
                rax.b = *rcx_4 != *rbx
                
                if (zx.d(r10_1) != rax.d)
                    break
                
                r14_1 += 1
                rsi_1 += 1
                rcx_4 = &rcx_4[2]
            while (rsi_1 s< r8_1)
        
        int32_t i_1 = r14_1 - r9_1.d
        
        if (r10_1 != 0)
            if (r12_1 != r9_1.d)
                int64_t rax_1 = *(arg1 + 0x168)
                memmove((sx.q(r12_1) << 4) + rax_1, (r9_1 << 4) + rax_1, i_1 << 4)
                r10_1 = arg_18
            
            r12_1 += i_1
        else if (i_1 != 0)
            int64_t* rdi_4 = (r9_1 << 4) + 8 + *(arg1 + 0x168)
            int32_t i
            
            do
                int64_t* rbx_1 = *rdi_4
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp2_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                rdi_4 = &rdi_4[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            r10_1 = arg_18
            rbx = arg2
        
        r10_1 ^= 1
        arg_18 = r10_1
    while (rsi_1 s< r8_1)
    
    *(arg1 + 0x170) = r12_1

if (*(arg1 + 0x170) != 0)
    return 

*(arg1 + 0x2e) &= 0xf7

if (sub_140db3510(arg1 + 0x18).b != 0)
    sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))
