// 函数: sub_141986ba0
// 地址: 0x141986ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
rbx.b = 0

if (sub_141976740() != 0)
    char rax_1
    int64_t r8_1
    rax_1, r8_1 = sub_141978390()
    
    if (rax_1 != 0)
        sub_140b44040(data_143f01ef8, u"Saving PSO cache", r8_1)
        AcquireSRWLockExclusive(&data_143f01fc8)
        void* rax_2 = data_143f0f148
        
        if (rax_2 != 0)
            int64_t arg_18 = *(rax_2 + 0x14)
            int64_t var_18
            int64_t* rax_4 = sub_140b63b70(&arg_18, &var_18)
            int16_t* const r8_2 = &data_142d40450
            
            if (rax_4[1].d != 0)
                *rax_4
            
            if (arg1[1].d != 0)
                r8_2 = *arg1
            
            int16_t* var_28
            sub_140a2e390(&var_28, u"%s_%s.upipelinecache", r8_2)
            int64_t* rax_5
            int512_t zmm1_1
            rax_5, zmm1_1 = sub_140b257f0()
            int32_t var_20
            int32_t rbx_2
            
            if (var_20 == 0)
                rbx_2 = 0
            else
                rbx_2 = var_20 - 1
            
            int32_t rax_7
            
            if (rax_5[1].d == 0)
                rax_7 = 2
            
            if (rax_5[1].d != 0 || rbx_2 == 0xffffffff)
                rax_7 = 1
            
            int64_t var_38 = 0
            int32_t rdx_1 = rax_7 + rbx_2
            int32_t rdi_1 = rax_5[1].d
            int64_t rsi_1 = *rax_5
            int32_t var_30_1 = rdi_1
            
            if (rdi_1 != 0 || rdx_1 != 0)
                sub_1405a4c70(&var_38, rdx_1 + rdi_1, 0)
                memcpy(var_38, rsi_1, rdi_1 * 2)
            else
                int32_t var_2c_1 = 0
            
            sub_140a2cf70(&var_38, var_28, rbx_2)
            int16_t* rcx_7 = var_28
            
            if (rcx_7 != 0)
                zmm1_1 = sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = var_18
            
            if (rcx_8 != 0)
                zmm1_1 = sub_140a74f90(rcx_8)
            
            char rax_9 = sub_1419839c0(data_143f0f148, &var_38, arg2, &data_1439c8020, zmm1_1, 
                &data_1439c8070, data_1439c79f0, &data_1439c7fd0)
            rbx = zx.q(rax_9)
            
            if (rax_9 != 0)
                data_143f01cc8 = data_1439c8078 - data_1439c80a4
            
            int64_t rcx_10 = var_38
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
        
        ReleaseSRWLockExclusive(&data_143f01fc8)

return zx.q(rbx.b)
