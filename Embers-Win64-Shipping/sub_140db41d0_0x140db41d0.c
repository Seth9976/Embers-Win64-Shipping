// 函数: sub_140db41d0
// 地址: 0x140db41d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d9bab0(arg3)
char result = sub_140dbe040(arg1)

if (result == 0)
    void* rax = sub_140d99610(arg1)
    void*** rbx_1
    void*** rax_1
    
    if ((*(rax + 0x50) & 1) == 0)
        rax_1 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
        void* rcx_2 = &rax_1[5]
        
        if (rcx_2 u> *(arg1 + 0x20))
            sub_140b0e3d0(arg1 + 0x18, 0x30)
            rax_1 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
            rcx_2 = &rax_1[5]
        
        *(arg1 + 0x18) = rcx_2
        __builtin_memset(&rax_1[1], 0, 0x20)
        rbx_1 = rax_1
        *rax_1 = &data_142ec2858
    else
        rax_1 = j_sub_140a82f30(0x28)
        rbx_1 = rax_1
        
        if (rax_1 != 0)
            *rax_1 = &data_142ec2858
    *rax = rbx_1
    *(rbx_1 + 8) = *arg6
    int64_t* rcx_4 = *arg4
    rbx_1[3] = (*(*rcx_4 + 0x18))(rcx_4)
    int64_t* rcx_5 = *arg4
    char rax_10 = (*(*rcx_5 + 0x38))(rcx_5)
    rbx_1[4].b &= 0xfe
    rbx_1[4].b |= rax_10 & 1
    int64_t* rcx_6 = *arg4
    char rax_12 = (*(*rcx_6 + 0x20))(rcx_6)
    rbx_1[4].b &= 0xfd
    rbx_1[4].b |= (rax_12 & 1) * 2
    int64_t* rcx_7 = *arg4
    char rax_14 = (*(*rcx_7 + 0x30))(rcx_7)
    rbx_1[4].b &= 0xfb
    rbx_1[4].b |= (rax_14 & 1) << 2
    result = sub_140db26f0(rax, arg1, 7, arg2, arg3, arg5)

int64_t* rbx_2 = arg4[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
