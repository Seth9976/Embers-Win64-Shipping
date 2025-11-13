// 函数: sub_141fdced0
// 地址: 0x141fdced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)
void*** r15 = rax

if (rax == 0)
    r15 = nullptr
else
    *r15 = &data_143296868
    int64_t* rax_1 = j_sub_140a82f30(0x50)
    int64_t* rsi_1 = rax_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        *rax_1 = 0
        rax_1[1] = 0
        rax_1[5] = 0
        rax_1[2].d = 0xffffffff
        *(rax_1 + 0x14) = 0
        int32_t rcx = *(rax_1 + 0xc)
        rax_1[1].d = 0
        
        if (rcx s< 0 && rcx != 0)
            sub_1405a5130(rax_1, 0)
        
        rsi_1[3].d = 0
        int32_t i_1 = 4
        rsi_1[4].d = 0x3f800000
        *(rsi_1 + 0x1c) = 1
        rsi_1[6] = 0
        rsi_1[7] = 0
        rsi_1[8] = 4
        
        if (*(rsi_1 + 0x44) s< 4)
            sub_140775520(&rsi_1[7])
        
        int64_t* r14_1 = rsi_1[7]
        void* rdi_1 = &r14_1[5]
        int32_t i
        
        do
            *r14_1 = 0
            __builtin_memset(rdi_1 - 0x20, 0, 0x20)
            __builtin_memset(rdi_1, 0, 0x18)
            sub_141feb720(r14_1)
            r14_1 = &r14_1[9]
            rdi_1 += 0x48
            i = i_1
            i_1 -= 1
        while (i != 1)
        rsi_1[9].d = 0xffffffff
        *(rsi_1 + 0x4c) = 0
    
    r15[1] = rsi_1
    r15[2].w = 0

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = r15

*arg1 = r15
arg1[1] = rax_2
return arg1
