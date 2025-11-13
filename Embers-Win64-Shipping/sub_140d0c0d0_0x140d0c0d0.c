// 函数: sub_140d0c0d0
// 地址: 0x140d0c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    *(arg1 + 0x40) = sub_140a84c80(rcx, 0, 0)

void* result = zx.q(*(arg1 + 8) - *(arg1 + 0x34))
int32_t rbp
int32_t r8_1

if (result.d u< 4)
    rbp = 1
    r8_1 = 1
else
    uint32_t rax_3 = result.d u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_3 + 8)
    int32_t rcx_1
    
    if (rax_3 == 0xfffffff8)
        rcx_1 = 0x20
    else
        rcx_1 = 0x1f - temp0_2
    
    result = zx.q(rax_3 + 7)
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(result.d)
    char r8
    
    if (rax_3 == 0xfffffff9)
        r8 = 0x20
    else
        r8 = 0x1f - temp0_3
    
    rbp = 1
    r8_1 = 1 << ((not.d(rcx_1 << 0x1a s>> 0x1f)).b & (0x20 - r8))

*(arg1 + 0x48) = r8_1

if (r8_1 != 0)
    result = sub_1405a4aa0(arg1 + 0x38, 0, r8_1, 4)
    int32_t rbx_1 = 0
    int32_t i = 0
    
    if (*(arg1 + 0x48) s> 0)
        do
            void* result_1 = *(arg1 + 0x40)
            int64_t rdx_3 = (sx.q(*(arg1 + 0x48)) - 1) & sx.q(i)
            result = arg1 + 0x38
            
            if (result_1 != 0)
                result = result_1
            
            i += 1
            *(result + (rdx_3 << 2)) = 0xffffffff
        while (i s< *(arg1 + 0x48))
    
    int32_t r15_1 = *(arg1 + 8)
    int32_t i_1 = r15_1 - *(arg1 + 0x34)
    
    if (r15_1 != *(arg1 + 0x34))
        do
            if (rbx_1 s>= 0 && rbx_1 s< *(arg1 + 0x28))
                void* rax_6 = *(arg1 + 0x20)
                void* rcx_7 = arg1 + 0x10
                
                if (rax_6 != 0)
                    rcx_7 = rax_6
                
                int32_t rax_7 = rbx_1
                
                if (rbx_1 s< 0)
                    rax_7 = rbx_1 + 0x1f
                
                result = sx.q(rax_7 s>> 5)
                
                if ((*(rcx_7 + (result << 2)) & rbp) != 0)
                    int64_t rcx_8 = *(arg3 + 8)
                    int64_t rdi_2 = sx.q(arg2[4] * rbx_1) + *arg1
                    int64_t arg_8 = rdi_2
                    int32_t rax_11 = (*arg3)(rcx_8, &arg_8)
                    int32_t rcx_11 = (*(arg1 + 0x48) - 1) & rax_11
                    int64_t r9_3 = sx.q(rcx_11)
                    *(sx.q(arg2[1]) + rdi_2) = rcx_11
                    void* rax_13 = arg1 + 0x38
                    void* rdx_5 = *(arg1 + 0x40)
                    
                    if (rdx_5 != 0)
                        rax_13 = rdx_5
                    
                    *(sx.q(*arg2) + rdi_2) = *(rax_13 + (((sx.q(*(arg1 + 0x48)) - 1) & r9_3) << 2))
                    result = arg1 + 0x38
                    void* result_2 = *(arg1 + 0x40)
                    
                    if (result_2 != 0)
                        result = result_2
                    
                    i_1 -= 1
                    *(result + (((sx.q(*(arg1 + 0x48)) - 1) & r9_3) << 2)) = rbx_1
            
            rbx_1 += 1
            rbp = rol.d(rbp, 1)
        while (i_1 != 0)

return result
