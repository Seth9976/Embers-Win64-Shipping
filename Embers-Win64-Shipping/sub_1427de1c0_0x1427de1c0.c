// 函数: sub_1427de1c0
// 地址: 0x1427de1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[9].b == 0
char* arg_20 = nullptr

if (cond:0)
    return 

void* rcx = *arg1
char const* const rdx_1

if (*(rcx + 0x10) == 0)
    rdx_1 = "bad__repx__name"
else
    rdx_1 = *(*(rcx + 8) + zx.q(*(rcx + 0x10) - 1) * 0x18)

int64_t* rcx_1 = arg1[5]

if ((*(*rcx_1 + 0x10))(rcx_1, rdx_1, &arg_20).b == 0)
    return 

char* rdx_2 = arg_20

if (rdx_2 == 0 || *rdx_2 == 0)
    return 

int64_t* rcx_2 = arg1[4]

if (rcx_2 == 0)
    return 

int64_t rax_6 = (*(*rcx_2 + 8))(rcx_2)
int64_t* rcx_3 = arg1[6]
int64_t r8_1 = *rcx_3
void arg_8

if ((*(*(r8_1 + 0x178))(rcx_3, &arg_8, r8_1) & 1) == 0 || *(arg3 + 0x10) - 0x2b u> 1)
    (*(arg3 + 0x20))(arg1[6], rax_6)
