// 函数: sub_142adfb50
// 地址: 0x142adfb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int16_t rcx = *(arg2 + 8)
int32_t rax_1

if (rcx s< 0)
    rax_1 = *(arg2 + 0xc)
else
    rax_1 = sx.d(rcx) s>> 5

uint32_t rsi

if (rax_1 == 0)
    rsi = 0xffff
else
    void* rax_2 = arg2 + 0xa
    
    if ((rcx.b & 2) == 0)
        rax_2 = *(arg2 + 0x18)
    
    rsi = zx.d(*rax_2)

int64_t* rbp = nullptr
int32_t* rbx = arg6
*rbx = 0
uint64_t result
int32_t rax_4
uint32_t r13_1

if (rsi.w - 0x41 u> 0x19)
    result = zx.q(rsi - 0x61)
    
    if (result.w u<= 0x19)
        r13_1 = zx.d(rsi.w)
        rax_4 = r13_1 - 0x47
        goto label_142adfbe9
    
    *rbx = 0x1001f
else
    r13_1 = zx.d(rsi.w)
    rax_4 = r13_1 - 0x41
label_142adfbe9:
    void* i_1 = *(arg1 + (sx.q(rax_4) << 3) + 8)
    
    if (i_1 != 0)
        result = sub_142ae1ff0(arg1, arg2, arg3, i_1)
        uint64_t result_1 = result
        
        if (result == 0)
            for (void* i = *(i_1 + 0x98); i != 0; i = *(i + 0x98))
                i_1 = i
            
            result = j_sub_142a7dd00(0xa0)
            arg6 = result
            int64_t* result_2
            
            if (result == 0)
                result_2 = nullptr
            else
                result = sub_142adf3b0(result, arg2, arg4)
                result_2 = result
            
            if (result_2 == 0)
                goto label_142adfc29
            
            if (*rbx s<= 0)
                uint64_t rax_9 = j_sub_142a7dd00(0x90)
                arg6 = rax_9
                
                if (rax_9 != 0)
                    rbp = sub_142adf410(rax_9, arg3)
                
                sub_142a58580(&result_2[9], rbp, rbx)
                
                if (*rbx s<= 0)
                    result_2[0x12].b = arg5
                    return sub_142ae0d20(i_1 + 0x98, result_2)
            
            return (**result_2)(result_2, 1)
        
        if (*(arg1 + 0x1a8) != 0)
            sub_142a48100(result + 0x50, arg4)
            result = zx.q(arg5)
            *(result_1 + 0x90) = result.b
    else
        result = j_sub_142a7dd00(0xa0)
        arg6 = result
        uint64_t result_3
        
        if (result == 0)
            result_3 = 0
        else
            result = sub_142adf3b0(result, arg2, arg4)
            result_3 = result
        
        if (result_3 != 0)
            if (*rbx s<= 0)
                uint64_t rax_5 = j_sub_142a7dd00(0x90)
                arg6 = rax_5
                
                if (rax_5 != 0)
                    rbp = sub_142adf410(rax_5, arg3)
                
                sub_142a58580(result_3 + 0x48, rbp, rbx)
            
            if (*rbx s> 0 || *rbx s> 0)
                return (**result_3)(result_3, 1)
            
            *(result_3 + 0x90) = arg5
            
            if (rsi.w u< 0x61)
                result = zx.q(r13_1 - 0x41)
                *(arg1 + (sx.q(result.d) << 3) + 8) = result_3
            else
                result = zx.q(r13_1 - 0x47)
                *(arg1 + (sx.q(result.d) << 3) + 8) = result_3
        else
        label_142adfc29:
            
            if (*rbx s<= 0)
                *rbx = 7
return result
