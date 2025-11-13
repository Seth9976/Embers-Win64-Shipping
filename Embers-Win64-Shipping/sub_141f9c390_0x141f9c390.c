// 函数: sub_141f9c390
// 地址: 0x141f9c390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 8))()
sub_141f86d30(arg1, rax_1)
void* result = sub_141f87c30(arg1, arg2)

if (result != 0)
    int32_t rcx_2 = *result
    
    if (rcx_2 s>= 0 && rcx_2 s< rax_1)
        sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
        void* rax_4 = sub_141f87c30(arg1, arg2)
        int64_t r15_1 = arg1[0xd]
        int32_t arg_8 = arg2
        int64_t rdi_2 = *(r15_1 + (sx.q(*rax_4) << 3))
        int64_t arg_20 = rdi_2
        void* rax_5 = sub_141f87c30(arg1, arg2)
        int32_t rcx_7 = arg1[0xe].d
        int64_t r9_1 = sx.q(*rax_5)
        int32_t rax_7 = rcx_7 - r9_1.d
        
        if (rax_7 != 1)
            memmove(r15_1 + (r9_1 << 3), r15_1 + (sx.q((r9_1 + 1).d) << 3), (rax_7 - 1) << 3)
            rcx_7 = arg1[0xe].d
        
        arg1[0xe].d = rcx_7 - 1
        sub_1405c53d0(&arg1[0xd])
        sub_141f96860(&arg1[1], &arg_8)
        int32_t var_38_1 = arg2
        sub_141f7f510(arg1, &arg_8, arg3.d)
        sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
        int64_t rcx_16 = sx.q(*sub_141f87c30(arg1, arg2))
        result = arg1[0xd]
        *(result + (rcx_16 << 3)) = rdi_2
        *(result + (rcx_16 << 3)) = arg3.d

return result
