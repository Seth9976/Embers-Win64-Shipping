// 函数: sub_140d0bee0
// 地址: 0x140d0bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
sub_140a30eb0(&arg1[5], 0, 0, 4, 0)
uint64_t result = zx.q(arg1[1].d - *(arg1 + 0x24))
int32_t rbp
int32_t r8_1

if (result.d u< 4)
    rbp = 1
    r8_1 = 1
else
    uint32_t rax_1 = result.d u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_1 + 8)
    int32_t rcx_1
    
    if (rax_1 == 0xfffffff8)
        rcx_1 = 0x20
    else
        rcx_1 = 0x1f - temp0_2
    
    result = zx.q(rax_1 + 7)
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(result.d)
    char r8
    
    if (rax_1 == 0xfffffff9)
        r8 = 0x20
    else
        r8 = 0x1f - temp0_3
    
    rbp = 1
    r8_1 = 1 << ((not.d(rcx_1 << 0x1a s>> 0x1f)).b & (0x20 - r8))

arg1[6].d = r8_1

if (r8_1 != 0)
    result = sub_140a30eb0(&arg1[5], 0, r8_1, 4, 0)
    int32_t i = 0
    
    if (arg1[6].d s> 0)
        do
            void* rdx_2 = arg1[5]
            
            if ((rdx_2.b & 1) != 0)
                rdx_2 = (rdx_2 s>> 1) + &arg1[5]
            
            result = sx.q(i)
            i += 1
            *(rdx_2 + (((sx.q(arg1[6].d) - 1) & result) << 2)) = 0xffffffff
        while (i s< arg1[6].d)
    
    int32_t r14_1 = arg1[1].d
    int32_t i_1 = r14_1 - *(arg1 + 0x24)
    
    if (r14_1 != *(arg1 + 0x24))
        do
            if (rdi s>= 0 && rdi s< arg1[3].d)
                void* rcx_10 = arg1[2]
                
                if ((rcx_10.b & 1) != 0)
                    rcx_10 = (rcx_10 s>> 1) + &arg1[2]
                
                int32_t rax_4 = rdi
                
                if (rdi s< 0)
                    rax_4 = rdi + 0x1f
                
                result = sx.q(rax_4 s>> 5)
                
                if ((*(rcx_10 + (result << 2)) & rbp) != 0)
                    void* rcx_12 = *arg1
                    
                    if ((rcx_12.b & 1) != 0)
                        rcx_12 = (rcx_12 s>> 1) + arg1
                    
                    void* r15_2 = sx.q(arg2[4] * rdi) + rcx_12
                    int64_t rcx_14 = *(arg3 + 8)
                    void* arg_8 = r15_2
                    int32_t rax_8 = (*arg3)(rcx_14, &arg_8)
                    int32_t rcx_17 = (arg1[6].d - 1) & rax_8
                    *(sx.q(arg2[1]) + r15_2) = rcx_17
                    void* rdx_4 = arg1[5]
                    
                    if ((rdx_4.b & 1) != 0)
                        rdx_4 = (rdx_4 s>> 1) + &arg1[5]
                    
                    int64_t r8_2 = sx.q(rcx_17)
                    *(sx.q(*arg2) + r15_2) = *(rdx_4 + (((sx.q(arg1[6].d) - 1) & r8_2) << 2))
                    void* rcx_19 = arg1[5]
                    
                    if ((rcx_19.b & 1) != 0)
                        rcx_19 = (rcx_19 s>> 1) + &arg1[5]
                    
                    result = (sx.q(arg1[6].d) - 1) & r8_2
                    i_1 -= 1
                    *(rcx_19 + (result << 2)) = rdi
            
            rdi += 1
            rbp = rol.d(rbp, 1)
        while (i_1 != 0)

return result
