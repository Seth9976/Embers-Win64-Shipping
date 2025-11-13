// 函数: sub_1428b1e60
// 地址: 0x1428b1e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t rsi = sx.q(arg3)
void* rax_2 = sub_142890ec0(arg1)
int64_t result

if (arg2 == 0x16)
    if (rsi.d != 0xd)
        result = 0xffffffff
    else
        void* rsi_1 = &arg4[rsi]
        uint32_t rbx_4 = zx.d(*(rsi_1 - 2)) << 8 | zx.d(*(rsi_1 - 1))
        
        if (sub_142890eb0(arg1) != 0)
            goto label_1428b2021
        
        if (rbx_4 u< 0x10)
            result = 0xffffffff
        else
            rbx_4 -= 0x10
            *(rsi_1 - 1) = rbx_4.b
            *(rsi_1 - 2) = (rbx_4 u>> 8).b
        label_1428b2021:
            int128_t zmm0 = *(rax_2 + 0x408)
            uint128_t zmm1 = *(rax_2 + 0x418)
            *(rax_2 + 0x520) = zx.q(rbx_4)
            int32_t rax_8 = *(rax_2 + 0x460)
            *(rax_2 + 0x4c0) = zmm0
            zmm0 = *(rax_2 + 0x428)
            *(rax_2 + 0x4d0) = zmm1
            zmm1 = *(rax_2 + 0x438)
            *(rax_2 + 0x4e0) = zmm0
            zmm0 = *(rax_2 + 0x448)
            *(rax_2 + 0x4f0) = zmm1
            zmm1 = zx.o(*(rax_2 + 0x458))
            *(rax_2 + 0x500) = zmm0
            *(rax_2 + 0x510) = zmm1.q
            *(rax_2 + 0x518) = rax_8
            sub_1428cb9a0(rax_2 + 0x4c0, arg4, 0xd)
            result = 0x10
else if (arg2 != 0x17)
    result = 0xffffffff
else
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x40)
    
    if (rsi.d s<= 0x40)
        memcpy(&var_78, arg4, rsi.d)
    else
        sub_1428cb930(rax_2 + 0x408)
        sub_1428cb9a0(rax_2 + 0x408, arg4, rsi)
        sub_1428cb7c0(&var_78, rax_2 + 0x408)
    
    uint128_t zmm2 = (*"6666666666666666")[0].o
    var_78.o ^= zmm2
    int64_t var_58
    var_58.o ^= zmm2
    int64_t var_68
    var_68.o ^= zmm2
    int64_t var_48
    var_48.o ^= zmm2
    sub_1428cb930(rax_2 + 0x408)
    sub_1428cb9a0(rax_2 + 0x408, &var_78, 0x40)
    zmm2 = (*"jjjjjjjjjjjjjjjjSRTP_AES128_CM_SHA1_80")[0].o
    var_78.o ^= zmm2
    var_58.o ^= zmm2
    var_68.o ^= zmm2
    var_48.o ^= zmm2
    sub_1428cb930(rax_2 + 0x464)
    sub_1428cb9a0(rax_2 + 0x464, &var_78, 0x40)
    sub_1428b8960(&var_78, 0x40)
    result = 1

__security_check_cookie(rax_1 ^ &var_98)
return result
