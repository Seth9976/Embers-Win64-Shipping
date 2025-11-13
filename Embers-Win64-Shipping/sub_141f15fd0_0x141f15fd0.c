// 函数: sub_141f15fd0
// 地址: 0x141f15fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int32_t rdi = 0
*arg2 = 0

if ((*(rax + 0x6a0))() s> 0)
    int32_t rax_6
    
    do
        int64_t* rax_3 = (*(*arg1 + 0x548))(arg1, zx.q(rdi))
        
        if (rax_3 == 0)
            rax_3 = sub_14210f630(0)
        
        rdi += 1
        void arg_8
        int64_t rcx_2 = *sub_1421268c0(rax_3, &arg_8, arg3)
        *arg2 |= rcx_2
        rax_6 = (*(*arg1 + 0x6a0))(arg1)
    while (rdi s< rax_6)

return arg2
