// 函数: sub_141c83090
// 地址: 0x141c83090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[2]
int64_t var_38 = arg1[1]
int64_t* var_30 = rdi

if (rdi != 0)
    rdi[1].d += 1

void* rbx = *arg1
int32_t result_1
sub_140a73790(rbx + 0x118, &result_1, &var_38)
int64_t result = sx.q(result_1)
void* rsi = nullptr
int64_t* rbx_2
void* const r15

if (result.d == 0xffffffff)
    r15 = nullptr
    rbx_2 = nullptr
else
    int64_t rdx_1 = result * 5
    result = *(rbx + 0x118)
    int64_t rbx_1 = result + (rdx_1 << 3)
    
    if (rbx_1 == 0)
        r15 = nullptr
        rbx_2 = nullptr
    else
        r15 = *(rbx_1 + 0x10)
        rbx_2 = *(rbx_1 + 0x18)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1

if (rdi != 0)
    result = zx.q(rdi[1].d)
    rdi[1].d -= 1
    
    if (result.d == 1)
        result = (**rdi)(rdi)
        int32_t rbp_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rbp_1 == 1)
            result = (*(*rdi + 8))(rdi, zx.q(rbp_1))

if (r15 != 0)
    *(r15 + 0x60) = 1
    int64_t* rcx_3 = arg1[3]
    int64_t* rax_4 = (*(*rcx_3 + 8))(rcx_3)
    void* rdi_1 = *arg1
    int32_t result_2
    sub_140910250(rdi_1 + 0x78, &result_2, rax_4)
    result = sx.q(result_2)
    int64_t* rdi_3
    
    if (result.d == 0xffffffff)
        rdi_3 = nullptr
    else
        int64_t rdx_4 = result * 5
        result = *(rdi_1 + 0x78)
        int64_t rdi_2 = result + (rdx_4 << 3)
        
        if (rdi_2 == 0)
            rdi_3 = nullptr
        else
            rsi = *(rdi_2 + 0x10)
            rdi_3 = *(rdi_2 + 0x18)
            
            if (rdi_3 != 0)
                rdi_3[1].d += 1
    
    if (rsi != 0)
        int64_t rbp_2 = sx.q(*(rsi + 0x10))
        int32_t rax_5 = (rbp_2 + 1).d
        *(rsi + 0x10) = rax_5
        
        if (rax_5 s> *(rsi + 0x14))
            sub_1405a4f90(rsi + 8)
        
        result = (rbp_2 << 4) + *(rsi + 8)
        *result = r15
        *(result + 8) = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            result = (**rdi_3)(rdi_3)
            int32_t temp4_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rdi_3 + 8))(rdi_3, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            jump(*(*rbx_2 + 8))

return result
