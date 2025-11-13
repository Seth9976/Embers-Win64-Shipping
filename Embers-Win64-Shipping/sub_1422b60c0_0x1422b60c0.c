// 函数: sub_1422b60c0
// 地址: 0x1422b60c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a94c8)
int64_t i_3 = 4
char* rdi = arg2
int64_t i_2 = 4
int64_t i

do
    int32_t rax_1
    
    if ((arg1[5].b & 1) != 0)
        rax_1 = sub_140b4e7c0(arg1, &data_1439a94c8)
    
    if ((arg1[5].b & 1) == 0 || rax_1 s>= 4)
        int64_t* rcx_3 = arg1[1]
        char* rdx_2 = *rcx_3
        
        if (&rdx_2[1] u> rcx_3[1])
            (*(*arg1 + 0x150))(arg1, rdi, 1)
        else
            *rdi = *rdx_2
            int64_t* rax_9 = arg1[1]
            *rax_9 += 1
    else
        int64_t* rcx_1 = arg1[1]
        char arg_8 = 0
        char* rdx = *rcx_1
        
        if (&rdx[1] u> rcx_1[1])
            (*(*arg1 + 0x150))(arg1, &arg_8, 1)
            *rdi = arg_8
        else
            arg_8 = *rdx
            *rcx_1 += 1
            *rdi = arg_8
    
    rdi = &rdi[1]
    i = i_2
    i_2 -= 1
while (i != 1)
void* rdi_1 = &arg2[4]
int64_t i_1

do
    int64_t* rcx_5 = arg1[1]
    char* rdx_4 = *rcx_5
    
    if (&rdx_4[1] u> rcx_5[1])
        (*(*arg1 + 0x150))(arg1, rdi_1, 1)
    else
        *rdi_1 = *rdx_4
        int64_t* rax_13 = arg1[1]
        *rax_13 += 1
    
    rdi_1 += 1
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
