// 函数: sub_142858f00
// 地址: 0x142858f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
data_143feaef0 = sub_142898b60(sub_142859050)

if (sub_1406938b0(U"}") != 0 && data_143feaef0 != 0)
    int32_t* rax_2 = sub_1428a6730(0x18)
    
    if (rax_2 != 0)
        *(rax_2 + 0x10) = &data_143b85678
        *rax_2 = 1
        int64_t rax_3 = sub_14060aa50(&data_143b85678)
        int32_t* rcx_1 = data_143feaef0
        *(rax_2 + 8) = rax_3
        sub_142898d50(rcx_1, rax_2)
        sub_142898e50(data_143feaef0)

data_143feafcc = 1
return 0
