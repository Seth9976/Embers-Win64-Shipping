// 函数: sub_14064da60
// 地址: 0x14064da60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

void* result = *(arg2 + 0x20)
void* rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
int64_t* rbx_1 = arg_10
double zmm0[0x2]

if (rbx_1 != 0)
    result = (*(*rbx_1 + 0x150))(rbx_1)
    
    if (result == 0)
        zmm0 = zx.o(data_143dbb3b8)
    else
        zmm0 = _mm_cvtps_pd((*(result + 0x520))[0])
    
    zmm0 = _mm_cvtpd_ps(zmm0)
    zmm0[0].d = zmm0[0].d f- *(rbx_1 + 0x9c)
else
    zmm0 = 0xbf800000

*arg3 = zmm0[0].d
return result
