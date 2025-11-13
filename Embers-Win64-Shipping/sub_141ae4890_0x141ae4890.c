// 函数: sub_141ae4890
// 地址: 0x141ae4890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xc0) = *(arg2 + 0xc0)
*(arg1 + 0xc4) = *(arg2 + 0xc4)

if (arg1 + 0xc8 != arg2 + 0xc8)
    int32_t rdi_1 = *(arg2 + 0xd0)
    int64_t r14_1 = *(arg2 + 0xc8)
    int32_t r8_1 = *(arg1 + 0xd4)
    *(arg1 + 0xd0) = rdi_1
    
    if (rdi_1 != 0 || r8_1 != 0)
        sub_1405a4c70(arg1 + 0xc8, rdi_1, r8_1)
        memcpy(*(arg1 + 0xc8), r14_1, rdi_1 * 2)
    else
        *(arg1 + 0xd4) = rdi_1

*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg1 + 0xe0) = *(arg2 + 0xe0)

if (arg1 + 0xe8 != arg2 + 0xe8)
    int64_t rdi_2 = sx.q(*(arg2 + 0x130))
    void* rbx_1 = arg1 + 0x120
    sub_1405a4aa0(rbx_1, 0, rdi_2.d, 4)
    void* rax_9 = *(arg2 + 0x128)
    void* rdx_2 = arg2 + 0x120
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_9 != 0)
        rdx_2 = rax_9
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx_2, (rdi_2 << 2).d)
    *(arg1 + 0x130) = rdi_2.d
    sub_14098dde0(arg1 + 0xe8, arg2 + 0xe8)

void* rbx_2 = arg1 + 0x144
void* r14_4 = arg2 - arg1
int64_t i_14 = 2
int64_t i

do
    void* rax_11 = r14_4 - 0xc + rbx_2
    
    if (rbx_2 - 0xc != rax_11)
        int64_t rdi_3 = sx.q(*(rbx_2 + r14_4 - 4))
        int64_t r13_1 = *rax_11
        int32_t r8_7 = *rbx_2
        *(rbx_2 - 4) = rdi_3.d
        
        if (rdi_3.d != 0 || r8_7 != 0)
            sub_140809010(rbx_2 - 0xc, rdi_3.d, r8_7)
            memcpy(*(rbx_2 - 0xc), r13_1, (rdi_3 * 0x48).d)
        else
            *rbx_2 = rdi_3.d
    
    rbx_2 += 0x10
    i = i_14
    i_14 -= 1
while (i != 1)
void* r15_2 = arg2 + 0x160
int64_t i_9 = 2
void* r13_3 = arg1 - arg2
int64_t i_18 = 2
int64_t i_1

do
    void* r12_1 = r13_3 - 8 + r15_2
    void* rax_12 = r15_2 - 8
    
    if (r12_1 != rax_12)
        int32_t j_1 = *(r15_2 + r13_3)
        void* rbx_3 = *r12_1
        
        if (j_1 != 0)
            int32_t j
            
            do
                int64_t rcx_7 = *(rbx_3 + 0x30)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                int64_t rcx_8 = *(rbx_3 + 0x18)
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                int64_t rcx_9 = *rbx_3
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                rbx_3 += 0x70
                j = j_1
                j_1 -= 1
            while (j != 1)
            rax_12 = r15_2 - 8
        
        sub_141ae3840(r12_1, *rax_12, *r15_2, *(r15_2 + r13_3 + 4), 0)
        i_9 = i_18
    
    r15_2 += 0x10
    i_1 = i_9
    i_9 -= 1
    i_18 = i_9
while (i_1 != 1)
void* rbx_4 = arg1 + 0x184
int64_t i_15 = 2
int64_t i_2

