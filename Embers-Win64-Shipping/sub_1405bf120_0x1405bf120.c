// 函数: sub_1405bf120
// 地址: 0x1405bf120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x48)

if (rbx == 0)
    int64_t rax
    rax.b = 0
    return rax

void* rbx_1 = *(rbx + 0x68)
int64_t rax_1
int64_t rbx_2

if (rbx_1 != 0)
    rbx_2 = *(rbx_1 + 0x10)
    rax_1 = sub_1405c6e90()

char* rbx_3

if (rbx_1 == 0 || rbx_2 != rax_1)
    rbx_3 = arg3 + 0x40
else
    rbx_3 = arg3 + 0x40
    void* r8 = *(*(arg1 + 0x48) + 0x68)
    sub_1405b3e40(r8 + 0x70, r8 + 0x1c0, *(r8 + 0x1d4), rbx_3)

void* rdi_1 = *(arg1 + 0x48)
void* var_18 = rdi_1
void* rax_4

if (rdi_1 == 0)
    rax_4 = nullptr
else
    rax_4 = sub_140d21950(rdi_1, sub_142475bc0())

void* var_10 = rax_4
sub_1405b2c90(rbx_3, &var_18, 0x3f800000.d)
int64_t rax_5
rax_5.b = 1
return rax_5
