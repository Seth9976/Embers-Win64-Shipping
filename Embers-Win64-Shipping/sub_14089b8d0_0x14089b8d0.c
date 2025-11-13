// 函数: sub_14089b8d0
// 地址: 0x14089b8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
uint128_t zmm0 = *arg1
int64_t* var_18 = zmm0.q
int32_t rsi = _mm_bsrli_si128(zmm0, 8).d

if (rsi != 1)
    goto label_14089b91d

int32_t rax_1 = var_18[0xd].d

if ((rax_1.b & 2) == 0)
    var_18[0xd].d = rax_1 | 2
    (*(*var_18 + 0x80))(var_18, zx.q(rsi))
label_14089b91d:
    
    if (rsi == 2)
        int32_t rax_4 = var_18[0xd].d
        
        if ((rax_4.b & 4) == 0)
            var_18[0xd].d = rax_4 | 4
            (*(*var_18 + 0x80))(var_18, zx.q(rsi))

int32_t rax_7 = arg2[1].d
int64_t* rcx_2 = *arg2

if (rax_7 == 1)
    int32_t rax_8 = rcx_2[0xd].d
    
    if ((rax_8.b & 2) == 0)
        rcx_2[0xd].d = rax_8 | 2
        (*(*rcx_2 + 0x80))()
else if (rax_7 == 2)
    int32_t rax_10 = rcx_2[0xd].d
    
    if ((rax_10.b & 4) == 0)
        rcx_2[0xd].d = rax_10 | 4
        (*(*rcx_2 + 0x80))()

return 0
