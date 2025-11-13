// 函数: sub_1417f1610
// 地址: 0x1417f1610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143f5b298

if (rbx == 0)
    return 

int64_t* rdi_1 = *(rbx + 0xb08)

if (rdi_1 == 0)
    return 

int64_t* rbx_1 = *(rbx + 0xb10)

if (rbx_1 != 0)
    rbx_1[1].d += 1

(*(*rdi_1 + 0x120))(rdi_1) != 0 && (*(*rdi_1 + 0x128))(rdi_1) == 0
char rax_6
int64_t rdx
rax_6, rdx = (*(*rdi_1 + 0x10))(rdi_1)
wchar16 const* const rbp_1

if (rax_6 == 0)
    rbp_1 = u"not supported"
else
    char rax_8
    rax_8, rdx = (*(*rdi_1 + 0x20))(rdi_1)
    rbp_1 = u"lost"
    
    if (rax_8 != 0)
        rbp_1 = u"active"

rdx.b = 2
int32_t var_18_1 = (*(*rdi_1 + 0x30))(rdi_1, rdx)
sub_140b1f700(arg3, 
    Position tracking status: %s\nHead tracking allowed: %s\nNumber of tracking sensors: %d", rbp_1)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t rdi_2 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rdi_2 == 1)
    (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_2))
