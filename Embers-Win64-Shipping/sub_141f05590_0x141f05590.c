// 函数: sub_141f05590
// 地址: 0x141f05590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 3, sx.q(*(arg2 + 0xc)) << 3)
int64_t* rcx = arg1[1]
int32_t arg_8

if ((arg1[5].b & 1) == 0)
    arg_8 = arg2[1].d
    int32_t* rdx_7 = *rcx
    
    if (&rdx_7[1] u> rcx[1])
        int32_t* rdx_8 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_8, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_8, 4)
    else
        arg_8 = *rdx_7
        *rcx += 4
    
    int32_t rdi = 0
    
    if (arg_8 s> 0)
        void** rbx_2 = nullptr
        
        do
            sub_141f05790(arg1, *(rbx_2 + *arg2))
            rdi += 1
            rbx_2 = &rbx_2[1]
        while (rdi s< arg_8)
    
    return arg1

int32_t* rdx_2 = *rcx

if (&rdx_2[1] u> rcx[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx += 4

sub_140e0f7b0(arg2, arg_8)
int32_t r15 = 0

if (arg_8 s<= 0)
    return arg1

do
    void*** rax_4 = j_sub_140a82f30(0x78)
    void*** rbx_1 = rax_4
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        *rax_4 = &data_143268970
        __builtin_memset(&rax_4[1], 0, 0x50)
        *(rax_4 + 0x64) = data_143dbb1f8.q
        int32_t rax_5 = data_143dbb200
        *(rbx_1 + 0x6c) = rax_5
        rbx_1[0xb] = *(rbx_1 + 0x64)
        rbx_1[0xc].d = rax_5
        rbx_1[0xe].b = 0
    
    sub_141f05790(arg1, rbx_1)
    int64_t rbp_1 = sx.q(arg2[1].d)
    int32_t rax_6 = (rbp_1 + 1).d
    arg2[1].d = rax_6
    
    if (rax_6 s> *(arg2 + 0xc))
        sub_140638870(arg2)
    
    r15 += 1
    *(*arg2 + (rbp_1 << 3)) = rbx_1
while (r15 s< arg_8)

return arg1
