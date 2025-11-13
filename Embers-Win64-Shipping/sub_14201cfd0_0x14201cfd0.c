// 函数: sub_14201cfd0
// 地址: 0x14201cfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = *(arg1 + 0xe0)
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
    else
        result_1[1].d = rax + 1
    
    result = result_1

if (result != 0)
    int64_t* rcx = *(arg1 + 0xd8)
    
    if (rcx != 0)
        void*** rax_2 = sub_140de7320(rcx, arg3)
        int64_t* rsi_1 = rax_2[3]
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        sub_140e0dfc0(rax_2)
        int64_t* rdi_1 = arg2[1]
        int64_t var_38 = *arg2
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (&var_38 != &rax_2[2])
            var_38.o = *(rax_2 + 0x10)
            *(rax_2 + 0x10) = var_38.o
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp6_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        result = sub_140de7bf0(rax_2)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                result = (**rsi_1)(rsi_1)
                int32_t temp7_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    result = (*(*rsi_1 + 8))(rsi_1, 1)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp2_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*result_1 + 8))(result_1, 1)

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            jump(*(*rbx + 8))

return result
