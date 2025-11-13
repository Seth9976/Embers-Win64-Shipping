// 函数: sub_1427dac90
// 地址: 0x1427dac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg4
sub_1427e5da0(arg1, *arg3)
void* i = *r15

while (i != 0)
    sub_1427e5da0(arg1, i)
    void var_b0
    int128_t* rax = arg3[3](&var_b0, arg1[2], zx.q(r15[1].d))
    int64_t rdi_1 = *arg1
    int64_t rsi_1 = arg1[1]
    int64_t rbp_1 = arg1[3]
    int64_t r14_1 = arg1[4]
    int128_t var_c0 = *rax
    void var_98
    physx::PxClothStretchConfigGeneratedInfo::PxClothStretchConfigGeneratedInfo(&var_98)
    int64_t var_f8 = rdi_1
    int128_t* var_e8_1 = &var_c0
    int64_t var_f0_1 = rsi_1
    int64_t var_e0_1 = rbp_1
    int64_t var_d8_1 = r14_1
    int128_t var_d0_1 = zx.o(0)
    sub_1427d3f70(&var_f8, &var_98)
    void var_78
    sub_1427d3f70(&var_f8, &var_78)
    void var_58
    sub_1427d3f70(&var_f8, &var_58)
    void var_38
    sub_1427d3f70(&var_f8, &var_38)
    void* rdx_7 = *arg1
    
    if (*(rdx_7 + 0x10) != 0)
        if (*(*(rdx_7 + 8) + zx.q(*(rdx_7 + 0x10) - 1) * 0x10 + 8) != 0)
            int64_t* rcx_10 = arg1[1]
            (*(*rcx_10 + 0x20))(rcx_10, rdx_7)
        
        void* rax_3 = *arg1
        *(rax_3 + 0x10) -= 1
    
    i = r15[2]
    r15 = &r15[2]

void* rdx_8 = *arg1

if (*(rdx_8 + 0x10) != 0)
    if (*(*(rdx_8 + 8) + zx.q(*(rdx_8 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_14 = arg1[1]
        (*(*rcx_14 + 0x20))(rcx_14, rdx_8)
    
    i = *arg1
    *(i + 0x10) -= 1

return i
