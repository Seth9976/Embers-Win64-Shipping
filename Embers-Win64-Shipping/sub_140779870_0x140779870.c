// 函数: sub_140779870
// 地址: 0x140779870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58 = arg2[0]
float zmm0

if (sub_140a80f40() != 0)
    zmm0 = -200f
    
    if (not(arg2[0] < -200f))
        zmm0 = __minss_xmmss_memss(arg2[0], 0x41200000)[0]
    
    *(arg1 + 0x1ec) = zmm0
    return &data_143f02b98

if (data_143f138f4 == 0)
    uint32_t rax_1
    
    if (data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_1.b != 0)
        float var_3c = arg1:4.d[0]
        zmm0 = -200f
        
        if (not(arg2[0] < -200f))
            zmm0 = __minss_xmmss_memss(arg2[0], 0x41200000)[0]
        
        void* rax_2 = arg1.d.q
        *(rax_2 + 0x1ec) = zmm0
        return rax_2

void var_38
int64_t* rax_3 = sub_1407510d0(&var_38, nullptr, 0xff)
*(*rax_3 + 0x10) = var_58.o
void* rcx_2 = *rax_3
int32_t r8 = rax_3[2].d
int64_t* rdx = rax_3[1]
int64_t* rbx_1 = *(rcx_2 + 0x28)
int64_t* arg_8 = rbx_1
int32_t* rdi = &rbx_1[9]

if (rbx_1 != 0)
    *rdi += 1
    rbx_1 = arg_8

int32_t rax_4 = sub_1405e48c0(rcx_2, rdx, r8, 1)

if (rbx_1 != 0)
    rax_4 = *rdi
    *rdi -= 1
    
    if (rax_4 == 1)
        return sub_140a2f6e0(arg_8)

return rax_4
