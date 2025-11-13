// 函数: sub_1428af3d0
// 地址: 0x1428af3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rsi = sx.q(arg4)
int64_t r14 = sx.q(arg3)
int32_t rbx = 1
__time64_t _Time[0x2]
_time64(&_Time)
int64_t arg_10

if (sub_1428e5590(arg1) != 0)
    arg_10 = r14 + _Time[0]
    
    if (sub_14289e600(arg1, &arg_10) s> 0)
        sub_1428a5670(0x27, 0x73, 0x7e, "crypto\ocsp\ocsp_cl.c", 0x15f)
        rbx = 0
    
    if (rsi.d s>= 0)
        arg_10 = _Time[0] - rsi
        
        if (sub_14289e600(arg1, &arg_10) s< 0)
            sub_1428a5670(0x27, 0x73, 0x7f, "crypto\ocsp\ocsp_cl.c", 0x16a)
            rbx = 0
else
    sub_1428a5670(0x27, 0x73, 0x7b, "crypto\ocsp\ocsp_cl.c", 0x15a)
    rbx = 0

if (arg2 != 0)
    int32_t rax_5 = sub_1428e5590(arg2)
    
    if (rax_5 != 0)
        arg_10 = _Time[0] - r14
        
        if (sub_14289e600(arg2, &arg_10) s< 0)
            sub_1428a5670(0x27, 0x73, 0x7d, "crypto\ocsp\ocsp_cl.c", 0x17a)
            rbx = 0
    else
        sub_1428a5670(0x27, 0x73, rax_5 + 0x7a, "crypto\ocsp\ocsp_cl.c", 0x175)
        rbx = 0
    
    if (sub_1428f29b0(arg2, arg1) s< 0)
        sub_1428a5670(0x27, 0x73, 0x7c, "crypto\ocsp\ocsp_cl.c", 0x182)
        rbx = 0

return zx.q(rbx)
