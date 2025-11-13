// 函数: sub_142929ee0
// 地址: 0x142929ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
int64_t* rdi = nullptr
int64_t rsi = 0
int64_t* var_48 = nullptr
int64_t var_50 = 0
int64_t r12 = arg4
int64_t r13 = arg2

while (true)
    int64_t var_60 = 0
    int64_t* rax_1 = sub_1428a6a70(0x38)
    char* result
    int32_t var_88
    
    if (rax_1 != 0)
        *arg8 = 0
        result = nullptr
        
        for (int64_t i = 0; i u< 0x38; i += 8)
            void* rdi_1 = *(i + &data_143b86398)
            int32_t var_68 = 0
            int64_t var_58 = 0
            var_88.q = &var_58
            char* result_1 =
                (*(rdi_1 + 8))(r13, arg3, r12, arg5, var_88, &var_68, arg6, arg7, var_68)
            
            if (var_68 s> 0)
                rax_1[sx.q(*arg8)] = rdi_1
                
                if (var_60 != 0)
                    (*(rdi_1 + 0x18))(&var_60)
                
                *arg8 += var_68
                bool cond:1_1 = *arg8 s<= 1
                var_60 = var_58
                
                if (not(cond:1_1))
                    sub_1429691b0(result)
                    sub_1429691b0(result_1)
                    int64_t rax_6 = *(rdi_1 + 0x18)
                    
                    if (rax_6 != 0)
                        rax_6(&var_60)
                    
                    var_60 = 0
                    result = nullptr
                else if (result == 0)
                    result = result_1
        
        if (*arg8 == 1)
            void* rax_7 = *rax_1
            
            if (*(rax_7 + 0x20) != 0)
                *(arg1 + 0x18) = rax_7
                *(arg1 + 0x20) = var_60
        
        sub_1428a6780(rax_1)
        rdi = var_48
        rsi = var_50
    else
        var_88 = 0x3ea
        sub_1428a5670((rax_1 + 0x2c).d, (rax_1 + 0x7c).d, (rax_1 + 0x41).d, 
            "crypto\store\loader_file.c", 0x3ea)
        result = nullptr
    sub_1428a6780(rsi)
    sub_1428a71f0(rdi)
    
    if (result == 0)
        return result
    
    if (sub_1406938b0(result) != 0xffffffff)
        sub_1428a49e0()
        return result
    
    int64_t rax_10 = sub_1429694c0(result)
    var_50 = rax_10
    rsi = rax_10
    r13 = rax_10
    int64_t* rax_11 = sub_1429694b0(result)
    rdi = rax_11
    var_48 = rax_11
    r12 = rax_11[1]
    arg5 = *rax_11
    sub_1428a6780(result)
