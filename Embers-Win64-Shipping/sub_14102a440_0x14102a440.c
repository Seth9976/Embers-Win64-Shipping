// 函数: sub_14102a440
// 地址: 0x14102a440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** result = arg2
void* rbx = **(arg1 + 0x20)
void*** rax_1 = j_sub_140a82f30(0x210)
int32_t r12 = 0
void*** r15

if (rax_1 == 0)
    r15 = nullptr
else
    r15 = sub_14100d1d0(rax_1, rbx)

r15[0x40].d = *(arg3 + 0x1c)
void* rbx_1 = *(rbx + 0x4e8)
int64_t rax_6

if (sub_140a80f10() == 0)
    rax_6 = *(rbx_1 + 0x38)
else
    rax_6 = *(rbx_1 + 0x40) + 1

r15[0x41] = rax_6
int32_t r8 = arg3[1].d
void* rdx_1 = *arg3
void* var_38 = nullptr
sub_140fff520(&var_38, rdx_1, r8, 0, 0)
void* rsi
int32_t i_3
int32_t i_4

if (&r15[9] == &var_38)
    i_3 = i_4
    rsi = var_38
else
    int32_t i_2 = r15[0xa].d
    void* rcx_2 = r15[9]
    
    if (i_2 != 0)
        void* rbx_2 = rcx_2 + 0x78
        int32_t i
        
        do
            int64_t rcx_3 = *(rbx_2 + 0x10)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            sub_1405ec8a0(rbx_2)
            int64_t rcx_5 = *(rbx_2 - 0x28)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_2 += 0xa0
            i = i_2
            i_2 -= 1
        while (i != 1)
        rcx_2 = r15[9]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    rsi = nullptr
    r15[9] = var_38
    i_3 = 0
    r15[0xa].d = i_4
    int32_t var_2c
    *(r15 + 0x54) = var_2c
    var_38 = nullptr
    int32_t var_30 = 0

if (i_3 != 0)
    void* rbx_3 = rsi + 0x78
    int32_t i_1
    
    do
        int64_t rcx_6 = *(rbx_3 + 0x10)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        sub_1405ec8a0(rbx_3)
        int64_t rcx_8 = *(rbx_3 - 0x28)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx_3 += 0xa0
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

int32_t rdx_2 = r15[0xa].d
r15[0x13].d = arg3[2].d

if (rdx_2 s> *(r15 + 0xac))
    sub_1405dadb0(&r15[0x14], rdx_2)

int64_t* rdi = r15[9]
void* r14_3 = &rdi[sx.q(r15[0xa].d) * 0x14]

if (rdi != r14_3)
    do
        int64_t rsi_1 = sx.q(r15[0x15].d)
        int64_t rbp = *rdi
        int32_t rax_12 = (rsi_1 + 1).d
        r15[0x15].d = rax_12
        
        if (rax_12 s> *(r15 + 0xac))
            sub_1405a4cf0(&r15[0x14])
        
        rdi = &rdi[0x14]
        *(r15[0x14] + (rsi_1 << 2)) = r12
        r12 += *(rbp + 0x38)
    while (rdi != r14_3)
    
    result = arg2

r15[0x16].d = r12
r15[0x17].d = *(arg3 + 0x14)
int32_t rax_15 = arg3[3].d
*result = r15

if (rax_15 u<= 1)
    rax_15 = 1

*(r15 + 0xbc) = rax_15
r15[1].d += 1
return result
