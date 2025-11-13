// 函数: sub_1429c3ef0
// 地址: 0x1429c3ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg4)
__CheckForDebuggerJustMyCode(&data_14427d007)
int32_t i = 0

if (rdi.d s> 0)
    void* r11_1 = arg3 + 8
    void* r10_1 = &arg2[5]
    
    do
        int32_t rdx = *(r11_1 - 8)
        r10_1 += 0x24
        int32_t rcx = *(r11_1 - 4)
        r11_1 += 0xc
        *(r10_1 - 0x30) = i
        int32_t rax_1 = rcx
        
        if (rdx s< rcx)
            rax_1 = rdx
        
        if (rdx s>= rcx)
            rcx = rdx
        
        *(r10_1 - 0x38) = rax_1
        *(r10_1 - 0x34) = rcx
        int32_t rcx_1 = *(r11_1 - 0x10)
        int32_t rdx_1 = *(r11_1 - 0xc)
        int32_t rax_2 = rdx_1
        *(r10_1 - 0x24) = i
        
        if (rcx_1 s< rdx_1)
            rax_2 = rcx_1
        
        if (rcx_1 s>= rdx_1)
            rdx_1 = rcx_1
        
        *(r10_1 - 0x2c) = rax_2
        *(r10_1 - 0x28) = rdx_1
        int32_t rcx_2 = *(r11_1 - 0xc)
        int32_t rdx_2 = *(r11_1 - 0x14)
        int32_t rax_3 = rdx_2
        *(r10_1 - 0x18) = i
        
        if (rcx_2 s< rdx_2)
            rax_3 = rcx_2
        
        if (rcx_2 s>= rdx_2)
            rdx_2 = rcx_2
        
        i += 1
        *(r10_1 - 0x20) = rax_3
        *(r10_1 - 0x1c) = rdx_2
    while (i s< rdi.d)

uint32_t rbx = (rdi * 3).d
uint64_t result = sub_1429c8140(arg2, 0, rbx - 1, 0, 0x26065ca)
int64_t r8_1 = sx.q(rbx)
int32_t r14 = 0
int32_t rdi_1 = 1
int64_t var_60 = r8_1

if (r8_1 s> 1)
    void* rbp_1 = nullptr
    int64_t i_4 = r8_1 - 1
    void* rbx_1 = 0xc
    int64_t i_1
    
    do
        result = zx.q(*(rbx_1 + arg2))
        
        if (*(arg2 + rbp_1) != result.d)
            int32_t rdx_3 = r14
            r14 = rdi_1
            rbp_1 = rbx_1
            result = sub_1429c8140(arg2, rdx_3, rdi_1 - 1, 1, 0x26065ca)
        
        rdi_1 += 1
        rbx_1 += 0xc
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    r8_1 = var_60

int32_t r14_1 = 0
int32_t rdi_2 = 1

if (r8_1 s> 1)
    void* rsi_1 = nullptr
    void* rbx_2 = &arg2[3]
    int64_t i_3 = r8_1 - 1
    int64_t i_2
    
    do
        if (*(rsi_1 + arg2) == *rbx_2)
            result = zx.q(*(rbx_2 + 4))
        
        if (*(rsi_1 + arg2) != *rbx_2 || *(rsi_1 + arg2 + 4) != result.d)
            int32_t rdx_4 = r14_1
            rsi_1 = rbx_2 - arg2
            r14_1 = rdi_2
            result = sub_1429c8140(arg2, rdx_4, rdi_2 - 1, 2, 0x26065ca)
        
        rdi_2 += 1
        rbx_2 += 0xc
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    r8_1 = var_60

