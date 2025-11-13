// 函数: sub_141c676f0
// 地址: 0x141c676f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2] == 0)
    return 

if ((*(arg1 + 0x74) & 8) != 0)
    bool z_1
    
    if (0 == *(arg1 + 0x16c))
        *(arg1 + 0x16c) = 0
        z_1 = true
    else
        *(arg1 + 0x16c)
        z_1 = false
    
    bool z_2
    
    if (z_1)
        if (0 == *(arg1 + 0x174))
            *(arg1 + 0x174) = 0
            z_2 = true
        else
            *(arg1 + 0x174)
            z_2 = false
    
    if (not(z_1) || not(z_2))
        jump(*(*arg1 + 0x40))

bool z_3

if (0 == *(arg1 + 0x16c))
    *(arg1 + 0x16c) = 0
    z_3 = true
else
    *(arg1 + 0x16c)
    z_3 = false

if (not(z_3))
    return 

int64_t* rax_4 = arg1[0x15]

if (rax_4 != 0 && arg1[0x2c].b == 2)
    int64_t* r8_1 = arg1[2]
    int64_t* rdx_1 = rax_4
    
    if (r8_1 != 0)
        void* r8_2 = *r8_1
        
        if (r8_2 != 0)
            char rcx = *(r8_2 + 0x16d)
            
            if ((rcx & 1) != 0)
                *(r8_2 + 0x16d) = rcx | 2
                rdx_1 = arg1[0x15]
    
    int64_t var_38_1 = 0
    void* rcx_1 = *rdx_1
    rdx_1[0x12].w = (rdx_1[0x12].w & 0xfffd) | 5
    int32_t var_60_1 = *(rdx_1 + 0x8c)
    int64_t zmm1 = *(*(rcx_1 + 0x28) + 0x920)
    void** const var_28_1 = &data_142e345d8
    int64_t (* var_48)(int64_t* arg1) = sub_141c56d50
    int128_t var_20_1 = rcx_1.o
    int64_t var_10_1 = zmm1
    sub_141c56770(rcx_1, &var_48)

*(arg1 + 0x16c) = 0
*(arg1 + 0x74) &= 0xf7
arg1[0xe].d = 1
arg1[0x2e].d
arg1[0x2e].d = 0
*(arg1 + 0x174)
*(arg1 + 0x174) = 0
