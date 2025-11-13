// 函数: sub_1406487e0
// 地址: 0x1406487e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x30) = 0
int64_t* result

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    result = sub_140d30490(arg2, 0, r8_1)
else
    result = sub_140d30460(arg2, *(arg2 + 0x18), 0)

void* rsi = *(arg2 + 0x30)
void** r14 = *(arg2 + 0x38)

if (rsi != 0)
    result = *(rsi + 8)
    
    if (((zx.q(result[2].d) u>> 0x15).b & 1) != 0)
        int32_t arg_10 = 0
        
        if (*(arg2 + 0x20) == 0)
            int64_t* r8_3 = *(arg2 + 0x80)
            *(arg2 + 0x80) = r8_3[4]
            sub_140d30490(arg2, &arg_10, r8_3)
        else
            sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)
        
        bool cond:0 = arg_10 != 0
        int64_t arg_20 = 0
        int64_t rbp
        rbp.b = cond:0
        int128_t zmm0
        
        if (*(arg2 + 0x20) == 0)
            int64_t* r8_5 = *(arg2 + 0x80)
            *(arg2 + 0x80) = r8_5[4]
            zmm0 = sub_140d30490(arg2, &arg_20, r8_5)
        else
            zmm0 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)
        
        int64_t rax_3 = *(arg2 + 0x20)
        int64_t r9 = arg_20
        int64_t rdi
        rdi.b = rax_3 != 0
        *(arg2 + 0x20) = rdi + rax_3
        return sub_14062d9b0(r14, rsi, rbp.b, r9, zmm0)

*(arg2 + 0x90) = 1
return result
