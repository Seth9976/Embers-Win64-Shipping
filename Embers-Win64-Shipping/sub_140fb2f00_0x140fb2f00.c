// 函数: sub_140fb2f00
// 地址: 0x140fb2f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t* rcx

if (data_143e2b7d0 != 0)
    rcx = data_143e2b7d8

int64_t* var_20
int64_t* var_10
int64_t* rcx_1
int64_t rdx
int32_t rsi

if (data_143e2b7d0 == 0 || rcx == 0 || rcx[1].d s<= 0)
    int64_t* rax_3 = data_143e2b7c0
    int64_t* rcx_2 = rax_3[1]
    rdx = *rax_3
    int64_t var_18 = rdx
    var_10 = rcx_2
    
    if (rcx_2 != 0)
        rcx_2[1].d += 1
    
    rcx_1 = &var_18
    rsi = 2
else
    var_20 = rcx
    rdx = 0
    int64_t var_28 = 0
    
    if (rcx == 0)
        rcx_1 = &var_28
        rsi = 1
    else
        int32_t rax_1 = rcx[1].d
        
        if (rax_1 == 0)
            var_20 = nullptr
            rcx_1 = &var_28
            rsi = 1
        else
            rsi = 1
            rcx[1].d = rax_1 + 1
            rcx_1 = &var_28
            rdx = data_143e2b7d0
            var_28 = rdx

int64_t rax_4 = rcx_1[1]
rcx_1[1] = 0
*arg2 = rdx
arg2[1] = rax_4
*rcx_1 = 0

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp2_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

if ((rsi.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp3_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

return arg2
