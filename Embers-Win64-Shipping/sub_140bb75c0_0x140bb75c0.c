// 函数: sub_140bb75c0
// 地址: 0x140bb75c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_58 = nullptr
int64_t* rcx_5

if (sub_140bbd8c0() == 0 || (*(arg1 + 0x290) & 0x100000) == 0)
    rcx_5 = var_58
else
    int64_t var_50
    sub_140b58260(&var_50, arg3, 1)
    int64_t rbx_1 = var_50
    int64_t arg_20
    void* const rcx_4
    
    if (*(arg1 + 0x368) == *(arg1 + 0x394))
    label_140bb7690:
        rcx_4 = nullptr
    else
        arg_20 = rbx_1
        int32_t rax_3 = sub_140b5ead0(rbx_1.d) + arg_20:4.d
        void* r8 = arg1 + 0x398
        void* rcx_2 = *(r8 + 8)
        
        if (rcx_2 != 0)
            r8 = rcx_2
        
        int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0x3a8)) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_140bb7690_1:
            rcx_4 = nullptr
        else
            int64_t r8_1 = *(arg1 + 0x360)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_5) * 3
                rcx_4 = r8_1 + (rdx_4 << 3)
                
                if (*(r8_1 + (rdx_4 << 3)) == rbx_1)
                    break
                
                rax_5 = *(rcx_4 + 0x10)
                
                if (rax_5 == 0xffffffff)
                    goto label_140bb7690_2
            
            if (rax_5 == 0xffffffff)
            label_140bb7690_2:
                rcx_4 = nullptr
    
    void* rax_6 = rcx_4 + 8
    
    if (rcx_4 == 0)
        rax_6 = nullptr
    
    if (rax_6 == 0)
        if (sub_140b936f0(arg2) != 0)
            int64_t var_48 = 0
            int32_t rdx_5 = 0
            int32_t var_40_1 = 0
            int32_t rcx_7 = 0
            int32_t var_3c_1 = 0
            
            if (arg3 != 0 && *arg3 != 0)
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while (arg3[rbx_2] != 0)
                
                if (rbx_2.d + 1 s> 0)
                    sub_1405947f0(&var_48, rbx_2.d + 1)
                    rcx_7 = var_3c_1
                    rdx_5 = var_40_1
                
                int32_t rax_8 = rbx_2.d + 1 + rdx_5
                int32_t var_40_2 = rax_8
                
                if (rax_8 s> rcx_7)
                    sub_140594770(&var_48)
                
                UnDecorator::getReferenceType(var_48, arg3, (rbx_2.d + 1) * 2)
            
            sub_140ba9350()
            
            if (sub_140a32a50(&var_48, 0x143e1a680, 1) == 0)
                int16_t* var_38
                sub_140b93ae0(&var_38, &var_48)
                int16_t* const rdx_9 = &data_142d40450
                int16_t* rbx_4 = var_38
                int32_t var_30
                
                if (var_30 != 0)
                    rdx_9 = rbx_4
                
                void* rax_10 = sub_140b93730(*(arg1 + 0xa0), rdx_9, 0xffffffff)
                int64_t* rax_11
                
                if (rax_10 == 0)
                    rax_11 = nullptr
                else
                    rax_11 = rax_10 + 0x230
                
                var_58 = rax_11
                var_38 = &var_50
                var_30.q = &var_58
                sub_140b92a80(arg1 + 0x360, &arg_20, &var_38, nullptr)
                
                if (rbx_4 != 0)
                    sub_140a74f90(rbx_4)
            
            int64_t rcx_16 = var_48
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
        
        rcx_5 = var_58
    else
        rcx_5 = *rax_6
        var_58 = rcx_5

if (rcx_5 == 0)
    return 0

return (*(*rcx_5 + 0x18))(rcx_5)
