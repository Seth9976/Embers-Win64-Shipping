// 函数: sub_140657440
// 地址: 0x140657440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18 = nullptr
int32_t i_2 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rcx_1 = &var_18

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void* result = sub_14063df70(rcx_1)
int32_t i_1 = i_2

if (i_1 != 0)
    void* rdi_3 = var_18 + 0x10
    int32_t i
    
    do
        int64_t* rbx_1 = *(rdi_3 + 0x20)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t rcx_4 = *rdi_3
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rdi_3 - 0x10)
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rdi_3 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_6 = var_18

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
