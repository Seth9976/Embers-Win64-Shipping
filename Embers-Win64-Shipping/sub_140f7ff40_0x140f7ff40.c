// 函数: sub_140f7ff40
// 地址: 0x140f7ff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rbx = *(arg4 + 0x48)
void* rax_2 = *(arg4 + 0x38)

if (rbx != 0)
    rbx[1].d += 1

int64_t r12
r12.b = rax_2 == data_143e1e020

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (r12.b != 0)
    arg5 = sub_140e66040(data_143e29f28)
    
    if (arg5.d f> *(arg1 + 0x418))
        rax_2.b = 0
    else
        void* rcx_3 = *(arg1 + 0x3c0)
        
        if (rcx_3 == 0)
            rax_2.b = 0
        else
            rax_2, arg5 = sub_140f4a5f0(rcx_3)
            
            if (rax_2.b == 0)
                rax_2.b = 0
            else
                rax_2.b = 1
    
    *(arg1 + 0x418) = 0

if (r12.b == 0 || rax_2.b == 0)
    sub_140f79c60(*(arg1 + 0x2b0), arg2, arg3, arg4, arg5, arg6)
else
    int128_t zmm3 = *(arg1 + 0x420)
    int128_t zmm2 = *(arg1 + 0x424)
    *(arg1 + 0x41c) = 0
    arg6.o = zmm2
    arg6.d = arg6.d f* arg3[9]
    int64_t var_100_1 = 0
    arg5.d = zmm3.d f* arg3[7]
    int64_t var_f8_1 = 0
    zmm3.d = zmm3.d f* arg3[8]
    char var_e8_1 = 0
    zmm2.d = zmm2.d f* arg3[0xa]
    arg6.d = arg6.d f+ arg5.d
    int64_t var_e0
    __builtin_memset(&var_e0, 0, 0x88)
    zmm3.d = zmm3.d f+ zmm2.d
    arg6.d = arg6.d f+ arg3[0xb]
    zmm3.d = zmm3.d f+ arg3[0xc]
    char var_108 = 1
    int32_t var_58_1 = 0x20702
    int32_t var_54
    int32_t var_54_1 = (var_54 & 0xffffff01) | 1
    int32_t var_118 = int.d(arg6.d)
    int32_t var_114_1 = int.d(zmm3.d)
    sub_140596b00(arg2, sub_140dbda80(&var_108, &var_118))
    sub_140597700(&var_108)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
