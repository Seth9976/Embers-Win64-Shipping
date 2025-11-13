// 函数: sub_142ab2f00
// 地址: 0x142ab2f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t result

if (arg2 == -0x8000000000000000)
    int32_t* var_78
    sub_142ab5870(&var_78)
    uint64_t rbx_1 = 0
    int32_t var_88 = 0
    result = sub_142ab5e20(&var_78, "9.223372036854775808E+18", &var_88)
    char var_6c
    
    if (var_88 s<= 0)
        *(arg1 + 0x14) |= data_143ccaf50
        int32_t* r8_2 = var_78
        int32_t* rsi_1 = r8_2
        uint64_t i_2 = zx.q(*r8_2)
        
        if (i_2.d s<= 0x10)
            if (i_2.d s> 0)
                int32_t rcx_5 = 0
                void* rdx_2 = r8_2 + 9
                uint64_t i_1 = i_2
                uint64_t i
                
                do
                    rbx_1 |= zx.q(*rdx_2) << rcx_5.b
                    rcx_5 += 4
                    rdx_2 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            *(arg1 + 0x30) = rbx_1
        else
            sub_142ab3600(arg1, i_2.d)
            
            if (*rsi_1 s> 0)
                char* rdx_1 = nullptr
                
                do
                    rdx_1[*(arg1 + 0x30)] = *(rsi_1 + rdx_1 + 9)
                    rbx_1 = zx.q(rbx_1.d + 1)
                    rdx_1 = &rdx_1[1]
                while (rbx_1.d s< *rsi_1)
            
            r8_2 = var_78
        
        *(arg1 + 0xc) = rsi_1[1]
        result = *rsi_1
        *(arg1 + 0x10) = result
        
        if (var_6c != 0)
            result = sub_142a7dcd0(r8_2)
    else if (var_6c != 0)
        result = sub_142a7dcd0(var_78)
else if (arg2 s> 0x7fffffff)
    result = sub_142ab3df0(arg1, arg2)
else
    result = sub_142ab3d50(arg1, arg2.d)

__security_check_cookie(rax_1 ^ &var_a8)
return result
