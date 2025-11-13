// 函数: sub_140f479f0
// 地址: 0x140f479f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* rax_1

if (*(arg1 + 0x98) != 0 && *(arg1 + 0x18) != 0)
    rax_1 = *(arg1 + 0x20)

int64_t* var_20
int128_t var_18
int64_t rax_4
int64_t* rcx_1
int32_t rsi

if (*(arg1 + 0x98) == 0 || *(arg1 + 0x18) == 0 || rax_1 == 0 || *(rax_1 + 8) s<= 0)
    rcx_1 = &var_18
    var_18 = zx.o(0)
    rsi = 2
    rax_4 = 0
else
    int64_t* rcx = *(arg1 + 0x10)
    int64_t var_28 = 0
    var_20 = rcx
    
    if (rcx != 0)
        int32_t rax_2 = rcx[1].d
        
        if (rax_2 == 0)
            var_20 = nullptr
            rcx = nullptr
        else
            rcx[1].d = rax_2 + 1
    
    rax_4 = 0
    
    if (rcx != 0)
        rax_4 = *(arg1 + 8)
        var_28 = rax_4
    
    rcx_1 = &var_28
    rsi = 1

*arg2 = rax_4
int64_t rax_5 = rcx_1[1]
rcx_1[1] = 0
arg2[1] = rax_5
*rcx_1 = 0

if ((rsi.b & 2) != 0)
    int64_t* rbx_1 = var_18:8.q
    rsi &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if ((rsi.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp3_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

return arg2
