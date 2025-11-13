// 函数: sub_1409494f0
// 地址: 0x1409494f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
arg1[2].d = arg4
*arg1 = &data_142e32dd8
__builtin_memset(&arg1[3], 0, 0x18)
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0x400
arg1[7].d = 1
arg1[8] = 0
arg1[9].d = 0xac44
*(arg1 + 0x4c) = 0
arg1[0xa].d = 0
__builtin_memset(&arg1[0xb], 0, 0x20)
arg1[0x11] = 0
arg1[0x12] = 0

if (arg1[0xb] != u"Unknown")
    arg1[0xc].d = 0
    sub_1405947f0(&arg1[0xb], 8)
    int32_t rax_1 = &arg1[0xc].d[1]
    arg1[0xc].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    *arg1[0xb] = *u"Unknown"

if (arg1[0xd] != u"Unknown")
    int32_t rdx_1 = 0
    arg1[0xe].d = 0
    
    if (*(arg1 + 0x74) != 8)
        sub_1405947f0(&arg1[0xd], 8)
        rdx_1 = arg1[0xe].d
    
    arg1[0xe].d = rdx_1 + 8
    
    if (rdx_1 + 8 s> *(arg1 + 0x74))
        sub_140594770(&arg1[0xd])
    
    *arg1[0xd] = *u"Unknown"

arg1[0xf] = 0
arg1[0x10].d = 0
arg1[0x12].d = 0

if (*(arg1 + 0x94) s<= 0xffffffff)
    sub_1405dadb0(&arg1[0x11], 0)

arg1[0x13].b &= 0xfe
arg1[0x14] = 0
arg1[0x15] = 0
InitializeCriticalSection(&arg1[0x16])
SetCriticalSectionSpinCount(&arg1[0x16], 0xfa0)
int64_t* rax_6 = sub_1410626c0(sub_1423dcff0(data_143f5b298))
int64_t rdx_2 = *rax_6
int64_t* rax_7 = (*(rdx_2 + 0x50))(rax_6, rdx_2)
int64_t* rcx_10 = arg1[5]
int64_t* r8 = rcx_10

if (rcx_10 != rax_7)
    arg1[5] = rax_7
    r8 = rax_7
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x28))(rcx_10, 1, r8)
        r8 = arg1[5]

if (r8 != 0)
    (*(*r8 + 0x38))(r8)
    int64_t* rcx_12 = arg1[5]
    int32_t rax_11 = (*(*rcx_12 + 0x78))(rcx_12, arg2)
    int64_t* rcx_13 = arg1[5]
    int32_t rbx_1 = rax_11
    int64_t r8_1 = *rcx_13
    
    if (rbx_1 == 0xffffffff)
        rbx_1 = -1
    
    int32_t rax_12 = (*(r8_1 + 0xd0))(rcx_13, 0x400, r8_1)
    int64_t* rcx_14 = arg1[5]
    *(arg1 + 0x34) = rax_12
    arg1[7].d = 3
    arg1[6].d = rbx_1
    arg1[8] = arg1
    arg1[0xa].d = 0
    arg1[9].d = (int.q(arg3.d)).d
    (*(*rcx_14 + 0x90))(rcx_14, &arg1[6])
    sub_141c48a40(arg1[5])
    int64_t* rcx_16 = arg1[5]
    int64_t var_88
    int64_t* rax_16 = (*(*rcx_16 + 0xb8))(rcx_16, &var_88)
    
    if (&arg1[0xb] != rax_16)
        int64_t rcx_17 = arg1[0xb]
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        arg1[0xb] = *rax_16
        *rax_16 = 0
        arg1[0xc].d = rax_16[1].d
        *(arg1 + 0x64) = *(rax_16 + 0xc)
        rax_16[1] = 0
    
    if (&arg1[0xd] != &rax_16[2])
        int64_t rcx_19 = arg1[0xd]
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        arg1[0xd] = rax_16[2]
        rax_16[2] = 0
        arg1[0xe].d = rax_16[3].d
        *(arg1 + 0x74) = *(rax_16 + 0x1c)
        rax_16[3] = 0
    
    arg1[0xf].d = rax_16[4].d
    *(arg1 + 0x7c) = *(rax_16 + 0x24)
    arg1[0x10].d = rax_16[5].d
    
    if (&arg1[0x11] != &rax_16[6])
        int64_t rcx_20 = arg1[0x11]
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        arg1[0x11] = rax_16[6]
        rax_16[6] = 0
        arg1[0x12].d = rax_16[7].d
        *(arg1 + 0x94) = *(rax_16 + 0x3c)
        rax_16[7] = 0
    
    arg1[0x13].b ^= (rax_16[8].b ^ arg1[0x13].b) & 1
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t rcx_23 = var_88
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    int64_t* rcx_24 = arg1[5]
    (*(*rcx_24 + 0xa0))(rcx_24)
    int64_t* rcx_25 = arg1[5]
    (*(*rcx_25 + 0x128))(rcx_25)

return arg1
