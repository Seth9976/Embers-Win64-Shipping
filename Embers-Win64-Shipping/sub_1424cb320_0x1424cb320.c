// 函数: sub_1424cb320
// 地址: 0x1424cb320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

void* var_18 = nullptr
int32_t i_2 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* r8_4 = &var_18
int64_t rdx_4 = arg_10

if (rax_3 != 0)
    r8_4 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
int64_t result = sub_14240f3a0(arg1, rdx_4, r8_4)
int32_t i_1 = i_2

if (i_1 != 0)
    int64_t* rdi_3 = var_18 + 0x20
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_3
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_3 = &rdi_3[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
