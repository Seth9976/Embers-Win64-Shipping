// 函数: sub_14146d210
// 地址: 0x14146d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_58
sub_1419a2ec0(arg4[0xa2a], &var_58, &data_143ed9840, 0)
void* var_48
sub_1419a2ec0(arg4[0xa2a], &var_48, &data_143ee1670, 0)
void* rbp = var_58
int64_t rax = 0

if (rbp != 0)
    int64_t rdx_2 = sx.q(*(rbp + 0x10c))
    void* var_50
    int64_t* rbx_1 = *(var_50 + 0x10)
    int64_t rax_2 = rbx_1[3]
    
    if (*(rax_2 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rax_2 = rbx_1[3]
    
    rax = *(rax_2 + (rdx_2 << 3))

void* rbx_2 = var_48
*(arg2 + 8) = rax
int64_t rax_3 = 0

if (rbx_2 != 0)
    int64_t rdx_3 = sx.q(*(rbx_2 + 0x10c))
    void* var_40
    int64_t* rdi_2 = *(var_40 + 0x10)
    int64_t rax_5 = rdi_2[3]
    
    if (*(rax_5 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rdi_2, rdx_3.d)
        rax_5 = rdi_2[3]
    
    rax_3 = *(rax_5 + (rdx_3 << 3))

arg2[2].q = rax_3
sub_1419870b0(arg1, arg2, 2)
sub_141080be0(rbp, arg1, *(arg1 + 0x188), arg4[2])
void* arg_30
void* rdi_3 = arg_30
float zmm0 = sub_14149dea0(rbx_2, arg1, arg3, arg4, arg5, rdi_3)
arg_30 = *(arg1 + 0x1a0)
int64_t* rcx_7 = *(*(rdi_3 + 0x5c0) + 0x20)
(*(*rcx_7 + 0x48))(rcx_7)
float zmm0_1 = tanf(zmm0 * 0.00872664619f)
TEB* gsbase

if (data_143ee5cd8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ee5cd8)
    
    if (data_143ee5cd8 == 0xffffffff)
        int64_t* rcx_12 = data_143db18d0
        
        if (rcx_12 == 0)
            sub_140a53c40()
            rcx_12 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143ee5cd0 = (*(*rcx_12 + 0xb0))(rcx_12, u"r.Shadow.MaxSoftKernelSize", r8_3)
        _Init_thread_footer(&data_143ee5cd8)

int64_t* rcx_10 = data_143ee5cd0
int32_t rax_13 = (*(*rcx_10 + 0x90))(rcx_10)
int64_t var_50_1 = 0
uint128_t zmm1
zmm1.d = (*(rdi_3 + 0x164)).d f- *(rdi_3 + 0x168)
zmm1.d = zmm1.d f* zmm0_1
zmm1.d = zmm1.d f* 0.5f f/ *(rdi_3 + 0x3c0)
var_58.d = zmm1.d
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_13)).d f/ float.s(zx.q(*(rdi_3 + 0x548)))
var_58:4.d = zmm1.d
return sub_1405d0e10(arg1, &arg_30, rbx_2 + 0x188, &var_58, 0)
