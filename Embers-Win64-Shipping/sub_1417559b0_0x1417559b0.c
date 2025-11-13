// 函数: sub_1417559b0
// 地址: 0x1417559b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a9538)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg1, &data_1439a9538)

if (rax_1 s>= 0x19)
    return sub_141707a90(arg1, arg2, zmm1) __tailcall

void* result_2 = nullptr
int32_t var_20 = 0
sub_141707e20(arg1, &result_2, zmm1)
int64_t rdi_1 = sx.q(var_20)

if (rdi_1.d s> *(arg2 + 0xc))
    sub_1405a5130(arg2, rdi_1.d)

void* result_1 = result_2
void* i = result_1 + rdi_1 * 0x28

if (result_1 != i)
    int64_t* rbp_1 = result_1 + 0x10
    
    do
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_2 = (rsi_1 + 1).d
        arg2[1].d = rax_2
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_1405a4df0(arg2)
        
        int64_t rax_3 = *arg2
        int64_t rcx_5 = rsi_1 * 3
        *(rax_3 + (rcx_5 << 3)) = *rbp_1
        void* rdx_3 = rax_3 + (rcx_5 << 3)
        *(rdx_3 + 8) = rbp_1[1].d
        *(rdx_3 + 0xc) = *(rbp_1 + 0xc)
        int32_t rax_5 = *(rbp_1 + 0x14)
        rbp_1 = &rbp_1[5]
        *(rdx_3 + 0x14) = rax_5
    while (&rbp_1[-2] != i)

void* result = result_1

if (rdi_1.d != 0)
    int32_t i_1
    
    do
        *result = &data_142fc3cd0
        result += 0x28
        i_1 = rdi_1.d
        rdi_1 = zx.q(rdi_1.d - 1)
    while (i_1 != 1)

if (result_1 == 0)
    return result

return sub_140a74f90(result_1)
