// 函数: sub_140e43150
// 地址: 0x140e43150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140e3cbd0(arg1, 0x10, arg2)
uint64_t rax_1 = sub_140e3cbd0(arg1, 8, arg2)
int32_t rsi_1 = rax - 3
arg1[0x23].d = rax_1.d

if (rsi_1 != ((rax_1 << 1) + 3).d || (rax_1 - 1).d u> 3)
    sub_140e43530(arg1, 0xffffff0c)
    noreturn

if (rax_1.d s> 0)
    int64_t i = 0
    void* __offset(_SETJMP_FLOAT128, 0x234) r14_1 = arg1 + 0x234
    
    do
        int32_t j = sub_140e3cbd0(arg1, 8, arg2)
        int32_t rax_2 = sub_140e3cbd0(arg1, 8, arg2)
        int32_t r9_1 = *(arg1 + 0x1cc)
        int32_t rcx_5 = 0
        int64_t r8_1 = 0
        rsi_1 -= 2
        
        if (r9_1 s> 0)
            void* __offset(_SETJMP_FLOAT128, 0x200) rdx_1 = &arg1[0x20]
            
            while (j != *rdx_1)
                rcx_5 += 1
                r8_1 += 1
                rdx_1 += 4
                
                if (rcx_5 s>= r9_1)
                    goto label_140e4335a
        
        if (r9_1 s<= 0 || rcx_5 s>= r9_1)
        label_140e4335a:
            sub_140e43530(arg1, 0xffffff0d)
            noreturn
        
        *r14_1 = rcx_5
        *(arg1 + (r8_1 << 2) + 0x254) = (rax_2 & 0xf) + 4
        i += 1
        *(arg1 + (r8_1 << 2) + 0x244) = rax_2 s>> 4 & 0xf
        r14_1 += 4
    while (i s< sx.q(rax_1.d))

*(arg1 + 0x264) = sub_140e3cbd0(arg1, 8, arg2)
*(arg1 + 0x268) = sub_140e3cbd0(arg1, 8, arg2)
arg1[0x27].d = sub_140e3cbd0(arg1, 4, arg2)
int32_t result = sub_140e3cbd0(arg1, 4, arg2)
bool cond:0 = *(arg1 + 0x118) != 0
*(arg1 + 0x26c) = result

if (not(cond:0))
    *(arg1 + 0x264) = 0
    *(arg1 + 0x268) = 0x3f

int32_t i_2 = rsi_1 - 3

if (rsi_1 != 3)
    int32_t i_1
    
    do
        int32_t rcx_10 = *(arg1 + 0x24f4)
        int32_t rdi_2 = *(arg1 + 0x24f8)
        result = rcx_10 - 8
        *(arg1 + 0x24f4) = result
        int32_t rdi_8
        
        if (result s> 0)
            rdi_8 = rdi_2 << 8
        else
            *(arg1 + 0x24f8) = rdi_2 << rcx_10.b
            int32_t rax_8 = sub_140e3cd90(arg1, arg2)
            result = sub_140e3cd90(arg1, arg2)
            int32_t rcx_13 = *(arg1 + 0x24f4)
            *(arg1 + 0x24f4) = rcx_13 + 0x10
            rdi_8 = (rax_8 << 8 | (*(arg1 + 0x24f8) & 0xffff0000) | result) << (neg.d(rcx_13)).b
        
        *(arg1 + 0x24f8) = rdi_8
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
