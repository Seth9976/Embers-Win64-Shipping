// 函数: sub_1408ffe10
// 地址: 0x1408ffe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x120)

for (void* i = *(arg1 + 0x10); i != 0; i = *(arg1 + 0x10))
    *(arg1 + 0x10) = *(i + 0x28)
    int64_t* rdi_1 = *(i + 0x10)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_4 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    j_sub_140a74f90(i)

*(arg1 + 0x18) = 0
*(arg1 + 0x110) = 0
sub_1405b8890(arg1 + 0x20, 0)
sub_140865470(arg1 + 0x70, 0)
sub_1409017c0(arg1 + 0xc0, 0)

if (arg1 != -0x120)
    LeaveCriticalSection(arg1 + 0x120)

DeleteCriticalSection(arg1 + 0x120)
sub_1405ae100(arg1 + 0xc0)
sub_1405ae080(arg1 + 0x70)
void* result = sub_1405ae080(arg1 + 0x20)
int64_t* rcx_12 = *(arg1 + 8)

if (rcx_12 != 0)
    int32_t rbp_1 = *(rcx_12 + 0xc)
    *(rcx_12 + 0xc) -= 1
    
    if (rbp_1 == 1 && rcx_12 != 0)
        return (*(*rcx_12 + 8))(rcx_12, zx.q(rbp_1))

return result
