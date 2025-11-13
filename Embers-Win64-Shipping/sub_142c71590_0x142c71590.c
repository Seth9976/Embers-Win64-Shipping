// 函数: sub_142c71590
// 地址: 0x142c71590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_38
void* result
int128_t var_30
int32_t* rcx_2
int64_t rsi_1
int64_t* rdi_1

if (sub_142c70d80(2, arg1, &var_38) s<= 0)
    if (sub_142c70d80(0x17, arg1, &var_30) s<= 0)
        result = nullptr
    else
        int64_t* rax_9 = data_143ccb898(0x40)
        rdi_1 = rax_9
        
        if (rax_9 == 0)
            result = nullptr
        else
            int64_t rax_10 = data_143ccb8b0(arg1)
            rsi_1 = rax_10
            
            if (rax_10 != 0)
                rcx_2 = &rdi_1[4]
                *rcx_2 = var_30
                rdi_1[2].d = 0x100017
                goto label_142c7161d
            
            data_143ccb8a0(rdi_1)
            result = nullptr
else
    int64_t* rax_3 = data_143ccb898(0x40)
    rdi_1 = rax_3
    
    if (rax_3 == 0)
        result = nullptr
    else
        int64_t rax_4 = data_143ccb8b0(arg1)
        rsi_1 = rax_4
        
        if (rax_4 != 0)
            rcx_2 = &rdi_1[4]
            *rcx_2 = var_38
            rdi_1[2].d = 0x40002
        label_142c7161d:
            rdi_1[1] = 0
            *rdi_1 = rsi_1
            rdi_1[3] = &rdi_1[6]
            rdi_1[6] = rcx_2
            *(rdi_1[3] + 8) = 0
            void* result_1 = sub_142c71300(rdi_1, arg2)
            data_143ccb8a0(rsi_1)
            data_143ccb8a0(rdi_1)
            result = result_1
        else
            data_143ccb8a0(rdi_1)
            result = nullptr
__security_check_cookie(rax_1 ^ &var_58)
return result
