// 函数: sub_140405b20
// 地址: 0x140405b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t r13 = sx.q(arg2 * arg3)
int64_t rax_4 = r13 << 2
int64_t rcx = rax_4 + 0xf

if (rcx u<= rax_4)
    rcx = 0xffffffffffffff0

uint64_t result_1 = rcx & 0xfffffffffffffff0
uint64_t result = result_1
__chkstk(result)
int64_t r11 = 0
int64_t rdx = sx.q(arg2)
int64_t r9 = sx.q(arg3)
void var_68

if (arg4 == 0)
    int64_t rsi_3 = 0
    
    if (arg3 s> 0)
        int64_t r13_1 = 0
        int64_t r15_2 = rdx << 2
        void* r14_3 = arg1
        var_48 = arg1
        
        do
            int64_t rdi_2 = 0
            
            if (rdx s>= 4)
                void* rcx_1 = r14_3
                int64_t i_6 = ((rdx - 4) u>> 2) + 1
                void* r8_2 = &var_68 - result_1 + 0x20 + ((rsi_3 + (r9 << 1)) << 2)
                rdi_2 = i_6 << 2
                int64_t i
                
                do
                    int32_t rax_28 = *rcx_1
                    rcx_1 += 0x10
                    *(r8_2 + (neg.q(r9) << 3)) = rax_28
                    *(r8_2 + (neg.q(r9) << 2)) = *(rcx_1 - 0xc)
                    *r8_2 = *(rcx_1 - 8)
                    result = zx.q(*(rcx_1 - 4))
                    *(r8_2 + (r9 << 2)) = result.d
                    r8_2 += r9 << 4
                    i = i_6
                    i_6 -= 1
                while (i != 1)
                r14_3 = var_48
                r15_2 = rdx << 2
            
            if (rdi_2 s< rdx)
                void* rcx_2 = arg1 + ((rdi_2 + r13_1) << 2)
                int64_t i_7 = rdx - rdi_2
                int32_t* r8_3 = &var_68 - result_1 + 0x20 + ((r9 * rdi_2 + rsi_3) << 2)
                int64_t i_1
                
                do
                    result = zx.q(*rcx_2)
                    rcx_2 += 4
                    *r8_3 = result.d
                    r8_3 = &r8_3[r9]
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
            
            r14_3 += r15_2
            rsi_3 += 1
            r13_1 += rdx
            var_48 = r14_3
            r11 = 0
        while (rsi_3 s< r9)
else
    int64_t rdi_1 = 0
    void* r10_1 = &data_143700598 + (r9 << 2)
    
    if (arg3 s> 0)
        do
            int64_t i_2 = 0
            
            if (rdx s>= 4)
                void* r8 = &var_68 - result_1 + 0x20 + ((rdi_1 + (r9 << 1)) << 2)
                
                do
                    *(r8 + (neg.q(r9) << 3)) = *(arg1 + ((sx.q(*r10_1) * rdx + i_2) << 2))
                    *(r8 + (neg.q(r9) << 2)) = *(arg1 + ((sx.q(*r10_1) * rdx + i_2) << 2) + 4)
                    *r8 = *(arg1 + ((sx.q(*r10_1) * rdx + i_2) << 2) + 8)
                    int64_t rax_20 = sx.q(*r10_1) * rdx + i_2
                    i_2 += 4
                    result = zx.q(*(arg1 + (rax_20 << 2) + 0xc))
                    *(r8 + (r9 << 2)) = result.d
                    r8 += r9 << 4
                while (i_2 s< rdx - 3)
            
            if (i_2 s< rdx)
                void* r8_1 = &var_68 - result_1 + 0x20 + ((r9 * i_2 + rdi_1) << 2)
                
                do
                    int64_t rax_26 = sx.q(*r10_1) * rdx + i_2
                    i_2 += 1
                    result = zx.q(*(arg1 + (rax_26 << 2)))
                    *r8_1 = result.d
                    r8_1 += r9 << 2
                while (i_2 s< rdx)
            
            rdi_1 += 1
            r10_1 += 4
            r11 = 0
        while (rdi_1 s< r9)

if (r13 s>= 4)
    void* rcx_3 = arg1 + 4
    void* rdx_2 = &var_68 - result_1 + 0x20 - arg1
    int64_t i_5 = ((r13 - 4) u>> 2) + 1
    r11 = i_5 << 2
    int64_t i_3
    
    do
        int32_t rax_35 = *(rdx_2 + rcx_3 - 4)
        rcx_3 += 0x10
        *(rcx_3 - 0x14) = rax_35
        *(rcx_3 - 0x10) = *(rdx_2 + rcx_3 - 0x10)
        *(rcx_3 - 0xc) = *(rdx_2 + rcx_3 - 0xc)
        result = zx.q(*(rdx_2 + rcx_3 - 8))
        *(rcx_3 - 8) = result.d
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

if (r11 s< r13)
    void* rcx_4 = arg1 + (r11 << 2)
    int64_t i_8 = r13 - r11
    int64_t i_4
    
    do
        result = zx.q(*(rcx_4 + &var_68 - result_1 + 0x20 - arg1))
        rcx_4 += 4
        *(rcx_4 - 4) = result.d
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)

__security_check_cookie(rax_1 ^ &var_48)
return result
