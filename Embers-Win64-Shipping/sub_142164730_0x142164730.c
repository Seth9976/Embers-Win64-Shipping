// 函数: sub_142164730
// 地址: 0x142164730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *arg1

if (result == 0xffffffff)
    *arg1 = 0
    sub_140af2b60()
    sub_140b2ab20(&data_143dbb3f0, u"ReplicationCSVCaptureFrames=", arg1)
    result = *arg1

if (result s<= 0)
    result = arg1[1]
    
    if (result s> 0)
        int32_t result_1 = result
        result -= 1
        arg1[1] = result
        
        if (result_1 == 1)
            sub_140b19e60()
            void* rdx_5 = data_1439a8bd0
            (*(rdx_5 + 0x50))(&data_1439a8bd0, rdx_5)
            return sub_140b721f0(1) __tailcall
else
    if (arg1[2].b == 0)
        arg1[2].b = 1
        int64_t var_48 = 0
        int32_t var_40_1 = 0
        sub_1405947f0(&var_48, 0xc)
        int32_t rax = var_40_1 + 0xc
        var_40_1 = rax
        
        if (rax s> 0)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, u"Replication", 0x18)
        sub_140b37ad0(sub_140b3cdd0(), &var_48)
        int64_t rcx_4 = var_48
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t var_38
        __builtin_memset(&var_38, 0, 0x20)
        int64_t var_28
        result = sub_140b33560(sub_140b3cdd0(), 0xffffffff, &var_38, &var_28, 0)
        int64_t rcx_6 = var_38
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = var_28
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
    
    *arg1 -= 1
    
    if (*arg1 s<= 0)
        int64_t arg_8 = 0
        void* var_18
        result = sub_140b37b10(sub_140b3cdd0(), &var_18, &arg_8)
        int64_t* var_10
        
        if (var_10 != 0)
            result = var_10[1].d
            var_10[1].d -= 1
            
            if (result == 1)
                result = (**var_10)(var_10)
                int32_t rsi_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    result = (*(*var_10 + 8))(var_10, zx.q(rsi_1))
        
        arg1[1] = 0x3c

return result
