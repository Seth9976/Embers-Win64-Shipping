// 函数: sub_1405fe910
// 地址: 0x1405fe910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void* rax = *(arg1 + 0x20)
void* rcx = arg1 + 0x30

if (rax != 0)
    rcx = rax

(*(arg1 + 0x10))((*(*rcx + 8))(rcx))
CRITICAL_SECTION* rcx_2 = *(arg1 + 0x50)
rcx_2->__offset(0x80).d = 0
int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_1405fc0f0(rcx_2, arg2, arg3, arg4)
void* rbx = *(arg1 + 0x68)

while (true)
    bool z_1
    
    if (0 == *(rbx + 0x78))
        *(rbx + 0x78) = 0
        z_1 = true
    else
        int64_t rax_3
        rax_3.b = *(rbx + 0x78)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx_3 = *(rbx + 0x70)
    (*(*rcx_3 + 0x20))(rcx_3, 0xffffffff, 0)

int64_t rax_5 = *(rbx + 0x80)
int64_t var_48[0x2]
var_48[0] = 0
int64_t var_38 = 0
int64_t var_60 = rax_5
void* var_58 = arg1
void* var_70
sub_1405e9a10(&var_70, 0, &var_60, &var_48, zmm2, zmm3)
int64_t* var_68

if (var_68 != 0)
    var_68[1].d -= 1
    
    if (var_68[1].d == 1)
        (**var_68)(var_68)
        int32_t rdi_1 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_68 + 8))(var_68, zx.q(rdi_1))

return 0
