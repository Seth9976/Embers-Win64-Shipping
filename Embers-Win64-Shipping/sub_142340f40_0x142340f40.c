// 函数: sub_142340f40
// 地址: 0x142340f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2c0) != 0)
    int64_t* rcx = *(arg1 + 0x2b8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x2c0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x2b8)
        
        *(arg1 + 0x2a8) = (*(*rcx_1 + 0x48))(rcx_1)

void* rbx_1 = *(arg1 + 0x2a8)

if (rbx_1 != 0)
    void* rcx_2 = *(*(rbx_1 + 0x240) + 8)
    
    if (rcx_2 != 0 && sub_142413070(rcx_2) != 0)
        float zmm2 = arg3[2]
        float zmm5 = arg3[4]
        float temp0_1 = _mm_max_ss(arg3[3], 0)
        void* rcx_3 = *(rbx_1 + 0x240)
        float temp0_2 = _mm_max_ss(zmm5, 0)
        int32_t var_28 = int.d(temp0_1 + temp0_1 + 0.5f) s>> 1
        int32_t var_24_1 = int.d(temp0_2 + temp0_2 + 0.5f) s>> 1
        int32_t var_20_1 = int.d((zmm2 + zmm2) * *arg3 + temp0_1 + temp0_1 + 0.5f) s>> 1
        int32_t var_1c_1 = int.d((zmm2 + zmm2) * arg3[1] + temp0_2 + temp0_2 + 0.5f) s>> 1
        sub_14232fd50(rcx_3, &var_28)
        int64_t var_18 = *(rbx_1 + 0x240)
        void* rax_16 = *(rbx_1 + 0x248)
        void* var_10_1 = rax_16
        
        if (rax_16 != 0)
            *(rax_16 + 8) += 1
        
        sub_140db37c0(arg4, arg5, &var_18)

return zx.q(arg5)
