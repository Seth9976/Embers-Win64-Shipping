// 函数: sub_142be2280
// 地址: 0x142be2280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0x10 u> *(arg2 + 0x108))
    sub_142b9a750(arg2, 8)
    noreturn

char* r10 = arg1 + 0xc
char* r9 = arg1 + 0xd
char* r8 = arg1 + 0xe
char* r13 = arg1 + 0xf
void* arg_18 = r10
uint32_t rcx_7 =
    ((zx.d(*(arg1 + 4)) << 8 | zx.d(*(arg1 + 5))) << 8 | zx.d(*(arg1 + 6))) << 8 | zx.d(*(arg1 + 7))
void* arg_10 = r9
void* arg_8 = r8
uint32_t r15_6 = ((zx.d(*r10) << 8 | zx.d(*r9)) << 8 | zx.d(*r8)) << 8 | zx.d(*r13)

if (rcx_7 u<= (*(arg2 + 0x108)).d - arg1.d && rcx_7 u>= 0x10 && (rcx_7 - 0x10) u/ 0xc u>= r15_6)
    uint32_t r14 = 0
    int32_t rdi_1 = 0
    
    if (r15_6 != 0)
        do
            r13 = &r13[0xc]
            uint32_t rsi_7 =
                ((zx.d(r10[4]) << 8 | zx.d(r9[4])) << 8 | zx.d(r8[4])) << 8 | zx.d(r13[-8])
            uint32_t rbp_7 =
                ((zx.d(r10[8]) << 8 | zx.d(r9[8])) << 8 | zx.d(r8[8])) << 8 | zx.d(r13[-4])
            
            if (rsi_7 u> rbp_7)
                sub_142b9a750(arg2, 8)
                noreturn
            
            if (rdi_1 != 0 && rsi_7 u<= r14)
                sub_142b9a750(arg2, 8)
                noreturn
            
            if (arg2[0x11].d s>= 1)
                int32_t rax_20 = arg2[0x12].d
                uint32_t rcx_13 = rbp_7 - rsi_7
                
                if (rcx_13 u> rax_20 || (
                        ((zx.d(r10[0xc]) << 8 | zx.d(r9[0xc])) << 8 | zx.d(r8[0xc])) << 8
                        | zx.d(*r13)) u>= rax_20 - rcx_13)
                    sub_142b9a750(arg2, 0x10)
                    noreturn
            
            r8 = &r8[0xc]
            rdi_1 += 1
            r9 = &r9[0xc]
            r14 = rbp_7
            r10 = &r10[0xc]
        while (rdi_1 u< r15_6)
    
    return 0

sub_142b9a750(arg2, 8)
noreturn
