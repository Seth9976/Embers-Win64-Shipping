// 函数: sub_1428622a0
// 地址: 0x1428622a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xf0)
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t* rax_2 = sub_14285b130(arg1)
int64_t result = 0
int64_t* rsi = nullptr
int64_t* rax_3 = sub_142891ee0()
int64_t var_c8[0x2]
void var_78
int32_t rax_4
int512_t zmm1
rax_4, zmm1 = sub_142851d80(arg1, &var_78, 0x40, &var_c8)

if (rax_4 != 0)
    void* r8_1
    
    if (arg2 != *(*(*(arg1 + 8) + 0xc0) + 0x40))
        void* rax_5 = *(arg1 + 0xa8)
        
        if (*(rax_5 + 0x198) == 0 || *(rax_5 + 0x220) == 0)
            r8_1 = arg1 + 0x22c
            goto label_1428623dd
        
        int64_t var_d8_1 = var_c8[0]
        void var_b8
        
        if (sub_1428628c0(arg1, sub_14285b130(arg1), arg1 + 0x32c, "finished", 8, 0, 0, &var_b8)
                != 0)
            rsi = sub_1428969b0(0x357, nullptr, &var_b8, var_c8[0])
            sub_1428b8960(&var_b8, 0x40)
            goto label_1428623e0
    else
        r8_1 = arg1 + 0x26c
    label_1428623dd:
        rsi = sub_1428969b0(0x357, nullptr, r8_1, var_c8[0])
    label_1428623e0:
        int64_t var_f0
        
        if (rsi == 0 || rax_3 == 0)
            var_f0.d = 0x11b
            sub_142856580(arg1, 0x50, 0x25d, 0x44, "ssl\tls13_enc.c", var_f0.d)
        else if (sub_1428932d0(rax_3, nullptr, rax_2, nullptr, rsi) s<= 0)
            var_f0.d = 0x11b
            sub_142856580(arg1, 0x50, 0x25d, 0x44, "ssl\tls13_enc.c", var_f0.d)
        else if (sub_142891c10(rax_3, &var_78, var_c8[0]) s<= 0)
            var_f0.d = 0x11b
            sub_142856580(arg1, 0x50, 0x25d, 0x44, "ssl\tls13_enc.c", var_f0.d)
        else if (sub_1428930f0(rax_3, arg4, &var_c8, zmm1, arg3) s<= 0)
            var_f0.d = 0x11b
            sub_142856580(arg1, 0x50, 0x25d, 0x44, "ssl\tls13_enc.c", var_f0.d)
        else
            result = var_c8[0]

sub_1428965a0(rsi)
sub_142891ea0(rax_3)
__security_check_cookie(rax_1 ^ &var_118)
return result
