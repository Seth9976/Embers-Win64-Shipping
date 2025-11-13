// 函数: sub_142af58b0
// 地址: 0x142af58b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 0xffffffff

uint32_t i_1 = zx.d(*arg1)
void* r10 = &arg1[1]
char* rdx = *arg2
uint32_t i = i_1
int32_t rbx = 0
int32_t rsi = 0
void* r11 = r10
uint32_t rax_1 = zx.d(*rdx)
void* rdx_1 = &rdx[1]
uint32_t rcx_1 = i_1 - rax_1

if (i_1 == rax_1)
    while (i != 0)
        i = zx.d(*r11)
        rsi += 1
        uint32_t rax_2 = zx.d(*rdx_1)
        r11 += 1
        rdx_1 += 1
        rcx_1 = i - rax_2
        
        if (i != rax_2)
            break

if (rcx_1 == 0)
    return 0

int32_t r11_1 = arg3 - 1
int32_t rbp = 1
char* r8 = arg2[sx.q(r11_1) * 2]
uint32_t rax_6 = zx.d(*r8)
void* r8_1 = &r8[1]
uint32_t rdx_3 = i_1 - rax_6

if (i_1 == rax_6)
    while (i_1 != 0)
        i_1 = zx.d(*r10)
        rbx += 1
        uint32_t rcx_3 = zx.d(*r8_1)
        r10 += 1
        r8_1 += 1
        rdx_3 = i_1 - rcx_3
        
        if (i_1 != rcx_3)
            break

if (rdx_3 == 0)
    return zx.q(r11_1)

if (r11_1 s> 1)
    do
        int32_t r10_1 = rbx
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 + rbp)
        int64_t rdi_1 = sx.q((temp5_1 - temp4_1) s>> 1)
        
        if (rsi s< rbx)
            r10_1 = rsi
        
        int64_t rdx_6 = sx.q(r10_1)
        char* r9_1 = arg2[rdi_1 * 2] + rdx_6
        uint32_t i_2 = zx.d(arg1[rdx_6])
        char* r8_3 = &arg1[rdx_6 + 1]
        uint32_t rcx_6 = zx.d(*r9_1)
        void* r9_2 = &r9_1[1]
        uint32_t rax_13 = i_2 - rcx_6
        
        if (i_2 == rcx_6)
            while (i_2 != 0)
                i_2 = zx.d(*r8_3)
                r10_1 += 1
                uint32_t rcx_7 = zx.d(*r9_2)
                r8_3 = &r8_3[1]
                r9_2 += 1
                rax_13 = i_2 - rcx_7
                
                if (i_2 != rcx_7)
                    break
        
        if (rax_13 s>= 0)
            if (rax_13 == 0)
                return zx.q(rdi_1.d)
            
            rbp = (rdi_1 + 1).d
            rsi = r10_1
        else
            r11_1 = rdi_1.d
            rbx = r10_1
    while (rbp s< r11_1)

return 0xffffffff
