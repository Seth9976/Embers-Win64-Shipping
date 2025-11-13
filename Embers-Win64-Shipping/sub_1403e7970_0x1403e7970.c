// 函数: sub_1403e7970
// 地址: 0x1403e7970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t result_1 = 0
int64_t r10 = sx.q(arg2)
int32_t r9 = 0
int64_t r8 = 0
int32_t var_b8[0x20]
void* r14 = &var_b8[(zx.q(r10.d) & 1) * 0x10]

if (arg2 s> 0)
    do
        int32_t rax_5 = sx.d(*(arg1 + (r8 << 1)))
        r8 += 1
        r9 += rax_5
        *(r14 + (r8 << 2) - 4) = rax_5 << 0xc
    while (r8 s< r10)

uint64_t result

if (arg2 s<= 0 || r9 s< 0x1000)
    int32_t i_3 = arg2 - 1
    int64_t i_2 = sx.q(i_3)
    uint64_t r8_1 = 0x40000000
    uint64_t var_c8_1 = 0x40000000
    
    if (i_3 s<= 0)
    label_1403e7b46:
        int32_t rcx_11 = *r14
        
        if (rcx_11 + 0xffef9e u<= 0x1ffdf3c)
            int64_t rax_34 = sx.q(neg.d(rcx_11 << 7))
            result_1 =
                ((sx.q(0x40000000 - ((rax_34 * rax_34) s>> 0x20).d) * sx.q(r8_1.d)) s>> 0x20).d << 2
    else
        while (true)
            int32_t rcx = *(r14 + (i_2 << 2))
            
            if (rcx + 0xffef9e u> 0x1ffdf3c)
                break
            
            int64_t rbp_1 = sx.q(neg.d(rcx << 7))
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(0x40000000 - ((rbp_1 * rbp_1) s>> 0x20).d)
            int32_t rax_13 = temp1_1 ^ temp0_1
            int32_t rcx_3
            
            if (rax_13 == temp0_1)
                rcx_3 = 0x20
            else
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_13 - temp0_1)
                rcx_3 = 0x1f - temp0_2
            
            void* r11_1 = r14
            int64_t rdx_2 =
                sx.q(sub_1403e3870(0x40000000 - ((rbp_1 * rbp_1) s>> 0x20).d, 0x20 - rcx_3 + 0x1e))
            int64_t rbx_2 = sx.q(0x20 - rcx_3)
            r8_1 = zx.q(
                ((sx.q(0x40000000 - ((rbp_1 * rbp_1) s>> 0x20).d) * sx.q(var_c8_1.d)) s>> 0x20).d
                << 2)
            var_c8_1 = r8_1
            r14 = &var_b8[(zx.q(i_3) & 1) * 0x10]
            
            if (i_2 s> 0)
                int64_t i_1 = i_2
                void* r8_6 = r11_1 + ((i_2 - 1) << 2)
                void* rdx_3 = r14
                int64_t i
                
                do
                    int32_t rcx_6 =
                        *(r11_1 - r14 + rdx_3) - ((((sx.q(*r8_6) * rbp_1) s>> 0x1e) + 1) s>> 1).d
                    int32_t rax_28
                    
                    if (rbx_2 != 1)
                        rax_28 = ((((sx.q(rcx_6) * rdx_2) s>> ((0x20 - rcx_3).b - 1)) + 1) s>> 1).d
                    else
                        int64_t rcx_8 = sx.q(rcx_6) * rdx_2
                        rax_28 = (rcx_8 s>> 1).d + (rcx_8.d & rbx_2.d)
                    
                    *rdx_3 = rax_28
                    rdx_3 += 4
                    r8_6 -= 4
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                r8_1 = var_c8_1
            
            i_3 -= 1
            i_2 -= 1
            
            if (i_3 s<= 0)
                goto label_1403e7b46
    
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
