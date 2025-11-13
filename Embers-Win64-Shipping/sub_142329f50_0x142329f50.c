// 函数: sub_142329f50
// 地址: 0x142329f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d4d3b8
sub_1423cf890(&arg1[1], arg2)
void* rcx_1 = &arg1[0x35]
*arg1 = &data_1433296b0
arg1[1] = &data_1433296d0
arg1[3] = &data_143329880
arg1[0x1a] = &data_1433298c0
arg1[0x1b] = &data_143329a10
arg1[0x1c].b = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x20].b = 0
__builtin_memset(&arg1[0x21], 0, 0x88)
*(arg1 + 0x194) &= 0xffffff00
arg1[0x32].d = 0x20702
arg1[0x33] = 0
arg1[0x34] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x39].d = 0xffffffff
*(arg1 + 0x1cc) = 0
arg1[0x3b] = 0
arg1[0x3c].d = 0
arg1[0x3d] = -1
sub_140d921c0(&arg1[0x3e])
arg1[0x45] = -1
arg1[0x46] = 0
arg1[0x47].b = 0
void*** rax_1 = j_sub_140a82f30(0x40)
void*** rbx = rax_1
int64_t arg_8

if (rax_1 == 0)
    rbx = nullptr
else
    *rbx = &data_1433296a0
    __builtin_memset(&rbx[1], 0, 0x20)
    void*** rax_2 = j_sub_140a82f30(0x20)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        rax_2[1] = 0
        *rax_2 = &data_143329a40
        rax_2[2] = 0
        rax_2[3] = 0
    
    rbx[5] = rax_2
    rbx[6] = 0
    rbx[7].d = 0xffffffff
    
    if (Concurrency::details::x81cd8a40::_Is_vista_threadpool_supported::operator[]::_Is_vista_threadpool_supported()
            != 0)
        uint64_t* rax_5 = sub_142417ea0(sub_14240f390())
        void*** rax_6 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_6 != 0)
            rax_6[1] = rbx
            *rax_6 = &data_142d3fe58
            rax_6[2] = sub_1423387b0
            rax_6[4] = sub_140a387b0()
            *rax_6 = &data_142d3feb0
        
        if (rax_6 != 0)
            sub_140599630(rax_5, 1)
            (*rax_6)[6](rax_6, &arg_8)
            int64_t r14_1 = sx.q(rax_5[1].d)
            int32_t rax_9 = (r14_1 + 1).d
            rax_5[1].d = rax_9
            
            if (rax_9 s> *(rax_5 + 0xc))
                sub_1405a4f90(rax_5)
            
            void** rax_12 = (r14_1 << 4) + *rax_5
            *rax_12 = rax_6
            rax_12[1].d = 3

arg1[0x48] = rbx
void*** rax_13 = j_sub_140a82f30(0x18)

if (rax_13 == 0)
    rax_13 = nullptr
else
    rax_13[1].d = 1
    *rax_13 = &data_142d42ea8
    *(rax_13 + 0xc) = 1
    rax_13[2] = rbx

arg1[0x49] = rax_13
arg1[0x4a] = *arg3
void* rax_15 = arg3[1]
arg1[0x4b] = rax_15

if (rax_15 != 0)
    *(rax_15 + 0xc) += 1

__builtin_memset(&arg1[0x4c], 0, 0x18)
*(arg1 + 0x27c) = 0
*(arg1 + 0x284) = 0x101
*(arg1 + 0x286) = 0
int64_t rcx_8 = *arg3
bool rax_16

if (rcx_8 == 0)
    rax_16 = true
else
    rax_16 = *(rcx_8 + 0x3f8) == 0

*(arg1 + 0x287) = rax_16
arg1[0x51].w = 0
*(arg1 + 0x28a) = 0
arg1[0x52] = 0
arg1[0x53].d = 0
arg1[0x54].w = 0
*(arg1 + 0x2a4) = -1
*(arg1 + 0x2ac) = 0
__builtin_memset(&arg1[0x57], 0, 0x38)
arg1[0x5f] = 1
arg1[0x60] = 0
*(arg1 + 0x30c) = 0
arg1[0x18].d |= 0x10
*(arg1 + 0xc4) = data_143f58d48
void*** rax_18 = j_sub_140a82f30(0x28)
void*** rbx_1 = rax_18

