// 函数: sub_1419c5110
// 地址: 0x1419c5110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg3
int64_t* rdi = arg1 + 0x10
uint16_t rsi = zx.w(*(arg3 + 0xd))
int32_t r11 = arg3[1].d
char rdx = *(arg3 + 0xf)
char r9 = *(arg3 + 0xe)
int64_t rbp = sx.q(rdi[0x11].d)
char var_29 = 0
int64_t* r8 = rdi
uint16_t var_2c = rsi
int32_t var_30 = r11
char var_2a = rdx
int64_t* rax = rdi[0x10]

if (rax != 0)
    r8 = rax

int64_t r12_1 = rbp * 2
int64_t* rax_1 = r8
void* rcx = &r8[r12_1]
int32_t rax_3

if (r8 != rcx)
    while (*rax_1 != r10 || *(rax_1 + 0xc) != rsi || rax_1[1].d != r11 || *(rax_1 + 0xe) != rdx)
        rax_1 = &rax_1[2]
        
        if (rax_1 == rcx)
            goto label_1419c51cd
    
    rax_3 = ((rax_1 - r8) s>> 4).d

if (r8 == rcx || rax_3 == 0xffffffff)
label_1419c51cd:
    int32_t rax_4 = (rbp + 1).d
    rdi[0x11].d = rax_4
    
    if (rax_4 s> *(rdi + 0x8c))
        sub_14088f800(rdi, rbp.d)
    
    int64_t* rax_5 = rdi[0x10]
    
    if (rax_5 != 0)
        rdi = rax_5
    
    rax_3 = rbp.d
    *(rdi + (r12_1 << 3)) = r10.o

char rcx_2 = *(arg3 + 0xc)
*arg2 = rax_3.b
arg2[1] = rcx_2
arg2[2] = r9
*(arg2 + 6) = zx.w(rdx) & 1
*(arg2 + 4) = rsi
arg2[3] = arg4
return arg2
