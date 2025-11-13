// 函数: sub_1427949d0
// 地址: 0x1427949d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee9840(arg1)

if (arg1[0x25] == 0)
    return 

int64_t* rbx_1 = arg1[0x14]
int64_t rax_1 = sub_142591550()
int64_t r8_1 = *rbx_1
int64_t rax_2 = (*(r8_1 + 0x610))(rbx_1, rax_1, r8_1)
int64_t r8_2 = *arg1
(*(r8_2 + 0x3d0))(arg1, rax_2, r8_2)
void* rbx_2 = arg1[0x18]
int64_t* rbx_3

if (rbx_2 == 0)
    rbx_3 = nullptr
else
    *(rbx_2 + 0x288)
    rbx_3 = *(rbx_2 + 0x290)
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1

arg1[0x25] = 0

if (rbx_3 == 0)
    return 

rbx_3[1].d -= 1

if (rbx_3[1].d != 1)
    return 

(**rbx_3)(rbx_3)
int32_t temp1_1 = *(rbx_3 + 0xc)
*(rbx_3 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_3 + 8))(rbx_3, 1)
