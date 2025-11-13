// 函数: sub_140ce0e10
// 地址: 0x140ce0e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_8 = 0

if ((*(arg1 + 0x28) & 2) == 0)
    int32_t rax_1 = *(arg1 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1b).b & 1) == 0 && *(arg1 + 0x88) == 0)
        int32_t rcx_4 = *(arg1 + 0x5c)
        int64_t var_48 = 0
        int64_t var_40_1 = 0
        bool rdx_4 = sub_140b5b8a0(rcx_4, 0) == 0
        int64_t var_58
        int64_t var_38
        int64_t* rax_12
        int32_t rsi_1
        
        if ((*(arg1 + 0x60) != 0 | rdx_4) == 0)
            arg_8.q = *(arg1 + 0x18)
            sub_140b63b70(&arg_8, &var_58)
            rax_12 = &var_58
            rsi_1 = 2
        else
            rax_12 = sub_140b63b70(arg1 + 0x5c, &var_38)
            rsi_1 = 1
        
        int16_t* r12_1 = *rax_12
        *rax_12 = 0
        int32_t r13_1 = rax_12[1].d
        rax_12[1] = 0
        
        if ((rsi_1.b & 2) != 0)
            int64_t rcx_7 = var_58
            rsi_1 &= 0xfffffffd
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
        
        if ((rsi_1.b & 1) != 0)
            int64_t rcx_8 = var_38
            rsi_1 &= 0xfffffffe
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
        
        uint64_t rbx_1 = *(arg1 + 0x18)
        arg_8.q = rbx_1
        sub_140d212c0()
        
        if (data_1439aace8 == data_1439aad14)
        label_140ce0fa5:
            var_58 = 0
            int16_t* const r15_1 = &data_142d40450
            int32_t var_50_1 = 0
            
            if (r13_1 != 0)
                r15_1 = r12_1
            
            int32_t rcx_13 = 0
            int32_t var_4c_1 = 0
            
            if (r15_1 != 0 && *r15_1 != 0)
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while (r15_1[rbx_2] != 0)
                
                rbx_1 = zx.q(rbx_2.d + 1)
                
                if (rbx_1.d s> 0)
                    sub_1405947f0(&var_58, rbx_1.d)
                    rcx_13 = var_4c_1
                    rdi = var_50_1
                
                int32_t rax_18 = rdi + rbx_1.d
                int32_t var_50_2 = rax_18
                
                if (rax_18 s> rcx_13)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, r15_1, rbx_1.d * 2)
            
            rsi_1 |= 4
            
            if (sub_140ba1330(&var_58, 0, &var_48, 1) != 0)
                rbx_1.b = 0
            else
                rbx_1.b = 1
        else
            int32_t rax_15 = sub_140b5ead0(rbx_1.d) + arg2
            void* r8_1 = &data_1439aad18
            void* rcx_11 = data_1439aad20
            
            if (rcx_11 != 0)
                r8_1 = rcx_11
            
            int32_t rax_17 = *(r8_1 + (((sx.q(data_1439aad28) - 1) & sx.q(rax_15)) << 2))
            
            if (rax_17 == 0xffffffff)
                goto label_140ce0fa5
            
            int64_t r8_2 = data_1439aace0
            
            while (true)
                int64_t rdx_10 = sx.q(rax_17) * 3
                
                if (*(r8_2 + (rdx_10 << 3)) == rbx_1)
                    break
                
                rax_17 = *(r8_2 + (rdx_10 << 3) + 0x10)
                
                if (rax_17 == 0xffffffff)
                    goto label_140ce0fa5
            
            if (rax_17 == 0xffffffff)
                goto label_140ce0fa5
            
            rbx_1.b = 0
        
        if ((rsi_1.b & 4) != 0)
            int64_t rcx_18 = var_58
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
        
        if (rbx_1.b != 0)
            *(arg1 + 0x28) |= 2
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        int64_t rcx_20 = var_48
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)

return *(arg1 + 0x28) u>> 1 & 1
