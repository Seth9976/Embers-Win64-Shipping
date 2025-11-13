// 函数: sub_14292b530
// 地址: 0x14292b530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    if (arg2 == 0)
        return 0
    
    goto label_14292b572

int64_t* rsi

if (arg2 == 0)
    rsi = nullptr
else
label_14292b572:
    int64_t* rax_2 = sub_1428f64c0(arg2)
    rsi = rax_2
    
    if (rax_2 == 0)
        return rax_2

int32_t* rax_3 = sub_1428a6a70(0x20)
int32_t var_18_1

if (rax_3 != 0)
    void* rax_4 = sub_142898ba0()
    *(rax_3 + 0x18) = rax_4
    
    if (rax_4 != 0)
        if (arg3 != 0)
            *rax_3 = 0x10
        
        if (rsi == 0)
            *(rax_3 + 8) = *arg1
            *arg1 = 0
        else
            *(rax_3 + 8) = rsi
        
        if (arg1 != 0)
            *(rax_3 + 0x10) = arg1[1]
            arg1[1] = 0
        
        return rax_3
    
    sub_1428a6780(rax_3)
    sub_1428cd400(rsi)
    var_18_1 = 0x3d
else
    var_18_1 = 0x36

sub_1428a5670(0x22, 0xab, 0x41, "crypto\x509v3\pcy_data.c", var_18_1)
return nullptr
