// 函数: sub_14152f2b0
// 地址: 0x14152f2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x12]
(*(*rcx + 0x1d8))(rcx, &data_1439a9528)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg1[0x12], &data_1439a9528)

if (rax_1 s>= 5)
    int64_t arg_8 = *arg2
    sub_1416f2100(arg1, &arg_8, zmm1)
    
    if ((*(arg1[0x12] + 0x28) & 1) != 0)
        int64_t rax_4 = arg_8
        void*** rdi = *arg2
        
        if (rdi != rax_4)
            *arg2 = rax_4
            
            if (rdi != 0)
                sub_1417059c0(rdi)
                j_sub_140a74f90(rdi)

return arg1
