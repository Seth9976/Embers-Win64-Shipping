// 函数: sub_1426b1470
// 地址: 0x1426b1470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1426b2ca0(arg2)
int64_t* rax_13
int64_t var_2c

if (rax == 0)
    int32_t var_24_2 = data_143dbb210
    rax_13 = &var_2c
    var_2c = data_143dbb208
else
    char rax_1 = sub_1426b21d0(rax, arg3 + 0x10)
    void* rdx_1 = *(rax + 0xc0)
    int64_t rsi_1 = 0
    void* const rdi_1
    
    if (rdx_1 == 0 || rax_1 == 0xff)
        rdi_1 = nullptr
    else
        char rax_2 = *(rdx_1 + 0x4c)
        
        if (rax_1 u< rax_2)
            void* rcx_5 = *(rdx_1 + 0x30)
            
            if (rcx_5 == 0)
                rdi_1 = nullptr
            else
                rdi_1 = sub_1426b21a0(rcx_5, rax_1)
        else
            rdi_1 = *(rdx_1 + 0x38) + (zx.q(rax_1) - zx.q(rax_2)) * 0x18
    
    int32_t rax_12
    int64_t zmm0
    
    if (rdi_1 == 0)
        zmm0 = data_143f720c0
        rax_12 = data_143f720c8
    else
        void* rbx_1 = *(rdi_1 + 8)
        
        if (rbx_1 == 0)
            zmm0 = data_143f720c0
            rax_12 = data_143f720c8
        else if (*(rbx_1 + 0x10) != sub_14272e720())
            zmm0 = data_143f720c0
            rax_12 = data_143f720c8
        else
            if (*(rax + 0xd0) != 0 && zx.d(rax_1) s< *(rax + 0xe0))
                rsi_1 = zx.q(*(*(rax + 0xd8) + (zx.q(rax_1) << 1))) + *(rax + 0xc8)
            
            int64_t* rcx_7 = rsi_1 + ((zx.q(*(*(rdi_1 + 8) + 0x2b) u>> 1) & 1) << 2)
            int32_t rax_11
            
            if (rcx_7 == 0)
                zmm0 = data_143f720c0
                rax_11 = data_143f720c8
            else
                zmm0 = *rcx_7
                rax_11 = rcx_7[1].d
            
            var_2c = zmm0
            zmm0 = var_2c
            rax_12 = rax_11
    
    int32_t var_30_1 = rax_12
    int64_t var_38
    rax_13 = &var_38
    var_38 = zmm0
int32_t rax_15 = rax_13[1].d
*arg1 = *rax_13
arg1[1].d = rax_15
return arg1
