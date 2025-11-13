// 函数: sub_141cda3a0
// 地址: 0x141cda3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
uint64_t var_10 = __security_cookie ^ &var_58
void* r8
int32_t temp0_1
int32_t temp1_1

if (arg2 s>= 0 && arg2 s< *(arg1 + 0xa0))
    r8 = arg1 + 0xa8
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    temp0_1:temp1_1 = sx.q(arg2)

uint64_t result

if (arg2 s< 0 || arg2 s>= *(arg1 + 0xa0)
        || (*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)) & 1 << (arg2 & 0x1f).b) == 0)
    result.b = 0
else
    result = 1

if (result.b == 0)
    void* r8_2
    int32_t temp2_1
    int32_t temp3_1
    
    if (arg3 s>= 0 && arg3 s< *(arg1 + 0x30))
        void* rax_7 = *(arg1 + 0x48)
        r8_2 = arg1 + 0x38
        
        if (rax_7 != 0)
            r8_2 = rax_7
        
        temp2_1:temp3_1 = sx.q(arg3)
    
    if (arg3 s< 0 || arg3 s>= *(arg1 + 0x30)
            || (*(r8_2 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)) & 1 << (arg3 & 0x1f).b)
            == 0)
        result.b = 0
    else
        result = 1
    
    if (result.b != 0)
        void* r8_4
        int32_t temp4_1
        int32_t temp5_1
        
        if (arg4 s>= 0 && arg4 s< *(arg1 + 0x30))
            void* rax_13 = *(arg1 + 0x48)
            r8_4 = arg1 + 0x38
            
            if (rax_13 != 0)
                r8_4 = rax_13
            
            temp4_1:temp5_1 = sx.q(arg4)
        
        if (arg4 s< 0 || arg4 s>= *(arg1 + 0x30) || (
                *(r8_4 + (sx.q((temp5_1 + (temp4_1 & 0x1f)) s>> 5) << 2)) & 1 << (arg4 & 0x1f).b) == 0)
            result.b = 0
        else
            result.b = 1
        
        if (result.b != 0)
            int32_t rax_19 = data_143a1c6b4
            int32_t var_24_1 = rax_19
            int32_t var_38[0x4]
            int64_t* rdx_10 = *(sub_1409ca9d0(arg1 + 0x98, &var_38, arg2) + 8)
            
            if (rdx_10 != 0)
                *rdx_10 = rax_19.q
                rdx_10[1] = 0
                rdx_10[2] = 0
            
            result = sub_141cda530(arg1 + 0x28, arg2, arg3, arg4)

__security_check_cookie(var_10 ^ &var_58)
return result
