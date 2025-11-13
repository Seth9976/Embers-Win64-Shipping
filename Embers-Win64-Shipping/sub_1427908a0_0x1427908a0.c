// 函数: sub_1427908a0
// 地址: 0x1427908a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_1

if (*(arg1 + 0x718) != 0)
    rbx_1 = *(data_143f5b298 + 0x460)

void*** result

if (*(arg1 + 0x718) == 0 || rbx_1 == 0)
    int64_t* rcx_6 = *(*(arg1 + 0x150) + (sx.q(arg3) << 3))
    result = (*(*rcx_6 + 0x280))(rcx_6)
else
    void*** result_1 = j_sub_140a82f30(0x1b0)
    result = result_1
    
    if (result_1 == 0)
        result = nullptr
    else
        int32_t arg_24 = 0
        void arg_8
        int32_t rdx = *sub_140b5e500(&arg_8, 0x3e)
        float var_28[0x4]
        float* rax_3 = sub_1422a16e0(&var_28, &data_14399f5c0, 0, 0, 1)
        int64_t rdx_1 = *rbx_1
        int64_t rax_4 = (*(rdx_1 + 0x280))(rbx_1, rdx_1)
        sub_142118c70(result)
        result[0x32] = rax_4
        *result = &data_142e0eff8
        int128_t zmm0_1 = *rax_3
        result[0x35] = rdx.q
        *(result + 0x198) = zmm0_1
    
    int64_t rdi_2 = sx.q(*(arg2 + 0xb0))
    int32_t rax_6 = (rdi_2 + 1).d
    *(arg2 + 0xb0) = rax_6
    
    if (rax_6 s> *(arg2 + 0xb4))
        sub_14083a310(arg2 + 0xa8, rdi_2.d)
    
    *(*(arg2 + 0xa8) + (rdi_2 << 3)) = result

if (result != 0)
    return result

jump(*(*sub_14210f630(0) + 0x280))
