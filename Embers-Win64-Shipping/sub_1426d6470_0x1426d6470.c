// 函数: sub_1426d6470
// 地址: 0x1426d6470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x70)
int64_t* r8 = nullptr

if (rcx != 0)
    void* rax_1 = *(arg2 + 0xc0)
    
    if (rax_1 != 0)
        void* rdx = *(rax_1 + 0x250)
        
        if (rdx != 0)
            int32_t rax_2 = data_143dbb210
            int64_t* rdx_1 = *(rdx + 0x130)
            char var_48_1 = 1
            int64_t var_38 = data_143dbb208
            int32_t var_30_1 = rax_2
            int64_t var_28 = _mm_unpacklo_ps(zx.o(0), 0)
            int32_t var_10_1 = 0
            int32_t var_20_1 = 0
            int64_t arg_8 = 0
            r8 = sub_14203f630(rcx, rdx_1, 0, &var_28, &var_38, 0, 0, 0x3f800000, 0x3f800000, 0, 0, 
                0)

int32_t rbx
rbx.b = r8 == 0
return zx.q(rbx)
