// 函数: sub_141fbfea0
// 地址: 0x141fbfea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0xb30) != 0
uint128_t zmm6 = zx.o(0)
uint128_t var_48 = zx.o(0)

if (not(cond:0) && *(arg1 + 0xb28) s> 0)
    int64_t* rax_1 = *(arg1 + 0xb20)
    int64_t* rcx = rax_1[1]
    
    if (rcx != 0)
        rcx[1].d += 1
    
    if (arg1 + 0xb30 == &var_48)
    label_141fbff36:
        
        if (rcx != 0)
            rcx[1].d -= 1
            
            if (rcx[1].d == 1)
                (**rcx)(rcx)
                int32_t temp5_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
    else
        *(arg1 + 0xb30) = *rax_1
        int64_t* rbx_1 = *(arg1 + 0xb38)
        
        if (rcx == rbx_1)
            goto label_141fbff36
        
        *(arg1 + 0xb38) = rcx
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp9_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    var_48.q = *(arg1 + 0xb30)
    void* rax_6 = *(arg1 + 0xb38)
    var_48:8.q = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    zmm6 = var_48
    int64_t* rbx_2 = _mm_bsrli_si128(zx.o(0), 8).q
    var_48 = zmm6
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp11_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    sub_140dbae50(arg1 + 0xb20, 0, 1, 1)
    int64_t* rcx_7 = zmm6.q
    (*(*rcx_7 + 8))(rcx_7)

int64_t rax_10 = *(arg1 + 0xb30)
int64_t* rdi

if (rax_10 == 0)
    rdi.b = 1
else
    var_48.q = rax_10
    void* rax_11 = *(arg1 + 0xb38)
    var_48:8.q = rax_11
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
    
    uint128_t zmm0 = var_48
    int64_t* rbx_3 = _mm_bsrli_si128(zmm6, 8).q
    var_48 = zmm0
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rbx_4 = var_48.q
    
    if ((*(*rbx_4 + 0x10))(rbx_4) != 0)
        void var_38
        
        if (arg1 + 0xb30 != &var_38)
            *(arg1 + 0xb30) = 0
            int64_t* rbx_5 = *(arg1 + 0xb38)
            
            if (rbx_5 != 0)
                *(arg1 + 0xb38) = 0
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp10_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
        
        rdi.b = 1
    else
        rdi.b = (*(*rbx_4 + 0x20))(rbx_4) == 0

int64_t* rbx_6 = var_48:8.q

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        int64_t r8_1 = *rbx_6
        (*r8_1)(rbx_6, arg2, r8_1)
        int32_t temp2_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_2 = *rbx_6
            (*(r8_2 + 8))(rbx_6, 1, r8_2)

return zx.q(rdi.b)
