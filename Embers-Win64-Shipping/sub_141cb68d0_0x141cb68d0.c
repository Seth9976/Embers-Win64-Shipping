// 函数: sub_141cb68d0
// 地址: 0x141cb68d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg2[4]
int64_t* rdi = arg3
int32_t rax = *(arg1 + 0x6c8)
int64_t arg_8 = rbx

if (rax != *(arg1 + 0x6f4))
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8 = arg1 + 0x6f8
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(*(arg1 + 0x708)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_3 = *(arg1 + 0x6c0)
        
        do
            int64_t rcx_3 = sx.q(i) * 2
            
            if (*(rdx_3 + (rcx_3 << 3)) == rbx)
                if (i != 0xffffffff)
                    int64_t rdx_4 = data_143e1a358
                    uint64_t var_68 = 0
                    int32_t var_60_1 = 0
                    sub_1408301c0(arg2, rdx_4, &var_68)
                    int16_t* const rsi_1 = &data_142d40450
                    int16_t* var_78
                    int16_t* var_58
                    
                    if (var_60_1 s> 1)
                        sub_140ba5860(&var_58, &var_68)
                        sub_140baf740(&var_78, &var_58)
                        int16_t* rcx_7 = var_58
                        
                        if (rcx_7 != 0)
                            sub_140a74f90(rcx_7)
                        
                        int16_t* rdx_7 = &data_142d40450
                        int32_t var_70
                        
                        if (var_70 != 0)
                            rdx_7 = var_78
                        
                        sub_140b58260(&arg_8, rdx_7, 1)
                        int16_t* rcx_9 = var_78
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                        
                        sub_141caa060(arg1 + 0x350, arg_8)
                    
                    int64_t rdx_9 = data_143e1a358
                    var_78 = nullptr
                    int32_t var_70_1 = 0
                    sub_1408301c0(rdi, rdx_9, &var_78)
                    int64_t rdx_10 = data_143e1a360
                    uint64_t var_88 = 0
                    int32_t var_80_1 = 0
                    sub_1408301c0(rdi, rdx_10, &var_88)
                    int16_t* rbx_1 = var_78
                    
                    if (var_70_1 s> 1 && var_80_1 s> 1)
                        int64_t var_98 = 0
                        int16_t* rdi_1 = &data_142d40450
                        
                        if (var_70_1 != 0)
                            rdi_1 = rbx_1
                        
                        int32_t rdx_11 = 0
                        int32_t rcx_13 = 0
                        int64_t var_90_1 = 0
                        
                        if (rdi_1 != 0 && *rdi_1 != 0)
                            int64_t rbx_2 = -1
                            
                            do
                                rbx_2 += 1
                            while (rdi_1[rbx_2] != 0)
                            
                            if (rbx_2.d + 1 s> 0)
                                sub_1405947f0(&var_98, rbx_2.d + 1)
                                rcx_13 = var_90_1:4.d
                                rdx_11 = var_90_1.d
                            
                            int32_t rax_5 = rbx_2.d + 1 + rdx_11
                            var_90_1.d = rax_5
                            
                            if (rax_5 s> rcx_13)
                                sub_140594770(&var_98)
                            
                            UnDecorator::getReferenceType(var_98, rdi_1, (rbx_2.d + 1) * 2)
                        
                        int64_t var_48
                        sub_140ba5860(&var_48, &var_98)
                        sub_140baf740(&var_58, &var_48)
                        int64_t rcx_19 = var_48
                        
                        if (rcx_19 != 0)
                            sub_140a74f90(rcx_19)
                        
                        int16_t* rdx_16 = &data_142d40450
                        int32_t var_50
                        
                        if (var_50 != 0)
                            rdx_16 = var_58
                        
                        int64_t arg_10
                        sub_140b58260(&arg_10, rdx_16, 1)
                        int16_t* rcx_21 = var_58
                        
                        if (rcx_21 != 0)
                            sub_140a74f90(rcx_21)
                        
                        int64_t rcx_22 = var_98
                        
                        if (rcx_22 != 0)
                            sub_140a74f90(rcx_22)
                        
                        int16_t* const rdi_2 = &data_142d40450
                        var_98 = 0
                        
                        if (var_80_1 != 0)
                            rdi_2 = var_88
                        
                        int32_t rdx_17 = 0
                        int32_t rcx_23 = 0
                        int64_t var_90_2 = 0
                        
                        if (rdi_2 != 0 && *rdi_2 != 0)
                            int64_t rbx_4 = -1
                            
                            do
                                rbx_4 += 1
                            while (rdi_2[rbx_4] != 0)
                            
                            if (rbx_4.d + 1 s> 0)
                                sub_1405947f0(&var_98, rbx_4.d + 1)
                                rcx_23 = var_90_2:4.d
                                rdx_17 = var_90_2.d
                            
                            int32_t rax_6 = rbx_4.d + 1 + rdx_17
                            var_90_2.d = rax_6
                            
                            if (rax_6 s> rcx_23)
                                sub_140594770(&var_98)
                            
                            UnDecorator::getReferenceType(var_98, rdi_2, (rbx_4.d + 1) * 2)
                        
                        sub_140ba5860(&var_48, &var_98)
                        sub_140baf740(&var_58, &var_48)
                        int64_t rcx_29 = var_48
                        
                        if (rcx_29 != 0)
                            sub_140a74f90(rcx_29)
                        
                        if (var_50 != 0)
                            rsi_1 = var_58
                        
                        int64_t arg_20
                        sub_140b58260(&arg_20, rsi_1, 1)
                        int16_t* rcx_31 = var_58
                        
                        if (rcx_31 != 0)
                            sub_140a74f90(rcx_31)
                        
                        int64_t rcx_32 = var_98
                        
                        if (rcx_32 != 0)
                            sub_140a74f90(rcx_32)
                        
                        sub_1405b3620(arg1 + 0x350, &var_48)
                        int64_t* var_40
                        *var_40 = arg_10
                        var_40[1] = arg_20
                        var_40[2].d = 0xffffffff
                        int64_t rbx_6 = *var_40
                        sub_1405b8300(arg1 + 0x350, &arg_8, 
                            (rbx_6 u>> 0x20).d + sub_140b5ead0(rbx_6.d), var_40, var_48.d, nullptr)
                        rbx_1 = var_78
                        rdi = arg3
                    
                    if (var_88 != 0)
                        sub_140a74f90(var_88)
                    
                    if (rbx_1 != 0)
                        sub_140a74f90(rbx_1)
                    
                    uint64_t rcx_38 = var_68
                    
                    if (rcx_38 != 0)
                        sub_140a74f90(rcx_38)
                
                break
            
            i = *(rdx_3 + (rcx_3 << 3) + 8)
        while (i != 0xffffffff)

sub_141cb6040(arg1 + 0x30, arg2, rdi)
return sub_140920c10(arg1 + 0x5d8, arg2) __tailcall