if (rax_18 == 0)
    rbx_1 = nullptr
else
    rax_18[1] = 0
    rax_18[3].d = 0xffffffff
    *(rax_18 + 0x1c) = 4
    *rbx_1 = &data_1432381b8
    rbx_1[2] = &data_1432381d8
    arg_8 = 0
    rbx_1[4] = 0
    sub_1405d1550(&arg_8)

arg1[0x5e] = rbx_1

if (arg2 != 0)
    *(arg1 + 0x285) = (*(*arg2 + 0x188))(arg2)

void* rsi_2 = data_143e29f28

if (rsi_2 != 0)
    void* rsi_3 = *(rsi_2 + 0x20)
    int32_t var_30_1 = 0
    void*** rax_21 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_21 != 0)
        *rax_21 = &data_142da2598
        rax_21[1] = arg1
        *(rax_21 + 0x10) = sub_142342590.o
        rax_21[5] = sub_140a387b0()
        *rax_21 = &data_142da25f0
    
    if (rax_21 != 0)
        sub_140599630(rsi_3 + 0x30, 1)
        (*rax_21)[6](rax_21, &arg_8)
        int64_t rbp_2 = sx.q(*(rsi_3 + 0x38))
        int32_t rax_24 = (rbp_2 + 1).d
        *(rsi_3 + 0x38) = rax_24
        
        if (rax_24 s> *(rsi_3 + 0x3c))
            sub_1405a4f90(rsi_3 + 0x30)
        
        void** rax_27 = (rbp_2 << 4) + *(rsi_3 + 0x30)
        *rax_27 = rax_21
        rax_27[1].d = 3
    
    int32_t var_30_2 = 0
    void* rsi_4 = *(data_143e29f28 + 0x20)
    void*** rax_29 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_29 != 0)
        *rax_29 = &data_142da2598
        rax_29[1] = arg1
        *(rax_29 + 0x10) = j_sub_142342590.o
        rax_29[5] = sub_140a387b0()
        *rax_29 = &data_142da25f0
    
    if (rax_29 != 0)
        sub_140599630(rsi_4 + 0x48, 1)
        (*rax_29)[6](rax_29, &arg_8)
        int64_t rbp_3 = sx.q(*(rsi_4 + 0x50))
        int32_t rax_32 = (rbp_3 + 1).d
        *(rsi_4 + 0x50) = rax_32
        
        if (rax_32 s> *(rsi_4 + 0x54))
            sub_1405a4f90(rsi_4 + 0x48)
        
        void**** rax_35 = (rbp_3 << 4) + *(rsi_4 + 0x48)
        *rax_35 = rax_29
        rax_35[1].d = 3
    
    int32_t var_30_3 = 0
    void* rsi_5 = *(data_143e29f28 + 0x20)
    void*** rax_37 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_37 != 0)
        *rax_37 = &data_142da2598
        rax_37[1] = arg1
        *(rax_37 + 0x10) = sub_1423410b0.o
        rax_37[5] = sub_140a387b0()
        *rax_37 = &data_142da25f0
    
    if (rax_37 != 0)
        sub_140599630(rsi_5 + 0x60, 1)
        (*rax_37)[6](rax_37, &arg_8)
        int64_t rbp_4 = sx.q(*(rsi_5 + 0x68))
        int32_t rax_40 = (rbp_4 + 1).d
        *(rsi_5 + 0x68) = rax_40
        
        if (rax_40 s> *(rsi_5 + 0x6c))
            sub_1405a4f90(rsi_5 + 0x60)
        
        void**** rax_43 = (rbp_4 << 4) + *(rsi_5 + 0x60)
        *rax_43 = rax_37
        rax_43[1].d = 3

int64_t* rbx_5 = arg3[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp1_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

return arg1
