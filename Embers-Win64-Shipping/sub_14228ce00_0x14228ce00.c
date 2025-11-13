// 函数: sub_14228ce00
// 地址: 0x14228ce00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(*(arg2 + 0x10)), sx.q(*(arg2 + 0x14)))
int32_t i = 0
int32_t rax_1 = 0

if ((arg1[5].b & 1) == 0)
    rax_1 = *(arg2 + 0x10)

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_1
int32_t* rdx_1 = *rcx

if (&rdx_1[1] u> rcx[1])
    int32_t* rdx_2 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_2, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_2, 4)
else
    arg_8 = *rdx_1
    *rcx += 4

int32_t rcx_4 = arg_8

if (rcx_4 != 0)
    char rax_5 = *(arg1 + 0x29)
    
    if ((rax_5 & 1) != 0 || rcx_4 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rcx_4 s> 0x1000000))
        *(arg1 + 0x29) = rax_5 | 1
    else
        *(arg2 + 0x10) = rcx_4
        
        if ((arg1[5].b & 1) != 0)
            sub_1405da9e0(arg2 + 8, rcx_4, *(arg2 + 0x14))
            rcx_4 = *(arg2 + 0x10)
        
        (*(*arg1 + 0x150))(arg1, *(arg2 + 8), sx.q(rcx_4))
    
label_14228ceea:
    
    if ((arg1[5].b & 1) != 0)
        *(arg2 + 0x18) = *(arg2 + 0x10)
else if ((arg1[5].b & 1) != 0)
    *(arg2 + 0x10) = 0
    
    if (*(arg2 + 0x14) != 0)
        sub_1405c5510(arg2 + 8, 0)
    
    goto label_14228ceea

int64_t* rax_8
int512_t zmm1
rax_8, zmm1 = sub_1423c1c90()
char rcx_6 = arg1[5].b
uint64_t var_28

if ((rcx_6 & 1) == 0)
    if ((rcx_6 & 2) != 0)
        sub_140a1d9d0(arg1, &var_28, 
            sub_140b5e690(sub_140bdece0(rax_8, &arg_8, sx.q(*(arg2 + 0x1c))), &var_28))
    label_14228cff2:
        uint64_t rcx_15 = var_28
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    
    return arg1

var_28 = 0
int32_t var_20_1 = 0
sub_140a1d9d0(arg1, &var_28, zmm1)
uint64_t rdx_6 = &data_142d40450

if (var_20_1 != 0)
    rdx_6 = var_28

int32_t rax_10 = sub_140be0d00(rax_8, *sub_140b58260(&arg_8, rdx_6, 1), 0)
*(arg2 + 0x1c) = rax_10

if (rax_10 == 2)
    data_1439c8644
    
    if (divs.dp.d(sx.q(*(arg2 + 0x10)), data_1439c8644) s> 0)
        int64_t r10_1 = 0
        
        do
            i += 1
            char* rcx_11 = *(arg2 + 8) + r10_1
            char rdx_10 = rcx_11[1]
            char r9_1 = *rcx_11
            char r8_3 = rcx_11[3]
            *rcx_11 = rcx_11[2]
            *(r10_1 + *(arg2 + 8) + 1) = rdx_10
            *(r10_1 + *(arg2 + 8) + 2) = r9_1
            *(r10_1 + *(arg2 + 8) + 3) = r8_3
            r10_1 += 4
            data_1439c8644
        while (i s< divs.dp.d(sx.q(*(arg2 + 0x10)), data_1439c8644))
    
    *(arg2 + 0x1c) = 0x25

goto label_14228cff2
