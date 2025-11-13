// 函数: sub_1428e0380
// 地址: 0x1428e0380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
char rsi = (*(arg1 + 0x40)).b

if ((rsi & 2) != 0)
    PSTR rax_1
    int64_t r8
    rax_1, r8 = sub_1428df850(arg1, arg3, arg3)
    
    if (rax_1 == 0)
        sub_1428b6f70(arg2, "  <No Friendly Name>\n", r8)
    else
        sub_1428b6f70(arg2, "  Friendly Name "%s"\n", rax_1)
        sub_1428a6780(rax_1)

int32_t r8_3 = *(arg3 + 0x10)
int64_t arg_8 = *(arg3 + 8)
int64_t* rax_3
int64_t r8_4
rax_3, r8_4 = sub_1428a2d00(nullptr, &arg_8, r8_3)

if (rax_3 == 0)
    r8_4 = sub_1428b6f70(arg2, "  <Can't parse certificate>\n", r8_4)

if ((rsi & 1) != 0)
    sub_1428b6f70(arg2, "  Subject: ", r8_4)
    sub_1428b6f70(arg2, "\n  Issuer: ", sub_1428f6c70(arg2, sub_1428a3930(rax_3), 0, 0x82031f))
    sub_1428b6f70(arg2, &data_14370209c, sub_1428f6c70(arg2, sub_1428a38f0(rax_3), 0, 0x82031f))

if ((rsi & 4) != 0)
    sub_1429274d0(arg2, rax_3, 0x82031f, 0)

if ((rsi & 0x20) != 0)
    int64_t* rax_6
    int64_t r8_7
    rax_6, r8_7 = sub_1428e1270(arg1, arg3)
    
    if (rax_6 != 0)
        PSTR rax_7 = sub_1428e2e00(rax_6[1])
        PSTR rax_8
        int64_t r8_8
        rax_8, r8_8 = sub_1428e2e00(*rax_6)
        
        if (rax_7 != 0 && rax_8 != 0)
            sub_1428b6f70(arg2, "  Private Key Info:\n", r8_8)
            rax_6[2].d
            sub_1428b6f70(arg2, "    Provider Name:  %s, Provider Type %lu\n", rax_7)
            rax_6[5].d
            sub_1428b6f70(arg2, "    Container Name: %s, Key Type %lu\n", rax_8)
        
        sub_1428a6780(rax_7)
        sub_1428a6780(rax_8)
    else
        sub_1428b6f70(arg2, "  No Private Key\n", r8_7)
    
    sub_1428a6780(rax_6)

if ((rsi & 8) != 0)
    sub_1428a3d40(arg2, rax_3)

return sub_1428a2c50(rax_3)
