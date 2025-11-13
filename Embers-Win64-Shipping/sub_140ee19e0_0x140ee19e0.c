// 函数: sub_140ee19e0
// 地址: 0x140ee19e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ee0f78
int64_t* rsi = data_143e2a148
int32_t rax = 0
void* rdi_2 = &rsi[sx.q(data_143e2a150) * 2]
int64_t var_18 = 0
int32_t var_10 = 0
int32_t var_c = 0

if (rsi != rdi_2)
    while (true)
        if (rax s> 1)
            sub_140a20ba0(&var_18, &(*U"RGBXYZF10|")[9], 1)
        
        sub_140a20ba0(&var_18, &data_142dc30a4, 1)
        sub_140a20ba0(&var_18, &data_142e5d044, 1)
        int32_t rax_1 = rsi[1].d
        int32_t r8_1 = rax_1 - 1
        
        if (rax_1 == 0)
            r8_1 = 0
        
        sub_140a20ba0(&var_18, *rsi, r8_1)
        sub_140a20ba0(&var_18, &data_142e5e360, 1)
        sub_140a20ba0(&var_18, &data_142da76f4, 1)
        rsi = &rsi[2]
        
        if (rsi == rdi_2)
            break
        
        rax = var_10

sub_140a61360(&arg1[1], &var_18)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

var_18 = 0
var_10.q = 0
sub_1405947f0(&var_18, 0x47)
int32_t var_10_1 = var_10 + 0x47

if (var_10 + 0x47 s> var_c)
    sub_140594770(&var_18)

UnDecorator::getReferenceType(var_18, 
    <([\w\d\.-]+)((?: (?:[\w\d\.-]+=(?>".*?")))+)?(?:(?:/>)|(?:>(.*?)</>))", 0x8e)
sub_140a61360(&arg1[3], &var_18)
int64_t rcx_12 = var_18

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

var_18 = 0
var_10_1.q = 0
sub_1405947f0(&var_18, 0x18)
int32_t var_10_2 = var_10_1 + 0x18

if (var_10_1 + 0x18 s> var_c)
    sub_140594770(&var_18)

UnDecorator::getReferenceType(var_18, u"([\w\d\.]+)=(?>"(.*?)")", 0x30)
sub_140a61360(&arg1[5], &var_18)
int64_t rcx_17 = var_18

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return arg1
