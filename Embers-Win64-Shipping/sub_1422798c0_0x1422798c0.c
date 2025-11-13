// 函数: sub_1422798c0
// 地址: 0x1422798c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int128_t zmm6 = arg2

if (rbx == 0)
    return 

int64_t* rcx_1 = nullptr

if ((*(*rbx + 0x20))(rbx, "PxRigidBody") != 0)
    rcx_1 = rbx

if (rcx_1 == 0)
    return 

int512_t zmm0
zmm0.o = zx.o(0)

if (not(zmm6.d f!= 0f))
    zmm6 = 0x7f7fffff

(*(*rcx_1 + 0x190))(zmm0, zmm6)
