// 函数: sub_141a2de20
// 地址: 0x141a2de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rsi = arg1
(*(*arg2 + 0x1d8))(arg2, &data_1439d2858)
char rax_1 = arg2[5].b
int16_t* var_18

if ((rax_1 & 1) == 0)
    if ((rax_1 & 2) == 0)
        return 0
    
    char rax_7 = rsi[0x10].b
    
    if ((rax_7 & 1) == 0)
        var_18 = nullptr
        int64_t var_10_2 = 0
        sub_140a1d9d0(arg2, &var_18, arg3)
    else
        if ((rax_7 & 2) == 0)
            rsi = *rsi
        
        int64_t* rax_9 = (*(*rsi + 0x20))(rsi)
        sub_140a1d9d0(arg2, &var_18, sub_140d21e10(rax_9, &var_18, 0))
        sub_140ca67c0(rax_9, arg2, rsi, 0)
else
    var_18 = nullptr
    int32_t var_10_1 = 0
    sub_140a1d9d0(arg2, &var_18, arg3)
    
    if (var_10_1 s> 1)
        int16_t* const rbx_1 = &data_142d40450
        
        if (var_10_1 != 0)
            rbx_1 = var_18
        
        int64_t* rax_3 = sub_140d2ee50(sub_140bdfe30(), nullptr, rbx_1, 0)
        int64_t* rcx_3
        void* r8_2
        
        if (rax_3 != 0)
            void* rax_5 = rax_3[0x17]
            void* rax_6 = sub_141a62b20(rsi, *(rax_5 + 8), *(rax_5 + 0xc))
            int64_t* rcx_5 = rax_3[0x17]
            int64_t r8_4 = *rcx_5
            (*(r8_4 + 0x18))(rcx_5, rax_6, r8_4)
            r8_2 = rax_6
            rcx_3 = rax_3
        else
            rcx_3 = sub_141a739d0()
            void arg_10
            r8_2 = &arg_10
        
        sub_140ca67c0(rcx_3, arg2, r8_2, 0)

int16_t* rcx_11 = var_18

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int32_t result
result.b = 1
return result
