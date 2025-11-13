// 函数: sub_140954dc0
// 地址: 0x140954dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18 = nullptr
int32_t i_4 = 0

if (&var_18 != arg2)
    void* rdi_1 = *arg2
    int32_t i_2 = arg2[1].d
    i_4 = i_2
    
    if (i_2 != 0)
        sub_1409768a0(&var_18, i_2, 0)
        void* rdi_2 = rdi_1 + 0xa0
        void* rbx_2 = var_18 + 0xa0
        int32_t i
        
        do
            *(rbx_2 - 0xa0) = &data_142e20cf8
            *(rbx_2 - 0x98) = *(rdi_2 - 0x98)
            void* rax_2 = *(rdi_2 - 0x90)
            *(rbx_2 - 0x90) = rax_2
            
            if (rax_2 != 0)
                *(rax_2 + 8) += 1
            
            sub_140596d10(rbx_2 - 0x88, rdi_2 - 0x88)
            sub_140919960(rbx_2 - 0x78, rdi_2 - 0x78)
            *(rbx_2 - 8) = *(rdi_2 - 8)
            void* rax_4 = *rdi_2
            *rbx_2 = rax_4
            
            if (rax_4 != 0)
                *(rax_4 + 8) += 1
            
            *(rbx_2 + 8) = *(rdi_2 + 8)
            *(rbx_2 + 0xc) = *(rdi_2 + 0xc)
            int32_t rax_7 = *(rdi_2 + 0x10)
            rdi_2 += 0xb8
            *(rbx_2 + 0x10) = rax_7
            rbx_2 += 0xb8
            i = i_2
            i_2 -= 1
        while (i != 1)

int64_t result = sub_1405a9f90(arg1, &var_18)
int32_t i_3 = i_4
void* rbx_3 = var_18

if (i_3 != 0)
    int32_t i_1
    
    do
        result = sub_14091b530(rbx_3)
        rbx_3 += 0xb8
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_3 = var_18

if (rbx_3 == 0)
    return result

return sub_140a74f90(rbx_3)
