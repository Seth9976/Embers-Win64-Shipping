// 函数: sub_1418c4b90
// 地址: 0x1418c4b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    return sub_1418c89a0(arg2, arg3) __tailcall

int128_t var_48 = zx.o(0)
int128_t var_34 = data_143dbb1e0
int32_t var_38 = 1
char var_20 = arg3.b
int32_t var_24 = (1 << (data_1439c7a34).b) - 1
int64_t var_18 = 0
int32_t var_10 = 0
void*** rax_2 = j_sub_140a82f30(0xb0)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    int64_t rax_3 = *(arg2 + 0x30)
    *rbx = &data_142d3ff08
    rbx[1].d = 0
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100
    rbx[3] = 0
    rbx[4].d = 0
    rbx[6] = rax_3
    rbx[7].d = 0
    *(rbx + 0x3c) = 0x40
    __builtin_memset(rbx + 0x44, 0, 0x60)
    *rbx = &data_142fec178
    rbx[5] = &data_142fec180
    rbx[0x15].d = 0
    rbx[1].d += 1

int32_t result = sub_1418c89a0(arg2, rbx)

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        if (rbx[2].b != 0)
            jump(**rbx)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            jump(**rbx)
        
        result = 0
        bool z_1
        
        if (0 == *(rbx + 0xc))
            *(rbx + 0xc) = 1
            z_1 = true
        else
            result = *(rbx + 0xc)
            z_1 = false
        
        if (z_1)
            return sub_1405dcc10(&data_143f02390, rbx)

return result
