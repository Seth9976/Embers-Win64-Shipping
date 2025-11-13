// 函数: sub_140405130
// 地址: 0x140405130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t rdi = sx.q(arg3)
void* r15 = arg1
int64_t r9 = sx.q(arg2 * rdi.d)
int64_t rax_4 = r9 << 2
int64_t r10 = rax_4 + 0xf

if (r10 u<= rax_4)
    r10 = 0xffffffffffffff0

int64_t result = r10 & 0xfffffffffffffff0
__chkstk(result)
int64_t r13 = 0
int64_t r8 = sx.q(arg2)
void var_68
void* rbx = &var_68 - result + 0x20
int64_t rsi_1 = 0

if (arg4 != 0)
    void* r11_1 = &data_143700598 + (rdi << 2)
    
    if (rdi.d s> 0)
        do
            int64_t i = 0
            
            if (r8 s>= 4)
                int32_t* r9_1 = r15 + ((rsi_1 + (rdi << 1)) << 2)
                
                do
                    *(rbx + ((sx.q(*r11_1) * r8 + i) << 2)) = r9_1[neg.q(rdi) * 2]
                    *(rbx + ((sx.q(*r11_1) * r8 + i) << 2) + 4) = r9_1[neg.q(rdi)]
                    *(rbx + ((sx.q(*r11_1) * r8 + i) << 2) + 8) = *r9_1
                    result = zx.q(r9_1[rdi])
                    int64_t rcx_11 = sx.q(*r11_1) * r8 + i
                    i += 4
                    r9_1 = &r9_1[rdi * 4]
                    *(rbx + (rcx_11 << 2) + 0xc) = result.d
                while (i s< r8 - 3)
                
                r15 = arg1
            
            if (i s< r8)
                int32_t* r9_2 = r15 + ((rdi * i + rsi_1) << 2)
                
                do
                    result = zx.q(*r9_2)
                    r9_2 = &r9_2[rdi]
                    int64_t rcx_14 = sx.q(*r11_1) * r8 + i
                    i += 1
                    *(rbx + (rcx_14 << 2)) = result.d
                while (i s< r8)
            
            rsi_1 += 1
            r11_1 += 4
        while (rsi_1 s< rdi)
else if (rdi.d s> 0)
    int64_t r12_2 = 0
    result = r8 << 2
    void* r14_3 = rbx
    var_48 = rbx
    
    do
        int64_t rdi_4 = 0
        
        if (r8 s>= 4)
            void* rcx_15 = r14_3
            void* rdx = r15 + ((rsi_1 + (rdi << 1)) << 2)
            int64_t i_6 = ((r8 - 4) u>> 2) + 1
            rdi_4 = i_6 << 2
            int64_t i_1
            
            do
                rcx_15 += 0x10
                *(rcx_15 - 0x10) = *(rdx + (neg.q(rdi) << 3))
                *(rcx_15 - 0xc) = *(rdx + (neg.q(rdi) << 2))
                *(rcx_15 - 8) = *rdx
                int32_t rax_16 = *(rdx + (rdi << 2))
                rdx += rdi << 4
                *(rcx_15 - 4) = rax_16
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
            r14_3 = var_48
            r15 = arg1
            result = r8 << 2
        
        if (rdi_4 s< r8)
            void* rcx_16 = rbx + ((r12_2 + rdi_4) << 2)
            int64_t i_7 = r8 - rdi_4
            void* rdx_1 = r15 + ((rdi * rdi_4 + rsi_1) << 2)
            int64_t i_2
            
            do
                int32_t rax_21 = *rdx_1
                rdx_1 += rdi << 2
                rcx_16 += 4
                *(rcx_16 - 4) = rax_21
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
            result = r8 << 2
        
        r14_3 += result
        rsi_1 += 1
        r12_2 += r8
        var_48 = r14_3
    while (rsi_1 s< rdi)

if (r9 s>= 4)
    void* rcx_17 = r15 + 4
    void* rdx_3 = rbx - r15
    int64_t i_5 = ((r9 - 4) u>> 2) + 1
    r13 = i_5 << 2
    int64_t i_3
    
    do
        int32_t rax_22 = *(rdx_3 + rcx_17 - 4)
        rcx_17 += 0x10
        *(rcx_17 - 0x14) = rax_22
        *(rcx_17 - 0x10) = *(rdx_3 + rcx_17 - 0x10)
        *(rcx_17 - 0xc) = *(rdx_3 + rcx_17 - 0xc)
        result = zx.q(*(rdx_3 + rcx_17 - 8))
        *(rcx_17 - 8) = result.d
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

if (r13 s< r9)
    void* rcx_18 = r15 + (r13 << 2)
    int64_t i_8 = r9 - r13
    int64_t i_4
    
    do
        result = zx.q(*(rcx_18 + rbx - r15))
        rcx_18 += 4
        *(rcx_18 - 4) = result.d
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)

__security_check_cookie(rax_1 ^ &var_48)
return result
