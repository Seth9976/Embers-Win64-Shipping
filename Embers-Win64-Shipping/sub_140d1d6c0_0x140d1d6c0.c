// 函数: sub_140d1d6c0
// 地址: 0x140d1d6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

void var_58
int64_t rax_2 = __security_cookie ^ &var_58
int32_t* r14_2 = arg2 - arg3
int64_t i_1 = sx.q(arg4)
void* rbx_1 = arg3 + 0x10
int64_t i

do
    int64_t* rcx = *(rbx_1 - 8)
    int64_t var_38 = *(rbx_1 - 0x10)
    int64_t* var_30_1 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
        rcx = var_30_1
    
    int128_t* rax_5 = &r14_2[-4] + rbx_1
    
    if (&var_38 != rax_5)
        int128_t zmm1 = var_38.o
        int128_t var_28_1 = zmm1
        var_38.o = *rax_5
        rcx = var_30_1
        *rax_5 = zmm1
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**var_30_1)(var_30_1)
            int32_t rax_8 = *(var_30_1 + 0xc)
            *(var_30_1 + 0xc) -= 1
            
            if (rax_8 == 1)
                (*(*var_30_1 + 8))(var_30_1, 1)
    
    *(r14_2 + rbx_1) = *rbx_1
    rbx_1 += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)
__security_check_cookie(rax_2 ^ &var_58)
