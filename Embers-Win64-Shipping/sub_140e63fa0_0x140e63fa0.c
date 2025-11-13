// 函数: sub_140e63fa0
// 地址: 0x140e63fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = *arg2
void* rax_1 = arg2[1]
void* var_30 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

uint64_t var_48
int64_t* rax_2
uint128_t zmm0
rax_2, zmm0 = sub_140e67030(arg1, &var_48)
uint64_t result
uint128_t zmm0_1
result, zmm0_1 = sub_140da1990(rax_2, &var_38, arg3, arg4, zmm0)
int32_t i_2
int32_t i_1 = i_2
int64_t r12
r12.b = result.b == 0

if (i_1 != 0)
    int64_t* rsi_1 = var_48 + 8
    int32_t i
    
    do
        int64_t* rdi_1 = *rsi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        rsi_1 = &rsi_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

uint64_t rcx_3 = var_48

if (rcx_3 != 0)
    result, zmm0_1 = sub_140a74f90(rcx_3)

if (r12.b == 0)
    int64_t* rbx_2 = arg2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    result.b = 1
    return result

var_38 = *arg2
void* rax_6 = arg2[1]
void* var_30_1 = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

char rax_7 = sub_140da1990(arg1 + 0x190, &var_38, arg3, arg4, zmm0_1)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp6_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return zx.q(rax_7)
