// 函数: sub_1405d48a0
// 地址: 0x1405d48a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_142d55150
int32_t var_58
__builtin_memset(&var_58, 0, 0x14)
int128_t var_44 = zmm0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rdi = &var_58
int128_t zmm0_1 = data_142d55150
int64_t var_24 = 0

if (rax_2 != 0)
    rdi = rax_2

int64_t var_2c = 0
int32_t var_30 = 0
int128_t var_1c = zmm0_1
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_30, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* rcx_2 = &var_30

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
int32_t result = *rcx_2

if (result f!= *rdi)
    *arg3 = 1
else
    result = rcx_2[1]
    
    if (result f!= rdi[1])
        *arg3 = 1
    else
        result = rcx_2[2]
        
        if (result f!= rdi[2])
            *arg3 = 1
        else
            result = rcx_2[3]
            
            if (result f!= rdi[3])
                *arg3 = 1
            else
                result = rcx_2[4]
                
                if (result f!= rdi[4])
                    *arg3 = 1
                else
                    result = rcx_2[5]
                    
                    if (result f!= rdi[5])
                        *arg3 = 1
                    else
                        result = rcx_2[6]
                        
                        if (result f!= rdi[6])
                            *arg3 = 1
                        else
                            result = rcx_2[7]
                            
                            if (result f!= rdi[7])
                                *arg3 = 1
                            else
                                result = rcx_2[8]
                                
                                if (result f!= rdi[8])
                                    *arg3 = 1
                                else
                                    *arg3 = 0

return result
