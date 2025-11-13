// 函数: sub_14103ad60
// 地址: 0x14103ad60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
void*** result_1 = nullptr
int32_t i_1 = arg2
void*** result = nullptr
void*** result_4 = nullptr

if (arg2 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(arg2)
    int32_t rdi_1 = temp0_1
    int32_t arg_20 = rdi_1
    int32_t i
    
    do
        void* r13_1 = *(arg1 + (zx.q(rdi_1) << 3) + 0x9d8)
        void*** result_3
        int512_t zmm0_1
        result_3, zmm0_1 = j_sub_140a82f30(0xc0)
        void*** result_2 = result_3
        
        if (result_3 == 0)
            result_2 = nullptr
        else
            int32_t rcx = *arg3[1]
            int32_t* rax_3 = *arg3
            *result_2 = &data_142d3ff08
            result_2[1].d = 0
            result_2[3] = rax_3
            *result_2 = &data_142ef2938
            *(result_2 + 0xc) = 0
            result_2[2].w = 0x100
            result_2[4].d = *rax_3
            result_2[5] = r13_1
            result_2[6] = 0
            result_2[7].b = 1
            *result_2 = &data_142f00978
            result_2[8] = r13_1
            result_2[9].d = 0
            __builtin_memset(&result_2[0xa], 0, 0x50)
            result_2[0x14].w = 0xff00
            result_2[0x15] = 0
            result_2[0x16] = 0
            result_2[0x17].d = rcx
        
        uint32_t count = **arg3
        
        if (count != 0)
            int64_t* rcx_1 = *(arg3[2] + 0x20)
            int64_t rax_9
            
            if (*arg3[1] != 2)
                int64_t* rax_10
                int512_t zmm0_2
                rax_10, zmm0_2 = sub_1410246b0(*rcx_1)
                rax_9 = sub_141013310(rax_10, count, &result_2[8], zmm0_2)
            else
                rax_9 = sub_141012e10(*(*rcx_1 + (zx.q(*(r13_1 + 0x18)) << 3) + 0x4a0), count, 
                    0x100, &result_2[8], zmm0_1)
            
            memcpy(rax_9, *arg3[3], count)
        
        if (result_4 != 0)
            sub_14081d930(&result_4[6], result_2)
            result = result_1
            
            if (result_2 != 0)
                result_2[7].b = 0
        else
            result = result_2
            result_1 = result_2
        
        result_4 = result_2
        i = not.d(1 << rdi_1.b) & i_1
        i_1 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i)
            rdi_1 = temp0_2
            int32_t var_48_1 = rdi_1
        else
            rdi_1 = 0x20
        
        arg1 = arg_8
    while (i != 0)

return result
