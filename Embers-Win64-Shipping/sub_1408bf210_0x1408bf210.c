// 函数: sub_1408bf210
// 地址: 0x1408bf210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint64_t rax_2 = zx.q(*arg1)
float zmm5[0x4] = arg3
int32_t var_38
int64_t zmm0
float zmm1[0x4]

if (rax_2.d u<= 7)
    switch (rax_2)
        case 0
            zmm0 = *(arg1 + 4)
            arg2[1] = zmm0.d
            *arg2 = zmm0.d
        case 1
            zmm1 = *(arg1 + 0xc)
            zmm1[0] = zmm1[0] f- *(arg1 + 8)
            zmm1[0] = zmm1[0] f* arg6
            zmm1[0] = zmm1[0] f+ *(arg1 + 8)
            *arg2 = zmm1[0]
            arg2[1] = zmm1[0]
        case 2
            zmm0 = sub_1408beb20(&arg1[0x10], zmm5, arg4, arg5)
            arg2[1] = zmm0.d
            *arg2 = zmm0.d
        case 3
            zmm0 = sub_1408be910(&arg1[0x98], zmm5, arg4, arg5, arg6.d)
            arg2[1] = zmm0.d
            *arg2 = zmm0.d
        case 4
            *arg2 = *(arg1 + 0x1a8)
        case 5
            arg4 = arg7
            zmm1 = arg6
            
            if (arg1[0x1c0] != 0)
                arg4 = zmm1
            
            zmm0 = *(arg1 + 0x1b0)
            arg3.d = (*(arg1 + 0x1b8)).d f- zmm0.d
            arg3.d = arg3.d f* zmm1[0]
            zmm1 = *(arg1 + 0x1b4)
            arg3.d = arg3.d f+ zmm0.d
            zmm0.d = (*(arg1 + 0x1bc)).d f- zmm1[0]
            *arg2 = arg3.d
            zmm0.d = zmm0.d f* arg4[0]
            zmm0.d = zmm0.d f+ zmm1[0]
            arg2[1] = zmm0.d
        case 6
            sub_1408bebf0(&arg1[0x1c8], &var_38, arg3, arg4, arg5.d)
            zmm0 = var_38
            int32_t var_34
            arg2[1] = var_34
            *arg2 = zmm0.d
        case 7
            var_38 = arg6.d
            float var_34_1 = arg7[0]
            int64_t var_30_1 = 0
            float var_28
            sub_1408be990(&arg1[0x3d0], &var_28, arg3, arg4, arg5.d, &var_38)
            zmm0 = var_28
            int32_t var_24
            arg2[1] = var_24
            *arg2 = zmm0.d
__security_check_cookie(rax_1 ^ &var_68)
return arg2
