// 函数: sub_1406af3e0
// 地址: 0x1406af3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = j_sub_140a82f30(0x40)
void* const rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *(rax + 0x38) = 0
    int64_t* rcx = *(arg1 + 0x38)
    
    if (rcx != 0)
        *(rdi + 0x38) = (**rcx)(rcx, rdi)

if (arg2 == 0xffffffff)
    int64_t* rcx_1 = *(rdi + 0x38)
    
    if (rcx_1 == 0)
        std::_Xbad_function_call()
        noreturn
    
    (*(*rcx_1 + 0x10))(rcx_1)
    int64_t* rcx_2 = *(rdi + 0x38)
    
    if (rcx_2 != 0)
        int64_t rdx_1
        rdx_1.b = rcx_2 != rdi
        (*(*rcx_2 + 0x20))(rcx_2, rdx_1)
        *(rdi + 0x38) = 0
    
    return j_sub_140a74f90(rdi) __tailcall

int64_t* rax_6 = sub_1406b06e0()
int64_t* rbx_1 = rax_6[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = rax_6[1]

int64_t* rcx_5 = *rax_6
int32_t result

if (rcx_5 == 0)
    void** const arg_18 = &data_142d8b300
    result = sub_1406b0b90(&arg_18, sub_1406aa8b0, rdi)
else
    result = (**rcx_5)(rcx_5, sub_1406aa8b0, rdi)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1)

return result
