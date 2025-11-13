// 函数: sub_140ea2be0
// 地址: 0x140ea2be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
int32_t arg_18 = 0
char r12 = 0
int32_t rbx

if (arg3 != 0xffffffff)
    rbx = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    
    if (arg3 s< 0)
        rbx = 0
    else if (arg3 s< rbx)
        rbx = arg3
    
    sub_140ec0a30(arg1 + 0x2a8, arg2, rbx)
else
    sub_140ea0390(arg1 + 0x2a8, arg2)
    rbx = (**(arg1 + 0x2a8))(arg1 + 0x2a8) - 1

sub_140ea45d0(arg1, rbx)
int64_t* rbx_1 = *(arg1 + 0x10)
int64_t rdi_1 = 0

if (rbx_1 != 0)
    int32_t rax_4 = rbx_1[1].d
    
    if (rax_4 != 0)
        rbx_1[1].d = rax_4 + 1
        rax_4.b = 1
    
    if (rax_4.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_5 = rbx_1[1].d
        rdi_1 = *(arg1 + 8)
        rbx_1[1].d = rax_5
        
        if (rax_5 == 0)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t var_38 = rdi_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140f164a0(*arg2, &var_38)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* result_1 = *(arg1 + 0x2d8)
int64_t* r15 = nullptr
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax_10 = result_1[1].d
    
    if (rax_10 == 0)
        result_1 = nullptr
        result = nullptr
    else
        result_1[1].d = rax_10 + 1
        result = result_1

int32_t rbp

if (result == 0)
    rbp.b = 0
else
    r15 = *(arg1 + 0x2d0)
    
    if (r15 == 0)
        rbp.b = 0
    else
        result = (*(*r15 + 0x258))(r15, &var_38)
        r12 = 1
        
        if (*result == 0)
            rbp.b = 0
        else
            rbp = 1

if ((r12 & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if (rbp.b != 0)
    void* rcx_13 = *(*(*r15 + 0x258))(r15, &var_38)
    int64_t* rbx_3 = *(rcx_13 + 0x3f0)
    
    if (rbx_3 != 0)
        int32_t rax_17 = rbx_3[1].d
        
        if (rax_17 != 0)
            rbx_3[1].d = rax_17 + 1
            rax_17.b = 1
        
        if (rax_17.b == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            rsi = *(rcx_13 + 0x3e8)
    
    int64_t* rcx_14 = **(rsi + 0xd8)
    result = (*(*rcx_14 + 0x30))(rcx_14, arg2)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t temp9_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp10_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp6_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            return (*(*result_1 + 8))(result_1, 1)

return result
