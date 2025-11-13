// 函数: sub_140ee7440
// 地址: 0x140ee7440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = *(arg1 + 0x530)
int64_t* result = result_1
int64_t* r14 = nullptr

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
        result = nullptr
    else
        result_1[1].d = rax + 1
        result = result_1

int64_t var_28

if (result != 0)
    void* r15_1 = *(arg1 + 0x528)
    
    if (r15_1 != 0)
        int64_t* rbx_1 = *(arg1 + 0x10)
        int64_t rbp_1 = 0
        
        if (rbx_1 != 0)
            int32_t rax_2 = rbx_1[1].d
            
            if (rax_2 != 0)
                rbx_1[1].d = rax_2 + 1
                rax_2.b = 1
            
            if (rax_2.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                int32_t rax_3 = rbx_1[1].d
                rbp_1 = *(arg1 + 8)
                rbx_1[1].d = rax_3
                
                if (rax_3 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp7_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        var_28 = rbp_1
        int64_t* var_20_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        result = sub_140ea49e0(r15_1, &var_28)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 0x10)
int64_t rbp_2 = 0

if (rbx_2 != 0)
    result = zx.q(rbx_2[1].d)
    
    if (result.d != 0)
        rbx_2[1].d = result.d + 1
        result.b = 1
    
    if (result.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        result = zx.q(rbx_2[1].d)
        rbp_2 = *(arg1 + 8)
        rbx_2[1].d = result.d
        
        if (result.d == 0)
            result = (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)

if (*(arg1 + 0x5d0) != 0)
    int64_t* rcx_7 = *(arg1 + 0x5c8)
    
    if (rcx_7 != 0)
        result = (*(*rcx_7 + 0x28))(rcx_7)
        
        if (result.b != 0)
            if (*(arg1 + 0x5d0) != 0)
                r14 = *(arg1 + 0x5c8)
            
            var_28 = rbp_2
            int64_t* var_20_2 = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            result = (*(*r14 + 0x50))(r14, &var_28, zx.q(arg2))

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp4_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            jump(*(*result_1 + 8))

return result
