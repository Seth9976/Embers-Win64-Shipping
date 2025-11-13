// 函数: sub_142be7370
// 地址: 0x142be7370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
char* result = sub_142b99860(arg1, (zx.d(*(arg3 + 8)) u>> 1) + 1, &arg_18)

if (arg_18 == 0)
    int32_t rax = sub_142b97060(arg2, *(arg3 + 0xc), arg5)
    arg_18 = rax
    
    if (rax == 0)
        int32_t rax_1 = sub_142b96500(arg2, zx.d(*(arg3 + 8)))
        arg_18 = rax_1
        
        if (rax_1 == 0)
            char* rbx_1 = arg2[7]
            char* result_1 = result
            uint32_t rdi_2 = zx.d(*(arg3 + 8)) u>> 1
            
            if (rdi_2 != 0)
                while (*rbx_1 == 0)
                    if (arg4(zx.q(sx.d(rbx_1[1]))) == 0)
                        break
                    
                    char rax_3 = rbx_1[1]
                    rbx_1 = &rbx_1[2]
                    *result_1 = rax_3
                    result_1 = &result_1[1]
                    uint32_t temp0_1 = rdi_2
                    rdi_2 -= 1
                    
                    if (temp0_1 == 1)
                        break
            
            if (rdi_2 == 0)
                *result_1 = rdi_2.b
            
            sub_142b96620(arg2)
            
            if (rdi_2 == 0)
                return result
    
    sub_142b99980(arg1, result)
    int64_t rdx_6 = *(arg3 + 0x10)
    *(arg3 + 8) = 0
    *(arg3 + 0xc) = 0
    sub_142b99980(arg1, rdx_6)
    *(arg3 + 0x10) = 0

return 0
