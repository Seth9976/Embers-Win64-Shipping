// 函数: sub_14201f310
// 地址: 0x14201f310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
void* rbp = arg3
void* const rdi = arg2

if (arg2 != 0)
    void* rax_1 = sub_14255d000()
    void* rdx = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        void* rax_7 = sub_142497110()
        arg2 = *(rdi + 0x10)
        arg3 = rax_7 + 0x30
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s<= *(arg2 + 0x38) && *(*(arg2 + 0x30) + (rax_8 << 3)) == arg3)
            void* rax_10 = sub_142497110()
            arg2 = *(rdi + 0x10)
            arg3 = rax_10 + 0x30
            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
            
            if (rax_11.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_11 << 3)) != arg3)
                rdi = nullptr
            
            rsi = *(rdi + 0x228)
    else
        void* rax_4 = sub_14255d000()
        arg2 = *(rdi + 0x10)
        arg3 = rax_4 + 0x30
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_5 << 3)) != arg3)
            rdi = nullptr
        
        rsi = *(rdi + 0x240)

int64_t* var_28
sub_1424373a0((*(*arg1 + 0x150))(arg1, arg2, arg3), &var_28)
int32_t result_1
int32_t result = result_1
int128_t zmm6 = zx.o(0)

while (true)
    int64_t* rdx_2 = var_28
    int64_t rcx_5
    
    if (result s< 0 || result s>= rdx_2[1].d)
        rcx_5.b = 0
    else
        rcx_5.b = 1
    
    if (rcx_5.b == 0)
        break
    
    int64_t* rax_16
    rax_16, rcx_5 = sub_140d3c6e0(*rdx_2 + (sx.q(result) << 3))
    
    if (rax_16 != 0)
        int32_t var_38_1 = zmm6.d
        rcx_5, zmm6 = sub_142569a00(rax_16, rsi, rbp, arg4)
    
    result = result_1 + 1
    result_1 = result

return result
