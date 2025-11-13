// 函数: sub_140bdf150
// 地址: 0x140bdf150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char i = 0
void* rdi = arg1
uint8_t rsi_1 = (*(arg1 + 0xcc) u>> 0x19).b & 1

while (i == 0)
    int64_t rbx_1 = *(rdi + 0x18)
    i = sub_140b5b8a0(rbx_1.d, 0x66)
    rdi = *(rdi + 0x40)
    int32_t rcx
    rcx.b = (rbx_1 u>> 0x20).d == 0
    i &= rcx.b
    
    if (rdi == 0)
        if (i != 0)
            break
        
        if (rsi_1 != 0)
            return u"UDEPRECATED_"
        
        &(*U"42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[0x20]
        return &(*U"42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[0x20]

if (rsi_1 != 0)
    return u"ADEPRECATED_"

return &data_142d8adc0
