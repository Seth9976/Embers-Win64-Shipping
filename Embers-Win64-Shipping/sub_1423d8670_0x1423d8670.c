// 函数: sub_1423d8670
// 地址: 0x1423d8670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0xc40))
int32_t rdi = 0

if (rax.d s<= 0)
    return rax

int64_t r9_1 = rax
int64_t r8_1 = 0
int64_t* r10_1 = *(arg1 + 0xc38)
int64_t* rcx = r10_1

while (true)
    void* rax_1 = *rcx
    
    if (*(rax_1 + 0x278) == arg2)
        break
    
    rdi += 1
    r8_1 += 1
    rcx = &rcx[1]
    
    if (r8_1 s>= r9_1)
        return rax_1

int32_t i = 0
int64_t r14_1 = sx.q(rdi) << 3
void* rcx_1 = r10_1[sx.q(rdi)]

if (*(rcx_1 + 0x270) s> 0)
    r9_1 = 0
    
    do
        int64_t* rdx = *(r9_1 + *(rcx_1 + 0x268))
        
        if (rdx != 0 && *rdx == *(rcx_1 + 0x278))
            *rdx = 0
        
        i += 1
        r9_1 += 8
    while (i s< *(rcx_1 + 0x270))

int64_t rdx_1 = *(rcx_1 + 0x278)
*(rcx_1 + 0x278) = 0
int64_t* rcx_2 = *(rcx_1 + 0x218)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x290))(rcx_2, rdx_1, 0, r9_1)

void* rbx_1 = *(r14_1 + *(arg1 + 0xc38))

if (rbx_1 != 0)
    int64_t rcx_3 = *(rbx_1 + 0x268)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *(rbx_1 + 0x258)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = *(rbx_1 + 0x238)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = *(rbx_1 + 0x220)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t rcx_7 = *(rbx_1 + 0x200)
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = *(rbx_1 + 0x1f0)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t rcx_9 = *(rbx_1 + 0x1d8)
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t rcx_10 = *(rbx_1 + 0x1c8)
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t rcx_11 = *(rbx_1 + 0x1b8)
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    sub_1423cfd30(rbx_1 + 0x1a8)
    sub_14094c030(rbx_1 + 0x138)
    sub_14094c030(rbx_1 + 0xd0)
    int64_t rcx_15 = *(rbx_1 + 0xb8)
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    sub_14094c030(rbx_1 + 8)
    j_sub_140a74f90(rbx_1)

int32_t rcx_19 = *(arg1 + 0xc40)
int32_t rax_8 = rcx_19 - rdi

if (rax_8 != 1)
    int64_t r9_2 = *(arg1 + 0xc38)
    memmove(r9_2 + r14_1, r9_2 + (sx.q(rdi + 1) << 3), (rax_8 - 1) << 3)
    rcx_19 = *(arg1 + 0xc40)

*(arg1 + 0xc40) = rcx_19 - 1
return sub_1405c53d0(arg1 + 0xc38)
