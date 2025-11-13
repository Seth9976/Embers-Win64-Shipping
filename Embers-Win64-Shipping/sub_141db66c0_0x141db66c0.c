// 函数: sub_141db66c0
// 地址: 0x141db66c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14323c0f0
sub_140d3a3a0(&arg1[1], nullptr)
int64_t* rcx_1 = &arg1[0xd]
arg1[2].d = 0
__builtin_memset(&arg1[3], 0, 0x34)
__builtin_memset(&arg1[0xa], 0, 0x18)
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax = rcx_1[2]

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
rcx_1[1] = 0
void* rcx_2 = &arg1[0x17]
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
arg1[0x15] = 0
arg1[0x16] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x28]
arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
arg1[0x1d] = 0
arg1[0x1e].d = 0
__builtin_memset(&arg1[0x1f], 0, 0x48)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_2 = *(rcx_3 + 0x10)

if (rax_2 != 0)
    rcx_3 = rax_2

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x2c].d = 0xffffffff
*(arg1 + 0x164) = 0
arg1[0x2e] = 0
arg1[0x2f].d = 0
*(arg1 + 0x183) &= 0xe0
arg1[0x30].w = 0x402
*(arg1 + 0x182) = 0
*(arg1 + 0x184) = 0
arg1[0x31].d = 0
*(arg1 + 0x18c) = 0
arg1[0x32] = 0
__builtin_memcpy(&arg1[0x33], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x40\x9c\x46", 0x14)
sub_141c31610(arg1 + 0x1ac)
sub_141e71590(arg1 + 0x1c4, 0x469c4000[0])
sub_141e71590(&arg1[0x3c], 0x3f800000[0])
*(arg1 + 0x1fc) = 0x461c4000
arg1[0x40] = 0x3f800000
arg1[0x41].d = 0
*(arg1 + 0x20c) = 0xff7fffff
arg1[0x42].d = 0x4a000000
float zmm1[0x4] = data_143f38c20
*(arg1 + 0x230) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x220) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x240) = __andps_xmmxud_memxud(data_143f38c20, data_143f38c30)
arg1[0x4a] = 0
__builtin_memcpy(&arg1[0x4b], 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
*(arg1 + 0x26c) = data_143dbb1f8.q
*(arg1 + 0x274) = data_143dbb200
sub_141e4f3c0(&arg1[0x4f])
*(arg1 + 0x329) &= 0xf0
arg1[0x4f] = &data_143209430
arg1[0x65].b = 0x83
*(arg1 + 0x32a) = 0
*(arg1 + 0x32c) = 0
__builtin_memcpy(&arg1[0x66], 
    "\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x48\x43\x00\x80\x3b\x45\x00\x80\xbb\x45", 0x14)
sub_141f7a080(&arg1[0x69])
sub_141f7a080(&arg1[0x7a])
float zmm0[0x4] = *(arg1 + 0x28c)
*(arg1 + 0x4a4) = zmm0[0]
zmm0[0] = zmm0[0] f+ *(arg1 + 0x29c)
arg1[0x8b].d = 0x469c4000
*(arg1 + 0x45c) = 0x469c4000
*(arg1 + 0x464) = 0
arg1[0x8d].d = 0x41f00000
arg1[0x95].d = zmm0[0]
__builtin_memcpy(arg1 + 0x46c, 
    "\x00\x00\x70\x42\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x40\x9c\x46\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\x9a"
"99\x99\x3e", 
    0x34)
__builtin_strncpy(&arg1[0x94], "33s?", 4)
*(arg1 + 0x4ac) = 0
sub_141f7a080(&arg1[0x96])
arg1[0xa7] = 0
arg1[0xa8] = 0
zmm0 = *(arg1 + 0x28c)
arg1[0xaa].d = zmm0[0]
zmm0[0] = zmm0[0] f+ *(arg1 + 0x29c)
arg1[0xa9].d = 0x3f800000
*(arg1 + 0x54c) = 0x3f800000
*(arg1 + 0x554) = zmm0[0]
arg1[0xab].d = 0x3f800000
sub_141f7a080(&arg1[0xac])
__builtin_memset(&arg1[0xbd], 0, 0x30)
sub_141e90730(&arg1[0xc3])
*(arg1 + 0x63c) = 0
void* rcx_13 = &arg1[0xce]
arg1[0xc8] = 0
__builtin_memcpy(&arg1[0xc9], 
    "\x00\x00\x80\x3f\x00\x40\x9c\x46\x00\x00\x80\x3f\x00\x40\x9c\x46\x0a\x00\x00\x00\x64\x00\x00\x00", 
    0x18)
arg1[0xcc] = 0
arg1[0xcd] = 0
*(rcx_13 + 0x10) = 0
*(rcx_13 + 0x18) = 0
*(rcx_13 + 0x1c) = 0x80
void* rax_4 = *(rcx_13 + 0x10)

if (rax_4 != 0)
    rcx_13 = rax_4

*rcx_13 = 0
*(rcx_13 + 8) = 0
arg1[0xd2].d = 0xffffffff
*(arg1 + 0x694) = 0
arg1[0xd4] = 0
arg1[0xd5].d = 0
__builtin_memset(&arg1[0xd6], 0, 0x20)

if (data_143f38c58 == 0)
label_141db6c2e:
    void*** rax_7 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_7 != 0)
        *rax_7 = &data_142e85898
        rax_7[1] = sub_141dd03e0
        rax_7[3] = sub_140a387b0()
        *rax_7 = &data_142e858f0
        sub_140b9e920(rax_7, &data_143f38c50)
    else if (data_143f38c58 != 0)
        int64_t* rcx_16 = data_143f38c50
        
        if (rcx_16 != 0)
            (*(*rcx_16 + 0x38))(rcx_16, 0)
            int64_t rcx_17 = data_143f38c50
            
            if (rcx_17 != 0)
                data_143f38c50 = sub_140a84c80(rcx_17, 0, 0)
            
            data_143f38c58 = 0
    
    if (rax_7 != 0)
        (*rax_7)[7](rax_7, 0)
        int64_t rax_12 = sub_140a84c80(rax_7, 0, 0)
        
        if (rax_12 != 0)
            sub_140a74f90(rax_12)
else
    int64_t* rcx_14 = data_143f38c50
    
    if (rcx_14 == 0)
        goto label_141db6c2e
    
    if ((*(*rcx_14 + 0x28))(rcx_14) == 0)
        goto label_141db6c2e

return arg1
