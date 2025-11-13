// 函数: sub_1426978c0
// 地址: 0x1426978c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Pathfinding")
void* rax = sub_140d3c6e0(&arg2[0x10])
int64_t rbx

if (rax == 0 || *(rax + 0x4a8) == 0)
    rbx.b = 0
else
    rbx.b = 1
    void* rbp_1 = *(arg2 + 0x20)
    
    if (rbp_1 != 0)
        int64_t* rcx_1 = *(rbp_1 + 0x10)
        int64_t r9_1 = *rcx_1
        int32_t var_28
        (*(r9_1 + 0x78))(rcx_1, &var_28, &arg2[5], r9_1)
        uint32_t zmm0_1[0x4] = arg2[2]
        zmm0_1[0] = zmm0_1[0] f- var_28
        uint32_t zmm2[0x4] = arg2[3]
        uint32_t zmm1_1[0x4] = arg2[4]
        int32_t var_24
        zmm2[0] = zmm2[0] f- var_24
        int32_t var_20
        zmm1_1[0] = zmm1_1[0] f- var_20
        void* rax_1
        
        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
            rax_1 = sub_140d3c6e0(arg2)
            rbx.b = sub_1426979e0(*(rax + 0x4a8), &arg2[2], &var_28, rbp_1, rax_1, arg3) == 3
        else if (_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999975e-05f)
            rax_1 = sub_140d3c6e0(arg2)
            rbx.b = sub_1426979e0(*(rax + 0x4a8), &arg2[2], &var_28, rbp_1, rax_1, arg3) == 3
        else if (not(_mm_and_ps(zmm1_1, 0x7fffffff)[0] f<= 9.99999975e-05f))
            rax_1 = sub_140d3c6e0(arg2)
            rbx.b = sub_1426979e0(*(rax + 0x4a8), &arg2[2], &var_28, rbp_1, rax_1, arg3) == 3

sub_140b37f60("Pathfinding")
return zx.q(rbx.b)
