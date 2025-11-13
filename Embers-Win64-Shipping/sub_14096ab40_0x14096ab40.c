// 函数: sub_14096ab40
// 地址: 0x14096ab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg5 = arg5
int32_t var_58 = 0
int64_t* rax_1 = sub_14093f850(&arg5)
int128_t var_50
int128_t* rax_2
int32_t rbp
int64_t* r14

if (rax_1 != 0)
    void var_40
    rax_2 = (*(*rax_1 + 0x80))(rax_1, &var_40)
    rbp = 2
    r14 = *rax_2
else
    rax_2 = &var_50
    var_50 = zx.o(0)
    rbp = 1
    r14 = nullptr

int64_t* rdi = *(rax_2 + 8)
*(rax_2 + 8) = 0
*rax_2 = 0

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_38
    
    if (var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t rax_6 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*(*var_38 + 8))(var_38, 1)

if ((rbp.b & 1) != 0)
    void* rcx_4 = var_50:8.q
    
    if (rcx_4 != 0)
        int32_t rax_8 = *(rcx_4 + 8)
        *(rcx_4 + 8) -= 1
        
        if (rax_8 == 1)
            int64_t* rbx_2 = var_50:8.q
            (**rbx_2)(rbx_2)
            int32_t rax_10 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_10 == 1)
                int64_t* rcx_6 = var_50:8.q
                (*(*rcx_6 + 8))(rcx_6, 1)

if (r14 != 0)
    (*(*r14 + 0x78))(r14, zx.q(arg2), arg1 + 0x30)

sub_14095eb60(arg6, arg2, arg3, arg4)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

return sub_140745b20(arg6) __tailcall
