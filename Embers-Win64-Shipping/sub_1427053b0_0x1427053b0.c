// 函数: sub_1427053b0
// 地址: 0x1427053b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

if (arg1[0x1d] != 0 && rax != 0)
    int64_t* rdi_1 = *(rax + 0x120)
    void* rax_1
    int64_t rax_2
    void* rdx_1
    
    if (rdi_1 != 0)
        rax_1 = sub_14269bba0()
        rdx_1 = rdi_1[2]
        rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rdi_1 == 0 || rax_2.d s> *(rdx_1 + 0x38)
            || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        rdi_1 = nullptr
    
    void* rcx_1 = *(arg1[0x1d] + 0xb0)
    float var_28_1
    float var_20_1
    
    if (rcx_1 == 0)
        var_28_1 = 3.40282347e+38f
        int32_t var_24_2 = 0x7f7fffff
        var_20_1 = 3.40282347e+38f
    else
        arg2 = *(rcx_1 + 0x1d0)
        var_28_1 = arg2[0]
        float temp0_1[0x4] = _mm_shuffle_ps(arg2, arg2, 0x55)
        arg2 = _mm_shuffle_ps(arg2, arg2, 0xaa)
        var_20_1 = arg2[0]
        float var_24_1 = temp0_1[0]
    
    float var_14_1 = var_20_1
    int64_t rax_6 = *rdi_1
    int64_t var_1c = var_28_1.q
    arg1[0x1f] = (*(rax_6 + 0x2b0))(rdi_1, arg2, &var_1c, &data_143dbb1f8, var_28_1, var_20_1)
    sub_1405a46b0(&rdi_1[0x1c], arg1)

sub_142709c00(arg1)

if ((*(arg1 + 0x274) & 0x10) == 0)
    arg1[0x4f].b = 2

arg1[0x1d]
jump(*(*arg1 + 0x458))
