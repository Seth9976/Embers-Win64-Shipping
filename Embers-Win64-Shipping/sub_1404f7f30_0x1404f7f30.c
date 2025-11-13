// 函数: sub_1404f7f30
// 地址: 0x1404f7f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** rax = j_sub_140a82f30(0x10)
int64_t** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int64_t* rax_1 = j_sub_140a82f30(0x30)
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        *rax_1 = 0
        __builtin_memset(&rax_1[2], 0, 0x20)
        rax_1[1].d = 0x3f800000
        *(rax_1 + 0xc) = 0x3f800000
    
    *rdi = rax_1
    void*** rax_2 = j_sub_140a82f30(0x58)
    
    if (rax_2 == 0)
        int64_t* rax_5 = *rdi
        rdi[1] = 0
        rax_5[2] = 0
    else
        int64_t arg_8 = 0
        void*** rax_3 = sub_14234f1f0(rax_2, &arg_8, 0, 0)
        rdi[1] = rax_3
        (*rdi)[2] = rax_3

void*** rax_6 = j_sub_140a82f30(0x18)

if (rax_6 == 0)
    rax_6 = nullptr
else
    rax_6[1].d = 1
    *rax_6 = &data_14306d0b8
    *(rax_6 + 0xc) = 1
    rax_6[2] = rdi

data_143f2d3a8 = rdi
data_143f2d3b0 = rax_6
return atexit(sub_142cf56b0) __tailcall
