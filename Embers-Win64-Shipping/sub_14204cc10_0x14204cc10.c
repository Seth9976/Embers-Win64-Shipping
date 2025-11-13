// 函数: sub_14204cc10
// 地址: 0x14204cc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8
char* rax = sub_1419c5110(arg1, &arg_8, arg2, 0)
int64_t rdi = sx.q(*(arg3 + 0x80))
int32_t r8_1 = (rdi + 1).d
*(arg3 + 0x80) = r8_1

if (r8_1 s> *(arg3 + 0x84))
    sub_14088f7f0(arg3)

*(arg3 + (rdi << 3)) = *rax
char* rax_2 = sub_1419c5110(arg1, &arg_8, &arg2[2], 1)
int64_t rdi_1 = sx.q(*(arg3 + 0x80))
int32_t rcx_2 = (rdi_1 + 1).d
*(arg3 + 0x80) = rcx_2

if (rcx_2 s> *(arg3 + 0x84))
    sub_14088f7f0(arg3)

*(arg3 + (rdi_1 << 3)) = *rax_2
char* rax_4 = sub_1419c5110(arg1, &arg_8, &arg2[4], 2)
int64_t rdi_2 = sx.q(*(arg3 + 0x80))
int32_t rcx_5 = (rdi_2 + 1).d
*(arg3 + 0x80) = rcx_5

if (rcx_5 s> *(arg3 + 0x84))
    sub_14088f7f0(arg3)

*(arg3 + (rdi_2 << 3)) = *rax_4
int32_t i = arg2[0xe].d

if (i != 0)
    int32_t rsi_3 = 0
    
    if (i s> 0)
        do
            char* rax_6 = sub_1419c5110(arg1, &arg_8, &arg2[(sx.q(rsi_3) + 3) * 2], rsi_3.b + 5)
            int64_t rdi_3 = sx.q(*(arg3 + 0x80))
            int32_t rcx_8 = (rdi_3 + 1).d
            *(arg3 + 0x80) = rcx_8
            
            if (rcx_8 s> *(arg3 + 0x84))
                sub_14088f7f0(arg3)
            
            rsi_3 += 1
            *(arg3 + (rdi_3 << 3)) = *rax_6
            i = arg2[0xe].d
        while (rsi_3 s< i)
    
    while (i s< 4)
        char* rax_8 = sub_1419c5110(arg1, &arg_8, &arg2[(sx.q(arg2[0xe].d) + 2) * 2], i.b + 5)
        int64_t rsi_4 = sx.q(*(arg3 + 0x80))
        int32_t rcx_11 = (rsi_4 + 1).d
        *(arg3 + 0x80) = rcx_11
        
        if (rcx_11 s> *(arg3 + 0x84))
            sub_14088f7f0(arg3)
        
        i += 1
        *(arg3 + (rsi_4 << 3)) = *rax_8

if (*(arg1 + 0x250) == 0)
    *(arg1 + 0x250) = data_1439c9138
    *(arg1 + 0x260) = 0

void* r8_12 = &arg2[0x11]

if (*r8_12 == 0)
    int32_t var_20_1 = 0
    void** var_28 = &data_1439c9120
    r8_12 = &var_28
    int32_t var_1c_1 = 0x4080000

char* rax_11 = sub_1419c5110(arg1, &arg_8, r8_12, 0xd)
int64_t rdi_4 = sx.q(*(arg3 + 0x80))
int32_t rcx_14 = (rdi_4 + 1).d
*(arg3 + 0x80) = rcx_14

if (rcx_14 s> *(arg3 + 0x84))
    sub_14088f7f0(arg3)

*(arg3 + (rdi_4 << 3)) = *rax_11
char* rax_13 = sub_1419c5110(arg1, &arg_8, &arg2[0x21], 3)
int64_t rdi_5 = sx.q(*(arg3 + 0x80))
int32_t rcx_17 = (rdi_5 + 1).d
*(arg3 + 0x80) = rcx_17

if (rcx_17 s> *(arg3 + 0x84))
    sub_14088f7f0(arg3)

int64_t result = *rax_13
*(arg3 + (rdi_5 << 3)) = result
return result
