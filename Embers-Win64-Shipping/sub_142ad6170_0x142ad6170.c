// 函数: sub_142ad6170
// 地址: 0x142ad6170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int128_t zmm6
int128_t var_28 = zmm6
int32_t arg_18 = 0
int32_t rax = sub_142b54660(&data_144016728, arg2, &arg_18)
int32_t rbx = rax

if (rax == 0)
    double zmm0_2[0x2] = sub_142ad5420(arg1, sub_142acc900(arg2, 0xb, 1), zmm6)
    sub_142ad5090()
    sub_142a860a0(&data_144016760)
    int64_t* rcx_2 = data_144016738
    
    if (rcx_2 == 0)
        int64_t* rax_1 = j_sub_142a7dd00(0x88)
        int64_t* arg_20 = rax_1
        int64_t* rax_2
        
        if (rax_1 == 0)
            rax_2 = nullptr
        else
            rax_2 = sub_142b541c0(rax_1)
        
        data_144016738 = rax_2
        sub_142aa75d0(8, sub_142ad62a0)
        rcx_2 = data_144016738
    
    sub_142b54c50(rcx_2, zmm0_2[0])
    double zmm0_3[0x2] = sub_142b542e0()
    double zmm0_4[0x2] = sub_142b54b80(data_144016738, zmm0_3, 1)
    sub_142ad5090()
    sub_142a860d0(&data_144016760)
    rbx = int.d(sub_142ad5c30(arg1, zmm0_4, zmm0_4))
    sub_142b54bd0(&data_144016728, arg2, rbx, &arg_18)

if (arg_18 s> 0)
    rbx = 0

return zx.q(rbx)
