// 函数: sub_141c71190
// 地址: 0x141c71190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x2c].b = 0
void*** rax
int128_t zmm0
rax, zmm0 = sub_141f88540()
int64_t* rax_1 = sub_1405f7040(rax)
int64_t r8 = *rax_1
char rdx_1 = (*(r8 + 0xd8))(rax_1, arg1, r8)
*(arg1 + 0x16c)
*(arg1 + 0x16c) = 0

if (arg1[2] != 0)
    if (arg1[0x15] != 0)
        bool z_1
        
        if (0 == arg1[0xe].d)
            arg1[0xe].d = 0
            z_1 = true
        else
            arg1[0xe].d
            z_1 = false
        
        if (not(z_1))
            int64_t* rdx_2 = arg1[0x15]
            rdx_2[0x12].w &= 0xfff8
            rdx_2[0xe].d = 1
            void* rcx_2 = *rdx_2
            int32_t var_50_1 = *(rdx_2 + 0x8c)
            void** const var_28_1 = &data_142d42ed8
            int64_t (* var_48)(int64_t* arg1) = sub_141c56f40
            int64_t var_38_1 = 0
            int128_t var_20_1 = rcx_2.o
            sub_141c56770(rcx_2, &var_48)
    
    *(arg1 + 0x74) &= 0xf7
    arg1[0xe].d
    arg1[0xe].d = 0
    rdx_1, zmm0 = sub_141c5c6b0(arg1)

return sub_141e6c0f0(arg1, zmm0.d, rdx_1) __tailcall
