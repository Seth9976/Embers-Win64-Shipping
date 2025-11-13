// 函数: sub_14098f3e0
// 地址: 0x14098f3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t r8_2 = arg_10
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
void* var_28
int64_t* result = sub_14098e440(arg1, &var_28, r8_2)
int64_t* result_1 = result

if (arg3 != result)
    int32_t i_2 = arg3[1].d
    void* rcx_4 = *arg3
    
    if (i_2 != 0)
        void* rdi_1 = rcx_4 + 0x30
        int32_t i
        
        do
            int64_t rcx_5 = *(rdi_1 + 8)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t* rbx_1 = *rdi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_1 += 0x50
            i = i_2
            i_2 -= 1
        while (i != 1)
        rcx_4 = *arg3
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int32_t i_4
int32_t i_3 = i_4

if (i_3 != 0)
    void* rdi_3 = var_28 + 0x30
    int32_t i_1
    
    do
        int64_t rcx_8 = *(rdi_3 + 8)
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        int64_t* rbx_2 = *rdi_3
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_3 += 0x50
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

void* rcx_11 = var_28

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
