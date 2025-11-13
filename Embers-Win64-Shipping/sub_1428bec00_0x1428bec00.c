// 函数: sub_1428bec00
// 地址: 0x1428bec00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    char* rdi_1 = *arg1
    int32_t var_18_1
    int32_t rcx
    int32_t rdx_1
    int32_t r8_1
    
    if (rdi_1 == 0)
        rdx_1 = 0x6c
        var_18_1 = 0x19
        r8_1 = 0x6c
        rcx = 0x10
    else if (*(rdi_1 + 8) != 0)
        char** result_1 = sub_1428a6a70(0xa8)
        int64_t* result = result_1
        
        if (result_1 != 0)
            *result_1 = rdi_1
            
            if ((*rdi_1 & 2) != 0)
            label_1428becde:
                *(result + 0x24) = 1
                result[5].d = 4
                
                if ((*(rdi_1 + 8))(result) != 0)
                    if (sub_1428be970(result, arg1) != 0)
                        return result
                    
                    int64_t rdx_5 = *(*result + 0x10)
                    
                    if (rdx_5 != 0)
                        rdx_5(result)
                    
                    if (result[0x13].d == 5)
                        sub_142918150(result[0x14])
                    
                    void* rcx_8 = result[0x12]
                    result[0x14] = 0
                    sub_1428cc600(rcx_8)
                    int64_t* rdi_2 = result[1]
                    
                    if (rdi_2 != 0)
                        int64_t rdx_6 = *(*rdi_2 + 0x58)
                        
                        if (rdx_6 != 0)
                            rdx_6(rdi_2)
                        
                        sub_1428a6780(rdi_2)
                    
                    sub_1428901a0(result[2])
                    sub_1428901a0(result[3])
                    sub_1428a6780(result[6])
                    sub_1428a6780(result)
                    return 0
            else
                void* rax_2 = sub_142890500()
                result[2] = rax_2
                
                if (rax_2 != 0)
                    void* rax_3 = sub_142890500()
                    result[3] = rax_3
                    
                    if (rax_3 != 0)
                        goto label_1428becde
            
            sub_1428901a0(result[2])
            sub_1428901a0(result[3])
            sub_1428a6780(result)
            return 0
        
        var_18_1 = 0x23
        rdx_1 = (result_1 + 0x6c).d
        rcx = (&result_1[2]).d
        r8_1 = (result_1 + 0x41).d
    else
        rdx_1 = 0x6c
        var_18_1 = 0x1d
        rcx = 0x10
        r8_1 = 0x42
    
    sub_1428a5670(rcx, rdx_1, r8_1, "crypto\ec\ec_lib.c", var_18_1)

return 0
