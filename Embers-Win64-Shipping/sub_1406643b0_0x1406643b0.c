// 函数: sub_1406643b0
// 地址: 0x1406643b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t* var_18 = __security_cookie ^ &var_58
int32_t i_1 = arg4
void* rbx = arg3
int128_t* rsi = arg2
int64_t* result

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rcx = *(rbx + 8)
        int128_t* r8 = rsi
        int128_t* rdx = rsi
        rsi = &rsi[1]
        int64_t var_38 = *rbx
        int64_t* var_30_1 = rcx
        
        if (rcx != 0)
            *(rcx + 0xc) += 1
            rcx = var_30_1
        
        if (&var_38 != rdx)
            int128_t zmm1 = var_38.o
            int128_t var_28_1 = zmm1
            var_38.o = *r8
            rcx = var_30_1
            *r8 = zmm1
        
        if (rcx != 0)
            result = zx.q(*(rcx + 0xc))
            *(rcx + 0xc) -= 1
            
            if (result.d == 1)
                (*(*var_30_1 + 8))(var_30_1, 1)
        
        rbx += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
__security_check_cookie(var_18 ^ &var_58)
return result
