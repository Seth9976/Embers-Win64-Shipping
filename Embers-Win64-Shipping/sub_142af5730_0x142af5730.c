// 函数: sub_142af5730
// 地址: 0x142af5730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 0xffffffff

char* r10 = &arg1[1]
uint32_t i_1 = zx.d(*arg1)
char* rcx_1 = zx.q(*arg3) + arg2
int32_t rbx = 0
int32_t rsi = 0
uint32_t i = i_1
uint32_t rax_1 = zx.d(*rcx_1)
char* r11 = r10
void* rcx_2 = &rcx_1[1]
uint32_t rdx_1 = i_1 - rax_1

if (i_1 == rax_1)
    while (i != 0)
        i = zx.d(*r11)
        rsi += 1
        uint32_t rax_2 = zx.d(*rcx_2)
        r11 = &r11[1]
        rcx_2 += 1
        rdx_1 = i - rax_2
        
        if (i != rax_2)
            break

if (rdx_1 == 0)
    return 0

int32_t r11_1 = arg4 - 1
int32_t rbp_1 = 1
char* rdx_4 = zx.q(arg3[sx.q(r11_1) * 2]) + arg2
uint32_t rax_5 = zx.d(*rdx_4)
void* rdx_5 = &rdx_4[1]
uint32_t r8_1 = i_1 - rax_5

if (i_1 == rax_5)
    while (i_1 != 0)
        i_1 = zx.d(*r10)
        rbx += 1
        uint32_t rcx_3 = zx.d(*rdx_5)
        r10 = &r10[1]
        rdx_5 += 1
        r8_1 = i_1 - rcx_3
        
        if (i_1 != rcx_3)
            break

if (r8_1 == 0)
    return zx.q(r11_1)

if (r11_1 s> 1)
    do
        int32_t r10_1 = rbx
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 + rbp_1)
        int64_t rdi_1 = sx.q((temp5_1 - temp4_1) s>> 1)
        
        if (rsi s< rbx)
            r10_1 = rsi
        
        int64_t rdx_7 = sx.q(r10_1)
        char* r8_5 = zx.q(arg3[rdi_1 * 2]) + rdx_7 + arg2
        uint32_t i_2 = zx.d(arg1[rdx_7])
        void* r9_1 = &arg1[rdx_7 + 1]
        uint32_t rcx_4 = zx.d(*r8_5)
        void* r8_6 = &r8_5[1]
        uint32_t rax_11 = i_2 - rcx_4
        
        if (i_2 == rcx_4)
            while (i_2 != 0)
                i_2 = zx.d(*r9_1)
                r10_1 += 1
                uint32_t rcx_5 = zx.d(*r8_6)
                r9_1 += 1
                r8_6 += 1
                rax_11 = i_2 - rcx_5
                
                if (i_2 != rcx_5)
                    break
        
        if (rax_11 s>= 0)
            if (rax_11 == 0)
                return zx.q(rdi_1.d)
            
            rbp_1 = (rdi_1 + 1).d
            rsi = r10_1
        else
            r11_1 = rdi_1.d
            rbx = r10_1
    while (rbp_1 s< r11_1)

return 0xffffffff
