// 函数: sub_14146d4c0
// 地址: 0x14146d4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48
sub_1419a2ec0(arg4[0xa2a], &var_48, &data_143ed9940, 0)
void* var_38
sub_1419a2ec0(arg4[0xa2a], &var_38, &data_143ee1930, 0)
void* r14 = var_48
int64_t rax = 0

if (r14 != 0)
    int64_t rdx_2 = sx.q(*(r14 + 0x10c))
    void* var_40
    int64_t* rbx_1 = *(var_40 + 0x10)
    int64_t rax_2 = rbx_1[3]
    
    if (*(rax_2 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rax_2 = rbx_1[3]
    
    rax = *(rax_2 + (rdx_2 << 3))

void* rbx_2 = var_38
*(arg2 + 8) = rax
int64_t rax_3 = 0

if (rbx_2 != 0)
    int64_t rdx_3 = sx.q(*(rbx_2 + 0x10c))
    void* var_30
    int64_t* rdi_2 = *(var_30 + 0x10)
    int64_t rax_5 = rdi_2[3]
    
    if (*(rax_5 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rdi_2, rdx_3.d)
        rax_5 = rdi_2[3]
    
    rax_3 = *(rax_5 + (rdx_3 << 3))

arg2[2].q = rax_3
sub_1419870b0(arg1, arg2, 2)
void* arg_30
void* rdi_3 = arg_30
sub_14149e690(r14, arg1, arg4, rdi_3)
sub_14149dea0(rbx_2, arg1, arg3, arg4, arg5, rdi_3)
uint64_t rcx_7 = zx.q(data_14401b1a0)
arg_30 = *(arg1 + 0x1a0)
TEB* gsbase

if (data_143ee5cb8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_7 << 3))))
    _Init_thread_header(&data_143ee5cb8)
    
    if (data_143ee5cb8 == 0xffffffff)
        int64_t* rcx_11 = data_143db18d0
        
        if (rcx_11 == 0)
            sub_140a53c40()
            rcx_11 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143ee5cb0 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.Shadow.MaxSoftKernelSize", r8_3)
        _Init_thread_footer(&data_143ee5cb8)

int64_t* rcx_9 = data_143ee5cb0
int32_t rax_11 = (*(*rcx_9 + 0x90))(rcx_9)
var_48.d = 0
int64_t var_40_1 = 0
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_11)).d f/ float.s(zx.q(*(rdi_3 + 0x548)))
var_48:4.d = zmm1.d
return sub_1405d0e10(arg1, &arg_30, rbx_2 + 0x188, &var_48, 0)
