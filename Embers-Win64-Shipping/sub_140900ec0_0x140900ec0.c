// 函数: sub_140900ec0
// 地址: 0x140900ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 0x70)

if (rbp == 0)
    return &__return_addr

int64_t* rdi_1 = *(arg1 + 0x78)

if (rdi_1 != 0)
    rdi_1[1].d += 1

void* r15_1 = *(arg1 + 0x88)
EnterCriticalSection(r15_1 + 0x30)
int64_t var_38 = rbp
int64_t* var_30_1 = rdi_1

if (rdi_1 != 0)
    *(rdi_1 + 0xc) += 1

int32_t rax = sub_140901d20(r15_1 + 0x58, &var_38)

if (rdi_1 != 0)
    int32_t rdx_2 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (rdx_2 == 1)
        int64_t r8_1 = *rdi_1
        (*(r8_1 + 8))(rdi_1, rdx_2, r8_1)

sub_1409062e0(r15_1, rax)

if (r15_1 != -0x30)
    LeaveCriticalSection(r15_1 + 0x30)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_3 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_40 = nullptr
int64_t var_48

if (arg1 + 0x70 != &var_48)
    *(arg1 + 0x70) = 0
    var_48 = 0
    sub_1405aeff0(arg1 + 0x78, &var_40)
    int64_t* rcx_8 = var_40
    
    if (rcx_8 != 0)
        rcx_8[1].d -= 1
        
        if (rcx_8[1].d == 1)
            int64_t* rbx_2 = var_40
            (**rbx_2)(rbx_2)
            int32_t rax_7 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_7 == 1)
                int64_t* rcx_10 = var_40
                (*(*rcx_10 + 8))(rcx_10, 1)

*(arg1 + 0x30) = 0
*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) != 0)
    sub_1405947f0(arg1 + 0x48, 0)

int64_t* rcx_12 = *(arg1 + 0x60)
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x68) = -0x8000000000000000
*(arg1 + 0x80) = 0
*(arg1 + 0x98) = 0xffffffff
(**rcx_12)(rcx_12, 9)
int64_t* rcx_13 = *(arg1 + 0x60)
return (**rcx_13)(rcx_13, 1)
