// 函数: sub_1425ef020
// 地址: 0x1425ef020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t var_c = 0

if (sub_1419767f0() != 0)
    HMODULE hLibModule = sub_140b67ab0(u"nvEncodeAPI64.dll")
    
    if (hLibModule != 0)
        FreeLibrary(hLibModule)
        int64_t var_28 = 0
        int64_t var_20 = 0
        sub_1405947f0(&var_28, 5)
        int32_t rbp = var_20:4.d
        int32_t rsi = var_20.d + 5
        var_20.d = rsi
        
        if (rsi s> rbp)
            sub_140594770(&var_28)
            rbp = var_20:4.d
            rsi = var_20.d
        
        int64_t rbx = var_28
        UnDecorator::getReferenceType(rbx, u"h264", 0xa)
        int32_t var_10 = 1
        sub_1405a4f90(&var_18)
        int64_t* rax_2 = var_18
        *rax_2 = rbx
        rax_2[1].d = rsi
        *(rax_2 + 0xc) = rbp
        *arg2 = rax_2
        arg2[1].d = var_10
        *(arg2 + 0xc) = var_c
        return arg2

*arg2 = 0
arg2[1] = 0
return arg2
