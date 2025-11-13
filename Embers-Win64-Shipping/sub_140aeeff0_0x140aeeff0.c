// 函数: sub_140aeeff0
// 地址: 0x140aeeff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140aefb30(arg1, arg3, 0)
int64_t* r13 = rax

if (rax != 0)
    int64_t rsi_1 = 0
    int64_t var_58 = 0
    int32_t rdx_1 = 0
    int32_t var_50_1 = 0
    int32_t rcx = 0
    int32_t var_4c_1 = 0
    int64_t r15_1 = 0
    int64_t rdi_1 = -1
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_58, rbx_1.d + 1)
            rcx = var_4c_1
            rdx_1 = var_50_1
            r15_1 = var_58
        
        int32_t rax_1 = rbx_1.d + 1 + rdx_1
        var_50_1 = rax_1
        
        if (rax_1 s> rcx)
            sub_140594770(&var_58)
            r15_1 = var_58
        
        UnDecorator::getReferenceType(r15_1, arg2, (rbx_1.d + 1) * 2)
    
    int32_t arg_20
    sub_140a452d0(r13, &arg_20, &var_58)
    int64_t rax_2 = sx.q(arg_20)
    
    if (rax_2.d == 0xffffffff)
        rax = nullptr
    else
        rax = rax_2 * 0xb8 + *r13
    
    void* rbx_3 = &rax[2]
    
    if (rax == 0)
        rbx_3 = nullptr
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    if (rbx_3 != 0)
        int32_t r11 = *(rbx_3 + 0x28)
        void* r9 = rbx_3 + 0x10
        var_58:4.d = 1
        int32_t rcx_6 = 0
        var_58.d = 0
        int32_t r8_3 = 0
        var_50_1.q = r9
        int32_t var_48 = 0xffffffff
        int64_t var_44 = 0
        
        if (r11 != 0)
            void* rax_4 = *(r9 + 0x10)
            
            if (rax_4 != 0)
                r9 = rax_4
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11 - 1)
            int32_t rdx_7 = *r9
            
            if (rdx_7 != 0)
            label_140aef168:
                int32_t rax_11 = neg.d(rdx_7) & rdx_7
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
                var_58:4.d = rax_11
                int32_t rax_12
                
                if (rax_11 == 0)
                    rax_12 = 0x20
                else
                    rax_12 = 0x1f - temp0_2
                
                var_44.d = r8_3 - rax_12 + 0x1f
                
                if (r8_3 - rax_12 + 0x1f s> r11)
                    var_44.d = r11
            else
                while (true)
                    int64_t rdx_8 = sx.q(rcx_6)
                    r8_3 += 0x20
                    rcx_6 += 1
                    var_44:4.d = r8_3
                    var_58.d = rcx_6
                    
                    if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_7 = *(r9 + (rdx_8 << 2) + 4)
                    var_48 = 0xffffffff
                    
                    if (rdx_7 != 0)
                        goto label_140aef168
                
                var_44.d = r11
        
        if ((var_48.q u>> 0x20).d s< *(_mm_bsrli_si128(var_58.o, 8).q + 0x18))
            sub_140aee8a0(rbx_3, 0)
        
        var_58 = 0
        int32_t rdx_11 = 0
        int32_t var_50_2 = 0
        int32_t rcx_9 = 0
        int32_t var_4c_2 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            do
                rdi_1 += 1
            while (arg2[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_58, rdi_1.d + 1)
                rcx_9 = var_4c_2
                rdx_11 = var_50_2
                rsi_1 = var_58
            
            int32_t rax_15 = rdx_11 + rdi_1.d + 1
            int32_t var_50_3 = rax_15
            
            if (rax_15 s> rcx_9)
                sub_140594770(&var_58)
                rsi_1 = var_58
            
            UnDecorator::getReferenceType(rsi_1, arg2, (rdi_1.d + 1) * 2)
        
        sub_140afe6c0(r13, &var_58)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        if (*(arg1 + 0x58) == 0)
            *(r13 + 0x34)
            
            if (r13[1].d != *(r13 + 0x34))
                r13[0xa].b = 1
                sub_140af04f0(arg1, 0, arg3)
                void** rax_19
                rax_19.b = 1
                return rax_19
            
            sub_140a464c0()
            int16_t* const rdx_15
            
            if (arg3[1].d == 0)
                rdx_15 = &data_142d40450
            else
                rdx_15 = *arg3
            
            (*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_15, 0, 0, 0)
        
        uint64_t rax_16
        rax_16.b = 1
        return rax_16

rax.b = 0
return rax