do
    int64_t* rax_14 = r14_4 - 0xc + rbx_4
    
    if (rbx_4 - 0xc != rax_14)
        int64_t rdi_4 = sx.q(*(r14_4 + rbx_4 - 4))
        int64_t r13_4 = *rax_14
        int32_t r8_11 = *rbx_4
        *(rbx_4 - 4) = rdi_4.d
        
        if (rdi_4.d != 0 || r8_11 != 0)
            sub_140638750(rbx_4 - 0xc, rdi_4.d, r8_11)
            memcpy(*(rbx_4 - 0xc), r13_4, (rdi_4 << 2).d)
        else
            *rbx_4 = rdi_4.d
    
    rbx_4 += 0x10
    i_2 = i_15
    i_15 -= 1
while (i_2 != 1)
int32_t* rbx_5 = arg1 + 0x1a4
int64_t i_16 = 2
int64_t i_3

do
    void* rax_16 = r14_4 - 0xc + rbx_5
    
    if (&rbx_5[-3] != rax_16)
        int64_t rdi_5 = sx.q(*(r14_4 + rbx_5 - 4))
        int64_t r13_5 = *rax_16
        int32_t r8_14 = *rbx_5
        rbx_5[-1] = rdi_5.d
        
        if (rdi_5.d != 0 || r8_14 != 0)
            sub_140638750(&rbx_5[-3], rdi_5.d, r8_14)
            memcpy(*(rbx_5 - 0xc), r13_5, (rdi_5 << 2).d)
        else
            *rbx_5 = rdi_5.d
    
    rbx_5 = &rbx_5[4]
    i_3 = i_16
    i_16 -= 1
while (i_3 != 1)

if (arg1 + 0x1b8 != arg2 + 0x1b8)
    int64_t rdi_6 = sx.q(*(arg2 + 0x200))
    void* rbx_6 = arg1 + 0x1f0
    sub_1405a4aa0(rbx_6, 0, rdi_6.d, 4)
    void* rax_17 = *(arg2 + 0x1f8)
    void* rdx_11 = arg2 + 0x1f0
    void* r9_3 = *(rbx_6 + 8)
    
    if (rax_17 != 0)
        rdx_11 = rax_17
    
    if (r9_3 != 0)
        rbx_6 = r9_3
    
    memcpy(rbx_6, rdx_11, (rdi_6 << 2).d)
    *(arg1 + 0x200) = rdi_6.d
    int64_t r13_6 = sx.q(*(arg2 + 0x1c0))
    *(arg1 + 0x1c0) = 0
    
    if (*(arg1 + 0x1c4) != r13_6.d)
        sub_1405a5410(arg1 + 0x1b8, r13_6.d)
    
    *(arg1 + 0x1ec) = 0
    void* rbx_7 = arg1 + 0x1c8
    *(arg1 + 0x1e8) = 0xffffffff
    sub_14059a8e0(rbx_7, r13_6.d)
    int32_t rax_18 = *(arg1 + 0x1c0) + r13_6.d
    *(arg1 + 0x1c0) = rax_18
    
    if (rax_18 s> *(arg1 + 0x1c4))
        sub_140610660(arg1 + 0x1b8)
    
    void* rdi_7 = arg2 + 0x1c8
    *(arg1 + 0x1e8) = *(arg2 + 0x1e8)
    *(arg1 + 0x1ec) = *(arg2 + 0x1ec)
    
    if (rbx_7 != rdi_7)
        sub_14059a8e0(rbx_7, *(rdi_7 + 0x18))
        int32_t rax_21 = *(rdi_7 + 0x18)
        *(rbx_7 + 0x18) = rax_21
        
        if (rax_21 != 0)
            void* r9_4 = *(rdi_7 + 0x10)
            void* r10_1 = *(rbx_7 + 0x10)
            
            if (r9_4 != 0)
                rdi_7 = r9_4
            
            if (r10_1 != 0)
                rbx_7 = r10_1
            
            memcpy(rbx_7, rdi_7, (zx.q(rax_21 + 0x1f) u>> 5 << 2).d)
    
    memcpy(*(arg1 + 0x1b8), *(arg2 + 0x1b8), (r13_6 << 4).d)

*(arg1 + 0x208) = *(arg2 + 0x208)
*(arg1 + 0x210) = *(arg2 + 0x210)
*(arg1 + 0x214) = *(arg2 + 0x214)