if (r8_1 s> 0)
    int64_t r9 = 1
    void* rdi_3 = &arg2[1]
    int64_t var_50_1 = 1
    void* var_58_1 = rdi_3
    int64_t var_48_1 = r8_1
    
    while (true)
        int64_t r10_2 = sx.q(*(rdi_3 + 4))
        int32_t rbx_3 = 0
        int32_t r13_1 = *(rdi_3 - 4)
        int32_t r12_1 = *rdi_3
        int64_t rcx_6 = sx.q((r10_2 * 3).d)
        int32_t rbp_2 = *(arg3 + (rcx_6 << 2))
        int32_t arg_20
        int64_t rdx_5
        int32_t r14_2
        
        if (rbp_2 == r13_1 || rbp_2 == r12_1)
            r14_2 = *(arg3 + (rcx_6 << 2) + 4)
            
            if (r14_2 == r13_1 || r14_2 == r12_1)
                arg_20 = 0
                rdx_5 = 0
            else
                r14_2 = rbp_2
                arg_20 = 2
                rbp_2 = *(arg3 + (rcx_6 << 2) + 8)
                rdx_5 = 8
        else
            r14_2 = *(arg3 + (rcx_6 << 2) + 8)
            rdx_5 = 4
            rbp_2 = *(arg3 + (rcx_6 << 2) + 4)
            arg_20 = 1
        
        result = r10_2 * 0x58 + rdx_5
        
        if (*(result + arg1) == 0xffffffff)
            int64_t r11_2 = r9
            int32_t rsi_3 = 1
            
            if (r9 s< r8_1)
                void* r10_3 = rdi_3 + 0x10
                
                while (true)
                    int32_t r9_1 = *(r10_3 - 8)
                    
                    if (r13_1 != r9_1)
                    label_1429c4208:
                        
                        if (rsi_3 != 0)
                            break
                    else
                        int32_t r8_4 = *(r10_3 - 4)
                        
                        if (r12_1 != r8_4)
                            goto label_1429c4208
                        
                        if (rsi_3 != 0)
                            int64_t rdi_4 = sx.q(*r10_3)
                            int64_t rcx_8 = sx.q((rdi_4 * 3).d)
                            void* rdx_6 = arg3 + (rcx_8 << 2)
                            int32_t result_1 = *(arg3 + (rcx_8 << 2))
                            int64_t rdx_7
                            
                            if (result_1 == r9_1 || result_1 == r8_4)
                                result = zx.q(*(rdx_6 + 4))
                                
                                if (result.d == r9_1 || result.d == r8_4)
                                    rbx_3 = 0
                                    rdx_7 = 0
                                else
                                    rbx_3 = 2
                                    result = zx.q(result_1)
                                    result_1 = *(rdx_6 + 8)
                                    rdx_7 = 8
                            else
                                result = zx.q(*(rdx_6 + 8))
                                rbx_3 = 1
                                result_1 = *(rdx_6 + 4)
                                rdx_7 = 4
                            
                            if (rbp_2 != result.d || r14_2 != result_1)
                                r11_2 += 1
                                r10_3 += 0xc
                            else
                                result = arg1
                                
                                if (*(rdi_4 * 0x58 + rdx_7 + result) != 0xffffffff)
                                    r11_2 += 1
                                    r10_3 += 0xc
                                else
                                    rsi_3 = 0
                            
                            if (r11_2 s< var_60)
                                continue
                            
                            goto label_1429c4208
                    
                    int64_t rdx_8 = sx.q(arg2[r11_2 * 3 + 2])
                    *(arg1 + ((r10_2 * 0x16 + sx.q(arg_20)) << 2)) = rdx_8.d
                    result = zx.q(r10_2.d)
                    *(arg1 + ((rdx_8 * 0x16 + sx.q(rbx_3)) << 2)) = result.d
                    break
                
                r9 = var_50_1
                rdi_3 = var_58_1
        
        r8_1 = var_60
        rdi_3 += 0xc
        r9 += 1
        var_58_1 = rdi_3
        int64_t temp2_1 = var_48_1
        var_48_1 -= 1
        var_50_1 = r9
        
        if (temp2_1 == 1)
            break

return result
