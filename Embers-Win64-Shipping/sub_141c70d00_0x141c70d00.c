// 函数: sub_141c70d00
// 地址: 0x141c70d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x2c].b == 0)
    return 

if (arg1[0x15] == 0)
    jump(*(*arg1 + 0x40))

int64_t* rcx = arg1[2]

if (rcx != 0)
    void* rcx_1 = *rcx
    
    if (rcx_1 != 0)
        char rax_2 = *(rcx_1 + 0x16d)
        
        if ((rax_2 & 1) != 0)
            *(rcx_1 + 0x16d) = rax_2 & 0xfd
            jump(*(*arg1 + 0x40))

bool z_1

if (0 == *(arg1 + 0x174))
    *(arg1 + 0x174) = 0
    z_1 = true
else
    *(arg1 + 0x174)
    z_1 = false

if (not(z_1))
    jump(*(*arg1 + 0x40))

bool z_2

if (0 == *(arg1 + 0x16c))
    *(arg1 + 0x16c) = 0
    z_2 = true
else
    *(arg1 + 0x16c)
    z_2 = false

if (not(z_2))
    return 

if (arg1[0x15] == 0)
    *(arg1 + 0x74) &= 0xf7
    return 

bool z_3

if (0 == arg1[0xe].d)
    arg1[0xe].d = 0
    z_3 = true
else
    arg1[0xe].d
    z_3 = false

if (z_3)
    *(arg1 + 0x74) &= 0xf7
    return 

int64_t* rax_5 = arg1[2]

if (rax_5 == 0)
    jump(*(*arg1 + 0x40))

void* rcx_3 = *rax_5

if (rcx_3 == 0)
    jump(*(*arg1 + 0x40))

if ((*(arg1 + 0x19c) & 0x20) != 0 && (*(rcx_3 + 0x16d) & 1) == 0)
    rax_5[0x20].d |= 0x8000
    void** rax_6 = arg1[0x15]
    int64_t var_38 = 0
    int32_t var_4c = 0x200
    rax_6[0x12].w &= 0xfffd
    void* rcx_4 = *rax_6
    int32_t var_50 = *(rax_6 + 0x8c)
    void** const var_28 = &data_142d42ed8
    int64_t (* var_48)(int64_t* arg1) = j_sub_141c54660
    int128_t var_20 = rcx_4.o
    sub_141c56770(rcx_4, &var_48)
    *(arg1 + 0x16c)
    *(arg1 + 0x16c) = 1
    *(arg1 + 0x74) &= 0xf7
    return 

(*(*arg1 + 0x40))(arg1)
*(arg1 + 0x74) &= 0xf7
