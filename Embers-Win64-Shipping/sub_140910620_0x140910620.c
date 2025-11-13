// 函数: sub_140910620
// 地址: 0x140910620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xf0)
void*** rsi

if (rax == 0)
    rsi = nullptr
else
    rsi = sub_14090d8b0(rax, arg2, arg3, 0)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx_1 = &data_142e1c960
    rbx_1[2] = rsi

void**** rdi_1 = &rsi[1]

if (rsi == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    void* rax_3
    
    if (*rdi_1 != 0)
        rax_3 = rdi_1[1]
    
    if (*rdi_1 == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rdi_1 = rsi
        int64_t* rcx_1 = rdi_1[1]
        
        if (rbx_1 != rcx_1)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_1 = rdi_1[1]
            
            if (rcx_1 != 0)
                int32_t temp5_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rdi_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

int64_t* result = j_sub_140a82f30(0x18)

if (result != 0)
    *result = 0
    result[1] = rsi
    result[2] = rbx_1
    void** temp0_1 = *(arg1 + 0xb0)
    *(arg1 + 0xb0) = result
    *temp0_1
    *temp0_1 = result
else if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rbx_1)[1](rbx_1, 1)

result.b = 1
return result
