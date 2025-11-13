// 函数: sub_141c84630
// 地址: 0x141c84630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[2]
int64_t var_48 = arg1[1]
int64_t* var_40 = rbx

if (rbx != 0)
    rbx[1].d += 1

void* rdi = *arg1
int32_t result_2
sub_140a73790(rdi + 0x118, &result_2, &var_48)
int64_t result = sx.q(result_2)
void* const rbp = nullptr
int64_t* rdi_2
void* const r15

if (result.d == 0xffffffff)
    r15 = nullptr
    rdi_2 = nullptr
else
    int64_t rdx_1 = result * 5
    result = *(rdi + 0x118)
    int64_t rdi_1 = result + (rdx_1 << 3)
    
    if (rdi_1 == 0)
        r15 = nullptr
        rdi_2 = nullptr
    else
        r15 = *(rdi_1 + 0x10)
        rdi_2 = *(rdi_1 + 0x18)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1

if (rbx != 0)
    result = zx.q(rbx[1].d)
    rbx[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*rbx + 8))(rbx, zx.q(rsi_1))

if (r15 != 0)
    int64_t* rcx_3 = arg1[3]
    int64_t* rax_4 = (*(*rcx_3 + 8))(rcx_3)
    void* rbx_1 = *arg1
    int32_t result_3
    sub_140910250(rbx_1 + 0xc8, &result_3, rax_4)
    result = sx.q(result_3)
    
    if (result.d != 0xffffffff)
        int64_t rdx_4 = result * 5
        result = *(rbx_1 + 0xc8)
        int64_t rsi_2 = result + (rdx_4 << 3)
        
        if (rsi_2 != 0)
            result = *(rsi_2 + 0x10)
            int64_t* rsi_3 = *(rsi_2 + 0x18)
            int64_t result_1 = result
            int64_t* var_30_1 = rsi_3
            
            if (rsi_3 != 0)
                rsi_3[1].d += 1
            
            if (result != 0)
                int32_t result_4
                sub_140a73790(r15 + 0x10, &result_4, &result_1)
                result = sx.q(result_4)
                int64_t* rbx_3
                
                if (result.d == 0xffffffff)
                    rbx_3 = nullptr
                else
                    int64_t rdx_6 = result * 5
                    result = *(r15 + 0x10)
                    int64_t rbx_2 = result + (rdx_6 << 3)
                    
                    if (rbx_2 == 0)
                        rbx_3 = nullptr
                    else
                        rbp = *(rbx_2 + 0x10)
                        rbx_3 = *(rbx_2 + 0x18)
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d += 1
                
                if (rbp != 0)
                    result = arg1[5]
                    *(rbp + 0x30) = result
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        result = (**rbx_3)(rbx_3)
                        int32_t temp6_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            result = (*(*rbx_3 + 8))(rbx_3, 1)
            
            if (rsi_3 != 0)
                rsi_3[1].d -= 1
                
                if (rsi_3[1].d == 1)
                    result = (**rsi_3)(rsi_3)
                    int32_t temp4_1 = *(rsi_3 + 0xc)
                    *(rsi_3 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        result = (*(*rsi_3 + 8))(rsi_3, 1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        result = (**rdi_2)(rdi_2)
        int32_t temp2_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            jump(*(*rdi_2 + 8))

return result
