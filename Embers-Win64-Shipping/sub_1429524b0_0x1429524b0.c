// 函数: sub_1429524b0
// 地址: 0x1429524b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result_2 = arg5
int32_t rbp = 0
int64_t* result_1 = nullptr

if (result_2 == 0)
    int64_t* result = sub_1428d8d60()
    result_1 = result
    result_2 = result
    
    if (result == 0)
        return result

sub_1428d8e50(result_2)

if (sub_1428909a0(&data_143546348, arg2) != 0)
    if (sub_1428909a0(&data_1435463e8, arg2) != 0)
        if (sub_1428909a0(&data_143546400, arg2) != 0)
            if (sub_1428909a0(&data_143546418, arg2) != 0)
                if (sub_1428909a0(&data_143546430, arg2) != 0)
                    sub_1428a5670(0x10, 0xca, 0x87, "crypto\ec\ecp_nist.c", 0x6b)
                else
                    arg1[0x11] = sub_142951ba0
                    rbp = sub_14296f4f0(arg1, arg2, arg3, arg4, result_2)
            else
                arg1[0x11] = sub_142951750
                rbp = sub_14296f4f0(arg1, arg2, arg3, arg4, result_2)
        else
            arg1[0x11] = sub_1429513d0
            rbp = sub_14296f4f0(arg1, arg2, arg3, arg4, result_2)
    else
        arg1[0x11] = sub_142951030
        rbp = sub_14296f4f0(arg1, arg2, arg3, arg4, result_2)
else
    arg1[0x11] = sub_142950dc0
    rbp = sub_14296f4f0(arg1, arg2, arg3, arg4, result_2)

sub_1428d8a60(result_2)
sub_1428d8ae0(result_1)
return zx.q(rbp)
