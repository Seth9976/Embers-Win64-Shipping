// 函数: sub_1409267d0
// 地址: 0x1409267d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 0x34)
int32_t rax = var_10 + 0x34
var_10 = rax

if (rax s> 0)
    sub_140594770(&var_18)

UnDecorator::getReferenceType(var_18, u"FOnlineStoreV2Null::QueryCategories Not Implemented", 0x68)

if (*(arg1 + 0x10) != 0)
    int64_t* rcx_3 = *(arg1 + 8)
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
        if (*(arg1 + 0x10) != 0)
            rbx = *(arg1 + 8)
        
        (*(*rbx + 0x50))(rbx, 0, &var_18)

int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return 1
