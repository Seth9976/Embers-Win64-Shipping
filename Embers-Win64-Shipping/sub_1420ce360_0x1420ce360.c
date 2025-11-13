// 函数: sub_1420ce360
// 地址: 0x1420ce360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d2bce0(arg1 + 8)
void* const rbx = rax
void* rax_1
int64_t rax_2
void* rdx_1

if (rax != 0)
    rax_1 = sub_140bdf2e0()
    rdx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rax == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

int32_t rcx_2
rcx_2.b = sub_140b5b8a0(*(arg1 + 0x138), 0).b == 0
int64_t result
result.b = *(arg1 + 0x13c) != 0
result.b |= rcx_2.b

if (result.b != 0)
    result = sub_140d3c6e0(arg1 + 0x130)
    
    if (result != 0)
        result = sub_140d1fd20(result, *(arg1 + 0x138))
        
        if (result != 0)
            void* const arg_8 = rbx
            int64_t* rax_4 = sub_140d3c6e0(arg1 + 0x130)
            int64_t rax_5 = sub_140d1fd30(rax_4, *(arg1 + 0x138))
            int64_t r9_1 = *rax_4
            return (*(r9_1 + 0x210))(rax_4, rax_5, &arg_8, r9_1)

return result
