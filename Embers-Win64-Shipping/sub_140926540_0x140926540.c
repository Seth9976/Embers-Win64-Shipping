// 函数: sub_140926540
// 地址: 0x140926540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int64_t var_68 = 0
int32_t var_60 = 0
sub_1405947f0(&var_68, 0x20)
int32_t rax = var_60 + 0x20
var_60 = rax

if (rax s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"RevokeAuthToken not implemented", 0x40)
int64_t rsi = *(arg1 + 8)
void var_58
char* rbp = sub_14093c570(&var_58, &var_68)

if (*(arg1 + 0x20) != 0)
    int64_t* rcx_4 = *(arg1 + 0x18)
    
    if (rcx_4 != 0)
        int64_t rdx_2 = *rcx_4
        
        if ((*(rdx_2 + 0x28))(rcx_4, rdx_2).b != 0)
            if (*(arg1 + 0x20) != 0)
                rbx = *(arg1 + 0x18)
            
            (*(*rbx + 0x50))(rbx, rsi, rbp)

int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t rdi_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_28 + 8))(var_28, zx.q(rdi_1))

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

int64_t rcx_10 = var_68

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

char* result
result.b = 1
return result
