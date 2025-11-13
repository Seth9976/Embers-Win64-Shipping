// 函数: sub_142872740
// 地址: 0x142872740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rsi = 0
int64_t arg_10 = 0
void* r14 = nullptr

if (arg2 == 0 || arg3 == 0)
    sub_142856580(arg1, 0x50, 0x24e, 0x44, "ssl\s3_lib.c", 0x12a4)
    return 0

int64_t* rax_1 = sub_1428bcf30(arg2, nullptr)

if (sub_1428bd580(rax_1) s<= 0)
label_1428728e2:
    sub_142856580(arg1, 0x50, 0x24e, 0x44, "ssl\s3_lib.c", 0x12ae)
else
    if (sub_1428bd610(rax_1, arg3) s<= 0)
        goto label_1428728e2
    
    if (sub_1428bd400(rax_1, 0, &arg_10) s<= 0)
        goto label_1428728e2
    
    void* rax_5 = sub_1428a6730(arg_10)
    r14 = rax_5
    
    if (rax_5 != 0)
        if (sub_1428bd400(rax_1, r14, &arg_10) s<= 0)
            sub_142856580(arg1, 0x50, 0x24e, 0x44, "ssl\s3_lib.c", 0x12bb)
        else if (arg4 == 0)
            *(*(arg1 + 0xa8) + 0x2b8) = r14
            r14 = nullptr
            rsi = 1
            *(*(arg1 + 0xa8) + 0x2c0) = arg_10
        else
            int32_t* rcx_6 = *(arg1 + 8)
            int32_t rax_8
            
            if ((*(*(rcx_6 + 0xc0) + 0x60) & 8) == 0)
                rax_8 = *rcx_6
            
            if ((*(*(rcx_6 + 0xc0) + 0x60) & 8) != 0 || rax_8 s< 0x304 || rax_8 == 0x10000)
                rsi = sub_142872ab0(arg1, r14, arg_10, 0)
            else
                int32_t rax_10
                
                if (*(arg1 + 0xc8) == 0)
                    int32_t var_30
                    var_30.q = arg1 + 0x12c
                    rax_10 = sub_1428625b0(arg1, sub_14285b130(arg1), 0, nullptr, 0, var_30)
                
                if ((*(arg1 + 0xc8) != 0 || rax_10 != 0) && sub_1428624b0(arg1, r14, arg_10.d) != 0)
                    rsi = 1
    else
        sub_142856580(arg1, 0x50, 0x24e, 0x41, "ssl\s3_lib.c", 0x12b5)

sub_1428a6890(r14, arg_10, "ssl\s3_lib.c", 0x12da)
sub_1428bcda0(rax_1)
return zx.q(rsi)
