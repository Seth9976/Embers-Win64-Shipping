// 函数: sub_142be7260
// 地址: 0x142be7260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = zx.d(*(arg3 + 8)) + 1
int32_t arg_18 = 0
char* result = sub_142b99860(arg1, rdx_1, &arg_18)

if (arg_18 == 0)
    int32_t rax = sub_142b97060(arg2, *(arg3 + 0xc), arg5)
    arg_18 = rax
    
    if (rax == 0)
        int32_t rax_1 = sub_142b96500(arg2, zx.d(*(arg3 + 8)))
        arg_18 = rax_1
        
        if (rax_1 == 0)
            uint32_t i_1 = zx.d(*(arg3 + 8))
            char* result_1 = result
            char* rdi_1 = arg2[7]
            
            if (i_1 != 0)
                uint32_t i
                
                do
                    if (arg4(zx.q(sx.d(*rdi_1))) == 0)
                        break
                    
                    char rax_3 = *rdi_1
                    rdi_1 = &rdi_1[1]
                    *result_1 = rax_3
                    result_1 = &result_1[1]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if (i_1 == 0)
                *result_1 = i_1.b
            
            sub_142b96620(arg2)
            
            if (i_1 == 0)
                return result
    
    sub_142b99980(arg1, result)
    int64_t rdx_5 = *(arg3 + 0x10)
    *(arg3 + 0xc) = 0
    *(arg3 + 8) = 0
    sub_142b99980(arg1, rdx_5)
    *(arg3 + 0x10) = 0

return 0