if (arg1 + 0x220 != arg2 + 0x220)
    int32_t i_11 = *(arg2 + 0x228)
    int64_t* rbx_9 = *(arg2 + 0x220)
    int32_t r8_25 = *(arg1 + 0x22c)
    *(arg1 + 0x228) = i_11
    
    if (i_11 != 0 || r8_25 != 0)
        sub_1405a4be0(arg1 + 0x220, i_11, r8_25)
        int64_t* rcx_24 = *(arg1 + 0x220)
        
        if (i_11 != 0)
            int32_t i_4
            
            do
                int64_t rax_25 = *rbx_9
                rbx_9 = &rbx_9[2]
                *rcx_24 = rax_25
                rcx_24 = &rcx_24[2]
                rcx_24[-1] = rbx_9[-1]
                i_4 = i_11
                i_11 -= 1
            while (i_4 != 1)
    else
        *(arg1 + 0x22c) = i_11

if (arg1 + 0x230 != arg2 + 0x230)
    int64_t rdi_8 = sx.q(*(arg2 + 0x278))
    void* rbx_10 = arg1 + 0x268
    sub_1405a4aa0(rbx_10, 0, rdi_8.d, 4)
    void* rax_27 = *(arg2 + 0x270)
    void* rdx_19 = arg2 + 0x268
    void* r9_5 = *(rbx_10 + 8)
    
    if (rax_27 != 0)
        rdx_19 = rax_27
    
    if (r9_5 != 0)
        rbx_10 = r9_5
    
    memcpy(rbx_10, rdx_19, (rdi_8 << 2).d)
    *(arg1 + 0x278) = rdi_8.d
    sub_141ae46a0(arg1 + 0x230, arg2 + 0x230)

*(arg1 + 0x280) = *(arg2 + 0x280)
sub_1405cd980(arg1 + 0x288, arg2 + 0x288)
int32_t* rbx_11 = arg1 + 0x2e4
int64_t i_10 = 2
int64_t i_5

do
    void* rax_30 = r14_4 - 0xc + rbx_11
    
    if (&rbx_11[-3] != rax_30)
        int64_t rdi_9 = sx.q(*(r14_4 + rbx_11 - 4))
        int64_t r12_3 = *rax_30
        int32_t r8_29 = *rbx_11
        rbx_11[-1] = rdi_9.d
        
        if (rdi_9.d != 0 || r8_29 != 0)
            sub_1407c3650(&rbx_11[-3], rdi_9.d, r8_29)
            memcpy(*(rbx_11 - 0xc), r12_3, (rdi_9 * 0xc).d)
        else
            *rbx_11 = 0
    
    rbx_11 = &rbx_11[4]
    i_5 = i_10
    i_10 -= 1
while (i_5 != 1)
uint64_t i_12 = zx.q((i_10 + 3).d)
int64_t* rbx_12 = arg1 + 0x2f8
uint64_t i_6

do
    sub_1405cd980(rbx_12, r14_4 + rbx_12)
    rbx_12 = &rbx_12[0xa]
    i_6 = i_12
    i_12 -= 1
while (i_6 != 1)
sub_140780c40(arg1 + 0x3e8, arg2 + 0x3e8)
*(arg1 + 0x3f8) = *(arg2 + 0x3f8)
*(arg1 + 0x408) = *(arg2 + 0x408)
*(arg1 + 0x418) = *(arg2 + 0x418)
*(arg1 + 0x428) = *(arg2 + 0x428)
*(arg1 + 0x438) = *(arg2 + 0x438)
*(arg1 + 0x448) = *(arg2 + 0x448)
*(arg1 + 0x450) = *(arg2 + 0x450)
*(arg1 + 0x460) = *(arg2 + 0x460)
*(arg1 + 0x464) = *(arg2 + 0x464)
*(arg1 + 0x470) = *(arg2 + 0x470)
*(arg1 + 0x480) = *(arg2 + 0x480)
*(arg1 + 0x490) = *(arg2 + 0x490)
sub_141a914e0(arg1 + 0x4a0, arg2 + 0x4a0)
*(arg1 + 0x5e8) = *(arg2 + 0x5e8)
*(arg1 + 0x5ec) = *(arg2 + 0x5ec)
*(arg1 + 0x5f0) = *(arg2 + 0x5f0)
*(arg1 + 0x600) = *(arg2 + 0x600)
*(arg1 + 0x610) = *(arg2 + 0x610)
*(arg1 + 0x620) = *(arg2 + 0x620)
*(arg1 + 0x630) = *(arg2 + 0x630)
*(arg1 + 0x640) = *(arg2 + 0x640)
*(arg1 + 0x650) = *(arg2 + 0x650)
*(arg1 + 0x652) = *(arg2 + 0x652)

