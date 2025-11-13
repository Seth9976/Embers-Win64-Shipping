// 函数: sub_142020b60
// 地址: 0x142020b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e88cf0(data_143e29f28, 0, nullptr)
int64_t rbp
rbp.b = 0
*(arg1 + 0x1f4) += 1
int32_t rax = *(arg1 + 0x1e8)
int32_t r8 = *(arg1 + 0x1f4)
int64_t rdi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_2 = *(arg1 + 0x1e0)
        
        if (*(rbx_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_2)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, arg2) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    r8 = *(arg1 + 0x1f4)

*(arg1 + 0x1f4) = r8 - 1

if (rbp.b != 0)
    sub_140599630(arg1 + 0x1e0, 0)

(*(*(arg1 - 0x28) + 0x2b8))(arg1 - 0x28, 0)
int64_t* result_1 = *(arg1 + 0xc8)
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax_7 = result_1[1].d
    
    if (rax_7 == 0)
        result_1 = nullptr
        result = nullptr
    else
        result_1[1].d = rax_7 + 1
        result = result_1

if (result != 0)
    int64_t* rcx_4 = *(arg1 + 0xc0)
    
    if (rcx_4 != 0)
        result = (**rcx_4)(rcx_4, 0)

if (*(arg1 + 0xd8) != 0)
    int64_t* rbx_3 = *(arg1 + 0xe0)
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        
        if (result.d s> 0)
            void* rcx_5 = nullptr
            
            if (rbx_3 != 0)
                if (result.d != 0)
                    rbx_3[1].d = result.d + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx_3 = nullptr
                
                if (rbx_3 != 0)
                    rcx_5 = *(arg1 + 0xd8)
            
            sub_140e21770(rcx_5)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp5_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            void var_28
            result = &var_28
            
            if (arg1 + 0xd8 != &var_28)
                *(arg1 + 0xd8) = 0
                int64_t* rcx_8 = *(arg1 + 0xe0)
                *(arg1 + 0xe0) = 0
                
                if (rcx_8 != 0)
                    int32_t temp6_1 = *(rcx_8 + 0xc)
                    *(rcx_8 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        result = (*(*rcx_8 + 8))(rcx_8, 1)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp3_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            jump(*(*result_1 + 8))

return result
