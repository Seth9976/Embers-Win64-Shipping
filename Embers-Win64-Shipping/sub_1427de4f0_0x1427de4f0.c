// 函数: sub_1427de4f0
// 地址: 0x1427de4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[9].b == 0
char* arg_8 = nullptr

if (cond:0)
    return 

void* rcx = *arg1
char const* const rdx_1

if (*(rcx + 0x10) == 0)
    rdx_1 = "bad__repx__name"
else
    rdx_1 = *(*(rcx + 8) + zx.q(*(rcx + 0x10) - 1) * 0x18)

int64_t* rcx_1 = arg1[5]

if ((*(*rcx_1 + 0x10))(rcx_1, rdx_1, &arg_8).b == 0)
    return 

char* rcx_2 = arg_8

if (rcx_2 == 0 || *rcx_2 == 0)
    return 

void arg_20
int128_t zmm0_1 = sub_1427e6ee0(rcx_2, &arg_20)
int64_t* rcx_3 = arg1[6]

if ((*(*(*rcx_3 + 0x178))(rcx_3, &arg_8) & 1) == 0 || *(arg3 + 0x10) - 0x2b u> 1)
    int512_t zmm1
    zmm1.o = zmm0_1
    (*(arg3 + 0x20))(arg1[6], zmm1)
