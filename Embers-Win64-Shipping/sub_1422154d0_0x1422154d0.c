// 函数: sub_1422154d0
// 地址: 0x1422154d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* rax = sub_140d3c6e0(&arg_18)
wchar16 const* const result

if (rax == 0)
    result = u"Connection missing during encryption ack"
    
    if (*(arg1 + 0xb0) != u"Connection missing during encryption ack")
        int32_t rbx_3 = 0
        bool cond:0 = *(arg1 + 0xbc) == 0x29
        *(arg1 + 0xb8) = 0
        
        if (not(cond:0))
            sub_1405947f0(arg1 + 0xb0, 0x29)
            rbx_3 = *(arg1 + 0xb8)
        
        *(arg1 + 0xb8) = rbx_3 + 0x29
        
        if (rbx_3 + 0x29 s> *(arg1 + 0xbc))
            sub_140594770(arg1 + 0xb0)
        
        __builtin_wcscpy(*(arg1 + 0xb0), u"Connection missing during encryption ack")
        return 0
else
    if (*(rax + 0x134) u<= 1 || rax[0xb] == 0)
        if (*(arg1 + 0xb0) != u"Connection encryption state failure")
            int32_t rbx_2 = 0
            bool cond:1_1 = *(arg1 + 0xbc) == 0x24
            *(arg1 + 0xb8) = 0
            
            if (not(cond:1_1))
                sub_1405947f0(arg1 + 0xb0, 0x24)
                rbx_2 = *(arg1 + 0xb8)
            
            *(arg1 + 0xb8) = rbx_2 + 0x24
            
            if (rbx_2 + 0x24 s> *(arg1 + 0xbc))
                sub_140594770(arg1 + 0xb0)
            
            void* rax_6 = *(arg1 + 0xb0)
            __builtin_memcpy(rax_6, u"Connection encryption state fail", 0x40)
            *(rax_6 + 0x40) = 0x6500720075
        
        sub_14213f9e0(rax)
        return 0
    
    char rcx_1 = *arg2
    
    if (rcx_1 != 1)
        int16_t* rax_2 = sub_140968270(rcx_1)
        int32_t rbx_1 = 0
        int64_t var_68 = 0
        int64_t r14_2 = 0
        int64_t var_60_1 = 0
        int32_t rdx_9 = 0
        int32_t rcx_13 = 0
        
        if (rax_2 != 0 && *rax_2 != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (rax_2[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_68, rdi_1.d + 1)
                rcx_13 = var_60_1:4.d
                rdx_9 = var_60_1.d
                r14_2 = var_68
            
            int32_t rax_3 = rdi_1.d + 1 + rdx_9
            var_60_1.d = rax_3
            
            if (rax_3 s> rcx_13)
                sub_140594770(&var_68)
                r14_2 = var_68
            
            UnDecorator::getReferenceType(r14_2, rax_2, (rdi_1.d + 1) * 2)
        
        if (*(arg1 + 0xb0) != u"Encryption ack failure")
            bool cond:2_1 = *(arg1 + 0xbc) == 0x17
            *(arg1 + 0xb8) = 0
            
            if (not(cond:2_1))
                sub_1405947f0(arg1 + 0xb0, 0x17)
                rbx_1 = *(arg1 + 0xb8)
            
            *(arg1 + 0xb8) = rbx_1 + 0x17
            
            if (rbx_1 + 0x17 s> *(arg1 + 0xbc))
                sub_140594770(arg1 + 0xb0)
            
            int64_t rdx_13 = *(arg1 + 0xb0)
            __builtin_memcpy(rdx_13, u"Encryption ack f", 0x20)
            *(rdx_13 + 0x20) = 0x75006c00690061
            *(rdx_13 + 0x28) = 0x650072
            *(rdx_13 + 0x2c) = 0
        
        result = sub_14213f9e0(rax)
        
        if (r14_2 != 0)
            return sub_140a74f90(r14_2)
    else
        if (*(arg2 + 0x20) s<= 0 || *(arg2 + 0x30) != 0)
            return sub_142141fa0(rax, &arg2[0x28])
        
        uint32_t count_1 = *(arg2 + 0x30)
        int64_t r15_1 = *(arg2 + 0x28)
        int64_t var_58 = 0
        uint32_t count_3 = count_1
        int32_t var_4c
        
        if (count_1 != 0)
            sub_1405da9e0(&var_58, count_1, 0)
            memcpy(var_58, r15_1, count_1)
        else
            var_4c = 0
        
        uint32_t count_2 = *(arg2 + 0x40)
        int64_t r15_2 = *(arg2 + 0x38)
        int64_t var_48 = 0
        uint32_t count_5 = count_2
        
        if (count_2 != 0)
            sub_1405da9e0(&var_48, count_2, 0)
            memcpy(var_48, r15_2, count_2)
        else
            int32_t var_3c_1 = 0
        
        int64_t var_38
        sub_140596d10(&var_38, &arg2[0x48])
        
        if (&var_58 != &arg2[0x18])
            uint32_t count = *(arg2 + 0x20)
            int64_t r14_1 = *(arg2 + 0x18)
            uint32_t count_4 = count
            
            if (count != 0 || var_4c != 0)
                sub_1405da9e0(&var_58, count, var_4c)
                memcpy(var_58, r14_1, count)
            else
                int32_t var_4c_1 = 0
        
        result = sub_142141fa0(rax, &var_58)
        int64_t rcx_10 = var_38
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = var_48
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        int64_t rcx_20 = var_58
        
        if (rcx_20 != 0)
            return sub_140a74f90(rcx_20)

return result
