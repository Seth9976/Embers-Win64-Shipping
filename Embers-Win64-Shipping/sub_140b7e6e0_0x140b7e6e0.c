// 函数: sub_140b7e6e0
// 地址: 0x140b7e6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0
sub_1405947f0(&var_38, 4)
int32_t rax = var_30 + 4
var_30 = rax

if (rax s> 0)
    sub_140594770(&var_38)

sub_1405a7220(var_38, 4, "UE4", 4, 0x3f)
int64_t var_28 = 0
int32_t rdx_1 = 0
int32_t var_20 = 0
int32_t rcx_3 = 0
int32_t var_1c = 0
int64_t r14 = 0
int64_t rbx_1 = -1

do
    rbx_1 += 1
while ((*u"Win64")[rbx_1] != 0)

if (rbx_1.d + 1 s> 0)
    sub_1405947f0(&var_28, rbx_1.d + 1)
    rcx_3 = var_1c
    rdx_1 = var_20
    r14 = var_28

int32_t rax_1 = rbx_1.d + 1 + rdx_1
var_20 = rax_1

if (rax_1 s> rcx_3)
    sub_140594770(&var_28)
    r14 = var_28

UnDecorator::getReferenceType(r14, u"Win64", (rbx_1.d + 1) * 2)
char rax_2 = sub_1405948d0()
char rbx_4 = sub_140b7e470(arg1, &var_28, sub_140ab2200(), &var_38, rax_2, 0, 1).b

if (r14 != 0)
    sub_140a74f90(r14)

if (var_38 != 0)
    sub_140a74f90(var_38)

char* result

if (rbx_4 == 0)
    result.b = 0
else
    if (sub_1405948d0() == 5)
        var_28 = 0
        var_20.q = 0
        sub_1405947f0(&var_28, 4)
        int32_t var_20_1 = var_20 + 4
        
        if (var_20 + 4 s> var_1c)
            sub_140594770(&var_28)
        
        int64_t rbx_5 = var_28
        sub_1405a7220(rbx_5, 4, "UE4", 4, 0x3f)
        int64_t* rdx_5 = &var_28
        uint64_t rdi
        
        if (*(arg1 + 0x78) s> 0)
            rdi = zx.q(sub_1405a71a0(arg1 + 0x70, rdx_5))
        label_140b7e8b0:
            
            if (rbx_5 != 0)
                sub_140a74f90(rbx_5)
            
            return zx.q(rdi.b)
        
        if (sub_1405a71a0(arg1 + 0x80, rdx_5) != 0)
            rdi.b = 0
            goto label_140b7e8b0
        
        if (rbx_5 != 0)
            sub_140a74f90(rbx_5)
    
    result = sx.q(*(arg1 + 8))
    
    if (result.d u> 0xd)
        result.b = 0
    else
        switch (result)
            case nullptr, 2, 3, 0xb, 0xc
                result.b = 1
            case 1
                if (data_143de5426 != 0)
                    result.b = 0
                else
                    result.b = 1
            case 4, 5, 6, 7, 8, 9, 0xa
                result.b = 0
            case 0xd
                result.b = data_143de5426 == 0

return result
