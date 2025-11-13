// 函数: sub_141f9c8c0
// 地址: 0x141f9c8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 8))()
sub_141f86d30(arg1, rax_1)
void* result = sub_141f87c30(arg1, arg2)

if (result != 0)
    int32_t rcx_2 = *result
    
    if (rcx_2 s>= 0 && rcx_2 s< rax_1)
        sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
        int64_t rax_5 = sx.q(*sub_141f87c30(arg1, arg2))
        int64_t rax_6 = arg1[0xf]
        int32_t zmm0_1 = *(rax_6 + ((rax_5 * 3 + 1) << 3) - 8)
        int64_t var_40
        sub_140596d10(&var_40, rax_6 + ((rax_5 * 3 + 1) << 3))
        int32_t arg_8 = arg2
        void* rax_7 = sub_141f87c30(arg1, arg2)
        int64_t r9_1 = arg1[0xf]
        int64_t rbp_1 = sx.q(*rax_7)
        int64_t r14_2 = rbp_1 * 3
        int64_t rcx_10 = *(r9_1 + (r14_2 << 3) + 8)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
            r9_1 = arg1[0xf]
        
        int32_t rcx_13 = arg1[0x10].d
        int32_t rax_9 = rcx_13 - rbp_1.d
        
        if (rax_9 != 1)
            memmove(r9_1 + (r14_2 << 3), r9_1 + sx.q((rbp_1 + 1).d) * 0x18, (rax_9 - 1) * 0x18)
            rcx_13 = arg1[0x10].d
        
        arg1[0x10].d = rcx_13 - 1
        sub_1405fde90(&arg1[0xf])
        sub_141f96860(&arg1[1], &arg_8)
        int32_t var_58_1 = arg2
        sub_141f7f9f0(arg1, &arg_8, arg3.d, &var_40)
        sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
        void* rax_17 = sub_141f87c30(arg1, arg2)
        int64_t rbx_1 = arg1[0xf]
        int64_t rdi_1 = sx.q(*rax_17) * 3
        *(rbx_1 + (rdi_1 << 3)) = zmm0_1
        result = sub_140597df0(rbx_1 + 8 + (rdi_1 << 3), &var_40)
        int64_t rcx_23 = var_40
        *(rbx_1 + (rdi_1 << 3)) = arg3.d
        
        if (rcx_23 != 0)
            return sub_140a74f90(rcx_23)

return result
