// 函数: sub_1419ce1a0
// 地址: 0x1419ce1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x110)

if (arg2 != 0)
    *(arg1 + 0x68) = 0
    
    if (*(arg1 + 0x6c) != 0)
        sub_140638cc0(arg1 + 0x60, 0)
    
    *(arg1 + 0x90) = 0xffffffff
    *(arg1 + 0x94) = 0
    sub_14059a8e0(arg1 + 0x70, 0)
    int32_t i_8 = *(arg1 + 0xa8)
    
    if (i_8 s> 0)
        int64_t r8_1 = 0
        uint64_t i_7 = zx.q(i_8)
        uint64_t i
        
        do
            void* rcx_3 = *(arg1 + 0xa0)
            void* rax_1 = arg1 + 0x98
            int64_t rdx_2 = (sx.q(*(arg1 + 0xa8)) - 1) & r8_1
            
            if (rcx_3 != 0)
                rax_1 = rcx_3
            
            r8_1 += 1
            *(rax_1 + (rdx_2 << 2)) = 0xffffffff
            i = i_7
            i_7 -= 1
        while (i != 1)

sub_1419cdb90(arg1 + 0x30, 0)
sub_1419be170(arg1 + 0x150, arg1 + 0x10)
int32_t i_5 = *(arg1 + 0x18)
int64_t rbx_1 = *(arg1 + 0x10)

if (i_5 != 0)
    int32_t i_1
    
    do
        rbx_1 += 0x1c8
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) != 0)
    sub_141983590(arg1 + 0x10, 0)

sub_1419be170(arg1 + 0x150, arg1 + 0x20)
int32_t i_6 = *(arg1 + 0x28)
int64_t rbx_2 = *(arg1 + 0x20)

if (i_6 != 0)
    int32_t i_2
    
    do
        rbx_2 += 0x1c8
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

*(arg1 + 0x28) = 0

if (*(arg1 + 0x2c) != 0)
    sub_141983590(arg1 + 0x20, 0)

for (int64_t* i_3 = *(arg1 + 0x48); i_3 != 0; i_3 = i_3[1])
    void* rbp_1 = *i_3
    int64_t* rcx_11 = *(rbp_1 + 0x30)
    
    if (*(rcx_11 + 0x63) == 0)
        *(rcx_11 + 0x63) = 1
        rcx_11[0xc].b = 1
        
        if (*(rcx_11 + 0x61) == 0)
            (*(*rcx_11 + 0x10))(rcx_11)
    
    void** rax_3 = j_sub_140a82f30(0x18)
    
    if (rax_3 != 0)
        *rax_3 = rbp_1
        rax_3[1] = 0
        rax_3[2] = 0
        void* rcx_12 = *(arg1 + 0x170)
        
        if (rcx_12 == 0)
            *(arg1 + 0x168) = rax_3
        else
            *(rcx_12 + 8) = rax_3
            rax_3[2] = *(arg1 + 0x170)
        
        *(arg1 + 0x170) = rax_3
        (*(*(arg1 + 0x160) + 8))(arg1 + 0x160, zx.q(*(arg1 + 0x178) + 1))

if (*(arg1 + 0x48) != 0)
    int64_t i_4
    
    do
        void* rcx_15 = *(arg1 + 0x48)
        i_4 = *(rcx_15 + 8)
        j_sub_140a74f90(rcx_15)
        *(arg1 + 0x48) = i_4
    while (i_4 != 0)

int64_t rax_5 = *(arg1 + 0x40)
*(arg1 + 0x50) = 0
*(arg1 + 0x48) = 0
int64_t result = (*(rax_5 + 8))(arg1 + 0x40, 0)
*(arg1 + 0xf0)
*(arg1 + 0xf0) = 0

if (arg1 == -0x110)
    return result

return LeaveCriticalSection(arg1 + 0x110)
