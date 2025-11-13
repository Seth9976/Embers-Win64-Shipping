// 函数: sub_141461f40
// 地址: 0x141461f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[5].d
int32_t rcx_1 = (rbx - 1) & 0x8000001f

if (rcx_1 s< 0)
    rcx_1 = ((rcx_1 - 1) | 0xffffffe0) + 1

void* result_1 = &arg1[2]
uint64_t rbx_2 = zx.q((rbx + 0x1f) u>> 5)
void* result = arg1[4]
uint32_t rdx = 0xffffffff u>> (0x1f - rcx_1.b)

if (result != 0)
    result_1 = result

int32_t rsi = 0
int32_t rbx_3

if (rbx_2.d == 0)
label_141461fb3:
    rbx_3 = 0
else
    while (true)
        rbx_2 = zx.q(rbx_2.d - 1)
        int32_t rcx_6 = *(result_1 + (rbx_2 << 2)) & rdx
        
        if (rcx_6 != 0)
            uint64_t rflags_1
            int32_t result_3
            result_3, rflags_1 = _bit_scan_reverse(rcx_6)
            result = zx.q(result_3)
            
            if (rcx_6 == 0)
                rbx_3 = rbx_2.d << 5
            else
                rbx_3 = (rbx_2.d << 5) - (0x1f - result.d) + 0x20
            
            break
        
        rdx = -1
        
        if (rbx_2.d == 0)
            goto label_141461fb3

int32_t rcx_9 = arg1[1].d

if (rbx_3 s< rcx_9)
    if (*(arg1 + 0x34) s> 0)
        uint64_t rax_1 = zx.q(arg1[6].d)
        
        if (rax_1.d != 0xffffffff)
            do
                int64_t r9 = *arg1
                void* rdx_1 = sx.q(rax_1.d) * 0xe8
                
                if (rax_1.d s< rbx_3)
                    rax_1 = zx.q(*(rdx_1 + r9 + 4))
                else
                    rax_1 = sx.q(*(rdx_1 + r9 + 4))
                    int64_t r8_1 = sx.q(*(rdx_1 + r9))
                    
                    if (rax_1.d != 0xffffffff)
                        *(rax_1 * 0xe8 + r9) = r8_1.d
                    
                    if (r8_1.d == 0xffffffff)
                        *(arg1 + 0x34) -= 1
                        arg1[6].d = rax_1.d
                    else
                        *(r8_1 * 0xe8 + *arg1 + 4) = rax_1.d
                        *(arg1 + 0x34) -= 1
            while (rax_1.d != 0xffffffff)
            
            rcx_9 = arg1[1].d
    
    if (rcx_9 != rbx_3)
        arg1[1].d = rbx_3
        sub_14092f9a0(arg1)
    
    int32_t result_2 = arg1[5].d
    result = zx.q(result_2)
    int32_t rcx_12 = result.d
    
    if (result_2 != result.d)
        int32_t r8_3 = 1
        int32_t r15_1 = 1
        int32_t r11_1 = 0
        int32_t r10_1 = 0
        int32_t r9_1 = 0
        
        if (result.d s> 0)
            do
                int32_t rbp_1 = r10_1
                
                if (r9_1 s< rbx_3 || r9_1 s>= result_2)
                    if (r11_1 != r9_1)
                        void* rax_4 = arg1[4]
                        void* rdx_4 = &arg1[2]
                        
                        if (rax_4 != 0)
                            rdx_4 = rax_4
                        
                        int64_t rax_6 = sx.q(rsi)
                        void* r10_2 = rdx_4 + (rax_6 << 2)
                        int32_t rdx_5 = *(rdx_4 + (rax_6 << 2))
                        
                        if ((*(rdx_4 + (sx.q(r10_1) << 2)) & r15_1) == 0)
                            *r10_2 = not.d(r8_3) & rdx_5
                        else
                            *r10_2 = rdx_5 | r8_3
                    
                    r11_1 += 1
                    int32_t temp1_1 = r8_3
                    int32_t temp2_1 = r8_3
                    r8_3 *= 2
                    
                    if (temp1_1 == neg.d(temp2_1))
                        r8_3 = 1
                        rsi += 1
                
                rcx_12 = arg1[5].d
                result = zx.q(r15_1 * 2)
                r9_1 += 1
                r10_1 = rbp_1 + 1
                int32_t temp3_1 = result.d
                r15_1 = 1
                
                if (temp3_1 != 0)
                    r15_1 = result.d
                
                if (temp3_1 != 0)
                    r10_1 = rbp_1
            while (r9_1 s< rcx_12)
    
    arg1[5].d = rcx_12 - (result_2 - rbx_3)

int32_t rdx_7 = arg1[1].d

if (*(arg1 + 0xc) == rdx_7)
    return result

return sub_14085a9b0(arg1, rdx_7) __tailcall
