// 函数: sub_1427ddf50
// 地址: 0x1427ddf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t arg_18
(*(*(arg3 + 0x10) + 0x28))(arg1[2], &arg_8, &arg_18)
float zmm0[0x2]

if (*(arg3 + 8) == 0)
    zmm0 = arg_18
else
    zmm0 = arg_8

void* rdx_1 = *arg1
char const* const rbp

if (*(rdx_1 + 0x10) == 0)
    rbp = "bad__repx__name"
else
    rbp = *(*(rdx_1 + 8) + zx.q(*(rdx_1 + 0x10) - 1) * 0x10)

int64_t* rdi = arg1[3]
int64_t* rbx_1 = arg1[1]
int512_t zmm2
zmm2.o = _mm_cvtps_pd(zmm0)
sub_1427deb50(rdi, "%g")
arg_8.b = 0
(**rdi)(rdi, &arg_8, 1)
(*(*rbx_1 + 0x10))(rbx_1, rbp, rdi[4])
rdi[3] = 0
return 0
