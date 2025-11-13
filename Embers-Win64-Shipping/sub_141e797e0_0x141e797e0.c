// 函数: sub_141e797e0
// 地址: 0x141e797e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = nullptr
int64_t r15 = arg3
int64_t rdi = sx.q(arg2)
EnterCriticalSection(arg1 + 0xf0)
uint64_t result = zx.q(*(arg1 + 0xa8))
int32_t* rbp_3

if (result.d == *(arg1 + 0xd4))
label_141e7987e:
    rbp_3 = nullptr
else
    void* rcx_1 = *(arg1 + 0xe0)
    void* r8 = arg1 + 0xd8
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    result = zx.q(*(r8 + (((sx.q(*(arg1 + 0xe8)) - 1) & rdi) << 2)))
    
    if (result.d == 0xffffffff)
    label_141e7987e_1:
        rbp_3 = nullptr
    else
        while (true)
            rbp_3 = (sx.q(result.d) << 6) + *(arg1 + 0xa0)
            
            if (*rbp_3 == rdi.d)
                break
            
            result = zx.q(rbp_3[0xe])
            
            if (result.d == 0xffffffff)
                goto label_141e7987e_2
        
        if (result.d == 0xffffffff)
        label_141e7987e_2:
            rbp_3 = nullptr

int32_t temp0 = rbp_3[4]
rbp_3[4] -= 1

if (temp0 == 1)
    if (rdi.d == *(arg1 + 0x124))
        sub_141e86100(arg1, *(arg1 + 0x98))
    
    sub_1405f1d00(&data_143a2d4a0, rdi.d)
    r12 = *(rbp_3 + 8)
    *(rbp_3 + 8) = 0
    result = sub_141e83e30(arg1 + 0xa0, rdi.d)
else if (r15 != 0)
    int64_t rcx_4 = sx.q(rbp_3[8])
    
    if (rcx_4.d != 0)
        result = *(rbp_3 + 0x18)
        int32_t rsi_1 = 0
        int32_t r13_1 = 0
        r12.b = *result != r15
        int64_t rdi_1 = 0
        
        do
            int64_t r9_1 = sx.q(rsi_1)
            rdi_1 += 1
            rsi_1 += 1
            
            if (rdi_1 s< rcx_4)
                int64_t* rcx_5 = *(rbp_3 + 0x18) + (rdi_1 << 3)
                
                do
                    result.b = *rcx_5 != r15
                    
                    if (zx.d(r12.b) != result.d)
                        break
                    
                    rsi_1 += 1
                    rdi_1 += 1
                    rcx_5 = &rcx_5[1]
                while (rdi_1 s< rcx_4)
            
            int32_t r15_2 = rsi_1 - r9_1.d
            
            if (r12.b != 0)
                if (r13_1 != r9_1.d)
                    int64_t rcx_6 = *(rbp_3 + 0x18)
                    result = memmove(rcx_6 + (sx.q(r13_1) << 3), rcx_6 + (r9_1 << 3), r15_2 << 3)
                
                r13_1 += r15_2
            
            r15 = arg3
            r12.b ^= 1
        while (rdi_1 s< rcx_4)
        
        r12 = nullptr
        rbp_3[8] = r13_1

if (arg1 != -0xf0)
    result = LeaveCriticalSection(arg1 + 0xf0)

if (r12 == 0)
    return result

(*(*r12 + 0x28))(r12)
sub_141e895d0(r12)
jump(**r12)
