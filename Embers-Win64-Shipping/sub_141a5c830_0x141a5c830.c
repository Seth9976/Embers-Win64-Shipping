// 函数: sub_141a5c830
// 地址: 0x141a5c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x30) == 0)
    int64_t* rax = sub_141a7bb80()
    void* rdx_1 = rax[0x23]
    
    if (rdx_1 == 0)
        int64_t rdx_2 = *rax
        (*(rdx_2 + 0x390))(rax, rdx_2)
        rdx_1 = rax[0x23]
    
    result = zx.q(*(arg1 + 0x28)) ^ zx.q(*(rdx_1 + 0x28))
    
    if (((*(arg1 + 0x34) ^ *(rdx_1 + 0x34)) | (*(arg1 + 0x30) ^ *(rdx_1 + 0x30))
            | (*(arg1 + 0x2c) ^ *(rdx_1 + 0x2c)) | result.d) == 0)
        void var_18
        result = sub_140b214c0(&var_18)
        *(arg1 + 0x28) = *result

return result
