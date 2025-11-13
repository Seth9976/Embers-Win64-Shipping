// 函数: sub_14288cb50
// 地址: 0x14288cb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r9 = arg2[1]
uint32_t rcx_2

if (r9 u>= 2)
    char* r8_1 = *arg2
    rcx_2 = zx.d(*r8_1) << 8 | zx.d(r8_1[1])
    *arg2 = &r8_1[2]
    arg2[1] = r9 - 2

int32_t var_10
int32_t rdx_1
int32_t r9_1

if (r9 u< 2 || r9 != 2)
    rdx_1 = 0x32
    var_10 = 0x7a0
    r9_1 = 0x9f
else
    void* r8_2 = *(arg1 + 0x508)
    
    if (*(r8_2 + 0x198) == rcx_2)
        void* rcx_3 = *(arg1 + 0x510)
        *(arg1 + 0xc8) = 1
        sub_1428574d0(rcx_3)
        *(arg1 + 0x510) = 0
        return 1
    
    void* rdx = *(arg1 + 0x510)
    
    if (rdx != 0 && *(rdx + 0x198) == rcx_2)
        if (((*(arg1 + 0x84) - 3) & 0xfffffffb) != 0 || *(r8_2 + 0x19c) u> 0 || *(rdx + 0x19c) == 0)
            *(arg1 + 0x12c) = *(rdx + 0x10)
            *(arg1 + 0x13c) = *(rdx + 0x20)
            *(arg1 + 0x14c) = *(rdx + 0x30)
            *(arg1 + 0x15c) = *(rdx + 0x40)
        
        sub_1428574d0(r8_2)
        *(arg1 + 0x508) = *(arg1 + 0x510)
        *(arg1 + 0x510) = 0
        *(arg1 + 0xc8) = 1
        return 1
    
    rdx_1 = 0x2f
    var_10 = 0x7ae
    r9_1 = 0x72

sub_142856580(arg1, rdx_1, 0x1f6, r9_1, "ssl\statem\extensions_clnt.c", var_10)
return 0
