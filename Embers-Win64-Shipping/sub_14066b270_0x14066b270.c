// 函数: sub_14066b270
// 地址: 0x14066b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x28)

if (rcx == 0)
    uint64_t var_18 = 0
    int32_t var_10 = 0
    sub_1405947f0(&var_18, (rcx + 7).d)
    int32_t rax = var_10 + 7
    var_10 = rax
    
    if (rax s> 0)
        sub_140594770(&var_18)
    
    uint64_t rbx = var_18
    UnDecorator::getReferenceType(rbx, u"Object", 0xe)
    
    if (rbx != 0)
        sub_140a74f90(rbx)
    
    return 0

int64_t* rax_3 = (**rcx)(rcx)
int64_t* rbx_1 = rax_3[1]
int64_t rdi = *rax_3

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* result = sub_140666d50(sub_140cde0b0())

if (rdi == 0)
    sub_140679620(result)
else
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    *(result + 0x28) = rdi
    int64_t* rdi_1 = *(result + 0x30)
    *(result + 0x30) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return result
