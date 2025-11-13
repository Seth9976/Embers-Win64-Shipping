// 函数: sub_142c7f190
// 地址: 0x142c7f190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
void* rax = *(rbp + 0x250)
int32_t result

if (arg2 == 0x96 || arg2 == 0x7d)
    int64_t rsi_1 = -1
    
    if (arg3 == 0x1f || *(rbp + 0x5db) != 0 || *(rax + 0x20) s>= 1)
        int64_t rax_7 = *(rax + 0x20)
        
        if (rax_7 s> -1)
            rsi_1 = rax_7
    else
        char* str1 = *(rbp + 0xa80)
        char* rax_3 = strstr(str1, " bytes")
        void* rbx_1 = &rax_3[-1]
        
        if (rax_3 != 0)
            int32_t rdi_2 = rbx_1.d - str1.d
            int32_t i_1 = rdi_2 - 1
            
            if (rdi_2 != 1)
                int32_t i
                
                do
                    char rax_4 = *rbx_1
                    
                    if (rax_4 == 0x28)
                        break
                    
                    if (isdigit(zx.d(rax_4)) == 0)
                        goto label_142c7f2c1
                    
                    rbx_1 -= 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if (rbx_1 != 0)
                rsi_1 = strtoll(rbx_1 + 1, nullptr, 0)
    
label_142c7f2c1:
    int64_t r8_1 = *(rbp + 0xe8)
    
    if (rsi_1 s> r8_1 && r8_1 s> 0)
        *(rbp + 0xd8) = r8_1
        rsi_1 = r8_1
    else if (arg3 != 0x1f && *(rbp + 0x5db) != 0)
        rsi_1 = -1
    
    int64_t r8_2
    int512_t zmm2
    r8_2, zmm2 = sub_142c64850(rbp, "Maxdownload = %I64d\n", r8_1, arg4)
    
    if (arg3 != 0x1f)
        r8_2, zmm2 = sub_142c64850(rbp, "Getting file with size: %I64d\n", rsi_1, zmm2)
    
    arg1[0xeb] = rsi_1
    *(arg1 + 0x754) = arg3
    
    if (*(rbp + 0x5de) == 0)
        return sub_142c7e120(arg1)
    
    char arg_10
    int64_t r8_4
    int512_t zmm2_1
    result, r8_4, zmm2_1 = sub_142c7de70(arg1, &arg_10, r8_2, zmm2)
    
    if (result == 0)
        if (arg_10 == result.b)
            sub_142c64850(rbp, "Data conn was not available immediately\n", r8_4, zmm2_1)
            arg1[0xea].d = 0
            *(arg1 + 0x731) = 1
        
        return 0
else
    if (arg3 == 0x1f && arg2 == 0x1c2)
        *(rax + 0x18) = 2
        arg1[0xea].d = 0
        return 0
    
    sub_142c64760(rbp, "RETR response: %03d", zx.q(arg2), arg4)
    
    if (arg3 == 0x20)
        result = arg3 + 0x2e
    
    if (arg3 != 0x20 || arg2 != 0x226)
        return 0x13

return result
