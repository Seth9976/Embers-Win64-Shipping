// 函数: sub_14095b4b0
// 地址: 0x14095b4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
arg_18.q = 0
int64_t arg_20 = 0
int64_t* rax_1 = sub_14093f850(&arg_20)
int128_t var_38
int128_t* result
int32_t rbp
int64_t* r14

if (rax_1 != 0)
    void var_28
    result = (*(*rax_1 + 0x40))(rax_1, &var_28)
    rbp = 2
    r14 = *result
else
    result = &var_38
    var_38 = zx.o(0)
    rbp = 1
    r14 = nullptr

int64_t* rdi = *(result + 8)
*(result + 8) = 0
*result = 0

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_20
    
    if (var_20 != 0)
        result = zx.q(var_20[1].d)
        var_20[1].d -= 1
        
        if (result.d == 1)
            (**var_20)(var_20)
            result = zx.q(*(var_20 + 0xc))
            *(var_20 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*var_20 + 8))(var_20, 1)

if ((rbp.b & 1) != 0)
    void* rcx_4 = var_38:8.q
    
    if (rcx_4 != 0)
        result = zx.q(*(rcx_4 + 8))
        *(rcx_4 + 8) -= 1
        
        if (result.d == 1)
            int64_t* rbx_2 = var_38:8.q
            (**rbx_2)(rbx_2)
            result = zx.q(*(rbx_2 + 0xc))
            *(rbx_2 + 0xc) -= 1
            
            if (result.d == 1)
                int64_t* rcx_6 = var_38:8.q
                result = (*(*rcx_6 + 8))(rcx_6, 1)

if (r14 != 0)
    result = (*(*r14 + 0x460))(r14)

if (rdi != 0)
    result = zx.q(rdi[1].d)
    rdi[1].d -= 1
    
    if (result.d == 1)
        result = (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            return (*(*rdi + 8))(rdi, zx.q(rsi_1))

return result
