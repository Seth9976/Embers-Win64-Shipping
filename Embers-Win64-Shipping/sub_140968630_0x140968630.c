// 函数: sub_140968630
// 地址: 0x140968630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14216d810(arg1)
int64_t* result = (*(*arg1 + 0x438))(arg1)

if (result == 0 || ((arg1[1].d u>> 4).b & 1) != 0)
    return result

void* rdi_1 = arg1[0x11]

if (rdi_1 != 0)
    sub_1409802d0(rdi_1)

int64_t* rax_2 = (*(*arg1 + 0x378))(arg1)

if (arg1[0xf1] != 0)
    void* rdx_3 = arg1[0xf0]
    
    if (rdx_3 != 0)
        char temp0_1 = *(rdx_3 + 0x28)
        *(rdx_3 + 0x28) = 0
        int64_t rcx_3
        rcx_3.b = temp0_1
        int64_t r8_1 = *result
        
        if ((*(r8_1 + 8))(result, 0, r8_1) == 0)
            (*(*rax_2 + 0xb8))(rax_2)
        
        int64_t* rcx_6 = arg1[0xf1]
        (*(*rcx_6 + 0x18))(rcx_6)

(*(*result + 0x10))(result)

if (rdi_1 != 0 && *(rdi_1 + 0x1acc) != 1)
    sub_140955890(rdi_1)

if (arg1[0xea] != arg1[0xf5])
    int64_t* rax_9 = (*(*arg1 + 0x378))(arg1)
    
    if (rax_9 != 0)
        int64_t r8_2 = *rax_9
        (*(r8_2 + 0x38))(rax_9, arg1[0xea], r8_2)

arg1[0xea] = 0
void var_18

if (&arg1[0xf5] != &var_18)
    arg1[0xf5] = 0
    int64_t* rdi_2 = arg1[0xf6]
    
    if (rdi_2 != 0)
        arg1[0xf6] = 0
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp2_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

return sub_140976730(&arg1[0xf3], 0)