if (arg1 + 0x658 != arg2 + 0x658)
    int64_t rdi_10 = sx.q(*(arg2 + 0x660))
    int64_t r14_5 = *(arg2 + 0x658)
    int32_t r8_32 = *(arg1 + 0x664)
    *(arg1 + 0x660) = rdi_10.d
    
    if (rdi_10.d != 0 || r8_32 != 0)
        sub_140808f70(arg1 + 0x658, rdi_10.d, r8_32)
        memcpy(*(arg1 + 0x658), r14_5, (rdi_10 * 0x18).d)
    else
        *(arg1 + 0x664) = 0

sub_140780c40(arg1 + 0x668, arg2 + 0x668)
sub_140780c40(arg1 + 0x678, arg2 + 0x678)
sub_140780c40(arg1 + 0x688, arg2 + 0x688)

if (arg1 + 0x698 != arg2 + 0x698)
    int32_t i_13 = *(arg1 + 0x6a0)
    
    if (i_13 != 0)
        int64_t* rbx_15 = *(arg1 + 0x698) + 0x18
        int32_t i_7
        
        do
            sub_140745b20(rbx_15)
            rbx_15 = &rbx_15[5]
            i_7 = i_13
            i_13 -= 1
        while (i_7 != 1)
    
    int32_t i_17 = *(arg2 + 0x6a0)
    void* rdi_11 = *(arg2 + 0x698)
    int32_t r8_35 = *(arg1 + 0x6a4)
    *(arg1 + 0x6a0) = i_17
    
    if (i_17 != 0 || r8_35 != 0)
        sub_1407751d0(arg1 + 0x698, i_17, r8_35)
        int64_t* r14_7 = *(arg1 + 0x698)
        
        if (i_17 != 0)
            int64_t* rbx_16 = &r14_7[3]
            int64_t* rdi_12 = rdi_11 + 8
            int32_t i_8
            
            do
                *r14_7 = rdi_12[-1]
                rbx_16[-2] = *rdi_12
                rbx_16[-1] = rdi_12[1]
                *rbx_16 = 0
                rbx_16[1].d = 0
                
                if (&rdi_12[2] != rbx_16 && rdi_12[3].d != 0)
                    int64_t* rcx_42 = rdi_12[2]
                    
                    if (rcx_42 != 0)
                        (*(*rcx_42 + 0x40))(rcx_42, rbx_16)
                
                r14_7 = &r14_7[5]
                rbx_16 = &rbx_16[5]
                rdi_12 = &rdi_12[5]
                i_8 = i_17
                i_17 -= 1
            while (i_8 != 1)
    else
        *(arg1 + 0x6a4) = 0

sub_141ae4400(arg1 + 0x6a8, arg2 + 0x6a8)
sub_141ae4400(arg1 + 0x6b8, arg2 + 0x6b8)
sub_141ae4500(arg1 + 0x6c8, arg2 + 0x6c8)
*(arg1 + 0x6d8) = *(arg2 + 0x6d8)
*(arg1 + 0x6d9) ^= (*(arg1 + 0x6d9) ^ *(arg2 + 0x6d9)) & 1
char rax_46 = *(arg1 + 0x6d9)
char rcx_46 = ((rax_46 ^ *(arg2 + 0x6d9)) & 2) ^ rax_46
*(arg1 + 0x6d9) = rcx_46
*(arg1 + 0x6d9) = ((rcx_46 ^ *(arg2 + 0x6d9)) & 4) ^ rcx_46
return arg1
