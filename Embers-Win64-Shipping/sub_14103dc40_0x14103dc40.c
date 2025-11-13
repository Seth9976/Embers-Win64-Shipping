// 函数: sub_14103dc40
// 地址: 0x14103dc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x2c94))
int32_t rbp = arg2

if (arg2 u<= result.d)
    result = zx.q(arg2)

*(arg1 + 0x2c94) = result.d

if (arg3 != 0)
    int32_t* rsi_1 = arg5
    void* rdi_1 = arg1 + 0x2c00
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        void* rbx_1 = *(arg4 - (arg1 + 0x2670) - 0x590 + rdi_1)
        *(arg1 + 0x2670 + (zx.q(rbp) << 3) + 0x290) = rbx_1
        result = zx.q(*(arg1 + 0x267a)) | zx.q(1 << (rbp u% 0x20))
        *(arg1 + 0x267a) = result.w
        
        if (rbx_1 == 0)
            *rdi_1 = 0
        else
            result = *(rbx_1 + 0x48)
            *rdi_1 = result
            
            if (*(rbx_1 + 0x98) != 0 && (*(rbx_1 + 0xa0) == 0 || *rsi_1 != 0xffffffff))
                int64_t rax_2 = *(arg1 + 0x10)
                int32_t var_90_1 = 0
                int512_t zmm0
                zmm0.o = zx.o(0)
                int64_t var_78
                __builtin_memset(&var_78, 0, 0x40)
                void* rcx = *(arg1 + 0x28)
                int64_t var_98 = rax_2
                void* var_88_1 = zmm0.q
                int16_t var_38_1 = 0xff00
                int32_t* rax_3
                int512_t zmm0_1
                rax_3, zmm0_1 = sub_141013310(rcx + 0x140, 4, &var_98, zmm0)
                int32_t rcx_2
                
                if (*(rbx_1 + 0xa0) != 0 || *rsi_1 != 0xffffffff)
                    rcx_2 = *rsi_1
                else
                    rcx_2 = 0
                
                *rax_3 = rcx_2
                int64_t* rcx_4 = *(*(*(arg1 + 0x28) + 0x1c8) + 0x30)
                int64_t var_48
                (*(*rcx_4 + 0x78))(rcx_4, *(*(rbx_1 + 0x98) + 0x20), 0, *(var_88_1 + 0x20), var_48, 
                    4)
                void* rdx_2 = *(rbx_1 + 0x98)
                void* rax_6 = *(rdx_2 + 0x28)
                
                if (rax_6 == 0)
                    if (data_1439b4ad4 != 0 && *(rdx_2 + 0x38) != 0)
                        zmm0_1 = sub_141026da0(*(*(*(arg1 + 0x28) + 0x1c8) + 0x118), rdx_2 + 0x30)
                else if (data_1439b4ad4 != 0 && *(rax_6 + 0x30) != 0)
                    zmm0_1 = sub_141026da0(*(*(*(arg1 + 0x28) + 0x1c8) + 0x118), rax_6 + 0x28)
                
                *(rbx_1 + 0xa0) = 1
                result, zmm0 = sub_141059a80(&var_98, zmm0_1)
        
        rbp += 1
        rdi_1 += 8
        rsi_1 = &rsi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
