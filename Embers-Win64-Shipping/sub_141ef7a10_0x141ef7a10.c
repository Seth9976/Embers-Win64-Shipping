// 函数: sub_141ef7a10
// 地址: 0x141ef7a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
result.b = arg2:4.d != 0

if ((sub_140b5b8a0(arg2.d, 0).b == 0 | result.b) != 0)
    result = *(arg1 + 0x1f8)
    int64_t rbp_1 = sx.q(*(arg1 + 0x200))
    int64_t rcx_3 = (rbp_1 << 5) + result
    
    if (result == rcx_3)
    label_141ef7a89:
        int32_t rax = (rbp_1 + 1).d
        *(arg1 + 0x200) = rax
        
        if (rax s> *(arg1 + 0x204))
            sub_1405c4e40(arg1 + 0x1f8)
        
        int64_t rax_1 = *(arg1 + 0x1f8)
        int64_t rcx_6 = rbp_1 << 5
        *(rcx_6 + rax_1) = 0
        *(rcx_6 + rax_1 + 8) = 0
        *(rcx_6 + rax_1 + 0xc) = 0
        *(rcx_6 + rax_1 + 0x10) = 0
        *(rcx_6 + rax_1 + 0x18) = 0
        *(rcx_6 + *(arg1 + 0x1f8)) = arg2
        result = *(arg1 + 0x1f8)
        *(rcx_6 + result + 0x18) = arg3
    else
        while (*result != arg2)
            result += 0x20
            
            if (result == rcx_3)
                goto label_141ef7a89
        
        *(result + 0x18) = arg3
    
    if ((*(arg1 + 0x8a) & 1) != 0)
        void* rcx_7 = data_143f5b298
        
        if (rcx_7 != 0)
            if (*(arg1 + 0x214) == 0xffffffff)
                void* rax_3 = sub_1405be820(arg1)
                
                if (rax_3 == 0)
                    result = sub_1423ddb40(data_143f5b298)
                else
                    result = sub_142435f50(rax_3)
                
                goto label_141ef7b4b
            
            result = sub_1423dcff0(rcx_7)
            
            if (result != 0)
                result = sub_141e7ca00(result, *(arg1 + 0x214))
            label_141ef7b4b:
                
                if (result != 0)
                    int64_t var_70_1 = *(arg1 + 0x740)
                    int64_t var_60_1 = arg3
                    void*** rax_5 = sub_140a82f30(0x28, 8)
                    *rax_5 = &data_142ec17e8
                    *(rax_5 + 8) = result.o
                    *(rax_5 + 0x18) = arg2.o
                    void*** var_48_1 = rax_5
                    void* (* var_58)(int64_t* arg1)
                    void* (* rax_6)(int64_t* arg1) = var_58
                    
                    if (rax_5 != -8)
                        rax_6 = sub_141ed9c80
                    
                    var_58 = rax_6
                    return sub_141e85cb0(&var_58, arg2.b)

return result
