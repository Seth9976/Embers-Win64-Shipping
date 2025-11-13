// 函数: sub_140baf5d0
// 地址: 0x140baf5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    int32_t rax_1 = *(arg2 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    *(rax_8 + 8) |= 0x8000000

char arg_18 = 0
char* var_10 = &arg_18
void*** (* var_18)() = sub_140884c50
void* rsi = *(sub_140a756e0(&var_18, &data_14397f5f0) + 0x40)
uint64_t result = sub_140b9aae0(rsi, arg2)

if (data_143de5452 != 0)
    int64_t rbx_1 = *(rsi + 0x58)
    result = sub_140d21d80(arg2)
    
    if (result == rbx_1)
        result.b = *(rsi + 0x238) - 2
        
        if (result.b u<= 4 && (*(arg2 + 8) & 0x8200400) == 0)
            void* r8 = *(arg2 + 0x20)
            
            if (r8 != 0)
                void* rbx_2 = *(rsi + 0x50)
                sub_140ba6a10(&arg_18, rbx_2, r8)
                void* rbx_3 = *(rbx_2 + 0x2e0)
                var_18 = *(arg2 + 0x18)
                var_10.d = arg_18.d
                sub_140ba6e00(rbx_3 + 0x3a0, &arg_18, &var_18)
                int64_t rax_12 = sx.q(arg_18.d)
                int64_t rcx_9
                
                if (rax_12.d == 0xffffffff)
                    rcx_9 = 0
                else
                    rcx_9 = *(rbx_3 + 0x3a0) + rax_12 * 0x18
                
                result = rcx_9 + 0xc
                
                if (rcx_9 == 0)
                    result = 0
                
                if (result != 0 && *result s> 0)
                    *(arg2 + 8) |= 0x8000000

return result
