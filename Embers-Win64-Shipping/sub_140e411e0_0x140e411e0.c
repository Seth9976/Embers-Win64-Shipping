// 函数: sub_140e411e0
// 地址: 0x140e411e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140e3cbd0(arg1, 8, arg2)
uint32_t rax_1 = sub_140e3cbd0(arg1, 8, arg2)
uint32_t rsi = rax_1

if (rax != 0xff || rax_1 != 0xd8)
    int32_t rbp_1 = 0xfff
    
    while (true)
        int32_t rcx_1 = *(arg1 + 0x24f4)
        uint32_t r14_1 = rsi
        int32_t rdi_1 = *(arg1 + 0x24f8)
        rsi = rdi_1 u>> 0x18
        *(arg1 + 0x24f4) = rcx_1 - 8
        int32_t rdi_7
        
        if (rcx_1 - 8 s> 0)
            rdi_7 = rdi_1 << 8
        else
            *(arg1 + 0x24f8) = rdi_1 << rcx_1.b
            int32_t rax_3 = sub_140e3cd90(arg1, arg2)
            int32_t rax_4 = sub_140e3cd90(arg1, arg2)
            int32_t rcx_4 = *(arg1 + 0x24f4)
            *(arg1 + 0x24f4) = rcx_4 + 0x10
            rdi_7 = (rax_3 << 8 | (*(arg1 + 0x24f8) & 0xffff0000) | rax_4) << (neg.d(rcx_4)).b
        
        *(arg1 + 0x24f8) = rdi_7
        
        if (r14_1 != 0xff)
        label_140e412b9:
            int32_t temp0_1 = rbp_1
            rbp_1 -= 1
            
            if (temp0_1 != 1)
                continue
        else if (rsi == 0xd8)
            if (*(arg1 + 0x24fb) == 0xff)
                break
        else if (rsi != 0xd9)
            goto label_140e412b9
        
        sub_140e43530(arg1, 0xffffff11)
        noreturn

int32_t rax_5
int512_t zmm1
rax_5, zmm1 = sub_140e41de0(arg1, arg2)

if (rax_5 s>= 0xc0)
    if (rax_5 s<= 0xc1)
        goto label_140e41317
    
    if (rax_5 == 0xc2)
        *(arg1 + 0x118) = 1
    label_140e41317:
        int32_t rax_6 = sub_140e3cbd0(arg1, 0x10, zmm1)
        int32_t rax_7 = sub_140e3cbd0(arg1, 8, zmm1)
        
        if (rax_7 != 8)
            sub_140e43530(arg1, 0xffffff05)
            noreturn
        
        int32_t rax_8 = sub_140e3cbd0(arg1, rax_7 + 8, zmm1)
        *(arg1 + 0x10c) = rax_8
        
        if (rax_8 - 1 u> 0x3fff)
            sub_140e43530(arg1, 0xffffff06)
            noreturn
        
        int32_t rax_10 = sub_140e3cbd0(arg1, 0x10, zmm1)
        *(arg1 + 0x108) = rax_10
        
        if (rax_10 - 1 u> 0x3fff)
            sub_140e43530(arg1, 0xffffff07)
            noreturn
        
        int32_t rax_12 = sub_140e3cbd0(arg1, 8, zmm1)
        *(arg1 + 0x1cc) = rax_12
        
        if (rax_12 s> 4)
            sub_140e43530(arg1, 0xffffff08)
            noreturn
        
        int32_t result = rax_12 + ((rax_12 + 4) << 1)
        
        if (rax_6 != result)
            sub_140e43530(arg1, 0xffffff09)
            noreturn
        
        int32_t i = 0
        
        if (rax_12 s> 0)
            void* __offset(_SETJMP_FLOAT128, 0x1d0) rdi_9 = &arg1[0x1d]
            
            do
                *(rdi_9 + 0x30) = sub_140e3cbd0(arg1, 8, zmm1)
                *rdi_9 = sub_140e3cbd0(arg1, 4, zmm1)
                *(rdi_9 + 0x10) = sub_140e3cbd0(arg1, 4, zmm1)
                result = sub_140e3cbd0(arg1, 8, zmm1)
                *(rdi_9 + 0x20) = result
                rdi_9 += 4
                i += 1
            while (i s< *(arg1 + 0x1cc))
        
        return result
    
    if (rax_5 == 0xc9)
        sub_140e43530(arg1, 0xffffff0f)
        noreturn

sub_140e43530(arg1, 0xffffff12)
noreturn
