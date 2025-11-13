// 函数: sub_140926320
// 地址: 0x140926320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int64_t var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 0x2a)
int32_t rax = var_20 + 0x2a
var_20 = rax

if (rax s> 0)
    sub_140594770(&var_28)

char result =
    UnDecorator::getReferenceType(var_28, FOnlineStoreV2Null::No OfferIds requested", 0x54)
int64_t* var_18 = nullptr
int32_t i_2 = 0

if (*(arg1 + 0x10) != 0)
    int64_t* rcx_3 = *(arg1 + 8)
    
    if (rcx_3 != 0)
        result = (*(*rcx_3 + 0x28))(rcx_3)
        
        if (result != 0)
            if (*(arg1 + 0x10) != 0)
                rbx = *(arg1 + 8)
            
            result = (*(*rbx + 0x50))(rbx, 0, &var_18, &var_28)
        
        rbx = var_18

int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rbx
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = var_18

if (rbx != 0)
    result = sub_140a74f90(rbx)

int64_t rcx_7 = var_28

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
