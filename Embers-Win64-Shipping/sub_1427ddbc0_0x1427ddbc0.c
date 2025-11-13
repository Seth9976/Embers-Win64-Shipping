// 函数: sub_1427ddbc0
// 地址: 0x1427ddbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[9].b == 0
void* arg_8 = nullptr

if (not(cond:0))
    void* r8_1 = *arg1
    char const* const rdx_1
    
    if (*(r8_1 + 0x10) == 0)
        rdx_1 = "bad__repx__name"
    else
        rdx_1 = *(*(r8_1 + 8) + zx.q(*(r8_1 + 0x10) - 1) * 0x18)
    
    int64_t* rcx = arg1[5]
    
    if ((*(*rcx + 0x10))(rcx, rdx_1, &arg_8) != 0)
        char* rcx_1 = arg_8
        
        if (rcx_1 != 0 && *rcx_1 != 0)
            arg_8 = rcx_1
            int32_t zmm0 = sub_1427e6ee0(rcx_1, &arg_8)
            void* rcx_2 = arg_8
            *arg2 = zmm0
            int32_t zmm0_1 = sub_1427e6ee0(rcx_2, &arg_8)
            char* rcx_3 = arg_8
            arg2[1] = zmm0_1
            int64_t result
            int32_t zmm0_2
            zmm0_2, result = sub_1427e6ee0(rcx_3, &arg_8)
            arg2[2] = zmm0_2
            result.b = 1
            return result

return 0
