// 函数: sub_141cc34c0
// 地址: 0x141cc34c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int32_t r15 = arg3
int16_t* var_40 = nullptr
arg3.b = 1
int32_t var_38 = 0

if (sub_140ce37a0(*arg2, &var_40, arg3.b) != 0)
    int16_t* const rsi_1 = &data_142d40450
    int16_t* const rcx_1 = &data_142d40450
    
    if (var_38 != 0)
        rcx_1 = var_40
    
    int64_t var_48
    
    if (sub_140a54510(rcx_1, u"None") == 0 || var_38 s<= 1)
        var_48 = 0
        *arg1 = 0
        rbx.b = 1
    else
        int16_t* rax_2 = var_40
        
        if (*rax_2 != 0x28)
            void* rbx_1 = data_143f35848
            
            if (var_38 != 0)
                rsi_1 = rax_2
            
            if (rbx_1 == 0)
                sub_141cc3750()
                rbx_1 = data_143f35848
            
            rbx = zx.q(sub_141cc3300(rbx_1, arg1, *sub_140b58260(&var_48, rsi_1, 1)))
        else
            int64_t* rax_3 = sub_141cc9450()
            var_48 = rax_3[3]
            int64_t var_30
            int512_t zmm2_1 = sub_140b63b70(&var_48, &var_30)
            int16_t* rax_4 = sub_140be1580(rax_3, *arg2, arg1, arg4, zmm2_1, r15, arg5, &var_30, 0)
            int64_t rcx_7 = var_30
            *arg2 = rax_4
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            void* rcx_8 = data_143f35848
            
            if (rcx_8 == 0)
                sub_141cc3750()
                rcx_8 = data_143f35848
            
            sub_141cc3300(rcx_8, arg1, *arg1)
            rbx.b = 1

int16_t* rcx_11 = var_40

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return zx.q(rbx.b)
