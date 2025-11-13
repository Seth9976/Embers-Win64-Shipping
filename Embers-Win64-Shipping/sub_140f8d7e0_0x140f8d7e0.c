// 函数: sub_140f8d7e0
// 地址: 0x140f8d7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)

if (*(rax + 0x558) == 0)
label_140f8d825:
    int128_t* rdi_2 = *(arg1 + 8) + 0x530
    
    if (*(rdi_2 + 0x28) != 0)
        int64_t* rcx_1 = rdi_2[2].q
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = rdi_2[2].q
            
            if (rcx_2 != 0)
                rdi_2[2].q = sub_140a84c80(rcx_2, 0, 0)
            
            *(rdi_2 + 0x28) = 0
    
    sub_14065da90(rdi_2, arg2)
    *(rdi_2 + 0x18) = 1
else
    int64_t* rcx = *(rax + 0x550)
    
    if (rcx == 0)
        goto label_140f8d825
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140f8d825

sub_14065da90(*(arg1 + 8) + 0x850, arg2)
void* result = *(arg1 + 8)
*(result + 0x84b) = 1

if (arg3 == 1)
    int64_t* rcx_6 = **(arg1 + 8)
    char rax_7 = (*(*rcx_6 + 0x78))(rcx_6)
    
    if (rax_7 != arg3)
        int64_t* rcx_7 = **(arg1 + 8)
        result = (*(*rcx_7 + 0x78))(rcx_7)
    
    if (rax_7 == arg3 || result.b == 2)
        *(*(arg1 + 8) + 0x868) = 1
        result = *(arg1 + 8)
        *(result + 0x84c) = 1
else if (arg3 == 0)
    int64_t* rcx_8 = **(arg1 + 8)
    result = (*(*rcx_8 + 0x78))(rcx_8)
    
    if (result.b == 2)
        *(*(arg1 + 8) + 0x868) = 0
        result = *(arg1 + 8)
        *(result + 0x84c) = 1

return result
