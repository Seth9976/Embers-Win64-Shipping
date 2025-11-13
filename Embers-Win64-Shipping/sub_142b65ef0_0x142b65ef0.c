// 函数: sub_142b65ef0
// 地址: 0x142b65ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t r14 = 0
char* rsi = arg2
int32_t result_2 = 0
int32_t result

if (arg3 == 0 || *arg3 s> 0)
    result = 0xffff
else if (arg1 s>= 4 || arg2 == 0 || *arg2 == 0)
    *arg3 = 1
    result = 0xffff
else if (sub_142b65db0(arg3) == 0)
    result = 0xffff
else
    int32_t i = 0
    int64_t r15_1 = 0
    char var_148
    char var_c8[0x80]
    
    do
        char rbp_1 = *rsi
        rsi = &rsi[1]
        
        if (rbp_1 == 0)
            uint64_t i_4 = zx.q(i)
            
            if (i_4 u>= 0x78)
                __report_rangecheckfailure()
                noreturn
            
            (&var_148)[i_4] = 0
            var_c8[i_4] = 0
            break
        
        var_c8[r15_1] = sub_142a863a0(zx.d(rbp_1))
        (&var_148)[r15_1] = sub_142a86220(zx.d(rbp_1))
        i += 1
        r15_1 += 1
    while (i u< 0x78)
    
    if (i == 0x78)
    label_142b660e4:
        *arg3 = 0xc
        result = 0xffff
    else if (var_148 != 0x3c)
        int32_t* rcx_10 = data_144016e90
        int32_t* rax_13 = zx.q(rcx_10[3])
        int32_t* rbx_4 = &rcx_10[1] + rax_13
        int32_t i_5 = *(rax_13 + rcx_10)
        
        if (i_5 != 0)
            int32_t i_1
            
            do
                result = sub_142b656c0(rbx_4, arg1, &var_c8)
                
                if (result != 0xffff)
                    goto label_142b66114
                
                rbx_4 += zx.q(*(rbx_4 + 0xa))
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            rcx_10 = data_144016e90
        
        char (* var_158)[0x80] = &var_c8
        int32_t result_1 = 0xffff
        sub_142b65230(rcx_10, 0, 0x110000, 0, &var_158, arg1)
        result = result_1
        
        if (result == 0xffff)
            *arg3 = 0xc
    else
        if (arg1 != 2)
            goto label_142b660e4
        
        uint64_t rbx_1 = zx.q(i - 1)
        
        if ((&var_148)[rbx_1] != 0x3e)
            goto label_142b660e4
        
        int32_t i_2 = rbx_1.d
        
        while (rbx_1.d u>= 3)
            rbx_1 = zx.q(rbx_1.d - 1)
            
            if ((&var_148)[rbx_1] == 0x2d)
                break
        
        if (rbx_1.d u< 2 || (&var_148)[rbx_1] != 0x2d || i_2 - rbx_1.d - 2 u> 7)
            goto label_142b660e4
        
        if (zx.q(rbx_1.d) u>= 0x78)
            __report_rangecheckfailure()
            noreturn
        
        (&var_148)[rbx_1] = 0
        uint64_t rbx_2 = zx.q(rbx_1.d + 1)
        
        if (rbx_2.d u< i_2)
            void* rdx = &(&var_148)[zx.q(rbx_2.d)]
            
            do
                char rcx_4 = *rdx
                int32_t rdi_1
                
                if (rcx_4 - 0x30 u> 9)
                    if (rcx_4 - 0x61 u> 5)
                        goto label_142b660e4
                    
                    rdi_1 = (result_2 << 4) - 0x57
                else
                    rdi_1 = (result_2 - 3) << 4
                
                result_2 = rdi_1 + sx.d(rcx_4)
                
                if (result_2 s> 0x10ffff)
                    goto label_142b660e4
                
                rbx_2 = zx.q(rbx_2.d + 1)
                rdx += 1
            while (rbx_2.d u< i_2)
        
        bool rax_12 = sub_142b65b20(result_2)
        
        if (rbx_2.d u>= 0x78)
            __report_rangecheckfailure()
            noreturn
        
        (&var_148)[rbx_2] = 0
        char const (** const r9_1)[0xb] = &data_1436718c0
        
        while (true)
            void var_147
            void* rcx_6 = &var_147
            uint32_t i_3
            uint32_t rdx_1
            
            do
                rdx_1 = zx.d(*rcx_6)
                i_3 = zx.d(*(rcx_6 + *r9_1 - &var_147))
                
                if (rdx_1 != i_3)
                    break
                
                rcx_6 += 1
            while (i_3 != 0)
            
            if (rdx_1 - i_3 == 0)
                break
            
            r14 += 1
            r9_1 = &r9_1[1]
            
            if (r14 u>= 0x21)
                goto label_142b660e4
        
        if (zx.d(rax_12) != r14)
            goto label_142b660e4
        
        result = result_2

label_142b66114:
__security_check_cookie(rax_1 ^ &var_188)
return result
