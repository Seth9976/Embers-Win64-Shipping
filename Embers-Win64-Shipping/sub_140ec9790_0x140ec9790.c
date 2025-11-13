// 函数: sub_140ec9790
// 地址: 0x140ec9790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_140e173b0(*(arg1 + 0x20), &arg_8)
void* rcx_1 = *(arg1 + 0x40)
int128_t var_48 = zx.o(0)
sub_140f156a0(rcx_1, &var_48)
int64_t* rbx = var_48:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

uint128_t var_28

if (arg2 != 0)
    sub_140db2260(arg3, &var_28)
    uint128_t zmm0_1 = var_28
    uint128_t var_38 = zmm0_1
    void* rax_3 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    var_48.q = *(arg1 + 0x40)
    void* rax_5 = *(arg1 + 0x48)
    var_48:8.q = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    void* rcx_6 = *(arg1 + 0x58)
    void* rdx_3 = nullptr
    int64_t* rbx_1 = *(rcx_6 + 0x3f0)
    
    if (rbx_1 != 0)
        int32_t rax_6 = rbx_1[1].d
        
        if (rax_6 != 0)
            rbx_1[1].d = rax_6 + 1
            rax_6.b = 1
        
        if (rax_6.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rdx_3 = *(rcx_6 + 0x3e8)
    
    int64_t* rcx_7 = **(rdx_3 + 0xd8)
    (*(*rcx_7 + 0x28))(rcx_7, &var_48, &var_38)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = var_48:8.q
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp8_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* rbx_3 = var_38:8.q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp10_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rbx_4 = var_28:8.q
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp11_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
else
    sub_140eb7830(arg1)

j_sub_140d9cd40(arg1)
int128_t* result = &var_28

if (arg1 + 0x40 != &var_28)
    *(arg1 + 0x40) = 0
    int64_t* rbx_5 = *(arg1 + 0x48)
    
    if (rbx_5 != 0)
        *(arg1 + 0x48) = 0
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            result = (**rbx_5)(rbx_5)
            int32_t temp4_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp4_1 == 1)
                return (*(*rbx_5 + 8))(rbx_5, 1)

return result
