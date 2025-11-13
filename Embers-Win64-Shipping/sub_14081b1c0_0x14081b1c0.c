// 函数: sub_14081b1c0
// 地址: 0x14081b1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*arg1 = &data_142dd6138
arg1[2].d = arg2
*(arg1 + 0x14) = arg3
arg1[3] = arg4

if (arg4 != 0)
    *(arg4 + 8) += 1

arg1[4] = 0
arg1[5] = 0
arg1[6] = 0x3fc00000
arg1[7].d = 0
__builtin_memset(&arg1[8], 0, 0x1c)
__builtin_memset(&arg1[0xc], 0, 0x1c)
arg1[0x10] = 0
arg1[0x11].d = 0
__builtin_memset(&arg1[0x12], 0, 0x20)
void* rcx = &arg1[0x16]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
__builtin_memset(&arg1[0x1e], 0, 0x2c)
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1] = 0
    *rax_1 = &data_142dd6130
    rax_1[2] = 0

int64_t* rcx_1 = arg1[0x10]
arg1[0x10] = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        (**rcx_1)(rcx_1, 1)

arg1[0x24].d = 0
*(arg1 + 0x124) = 0xff
__builtin_memset(&arg1[0x25], 0, 0x14)
arg1[0x28] = 0
arg1[0x29] = 0x1b
sub_1407c36f0(&arg1[0x28], 0)
void* rcx_3 = arg1[0x28]

if ((rcx_3.b & 1) != 0)
    rcx_3 = (rcx_3 s>> 1) + &arg1[0x28]

UnDecorator::getReferenceType(rcx_3, u"Niagara GPU Global CBuffer", 0x36)
arg1[0x2a].d = 0
arg1[0x2b].d = 0
*(arg1 + 0x15c) = 0xff
__builtin_memset(&arg1[0x2c], 0, 0x14)
arg1[0x2f] = 0
arg1[0x30] = 0x1b
sub_1407c36f0(&arg1[0x2f], 0)
void* rcx_6 = arg1[0x2f]

if ((rcx_6.b & 1) != 0)
    rcx_6 = (rcx_6 s>> 1) + &arg1[0x2f]

UnDecorator::getReferenceType(rcx_6, u"Niagara GPU System CBuffer", 0x36)
arg1[0x31].d = 0
arg1[0x32].d = 0
*(arg1 + 0x194) = 0xff
__builtin_memset(&arg1[0x33], 0, 0x14)
arg1[0x36] = 0
arg1[0x37] = 0x1a
sub_1407c36f0(&arg1[0x36], 0)
void* rcx_9 = arg1[0x36]

if ((rcx_9.b & 1) != 0)
    rcx_9 = (rcx_9 s>> 1) + &arg1[0x36]

UnDecorator::getReferenceType(rcx_9, u"Niagara GPU Owner CBuffer", 0x34)
arg1[0x38].d = 0
arg1[0x39].d = 0
*(arg1 + 0x1cc) = 0xff
__builtin_memset(&arg1[0x3a], 0, 0x14)
arg1[0x3d] = 0
arg1[0x3e] = 0x1c
sub_1407c36f0(&arg1[0x3d], 0)
void* rcx_12 = arg1[0x3d]

if ((rcx_12.b & 1) != 0)
    rcx_12 = (rcx_12 s>> 1) + &arg1[0x3d]

UnDecorator::getReferenceType(rcx_12, u"Niagara GPU Emitter CBuffer", 0x38)
arg1[0x3f].d = 0
arg1[0x40].d = data_14399fa54
arg1[0x41] = 0
arg1[0x42] = 0
*(arg1 + 0x224) = 0
*(arg1 + 0x22c) = 0x3f800000
*(arg1 + 0x234) = 0
*(arg1 + 0x23c) = 0x3f800000
*(arg1 + 0x244) = 0
*(arg1 + 0x24c) = 0x3f800000
*(arg1 + 0x254) = 0
*(arg1 + 0x25c) = 0x3f800000
*(arg1 + 0x264) = 0
*(arg1 + 0x26c) = 0x3f800000
*(arg1 + 0x274) = 0
*(arg1 + 0x27c) = 0x3f800000
*(arg1 + 0x284) = 0
*(arg1 + 0x28c) = 0x3f800000
*(arg1 + 0x294) = 0
*(arg1 + 0x29c) = 0x3f800000
memset(&arg1[0x44], 0, 0xb0)
__builtin_memset(&arg1[0x5a], 0, 0x1c)
void* rcx_15 = &arg1[0x63]
arg1[0x5e].d = 0
*(arg1 + 0x2f4) = 0
__builtin_memset(&arg1[0x5f], 0, 0x20)
*(rcx_15 + 0x10) = 0
*(rcx_15 + 0x18) = 0
*(rcx_15 + 0x1c) = 0x80
void* rax_4 = *(rcx_15 + 0x10)

if (rax_4 != 0)
    rcx_15 = rax_4

*rcx_15 = 0
*(rcx_15 + 8) = 0
void* rcx_16 = &arg1[0x6d]
arg1[0x67].d = 0xffffffff
*(arg1 + 0x33c) = 0
arg1[0x69] = 0
arg1[0x6a].d = 0
arg1[0x6b] = 0
arg1[0x6c] = 0
*(rcx_16 + 0x10) = 0
*(rcx_16 + 0x18) = 0
*(rcx_16 + 0x1c) = 0x80
void* rax_5 = *(rcx_16 + 0x10)

if (rax_5 != 0)
    rcx_16 = rax_5

*rcx_16 = 0
*(rcx_16 + 8) = 0
arg1[0x71].d = 0xffffffff
*(arg1 + 0x38c) = 0
arg1[0x73] = 0
arg1[0x74].d = 0

if (arg1[3] != 0)
    void*** var_28 = nullptr
    void*** rax_6 = sub_140a84c80(0, 0x20, 0)
    var_28 = rax_6
    int32_t var_20_1 = 2
    
    if (rax_6 != 0)
        rax_6[1] = arg1
        *rax_6 = &data_142dd90e0
        rax_6[3] = sub_140a387b0()
        *rax_6 = &data_142dd9138
    
    sub_142064a90(arg1[3], &var_28, 0xb7, &data_143ce39a0)
    void*** rax_9
    
    if (var_20_1 == 0)
        rax_9 = var_28
    label_14081b6a6:
        
        if (rax_9 != 0)
            sub_140a74f90(rax_9)
    else
        void*** rcx_18 = var_28
        
        if (rcx_18 != 0)
            (*rcx_18)[7](rcx_18, 0)
            rax_9 = var_28
            
            if (rax_9 != 0)
                rax_9 = sub_140a84c80(rax_9, 0, 0)
                var_28 = rax_9
            
            int32_t var_20_2 = 0
            goto label_14081b6a6

arg1[0x24].d = 0x10
sub_1407e9120(&arg1[0x24])
arg1[0x2b].d = 0x20
sub_1407e9120(&arg1[0x2b])
arg1[0x32].d = 0x1f0
sub_1407e9120(&arg1[0x32])
arg1[0x39].d = 0x20
sub_1407e9120(&arg1[0x39])
return arg1
