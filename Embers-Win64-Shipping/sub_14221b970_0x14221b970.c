// 函数: sub_14221b970
// 地址: 0x14221b970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    int16_t* const rcx
    
    if (arg5[1].d == 0)
        rcx = &data_142d40450
    else
        rcx = *arg5
    
    if (sub_140a54510(rcx, &data_142d40450) == 0)
        arg2[0x117].b = 4
        (*(*arg2 + 0x458))(arg2, 0)
        int64_t* rcx_2 = *(arg3 + 0x1a0)
        (*(*rcx_2 + 0x270))(rcx_2)
        void* result = *(arg3 + 0x1a0)
        *(result + 0x30) = 0
        return result

sub_1423d37e0(arg2, arg3)
int64_t r15 = *(arg3 + 0x278)
int64_t rbp
rbp.b = 0
*(arg2 + 0x9ec) += 1
int32_t rax_4 = arg2[0x13c].d
int32_t rcx_4 = *(arg2 + 0x9ec)
int64_t rdi = sx.q(rax_4 - 1)

if (rax_4 - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_6 = arg2[0x13b]
        
        if (*(rbx_2 + rax_6 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_5 = *(rbx_2 + rax_6)
            
            if (rcx_5 == 0)
                rbp.b = 1
            else if ((*(*rcx_5 + 0x50))(rcx_5, r15, 1, arg5) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_4 = *(arg2 + 0x9ec)

*(arg2 + 0x9ec) = rcx_4 - 1

if (rbp.b == 0)
    return rcx_4 - 1

return sub_140599630(&arg2[0x13b], 0) __tailcall
