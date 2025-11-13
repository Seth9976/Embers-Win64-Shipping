// 函数: sub_141a3a160
// 地址: 0x141a3a160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
void* var_18 = nullptr
int32_t var_c = 0
int32_t result_1 = 0

if (&var_18 != &arg1[0x8f])
    arg3 = *(arg1 + 0x478)
    arg2.o = var_18.o
    var_18.o = arg3
    result_1 = 0
    rsi = var_18
    *(arg1 + 0x478) = arg2.o

int64_t result = sx.q(result_1)
void* rbp = rsi + result * 0xc

if (rsi != rbp)
    int64_t* rbx_1 = rsi + 4
    
    do
        uint32_t rcx_2 = zx.d(*(rbx_1 - 4))
        
        if (rcx_2 == 0)
            arg3, arg2 = sub_141a6a480(arg1, *rbx_1, arg2)
        else if (rcx_2 == 1)
            arg3, arg2 = sub_141a5b0b0(arg1)
        else if (rcx_2 == 3)
            arg3, arg2 = sub_141a5b300(arg1, arg3)
        else
            uint32_t rcx_4 = zx.d(*(rbx_1 - 3))
            
            if (rcx_4 == 0)
                arg3, arg2 = sub_141a5b970(arg1, *rbx_1)
            else if (rcx_4 == 1)
                arg3, arg2 = sub_141a58410(arg1, *rbx_1)
            else if (rcx_4 == 2)
                arg3, arg2 = sub_141a656e0(arg1, *rbx_1)
        
        rbx_1 += 0xc
        result = rbx_1 - 4
    while (result != rbp)

if (rsi == 0)
    return result

return sub_140a74f90(rsi) __tailcall
