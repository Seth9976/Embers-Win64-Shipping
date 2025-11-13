// 函数: sub_14220baf0
// 地址: 0x14220baf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].w = arg2[1].w
*(arg1 + 6) = *(arg2 + 6)
*(arg1 + 7) = *(arg2 + 7)
arg1[2].b = arg2[2].b
*(arg1 + 9) = *(arg2 + 9)
*(arg1 + 0xa) = *(arg2 + 0xa)
*(arg1 + 0xb) = *(arg2 + 0xb)
arg1[3].b ^= (arg1[3].b ^ arg2[3].b) & 1
char rcx = ((arg1[3].b ^ arg2[3].b) & 2) ^ arg1[3].b
arg1[3].b = rcx
char rax_9 = ((arg2[3].b ^ rcx) & 4) ^ rcx
arg1[3].b = rax_9
char rcx_1 = ((arg2[3].b ^ rax_9) & 8) ^ rax_9
arg1[3].b = rcx_1
char rax_10 = ((arg2[3].b ^ rcx_1) & 0x10) ^ rcx_1
arg1[3].b = rax_10
char rdx = ((arg2[3].b ^ rax_10) & 0x20) ^ rax_10
arg1[3].b = rdx
char rcx_2 = ((arg2[3].b ^ rdx) & 0x40) ^ rdx
arg1[3].b = rcx_2
arg1[3].b = ((arg2[3].b ^ rcx_2) & 0x7f) ^ arg2[3].b
*(arg1 + 0xd) ^= (*(arg1 + 0xd) ^ *(arg2 + 0xd)) & 1
char rcx_3 = ((*(arg1 + 0xd) ^ *(arg2 + 0xd)) & 2) ^ *(arg1 + 0xd)
*(arg1 + 0xd) = rcx_3
char rax_13 = ((rcx_3 ^ *(arg2 + 0xd)) & 4) ^ rcx_3
*(arg1 + 0xd) = rax_13
char rcx_4 = ((rax_13 ^ *(arg2 + 0xd)) & 8) ^ rax_13
*(arg1 + 0xd) = rcx_4
char rax_14 = ((rcx_4 ^ *(arg2 + 0xd)) & 0x10) ^ rcx_4
*(arg1 + 0xd) = rax_14
char rcx_5 = ((rax_14 ^ *(arg2 + 0xd)) & 0x20) ^ rax_14
*(arg1 + 0xd) = rcx_5
char rax_15 = ((rcx_5 ^ *(arg2 + 0xd)) & 0x40) ^ rcx_5
*(arg1 + 0xd) = rax_15
*(arg1 + 0xd) = ((rax_15 ^ *(arg2 + 0xd)) & 0x7f) ^ *(arg2 + 0xd)
*(arg1 + 0xe) ^= (*(arg1 + 0xe) ^ *(arg2 + 0xe)) & 1
char rcx_6 = ((*(arg1 + 0xe) ^ *(arg2 + 0xe)) & 2) ^ *(arg1 + 0xe)
*(arg1 + 0xe) = rcx_6
char rax_17 = ((*(arg2 + 0xe) ^ rcx_6) & 4) ^ rcx_6
*(arg1 + 0xe) = rax_17
char rcx_7 = ((*(arg2 + 0xe) ^ rax_17) & 8) ^ rax_17
*(arg1 + 0xe) = rcx_7
char rax_18 = ((*(arg2 + 0xe) ^ rcx_7) & 0x10) ^ rcx_7
*(arg1 + 0xe) = rax_18
char rdx_1 = ((*(arg2 + 0xe) ^ rax_18) & 0x20) ^ rax_18
*(arg1 + 0xe) = rdx_1
char rcx_8 = ((*(arg2 + 0xe) ^ rdx_1) & 0x40) ^ rdx_1
*(arg1 + 0xe) = rcx_8
*(arg1 + 0xe) = ((*(arg2 + 0xe) ^ rcx_8) & 0x7f) ^ *(arg2 + 0xe)
*(arg1 + 0xf) ^= (*(arg1 + 0xf) ^ *(arg2 + 0xf)) & 1
*(arg1 + 0xf) ^= (*(arg1 + 0xf) ^ *(arg2 + 0xf)) & 2
*(arg1 + 0x10) = *(arg2 + 0x10)
arg1[6] = arg2[6]
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[9].b = arg2[9].b
*(arg1 + 0x25) = *(arg2 + 0x25)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x38) = *(arg2 + 0x38)
sub_140780bc0(&arg1[0x12], &arg2[0x12])
arg1[0x16] = arg2[0x16]
arg1[0x17] = arg2[0x17]
*(arg1 + 0x60) = *(arg2 + 0x60)
arg1[0x1a] = arg2[0x1a]
arg1[0x1b] = arg2[0x1b]
*(arg1 + 0x70) = *(arg2 + 0x70)
arg1[0x1e] = arg2[0x1e]
*(arg1 + 0x7c) = *(arg2 + 0x7c)
arg1[0x21] = arg2[0x21]
arg1[0x22] = arg2[0x22]
*(arg1 + 0x8c) = *(arg2 + 0x8c)
arg1[0x25] = arg2[0x25]
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
arg1[0x30] = arg2[0x30]
arg1[0x31] = arg2[0x31]
arg1[0x32] = arg2[0x32]
arg1[0x33] = arg2[0x33]
sub_14220b910(&arg1[0x34], &arg2[0x34])
sub_14220b910(&arg1[0x38], &arg2[0x38])
*(arg1 + 0xf0) = *(arg2 + 0xf0)
*(arg1 + 0xf8) = *(arg2 + 0xf8)
*(arg1 + 0x100) = *(arg2 + 0x100)

if (*(arg2 + 0x108) == 0)
    int64_t* rbx_2 = *(arg1 + 0x108)
    
    if (rbx_2 != 0)
        *(arg1 + 0x108) = 0
        sub_140596eb0(&rbx_2[2])
        sub_140745b20(rbx_2)
        j_sub_140a74f90(rbx_2)
else
    if (*(arg1 + 0x108) == 0)
        int64_t* rax_44 = j_sub_140a82f30(0x28)
        
        if (rax_44 == 0)
            rax_44 = nullptr
        else
            *rax_44 = 0
            rax_44[1].d = 0
            rax_44[2] = 0
            rax_44[3] = 0
            rax_44[4] = 2
        
        int64_t* rbx_1 = *(arg1 + 0x108)
        
        if (rbx_1 != rax_44)
            *(arg1 + 0x108) = rax_44
            
            if (rbx_1 != 0)
                sub_140596eb0(&rbx_1[2])
                sub_140745b20(rbx_1)
                j_sub_140a74f90(rbx_1)
    
    sub_14220bf60(*(arg1 + 0x108), *(arg2 + 0x108))

*(arg1 + 0x110) = *(arg2 + 0x110)
int64_t* rbx_3 = *(arg2 + 0x128)
int64_t var_18 = *(arg2 + 0x120)

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (&var_18 != &arg1[0x48])
    var_18.o = *(arg1 + 0x120)
    *(arg1 + 0x120) = var_18.o

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        int64_t rdx_8 = *rbx_3
        (*rdx_8)(rbx_3, rdx_8)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx_3
            (*(r8_1 + 8))(rbx_3, 1, r8_1)

return arg1
