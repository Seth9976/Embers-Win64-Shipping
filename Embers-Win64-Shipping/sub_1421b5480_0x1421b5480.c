// 函数: sub_1421b5480
// 地址: 0x1421b5480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x2f8))() != 0 && arg5 == 0)
    *(arg1 + 0x2a) |= (1 << (*(arg3 + 0x28) u% 0x20)).b
    return arg1

void* rdx = arg1[4]
int32_t var_38 = 0x7f800000
void* rdi = nullptr
int64_t arg_8 = 0
void* rax_4
int512_t zmm2
int128_t zmm6_1
rax_4, zmm2, zmm6_1 = sub_140d2e1f0(arg1, rdx, 0, 0xfffffff, 0, 0)

if (rax_4 != 0)
    rdi = rax_4
    *(rax_4 + 0x2a) = 1 << (*(arg3 + 0x28)).b
    
    if (arg4 != 0)
        zmm2.o = zmm6_1
        
        if ((*(*rax_4 + 0x2c8))(rax_4, arg1, zmm2, arg3) == 0)
            arg_8 = arg1[3]
            uint64_t var_28 = 0
            int64_t var_20_1 = 0
            sub_140b63e00(&arg_8, &var_28)
            uint64_t rcx_6 = var_28
            rdi = nullptr
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)

return rdi
