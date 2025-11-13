// 函数: sub_142be5c60
// 地址: 0x142be5c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0x2010 u> *(arg2 + 0x108))
    sub_142b9a750(arg2, 8)
    noreturn

uint32_t rcx_7 =
    ((zx.d(*(arg1 + 4)) << 8 | zx.d(*(arg1 + 5))) << 8 | zx.d(*(arg1 + 6))) << 8 | zx.d(*(arg1 + 7))

if (rcx_7 u> (*(arg2 + 0x108)).d - arg1.d || rcx_7 u< 0x2010)
    sub_142b9a750(arg2, 8)
    noreturn

void* r11 = arg1 + 0x200c
void* r10 = arg1 + 0x200d
void* r9 = arg1 + 0x200e
void* arg_20 = r11
void* r8_1 = arg1 + 0x200f
void* arg_18 = r10
uint32_t r13_6 = ((zx.d(*r11) << 8 | zx.d(*(arg1 + 0x200d))) << 8 | zx.d(*r9)) << 8 | zx.d(*r8_1)
void* arg_10 = r9
void* arg_8 = r8_1
int32_t temp0
int32_t temp1
temp0:temp1 = mulu.dp.d(0xaaaaaaab, (*(arg2 + 0x108)).d - (arg1 + 0x2010).d)

if (r13_6 u> temp0 u>> 3)
    sub_142b9a750(arg2, 8)
    noreturn

uint32_t rdi = 0
int32_t r12 = 0

if (r13_6 != 0)
    do
        uint32_t rbx_7 = ((zx.d(*(r11 + 4)) << 8 | zx.d(*(r10 + 4))) << 8 | zx.d(*(r9 + 4))) << 8
            | zx.d(*(r8_1 + 4))
        uint32_t r15_7 = ((zx.d(*(r11 + 8)) << 8 | zx.d(*(r10 + 8))) << 8 | zx.d(*(r9 + 8))) << 8
            | zx.d(*(r8_1 + 8))
        
        if (rbx_7 u> r15_7)
            sub_142b9a750(arg2, 8)
            noreturn
        
        if (r12 != 0 && rbx_7 u<= rdi)
            sub_142b9a750(arg2, 8)
            noreturn
        
        if (arg2[0x11].d s>= 1)
            int32_t rax_20 = arg2[0x12].d
            uint32_t rdi_2 = r15_7 - rbx_7
            
            if (rdi_2 u> rax_20 || (
                    ((zx.d(*(r11 + 0xc)) << 8 | zx.d(*(r10 + 0xc))) << 8 | zx.d(*(r9 + 0xc))) << 8
                    | zx.d(*(r8_1 + 0xc))) u>= rax_20 - rdi_2)
                sub_142b9a750(arg2, 0x10)
                noreturn
            
            int32_t i_2 = rdi_2 + 1
            
            if ((rbx_7 & 0xffff0000) == 0)
                if ((r15_7 & 0xffff0000) != 0)
                    sub_142b9a750(arg2, 8)
                    noreturn
                
                if (i_2 != 0)
                    int32_t i
                    
                    do
                        uint32_t rdx_5 = zx.d(rbx_7.w)
                        
                        if ((*((zx.q(rdx_5) u>> 3) + arg1 + 0xc) & (0x80 s>> (rdx_5.b & 7)).b) != 0)
                            sub_142b9a750(arg2, 8)
                            noreturn
                        
                        rbx_7 += 1
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
            else if (i_2 != 0)
                int32_t i_1
                
                do
                    uint64_t rbp_8 = zx.q(rbx_7.w)
                    uint32_t r8_4 = rbx_7 u>> 0x10
                    
                    if ((*((zx.q(r8_4) u>> 3) + arg1 + 0xc) & (0x80 s>> (r8_4.b & 7)).b) == 0)
                        sub_142b9a750(arg2, 8)
                        noreturn
                    
                    if ((*((rbp_8 u>> 3) + arg1 + 0xc) & (0x80 s>> (rbp_8.b & 7)).b) == 0)
                        sub_142b9a750(arg2, 8)
                        noreturn
                    
                    rbx_7 += 1
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
        
        r8_1 += 0xc
        r12 += 1
        r9 += 0xc
        rdi = r15_7
        r10 += 0xc
        r11 += 0xc
    while (r12 u< r13_6)

return 0
