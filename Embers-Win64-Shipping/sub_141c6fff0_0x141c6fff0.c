// 函数: sub_141c6fff0
// 地址: 0x141c6fff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x8a) & 1) != 0)
    return 

sub_141c62ac0(arg1, 0xffffffff)

if (arg1[0xd2] == 0)
    return 

void* rcx = arg1[0xd3]

if (rcx == 0)
    return 

*(rcx + 0x260) = arg1[0x3f]
void* rcx_1 = arg1[0xd3]
*(rcx_1 + 0x210) ^= ((arg1[0x3e].b * 2) ^ *(rcx_1 + 0x210)) & 0x10
void* rcx_2 = arg1[0xd3]
*(rcx_2 + 0x210) ^= (arg1[0xca].b << 6 ^ *(rcx_2 + 0x210)) & 0x40
void* rcx_3 = arg1[0xd3]
*(rcx_3 + 0x212) ^= (arg1[0xca].b u>> 1 ^ *(rcx_3 + 0x212)) & 1
void* rcx_4 = arg1[0xd3]
*(rcx_4 + 0x210) ^= ((arg1[0x3e].b * 2) ^ *(rcx_4 + 0x210)) & 8
void* rcx_5 = arg1[0xd3]

if (rcx_5 + 0x610 != &arg1[0xb5])
    void* rbx_1 = rcx_5 + 0x648
    int64_t rdi_1 = sx.q(arg1[0xbe].d)
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rdx_1 = *(rbx_1 + 8)
    void* r9_1 = &arg1[0xbc]
    void* rax_6 = *(r9_1 + 8)
    
    if (rax_6 != 0)
        r9_1 = rax_6
    
    if (rdx_1 != 0)
        rbx_1 = rdx_1
    
    memcpy(rbx_1, r9_1, (rdi_1 << 2).d)
    *(rcx_5 + 0x658) = rdi_1.d
    int64_t rbp_1 = sx.q(arg1[0xb6].d)
    *(rcx_5 + 0x618) = 0
    
    if (*(rcx_5 + 0x61c) != rbp_1.d)
        sub_1405a5410(rcx_5 + 0x610, rbp_1.d)
    
    void* rbx_2 = rcx_5 + 0x620
    *(rcx_5 + 0x640) = 0xffffffff
    *(rcx_5 + 0x644) = 0
    sub_14059a8e0(rbx_2, rbp_1.d)
    int32_t rax_7 = *(rcx_5 + 0x618) + rbp_1.d
    *(rcx_5 + 0x618) = rax_7
    
    if (rax_7 s> *(rcx_5 + 0x61c))
        sub_1405a4f90(rcx_5 + 0x610)
    
    void* rdi_2 = &arg1[0xb7]
    *(rcx_5 + 0x640) = arg1[0xbb].d
    *(rcx_5 + 0x644) = *(arg1 + 0x5dc)
    
    if (rbx_2 != rdi_2)
        sub_14059a8e0(rbx_2, *(rdi_2 + 0x18))
        int32_t rax_10 = *(rdi_2 + 0x18)
        *(rbx_2 + 0x18) = rax_10
        
        if (rax_10 != 0)
            void* r9_2 = *(rdi_2 + 0x10)
            void* r10_1 = *(rbx_2 + 0x10)
            
            if (r9_2 != 0)
                rdi_2 = r9_2
            
            if (r10_1 != 0)
                rbx_2 = r10_1
            
            memcpy(rbx_2, rdi_2, (zx.q(rax_10 + 0x1f) u>> 5 << 2).d)
    
    memcpy(*(rcx_5 + 0x610), arg1[0xb5], (rbp_1 << 4).d)
    rcx_5 = arg1[0xd3]

sub_141c51970(rcx_5 + 0x268, &arg1[0x40])
*(arg1[0xd3] + 0x208) = arg1[0xbf]
*(arg1[0xd3] + 0x234) = *(arg1 + 0x654)
*(arg1[0xd3] + 0x238) = arg1[0xcb].d
*(arg1[0xd2] + 0x108) = arg1[0x3f]
*(arg1[0xd2] + 0x138) = arg1[0xc0]
*(arg1[0xd2] + 0x120) = arg1[0xc1]
int512_t zmm1_1 = sub_141c51740(arg1[0xd2] + 0x128, &arg1[0xc2])
sub_141ef6f00(arg1[0xd3], arg1[0xd2], zmm1_1)
int64_t* rcx_24 = arg1[0xd3]
int512_t zmm1_2
zmm1_2.o = zx.o(0)
(*(*rcx_24 + 0x530))(rcx_24, zmm1_2)
sub_141ef4e60(arg1, *(arg1[0xd3] + 0x8a) & 1)

if ((*(arg1 + 0x8a) & 1) == 0)
    return 

uint64_t rax = j_sub_140a82f30(0x10)

if (rax == 0)
    return 

*rax = 0
*(rax + 8) = 1
uint64_t* rcx_26 = arg1[0xd8]
arg1[0xd8] = rax
*rcx_26 = rax
