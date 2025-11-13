// 函数: sub_141ba1b00
// 地址: 0x141ba1b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x86].b != 1 && arg1[0xa8] != 0 && arg1[0x97] != 0)
    void* rax_1 = arg1[0x98]
    
    if (rax_1 != 0 && *(rax_1 + 8) s> 0)
        (*(*arg1 + 0x8d8))()
        arg1[0x8a] = 0
        void*** result = j_sub_140a82f30(0x1a0)
        
        if (result == 0)
            return 0
        
        void* rcx = arg1[0xa8]
        int64_t arg_8 = 0
        int64_t rbx = *(rcx + 0x18)
        sub_1422883b0(result, arg1, 0)
        *result = &data_143080e40
        int64_t zmm0
        zmm0.d = (*(arg1 + 0x524)).d f* 0.0174532924f
        *(result + 0x15c) = zmm0.d
        result[0x2c] = *(arg1 + 0x464)
        result[0x2d] = rbx
        result[0x2e] = arg1[0xa0]
        result[0x2f] = arg1[0xa1]
        result[0x30] = 0
        result[0x31].b = *(arg1 + 0x49c)
        *(result + 0x189) = arg1[0xa4].b
        int64_t rax_8 = (*(*arg1 + 0x690))(arg1)
        *(result + 0x39) &= 0xfe
        int64_t* rcx_3 = result[0x2f]
        result[0x32] = rax_8
        result[0x30] = *sub_1421268c0(rcx_3, &arg_8, result[0x21][1].d)
        return result

return 0
