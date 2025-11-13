// 函数: sub_1423aed50
// 地址: 0x1423aed50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg2
int32_t rsi = 1
void* rbp = *(r13 + 0x78)
void var_48
void arg_20
void* rax
int32_t rcx
void* const rbx
int32_t r14

if (rbp == 0)
    rbx = nullptr
    rax = &arg_20
    r14 = 0
    rcx = 2
else
    rbx = *(rbp + 0xe8)
    
    if (rbx != 0)
        *(rbx + 8) += 1
    
    rax = &var_48
    r14 = 1
    rcx = 0

void* const var_40 = rbx
*rax = 0

if (rcx != 0)
    sub_1405d1550(&arg_20)

if (r14 != 0)
    sub_1405d1550(&var_48)

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x10)
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
        *(rbx + 8) += 1
        bool cond:0_1 = data_143f02ba8 == 0
        void* var_38 = rax_1
        void* const var_30_1 = rbx
        
        if (cond:0_1)
            void*** rcx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_6 = &rcx_10[4]
            
            if (rax_6 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x28)
                rcx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_6 = &rcx_10[4]
            
            data_143f02bac += 1
            int128_t zmm0 = var_38.o
            data_143f02bc8 = rax_6
            *data_143f02ba0 = rcx_10
            data_143f02ba0 = &rcx_10[1]
            rcx_10[1] = 0
            *rcx_10 = &data_143339448
            *(rcx_10 + 0x10) = zmm0
        else
            sub_1423a66c0(&var_38)
        
        sub_1423cc420(rbp, arg1 + 0x10, *(arg2 + 0xc), arg4, arg3)
        sub_1405d16e0(arg1 + 0x10, nullptr)
        rsi = 2
    else
        void* r8_1 = arg1 + 0x28
        void* rax_2 = *(r8_1 + 0x70)
        int64_t* rcx_3 = data_143f0f180
        
        if (rax_2 != 0)
            r8_1 = rax_2
        
        void arg_10
        (*(*rcx_3 + 0x218))(rcx_3, &arg_10, zx.q(*(arg1 + 0x18)), zx.q(*(arg1 + 0x1c)), 
            *(arg1 + 0x20), *(arg2 + 0x14), ((zx.d(*(r13 + 0x60)) & 1) | 0x40) << 4, r8_1, 
            *(arg1 + 0xa0))
        sub_1405d1600(arg1 + 0x10, &arg_10)
        sub_1405d1550(&arg_10)
        sub_1423b3c90(arg1)
    
    *(arg1 + 8) = rsi
    rbx.b = 1
    *(arg1 + 0xc) = rsi

sub_1405d1550(&var_40)
return zx.q(rbx.b)
