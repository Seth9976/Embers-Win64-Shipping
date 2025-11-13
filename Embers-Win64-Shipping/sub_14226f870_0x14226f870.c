// 函数: sub_14226f870
// 地址: 0x14226f870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2
int64_t* rdx

if (rdi != 0)
    rdx = nullptr
    
    if ((*(*rdi + 0x20))(rdi, "PxRigidBody") != 0)
        rdx = rdi

int32_t rax_4

if (rdi == 0 || rdx == 0)
    rax_4 = data_143dbb200
    *arg1 = data_143dbb1f8.q
else
    int32_t zmm1 = *(arg3 + 4)
    float var_28 = (*arg3).d
    int32_t var_20_1 = arg3[1].d.d
    int32_t var_24_1 = zmm1
    int32_t var_1c[0x5]
    int32_t* rax_3 = sub_1427ef070(&var_1c, rdx, &var_28)
    *arg1 = *rax_3
    rax_4 = rax_3[2]
    arg1[1] = rax_3[1]

arg1[2] = rax_4
return arg1
