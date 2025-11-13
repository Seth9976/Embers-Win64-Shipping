// 函数: sub_141f595a0
// 地址: 0x141f595a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ede5c0(arg1)
char rcx_1 = 0

if (sub_141f4ac00(arg1).b == 0)
    rcx_1 = 1

int64_t* result

if (*(arg1 + 0x220) != 1 || *(arg1 + 0x228) != 0)
    result = 1
else
    result.b = 0

if ((*(arg1 + 0x20c) & 1) != 0 && (*(arg1 + 0x14c) & 0x20) != 0 && rcx_1 == 0 && result.b != 0)
    if (*(arg1 + 0x268) != 0)
        result = j_sub_140a82f30(0x110)
    
    int64_t* result_1
    
    if (*(arg1 + 0x268) == 0 || result == 0)
        result_1 = nullptr
    else
        result = sub_141f505d0(result, arg1)
        result_1 = result
    
    *(arg1 + 0x3e8) = result_1
    
    if (result_1 != 0)
        void* rax = *(arg1 + 0xa8)
        
        if (rax == 0)
            rax = sub_141ee69e0(arg1)
            result_1 = *(arg1 + 0x3e8)
        
        int64_t* rcx_4 = *(rax + 0x1b0)
        return (*(*rcx_4 + 0x68))(rcx_4, result_1)

return result
