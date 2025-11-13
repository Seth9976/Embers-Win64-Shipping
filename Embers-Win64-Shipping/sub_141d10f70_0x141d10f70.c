// 函数: sub_141d10f70
// 地址: 0x141d10f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[3].d
int32_t rcx_1 = (rdi - 1) & 0x8000001f

if (rcx_1 s< 0)
    rcx_1 = ((rcx_1 - 1) | 0xffffffe0) + 1

void* rdx = arg1[2]
uint64_t rdi_2 = zx.q((rdi + 0x1f) u>> 5)
uint32_t r8 = 0xffffffff u>> (0x1f - rcx_1.b)

if ((rdx.b & 1) != 0)
    rdx = (rdx s>> 1) + &arg1[2]

int64_t r14 = 0
int32_t arg_8 = 0
int32_t rdi_3

if (rdi_2.d == 0)
label_141d10ff8:
    rdi_3 = 0
else
    while (true)
        rdi_2 = zx.q(rdi_2.d - 1)
        int32_t rcx_6 = *(rdx + (rdi_2 << 2)) & r8
        
        if (rcx_6 != 0)
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rcx_6)
            
            if (rcx_6 == 0)
                rdi_3 = rdi_2.d << 5
            else
                rdi_3 = (rdi_2.d << 5) - (0x1f - temp0_1) + 0x20
            
            break
        
        r8 = -1
        
        if (rdi_2.d == 0)
            goto label_141d10ff8

int32_t result = arg1[1].d

if (rdi_3 s< result)
    if (*(arg1 + 0x24) s> 0)
        uint64_t r8_1 = zx.q(arg1[4].d)
        
        if (r8_1.d != 0xffffffff)
            do
                void* rdx_5 = *arg1
                char r10_1 = rdx_5.b & 1
                
                if (r8_1.d s< rdi_3)
                    if (r10_1 != 0)
                        rdx_5 = (rdx_5 s>> 1) + arg1
                    
                    r8_1 = zx.q(*(rdx_5 + sx.q(r8_1.d) * 0x50 + 4))
                else
                    int64_t r9_2 = rdx_5 s>> 1
                    void* r11_1 = r9_2 + arg1
                    
                    if (r10_1 == 0)
                        r11_1 = rdx_5
                    
                    void* rsi_1 = arg1 + r9_2
                    int64_t rcx_8 = sx.q(r8_1.d) * 0xa
                    void* rax_2 = arg1 + r9_2
                    
                    if (r10_1 == 0)
                        rax_2 = rdx_5
                    
                    int64_t r11_2 = sx.q(*(r11_1 + (rcx_8 << 3)))
                    r8_1 = sx.q(*(rax_2 + (rcx_8 << 3) + 4))
                    
                    if (r8_1.d != 0xffffffff)
                        if (r10_1 == 0)
                            rsi_1 = rdx_5
                        
                        *(rsi_1 + r8_1 * 0x50) = r11_2.d
                    
                    if (r11_2.d == 0xffffffff)
                        *(arg1 + 0x24) -= 1
                        arg1[4].d = r8_1.d
                    else
                        void* rdx_2 = *arg1
                        
                        if ((rdx_2.b & 1) != 0)
                            rdx_2 = (rdx_2 s>> 1) + arg1
                        
                        *(rdx_2 + r11_2 * 0x50 + 4) = r8_1.d
                        *(arg1 + 0x24) -= 1
            while (r8_1.d != 0xffffffff)
            
            result = arg1[1].d
    
    if (result != rdi_3)
        arg1[1].d = rdi_3
        sub_141d0e830(arg1)
    
    int32_t r13_1 = arg1[3].d
    result = arg1[3].d
    int32_t result_1 = result
    
    if (r13_1 != result)
        int32_t r8_2 = 1
        int32_t result_2 = 1
        int32_t rsi_2 = 0
        int32_t rdx_6 = 0
        int32_t r9_4 = 0
        
        if (result s> 0)
            do
                int32_t rbp_1 = rdx_6
                
                if (r9_4 s< rdi_3 || r9_4 s>= r13_1)
                    if (rsi_2 != r9_4)
                        void* r11_3 = arg1[2]
                        int64_t rcx_19 = r11_3 s>> 1
                        void* r14_1 = rcx_19 + &arg1[2]
                        char r10_2 = arg1[2].b & 1
                        
                        if (r10_2 == 0)
                            r14_1 = r11_3
                        
                        void* rcx_20 = rcx_19 + &arg1[2]
                        r14 = sx.q(arg_8)
                        
                        if (r10_2 == 0)
                            rcx_20 = r11_3
                        
                        void* r10_3 = rcx_20 + (r14 << 2)
                        int32_t rcx_21 = *(rcx_20 + (r14 << 2))
                        
                        if ((*(r14_1 + (sx.q(rdx_6) << 2)) & result_2) == 0)
                            *r10_3 = not.d(r8_2) & rcx_21
                        else
                            *r10_3 = rcx_21 | r8_2
                    
                    rsi_2 += 1
                    int32_t temp1_1 = r8_2
                    int32_t temp2_1 = r8_2
                    r8_2 *= 2
                    
                    if (temp1_1 == neg.d(temp2_1))
                        r14 = zx.q(r14.d + 1)
                        r8_2 = 1
                        arg_8 = r14.d
                
                result_1 = arg1[3].d
                result = result_2 * 2
                r9_4 += 1
                rdx_6 = rbp_1 + 1
                result_2 = 1
                
                if (result != 0)
                    result_2 = result
                
                if (result != 0)
                    rdx_6 = rbp_1
            while (r9_4 s< result_1)
    
    arg1[3].d = result_1 - (r13_1 - rdi_3)

int32_t rdx_8 = arg1[1].d

if (*(arg1 + 0xc) == rdx_8)
    return result

return sub_14119ada0(arg1, rdx_8) __tailcall
