// 函数: sub_142c8e340
// 地址: 0x142c8e340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t result

if (arg2 == 0)
    int32_t rbx_1 = 0
    
    if (sub_142898c70(arg3) s> 0)
        int32_t rax_11
        
        do
            result = sub_142c8e340(arg1, *sub_142898ea0(arg3, rbx_1), 0)
            
            if (result s<= 0)
                goto label_142c8e47b
            
            rbx_1 += 1
            rax_11 = sub_142898c70(arg3)
        while (rbx_1 s< rax_11)
    
    result = 1
else
    int32_t* rax_4 = sub_14289b970(sub_1428a9620(sub_1428a96d0(*arg2)))
    
    if (rax_4 != 0)
        int32_t count_1 = sub_1428916c0(rax_4)
        int64_t count = sx.q(count_1)
        
        if (count_1 s< 0)
            result = -1
        else
            void buffer1
            
            if (arg2[2].d != count.d || arg2[5].d != count.d)
                result = 0
            else if (sub_1428a22a0(sub_1428a3930(arg1), rax_4, &buffer1, nullptr) == 0)
                result = -1
            else if (memcmp(&buffer1, arg2[3], count) != 0)
                result = 0
            else
                sub_1428a23a0(arg1, rax_4, &buffer1, nullptr)
                
                if (memcmp(&buffer1, arg2[6], count) == 0)
                    result = 1
                else
                    result = 0
    else
        sub_1428a5670((rax_4 + 0x27).d, (rax_4 + 0x6d).d, (rax_4 + 0x77).d, 
            "crypto\ocsp\ocsp_vfy.c", 0x120)
        result = -1

label_142c8e47b:
__security_check_cookie(rax_1 ^ &var_98)
return result
