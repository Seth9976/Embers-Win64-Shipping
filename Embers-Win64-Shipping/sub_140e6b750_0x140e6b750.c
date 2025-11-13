// 函数: sub_140e6b750
// 地址: 0x140e6b750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = *(arg1 + 0x278)
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
        result = nullptr
    else
        result_1[1].d = rax + 1
        result = result_1

int64_t rdi

if (result == 0)
    rdi.b = 0
else
    result = *(arg1 + 0x270)
    
    if (result == 0 || result != *arg2)
        rdi.b = 0
    else
        rdi.b = 1

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        (**result_1)(result_1)
        int32_t temp1_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*result_1 + 8))(result_1, 1)

if (rdi.b == 0)
    result.b = 0
    return result

int64_t* rbx = *(arg1 + 0x288)
int64_t* rax_4 = rbx

if (rbx != 0)
    int32_t rax_5 = rbx[1].d
    
    if (rax_5 == 0)
        rbx = nullptr
        rax_4 = nullptr
    else
        rbx[1].d = rax_5 + 1
        rax_4 = rbx

if (rax_4 == 0)
    rdi.b = 0
else
    int64_t* rcx_2 = *(arg1 + 0x280)
    
    if (rcx_2 == 0)
        rdi.b = 0
    else if ((*(*rcx_2 + 0x20))(rcx_2) == 0)
        rdi.b = 0
    else
        rdi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, arg3, r8_1)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

return zx.q(rdi.b)
