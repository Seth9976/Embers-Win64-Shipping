// 函数: sub_1426ffb40
// 地址: 0x1426ffb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t* rax_2 = sub_140ac6680(sub_140bddc50(sub_14273bc30(), &var_48, zx.q(*(arg1 + 0x211))))
uint64_t var_68 = 0
int32_t rbx = rax_2[1].d
int64_t rdi = *rax_2

if (rbx != 0)
    sub_1405a4c70(&var_68, rbx, 0)
    memcpy(var_68, rdi, rbx * 2)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rax_5 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_40 + 8))(var_40, 1)

int16_t* const rbx_2 = &data_142d40450
void var_30
int16_t** rax_8 = sub_140ac6680(sub_1426df590(arg1, &var_30))

if (rax_8[1].d != 0)
    rbx_2 = *rax_8

int64_t var_58
sub_140a2e390(&var_58, u"%s: %s", rbx_2)
sub_140aae2f0(arg2, &var_58)
int64_t rcx_10 = var_58

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t rdi_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_28 + 8))(var_28, zx.q(rdi_1))

uint64_t rsi_1 = var_68

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

return arg2
