// 函数: sub_14266fd80
// 地址: 0x14266fd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142640930(arg1)
*(arg1 + 0x404) = 0x41200000
*(arg1 + 0x40c) = 0x400
*arg1 = &data_143458f60
arg1[0x44] = &data_143459718
arg1[0x87].d = 0x3fa66666
arg1[0x8c].d = 0x45000000
arg1[0x80].d = (arg1[0x80].d & 0xffff7fff) | 0x3440c
int32_t rax_4 = *(arg1 + 0x474) & 0xfffffd63
*(arg1 + 0x464) = 0x45000000
arg1[0x8f].d = 0x3f800000
*(arg1 + 0x474) = rax_4 | 0x102
arg1[0x91] = 0
arg1[0x92] = 0
arg1[0x93] = 2
int32_t rax_6 = arg1[1].d
*(arg1 + 0x474) &= 0xffffffdf
arg1[0x94].d = 0xd
arg1[0x95] = 0
*(arg1 + 0x47c) = 0x3f7fbe77
arg1[0x8d].w = 0x101
*(arg1 + 0x46c) = 2
arg1[0x8e].d = 2
*(arg1 + 0x43c) = 0x400
arg1[0x88].d = 0x100000
arg1[0x96].d = 0

if (((rax_6 u>> 4).b & 1) == 0)
    arg1[0x57] = sub_1426817d0
    arg1[0x58] = sub_1426817d0
    arg1[0x59] = sub_1426978c0
    arg1[0x5a] = sub_142697720
    arg1[0x5b] = sub_14268d060
    int64_t* rax_8 = j_sub_140a82f30(0xe0)
    int64_t* rax_9
    
    if (rax_8 == 0)
        rax_9 = nullptr
    else
        rax_9 = sub_142670630(rax_8, arg1)
    
    arg1[0x95] = rax_9
    int64_t var_28
    int64_t* rax_11 = sub_142643800(&var_28, sub_14269c3a0(), 0)
    int64_t rbp_1 = sx.q(arg1[0x74].d)
    int32_t rcx_2 = (rbp_1 + 1).d
    arg1[0x74].d = rcx_2
    
    if (rcx_2 s> *(arg1 + 0x3a4))
        sub_1405c4e40(&arg1[0x73])
    
    int64_t* rcx_6 = &arg1[0x73][rbp_1 * 4]
    *rcx_6 = 0
    *rcx_6 = *rax_11
    *rax_11 = 0
    rcx_6[1].d = rax_11[1].d
    *(rcx_6 + 0xc) = *(rax_11 + 0xc)
    rax_11[1] = 0
    rcx_6[2].d = rax_11[2].d
    rcx_6[3] = rax_11[3]
    int64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t* rax_18 = sub_142643800(&var_28, sub_14269c2c0(), 0x3e)
    int64_t rbp_2 = sx.q(arg1[0x74].d)
    int32_t rcx_9 = (rbp_2 + 1).d
    arg1[0x74].d = rcx_9
    
    if (rcx_9 s> *(arg1 + 0x3a4))
        sub_1405c4e40(&arg1[0x73])
    
    int64_t* rcx_13 = &arg1[0x73][rbp_2 * 4]
    *rcx_13 = 0
    *rcx_13 = *rax_18
    *rax_18 = 0
    rcx_13[1].d = rax_18[1].d
    *(rcx_13 + 0xc) = *(rax_18 + 0xc)
    rax_18[1] = 0
    rcx_13[2].d = rax_18[2].d
    rcx_13[3] = rax_18[3]
    int64_t rcx_14 = var_28
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int64_t* rax_25 = sub_142643800(&var_28, sub_14269c0f0(), 0x3f)
    int64_t rbp_3 = sx.q(arg1[0x74].d)
    int32_t rcx_16 = (rbp_3 + 1).d
    arg1[0x74].d = rcx_16
    
    if (rcx_16 s> *(arg1 + 0x3a4))
        sub_1405c4e40(&arg1[0x73])
    
    int64_t* rcx_20 = &arg1[0x73][rbp_3 * 4]
    *rcx_20 = 0
    *rcx_20 = *rax_25
    *rax_25 = 0
    rcx_20[1].d = rax_25[1].d
    *(rcx_20 + 0xc) = *(rax_25 + 0xc)
    rax_25[1] = 0
    rcx_20[2].d = rax_25[2].d
    rcx_20[3] = rax_25[3]
    int64_t rcx_21 = var_28
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)

return arg1
