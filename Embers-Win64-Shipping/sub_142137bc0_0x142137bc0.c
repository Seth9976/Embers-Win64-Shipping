// 函数: sub_142137bc0
// 地址: 0x142137bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg2
int64_t arg_18 = 0
sub_1422883b0(arg1, arg2, 0)
int64_t* r12 = &arg1[0x2a]
*arg1 = &data_1432dbcd8
r12[1].d = 0xffffffff
*(r12 + 0xc) = (arg1[0x21][1].d).b
r12[0x12] = 0
r12[0x13].d = 0
*(r12 + 0x9c) = 8
r12[0x14].d = 0xffff0101
*(r12 + 0xa4) = 0xff
r12[0x19] = 0
r12[0x1a].d = 0
*(r12 + 0xd4) = 2
r12[0x21] = 0
r12[0x22].d = 0
*(r12 + 0x114) = 3
__builtin_memset(&r12[0x23], 0, 0x18)
*r12 = &data_142e3cbf8
__builtin_memset(&r12[0x26], 0, 0x30)
r12[0x34].d = 0
*(r12 + 0x1a4) = 4
__builtin_memset(&r12[0x35], 0, 0x40)
r12[0x3d] = -1
r12[0x3e].d = 0xffffffff
__builtin_memset(r12 + 0x1f4, 0, 0x14)
r12[0x41].d = 0xffffffff
arg1[0x6c] = r13
arg1[0x6d] = 0
arg1[0x6e] = 0
arg1[0x6f] = 0
int128_t* rax_2 = (*(*r13 + 0x4b0))(r13)
*(arg1 + 0x380) = *rax_2
*(arg1 + 0x390) = rax_2[1]
int32_t* rbx_1 = r13[0x82] + 0xd8

if (sub_140a80f40() == 0)
    uint32_t rax_6
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_6.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_6.b == 0))
        void var_68
        void** rax_7 = sub_1421404d0(&var_68, nullptr, 0xff)
        *(*rax_7 + 0x10) = rbx_1
        void* rcx_8 = *rax_7
        int64_t* rbx_2 = *(rcx_8 + 0x20)
        
        if (rbx_2 != 0)
            rbx_2[9].d += 1
        
        sub_1407c9450(rcx_8, rax_7[1], rax_7[2].d, 1)
        
        if (rbx_2 != 0)
            rbx_2[9].d -= 1
            
            if (rbx_2[9].d == 1)
                sub_140a2f6e0(rbx_2)
    else
        int32_t* var_90 = rbx_1
        sub_14213bbd0(&var_90, &data_143f02b98)
else
    if (rbx_1[0x2a] == 0xffffffff)
        (*(*(rbx_1 + 0xa0) + 0x28))(&rbx_1[0x28])
    else if (*rbx_1 == 0)
        sub_1419ba620(&rbx_1[0x28])
    
    if (rbx_1[8] == 0xffffffff)
        (*(*(rbx_1 + 0x18) + 0x28))(&rbx_1[6])
    else if (*rbx_1 == 0)
        sub_1419ba620(&rbx_1[6])

sub_14236aa10(r13[0x82] + 0xf0, r12)
void arg_20
int32_t* rax_8 = sub_140b5e500(&arg_20, 0xfa)
void* r15 = arg1[0x6c]
int32_t var_94 = 0
arg1[0x23] = (*rax_8).q
int32_t i_2 = arg1[0x6e].d
int32_t r14 = *(r15 + 0x440)

if (i_2 != 0)
    int64_t* rbx_4 = &arg1[0x6d][8]
    int32_t i
    
    do
        int64_t rcx_14 = *rbx_4
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        sub_1405d1550(&rbx_4[-1])
        rbx_4[-8] = &data_14301de90
        sub_1405d1550(&rbx_4[-3])
        rbx_4 = &rbx_4[0xe]
        i = i_2
        i_2 -= 1
    while (i != 1)
    r12 = &arg1[0x2a]

arg1[0x6e].d = 0

if (*(arg1 + 0x374) != r14)
    sub_1408e7380(&arg1[0x6d], r14)

int32_t i_1 = 0

if (*(r15 + 0x440) s> 0)
    void** r14_1 = nullptr
    
    do
        int64_t rbx_5 = sx.q(arg1[0x6e].d)
        void* r13_1 = *(r14_1 + *(r15 + 0x438))
        int32_t rax_11 = (rbx_5 + 1).d
        arg1[0x6e].d = rax_11
        
        if (rax_11 s> *(arg1 + 0x374))
            sub_1405fdd60(&arg1[0x6d])
        
        void*** rcx_21
        
        if (rbx_5 * 0x70 == neg.q(arg1[0x6d]))
            rcx_21 = nullptr
        else
            rcx_21 = sub_142137890(&arg1[0x6d][rbx_5 * 0xe], r13_1, r12, i_1)
        
        i_1 += 1
        r14_1 = &r14_1[1]
        void var_80
        int64_t rcx_23 = *sub_142126870(rcx_21[6], &var_80, arg1[0x21][1].d)
        arg1[0x6f] |= rcx_23
    while (i_1 s< *(r15 + 0x440))
    
    r13 = arg2

char rax_15 = sub_142292f00()

if (rax_15 != 0 || (*(arg1 + 0x37b) & 8) == 0)
    rax_15 = 0x20

arg1[7].b &= 0xdf
arg1[7].b |= rax_15
void* rbx_6 = *(r13[0x82] + 0x20)

if (rbx_6 != 0)
    void* rax_17 = sub_142527690()
    void* rcx_24 = *(rbx_6 + 0x10)
    int64_t rax_18 = sx.q(*(rax_17 + 0x38))
    
    if (rax_18.d s<= *(rcx_24 + 0x38) && *(*(rcx_24 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
        sub_1420e3ab0(rbx_6)

int64_t* rcx_26 = data_143f5b298
void arg_8
(*(*rcx_26 + 0x300))(rcx_26, r13, &arg_8)
void var_78
sub_140acc920(&var_78, &arg_8)
return arg1
