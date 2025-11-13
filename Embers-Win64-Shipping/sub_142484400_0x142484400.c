// 函数: sub_142484400
// 地址: 0x142484400
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
void* rbp = *(arg2 + 0x38)

if (rsi != 0)
    result = *(rsi + 8)
    
    if (((result[2] u>> 0x2f).b & 1) != 0)
        *(arg2 + 0x30) = 0
        
        if (*(arg2 + 0x20) == 0)
            int64_t* r8_2 = *(arg2 + 0x80)
            *(arg2 + 0x80) = r8_2[4]
            result = sub_140d30490(arg2, 0, r8_2)
        else
            result = sub_140d30460(arg2, *(arg2 + 0x18), 0)
        
        void* r9_1 = *(arg2 + 0x30)
        
        if (r9_1 != 0)
            result = *(r9_1 + 8)
            
            if (((zx.q(result[2].d) u>> 0x15).b & 1) != 0)
                int64_t rax_2 = *(arg2 + 0x20)
                int64_t* r8_3 = *(arg2 + 0x38)
                int64_t rdi
                rdi.b = rax_2 != 0
                *(arg2 + 0x20) = rdi + rax_2
                return sub_141ea10a0(rbp, rsi, r8_3, r9_1)

*(arg2 + 0x90) = 1
return result
