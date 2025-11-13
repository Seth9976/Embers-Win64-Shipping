// 函数: sub_142931020
// 地址: 0x142931020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* i_2 = sub_1428b6440(arg2, arg1)
char* i_1 = i_2

if (i_2 != 0)
    char* i
    
    do
        void* rbx_1 = -ffffffffffffffff
        
        do
            rbx_1 += 1
        while (*(i_1 + rbx_1) != 0)
        
        void* rsi_1 = rbx_1 + i_1
        int32_t rax
        
        if (rbx_1 u> 5)
            rax = _stricmp(rsi_1 - 5, ".conf")
        
        if (rbx_1 u> 5 && rax == 0)
        label_1429310b2:
            char* rax_2 = -ffffffffffffffff
            
            do
                rax_2 = &rax_2[1]
            while (*(rax_2 + arg1) != 0)
            
            void* rsi_3 = rbx_1 + 2 + rax_2
            char* rax_3 = sub_1428a6a70(rsi_3)
            
            if (rax_3 == 0)
                sub_1428a5670(0xe, 0x6b, 0x41, "crypto\conf\conf_def.c", 0x2cd)
                break
            
            if (*rax_3 == 0)
                sub_1428a7090(rax_3, arg1, rsi_3)
                sub_1428a7010(rax_3, &data_142d63b88, rsi_3)
            
            sub_1428a7010(rax_3, i_1, rsi_3)
            int64_t* result = sub_1428b6d90(rax_3, &data_142d948d8)
            sub_1428a6780(rax_3)
            
            if (result != 0)
                return result
        else if (rbx_1 u> 4 && _stricmp(rsi_1 - 4, ".cnf") == 0)
            goto label_1429310b2
        
        i = sub_1428b6440(arg2, arg1)
        i_1 = i
    while (i != 0)

sub_1428b63e0(arg2)
*arg2 = 0
return nullptr
