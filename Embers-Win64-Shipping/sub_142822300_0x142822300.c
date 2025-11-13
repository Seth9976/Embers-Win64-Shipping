// 函数: sub_142822300
// 地址: 0x142822300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14281f460(arg1, U""\tv 0", 1)
int64_t* rcx = arg2

if (arg2[3] u>= 0x10)
    rcx = *arg2

int64_t arg_20 = sub_14058e700(rcx)

while (true)
    int64_t* rcx_1 = arg2
    
    if (arg2[3] u>= 0x10)
        rcx_1 = *arg2
    
    uint32_t arg_10
    char rax_3
    int16_t r9_1
    rax_3, r9_1 = sub_142820414(&arg_10, &arg_20, sub_14058e700(rcx_1) + arg2[2])
    
    if (rax_3 == 0)
        break
    
    uint32_t rdx_1 = arg_10
    wchar16* rdx_2
    
    switch (rdx_1)
        case 8
            rdx_2 = &data_1434d3568
        case 9
            rdx_2 = &data_1434d3560
        case 0xa
            rdx_2 = &data_1434d355c
        case 0xc
            rdx_2 = &data_1434d356c
        case 0xd
            rdx_2 = &data_1434d3564
        case 0x22
            rdx_2 = &data_1434d3554
        case 0x5c
            rdx_2 = &data_1434d3558
        default
            int32_t r8_1
            
            if (rdx_1 - 0x20 u> 0x5f && rdx_1 s< 0xa1)
                r8_1 = arg3
            else if (rdx_1 != 0xfeff)
                if (arg3 != 1 || rdx_1 s<= 0x7e)
                    sub_1428220d8(arg1, rdx_1)
                    continue
                
                r8_1 = arg3
            else
                r8_1 = arg3
            
            sub_14282220c(arg1, rdx_1, r8_1, r9_1)
            continue
    
    sub_14281f460(arg1, rdx_2, 2)

sub_14281f460(arg1, U""\tv 0", 1)
class std::wostream* result
result.b = 1
return result
