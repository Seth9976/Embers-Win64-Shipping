// 函数: sub_140907cf0
// 地址: 0x140907cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t rbx = *sub_140b58170(&arg_10, "ImgMedia", 1)
j_sub_140b3db50()
int64_t* rax_1 = sub_140b407e0(&data_143de7d78, rbx)
int128_t var_28
int64_t rax_3
int64_t* rcx_2
int32_t rbp

if (rax_1 == 0)
    rcx_2 = &var_28
    var_28 = zx.o(0)
    rbp = 2
    rax_3 = 0
else
    int64_t r9_1 = *rax_1
    void var_18
    int64_t* rax_2 = (*(r9_1 + 0x40))(rax_1, &var_18, arg3, r9_1)
    rcx_2 = rax_2
    rbp = 1
    rax_3 = *rax_2

*arg2 = rax_3
arg2[1] = rcx_2[1]
rcx_2[1] = 0
*rcx_2 = 0

if ((rbp.b & 2) != 0)
    void* rcx_3 = var_28:8.q
    rbp &= 0xfffffffd
    
    if (rcx_3 != 0)
        int32_t rax_5 = *(rcx_3 + 8)
        *(rcx_3 + 8) -= 1
        
        if (rax_5 == 1)
            int64_t* rbx_1 = var_28:8.q
            (**rbx_1)(rbx_1)
            int32_t rax_7 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_7 == 1)
                int64_t* rcx_5 = var_28:8.q
                (*(*rcx_5 + 8))(rcx_5, 1)

int64_t* var_10

if ((rbp.b & 1) != 0 && var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rsi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_10 + 8))(var_10, zx.q(rsi_1))

return arg2
