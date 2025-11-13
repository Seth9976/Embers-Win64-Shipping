// 函数: sub_140598df0
// 地址: 0x140598df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_8 = rbx
sub_140599090(&data_14399fce8)
sub_140af2b60()
int64_t var_18 = 0
int32_t rdx = 0
int32_t var_10 = 0
int32_t rcx = 0
int32_t var_c = 0

if (data_143dbb3f0 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((&data_143dbb3f0)[rbx_1] != 0)
    
    rbx = zx.q(rbx_1.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_18, rbx.d)
        rcx = var_c
        rdx = var_10
    
    int32_t rax_1 = rdx + rbx.d
    int32_t var_10_1 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, &data_143dbb3f0, rbx.d * 2)

int32_t rax_2 = sub_140a23cf0(&var_18, u"CreatePak", 1, 0, 0xffffffff)
int64_t rax_3

if (rax_2 != 0xffffffff)
    rax_3 = sub_140b19710()

if (rax_2 == 0xffffffff || rax_3 == 0)
    rbx.b = 0
else
    rbx.b = 1

int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (rbx.b != 0)
    int64_t* rax_4
    int64_t rdx_2
    rax_4, rdx_2 = sub_140b19720()
    rdx_2.b = 1
    int64_t r8_3 = *rax_4
    (*(r8_3 + 0x68))(rax_4, rdx_2, r8_3)

sub_140599090(&data_14399fcd0)
int64_t* rcx_7 = data_143db7ac8

if (rcx_7 != 0)
    (*(*rcx_7 + 8))(rcx_7)

int64_t* rcx_8 = data_143db7ad8

if (rcx_8 != 0)
    (*(*rcx_8 + 8))(rcx_8)

int64_t* rcx_9 = data_143db7ad0

if (rcx_9 != 0)
    (*(*rcx_9 + 8))(rcx_9)

void* rcx_10 = data_143f56338

if (rcx_10 != 0)
    sub_1422f56b0(rcx_10)
    void* rbx_2 = data_143f56338
    
    if (rbx_2 != 0)
        int64_t rcx_11 = *(rbx_2 + 0x138)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = *(rbx_2 + 0x128)
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = *(rbx_2 + 0x118)
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = *(rbx_2 + 0x108)
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t* rcx_15 = *(rbx_2 + 0xe8)
        
        if (rcx_15 != 0)
            (*(*rcx_15 + 0x28))(rcx_15, 1)
        
        *(rbx_2 + 0xe0) = 0
        int64_t rcx_16 = *(rbx_2 + 0xd8)
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        sub_140597280(rbx_2 + 0x98)
        DeleteCriticalSection(rbx_2 + 0x70)
        *(rbx_2 + 0x60) = 0
        int64_t rcx_19 = *(rbx_2 + 0x58)
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        sub_1405970f0(rbx_2 + 0x18)
        sub_140596e10(rbx_2 + 8)
        j_sub_140a74f90(rbx_2)
    
    data_143f56338 = 0

CRITICAL_SECTION* lpCriticalSection = data_143f56340

if (lpCriticalSection != 0)
    sub_14059aa00(&lpCriticalSection[1], 0)
    int64_t rcx_24 = lpCriticalSection->__offset(0x48).q
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t rcx_25 = lpCriticalSection->__offset(0x28).q
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    DeleteCriticalSection(lpCriticalSection)
    j_sub_140a74f90(lpCriticalSection)
    data_143f56340 = 0

return sub_140ac5840() __tailcall
