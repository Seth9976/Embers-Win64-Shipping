// 函数: sub_1429bc720
// 地址: 0x1429bc720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x5450)
int64_t var_5428 = -2
void var_5488
int64_t result = __security_cookie ^ &var_5488
int64_t result_1 = result
int64_t r12 = sx.q(arg2)

if (arg2 != 0)
    uint32_t r13_6 = (zx.d(arg1[2]) << 8 | zx.d(arg1[1])) << 8 | zx.d(*arg1) | zx.d(arg1[3]) << 0x18
    uint32_t r14_6 =
        (zx.d(arg1[6]) << 8 | zx.d(arg1[5])) << 8 | zx.d(arg1[4]) | zx.d(arg1[7]) << 0x18
    uint32_t r15_6 =
        (zx.d(arg1[0xe]) << 8 | zx.d(arg1[0xd])) << 8 | zx.d(arg1[0xc]) | zx.d(arg1[0xf]) << 0x18
    
    if (r13_6 u> 0x10000 || r14_6 u> 0x10000)
        sub_1429bcbc0()
        noreturn
    
    void* var_5448 = &arg1[0x14]
    
    if (sub_1405948d0() == 0 || r15_6 s<= 0x80)
        int64_t* rax_15 = j_sub_140a82f30(0x80008)
        int64_t* var_5420_1 = rax_15
        memset(rax_15, 0, 0x80008)
        void* rax_16 = j_sub_140a82f30(0x40000)
        void* var_5430_1 = rax_16
        memset(rax_16, 0, 0x40000)
        sub_1429bc980(&var_5448, arg1.d - var_5448.d + r12.d, r13_6, r14_6, rax_15)
        
        if (sx.q(r15_6) s> (r12 - var_5448 + arg1) << 3)
            sub_1429bcb40()
            noreturn
        
        sub_1429bb580(rax_15, r13_6, r14_6, rax_16)
        int64_t* var_5468_1
        var_5468_1.d = r14_6
        sub_1429bbf10(rax_15, rax_16, var_5448, r15_6, var_5468_1.d, arg4, arg3)
        sub_1429bc540(rax_16)
        j_sub_140a74f90(rax_16)
        result = j_sub_140a74f90(rax_15)
    else
        int32_t var_5418[0x14f4]
        sub_1429c0f40(&var_5418, &var_5448, r12.d + arg1.d - var_5448.d, r13_6, r14_6, r14_6)
        sub_1429c1960(&var_5418, var_5448, r15_6, arg3, arg4)
        result = sub_1429c1760(&var_5418)
else if (arg4 != 0)
    sub_1429bcc00()
    noreturn

__security_check_cookie(result_1 ^ &var_5488)
return result
