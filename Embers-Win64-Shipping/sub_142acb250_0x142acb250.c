// 函数: sub_142acb250
// 地址: 0x142acb250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg4
int32_t rbx = 0
int32_t var_48 = 0
int32_t rdi = 0
int32_t var_44 = 0
int32_t rax = 0
int32_t var_40 = 0
int32_t rbp = arg3
int32_t i = 0

if (*(arg4 + 8) s> 0)
    do
        int32_t arg_20 = 0
        void* rax_1 = sub_142ae72d0(r12, i)
        int32_t rax_2 = *(rax_1 + 0x10)
        char var_68
        int16_t var_60
        int16_t var_58
        
        if (rax_2 != 0)
            if (rax_2 != 1)
                if (rax_2 == 2)
                    arg4.b = 2
                    var_58 = 0x3b
                    var_60 = 0
                    var_68 = 2
                    int32_t rax_16
                    rax_16, arg4 = sub_142acaf10(arg1, arg2, rbp, arg4.b, 2, 0, 0x3b, &arg_20)
                    var_44 = rax_16
                    goto label_142acb463
                
                if (rax_2 != 4)
                label_142acb4d3:
                    *arg8 = 0
                    *arg7 = 0
                    *arg6 = 0
                    return 0
                
                arg4.b = 2
                var_58 = 0x3b
                var_60 = 0
                var_68 = 2
                int32_t rax_17
                rax_17, arg4 = sub_142acaf10(arg1, arg2, rbp, arg4.b, 2, 0, 0x3b, &arg_20)
                rbx = rax_17
                var_48 = rax_17
                goto label_142acb463
            
            arg4.b = 1
            rax_2.b = arg5 == 0
            var_58 = 0x17
            rax_2.b += 1
            var_60 = 0
            int32_t rax_15
            rax_15, arg4 = sub_142acaf10(arg1, arg2, rbp, arg4.b, rax_2.b, 0, 0x17, &arg_20)
            var_40 = rax_15
        label_142acb463:
            int32_t rcx_11 = arg_20
            
            if (rcx_11 == 0)
                goto label_142acb4d3
            
            rbp += rcx_11
        else
            int16_t* rsi_2 = *(rax_1 + 8)
            int32_t j = std::_WChar_traits<wchar_t>::length(rsi_2)
            
            if (i == 0 && rbp s< sub_142a4a1f0(arg2) && sub_142b13730(sub_142a486d0(arg2, rbp)) == 0
                    && j s> 0)
                do
                    uint32_t rbx_3 = zx.d(*rsi_2)
                    
                    if ((rbx_3 & 0xfffff800) == 0xd800 && not(test_bit(rbx_3, 0xa)) && j != 1)
                        uint32_t rcx_5 = zx.d(rsi_2[1])
                        
                        if ((rcx_5 & 0xfffffc00) == 0xdc00)
                            rbx_3 = ((rbx_3 - 0xd7f7) << 0xa) + rcx_5
                    
                    if (sub_142b13730(rbx_3) == 0)
                        break
                    
                    int32_t rax_12
                    rax_12.b = rbx_3 u> 0xffff
                    uint64_t rax_13 = zx.q(rax_12 + 1)
                    j -= rax_13.d
                    rsi_2 = &rsi_2[rax_13]
                while (j s> 0)
                
                rbx = var_48
            
            var_58.d = 0
            var_60.d = j
            var_68.d = 0
            char rax_14
            rax_14, arg4 = sub_142a8ee00(arg2, rbp, j, rsi_2, 0, var_60, 0)
            
            if (rax_14 != 0)
                goto label_142acb4d3
            
            rbp += j
        i += 1
    while (i s< *(r12 + 8))
    
    rdi = var_44
    rax = var_40

*arg6 = rax
*arg7 = rdi
*arg8 = rbx
return zx.q(rbp - arg3)
