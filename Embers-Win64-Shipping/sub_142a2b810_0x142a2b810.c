// 函数: sub_142a2b810
// 地址: 0x142a2b810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*arg3)

if (rcx.b == 0)
    void* rdi_2 = &arg3[0x14]
    int64_t i_1 = 4
    int64_t i
    
    do
        char rax_7 = sub_142a2bcf0(arg4, *(arg1 + 0x1168))
        int64_t rdx_13 = *(arg2 + 0x188)
        
        if (rdx_13 != 0)
            uint64_t rcx_12 = zx.q(rax_7)
            *(rdx_13 + (rcx_12 << 2)) += 1
        
        *rdi_2 = rax_7
        rdi_2 += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)
    arg3[1] = arg3[0x38]
else if (rcx == 1)
    char rax_5 = sub_142a2bcf0(arg4, *(arg1 + 0x1168))
    int64_t rdx_9 = *(arg2 + 0x188)
    
    if (rdx_9 != 0)
        uint64_t rcx_8 = zx.q(rax_5)
        *(rdx_9 + (rcx_8 << 2)) += 1
    
    arg3[0x2c] = rax_5
    arg3[0x14] = rax_5
    char rax_6 = sub_142a2bcf0(arg4, *(arg1 + 0x1168))
    int64_t rdx_11 = *(arg2 + 0x188)
    
    if (rdx_11 != 0)
        uint64_t rcx_10 = zx.q(rax_6)
        *(rdx_11 + (rcx_10 << 2)) += 1
    
    arg3[1] = rax_6
    arg3[0x38] = rax_6
    arg3[0x20] = rax_6
else if (rcx == 2)
    char rax_3 = sub_142a2bcf0(arg4, *(arg1 + 0x1168))
    int64_t rdx_5 = *(arg2 + 0x188)
    
    if (rdx_5 != 0)
        uint64_t rcx_4 = zx.q(rax_3)
        *(rdx_5 + (rcx_4 << 2)) += 1
    
    arg3[0x20] = rax_3
    arg3[0x14] = rax_3
    char rax_4 = sub_142a2bcf0(arg4, *(arg1 + 0x1168))
    int64_t rdx_7 = *(arg2 + 0x188)
    
    if (rdx_7 != 0)
        uint64_t rcx_6 = zx.q(rax_4)
        *(rdx_7 + (rcx_6 << 2)) += 1
    
    arg3[1] = rax_4
    arg3[0x38] = rax_4
    arg3[0x2c] = rax_4
else
    uint64_t rdi_1 = zx.q(*(zx.q(rcx.b) + &data_143604570))
    char rax_2 = sub_142a2bcf0(arg4, rdi_1 * 9 + *(arg1 + 0x1168))
    int64_t r8_2 = *(arg2 + 0x188)
    
    if (r8_2 != 0)
        uint64_t rdx_3 = zx.q(rax_2) + rdi_1 * 0xa
        *(r8_2 + (rdx_3 << 2)) += 1
    
    arg3[1] = rax_2

int64_t rdi_4 = zx.q(arg3[1]) + 4
char result = sub_142a2bcf0(arg4, rdi_4 * 9 + *(arg1 + 0x1168))
int64_t r8_3 = *(arg2 + 0x188)

if (r8_3 != 0)
    int64_t rdx_17 = zx.q(result) + rdi_4 * 0xa
    *(r8_3 + (rdx_17 << 2)) += 1

arg3[6] = result
*(arg3 + 7) = 3
arg3[9] = 0xff
return result
