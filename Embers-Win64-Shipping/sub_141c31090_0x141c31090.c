// 函数: sub_141c31090
// 地址: 0x141c31090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = &data_1432051b8
int128_t zmm0 = *arg2
arg1[3] = 0
arg1[4].d = 0
*(arg1 + 8) = zmm0
arg1[5] = 0
arg1[6] = 0
arg1[7] = *arg3
void* rax_1 = arg3[1]
arg1[8] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

__builtin_memset(&arg1[9], 0, 0x40)
void* rcx = &arg1[0x11]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
arg1[0x15].d = 0xffffffff
*(arg1 + 0xac) = 0
arg1[0x17] = 0
arg1[0x18].d = 0
arg1[0x19] = 0
arg1[0x1a] = 0
int64_t* rcx_1 = arg1[7]
int32_t rax_4 = (*(*rcx_1 + 8))(rcx_1)
int64_t* rcx_2 = arg1[7]
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_4)
arg1[3].d = (temp3 - temp2) s>> 1
int32_t rax_10 = (*(*rcx_2 + 8))(rcx_2) + 2
*(arg1 + 0x1c) = rax_10
int32_t rax_11 = rax_10 + arg1[6].d
arg1[6].d = rax_11

if (rax_11 s> *(arg1 + 0x34))
    sub_140775270(&arg1[5])

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(*(arg1 + 0x14))
int32_t rcx_4
rcx_4.b = mods.dp.d(temp4:temp5, arg1[3].d) != 0
arg1[4].d = rcx_4 + divs.dp.d(temp4:temp5, arg1[3].d)
int64_t var_38

if (arg1[1].d s> 0)
    do
        int64_t rbp_1 = sx.q(arg1[0xa].d)
        int32_t rax_15 = (rbp_1 + 1).d
        arg1[0xa].d = rax_15
        
        if (rax_15 s> *(arg1 + 0x54))
            sub_1407c3b60(&arg1[9])
        
        var_38 = arg1[7]
        void* rax_17 = arg1[8]
        void* var_30_1 = rax_17
        
        if (rax_17 != 0)
            *(rax_17 + 8) += 1
        
        sub_141c2ea10(&arg1[9][rbp_1 * 7], &var_38)
        i += 1
    while (i s< arg1[1].d)

int32_t i_1 = 0

if (arg1[2].d s> 0)
    do
        int64_t rsi_1 = sx.q(arg1[0xe].d)
        int32_t rax_18 = (rsi_1 + 1).d
        arg1[0xe].d = rax_18
        
        if (rax_18 s> *(arg1 + 0x74))
            sub_140775520(&arg1[0xd])
        
        var_38 = arg1[7]
        void* rax_21 = arg1[8]
        void* var_30_2 = rax_21
        
        if (rax_21 != 0)
            *(rax_21 + 8) += 1
        
        sub_141c2e870(&arg1[0xd][rsi_1 * 9], arg1[4].d, &var_38)
        i_1 += 1
    while (i_1 s< arg1[2].d)

int32_t i_4 = *(arg1 + 0xc)
int32_t rbp_2 = 0

if (i_4 s> 0)
    do
        int64_t rsi_2 = sx.q(arg1[0xc].d)
        int32_t rax_22 = (rsi_2 + 1).d
        arg1[0xc].d = rax_22
        
        if (rax_22 s> *(arg1 + 0x64))
            sub_140775520(&arg1[0xb])
        
        var_38 = arg1[7]
        void* rax_25 = arg1[8]
        void* var_30_3 = rax_25
        
        if (rax_25 != 0)
            *(rax_25 + 8) += 1
        
        sub_141c30420(&arg1[0xb][rsi_2 * 9], arg1[4].d, &var_38)
        i_4 = *(arg1 + 0xc)
        rbp_2 += 1
    while (rbp_2 s< i_4)

arg1[0x1a].d = 0

if (*(arg1 + 0xd4) != i_4)
    sub_1405c5510(&arg1[0x19], i_4)

if (i_4 s> 0)
    uint64_t i_3 = zx.q(i_4)
    uint64_t i_2
    
    do
        int64_t rsi_3 = sx.q(arg1[0x1a].d)
        int32_t rax_26 = (rsi_3 + 1).d
        arg1[0x1a].d = rax_26
        
        if (rax_26 s> *(arg1 + 0xd4))
            sub_140679a80(&arg1[0x19])
        
        if (rsi_3 != neg.q(arg1[0x19]))
            *(rsi_3 + arg1[0x19]) = 1
        
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

int64_t* rdi_1 = arg3[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp11_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg1
