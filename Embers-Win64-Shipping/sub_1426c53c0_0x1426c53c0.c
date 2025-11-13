// 函数: sub_1426c53c0
// 地址: 0x1426c53c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fa49d0(arg1, arg2)
void* rbp = nullptr
*arg1 = &data_143474290
__builtin_memset(&arg1[0x48], 0, 0x34)
*(arg1 + 0x274) = 0xffffffff
arg1[0x4f].d = 0
arg1[0x50] = 0
arg1[0x51] = 0
arg1[0x46].d = 2
*(arg1 + 0x204) = 0x44bb8000
int16_t* rcx

if (arg3[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg3

arg1[0x40].d = sub_14230f1e0(rcx, nullptr)
sub_140597df0(&arg1[0x41], arg3)
*(arg1 + 0x3b) &= 0xbf

if (&arg1[0x36] != arg4)
    int64_t rsi_1 = sx.q(arg4[1].d)
    int64_t r14_1 = *arg4
    int32_t r8 = *(arg1 + 0x1bc)
    arg1[0x37].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8 != 0)
        sub_1405c4bc0(&arg1[0x36], rsi_1.d, r8)
        memcpy(arg1[0x36], r14_1, (rsi_1 * 0x14).d)
    else
        *(arg1 + 0x1bc) = 0

if (&arg1[0x38] != arg5)
    int32_t i_2 = arg1[0x39].d
    int64_t* rdi_2 = arg1[0x38]
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *rdi_2
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rdi_2 = &rdi_2[6]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg5[1].d
    int64_t rsi_2 = *arg5
    int32_t r8_3 = *(arg1 + 0x1cc)
    arg1[0x39].d = i_3
    
    if (i_3 != 0 || r8_3 != 0)
        sub_1405a4b40(&arg1[0x38], i_3, r8_3)
        void* rax_1 = arg1[0x38]
        
        if (i_3 != 0)
            uint128_t* rdi_3 = rax_1 + 0x1c
            uint128_t* rsi_3 = rsi_2 - rax_1
            int32_t i_1
            
            do
                sub_140596d10(rdi_3 - 0x1c, rsi_3 - 0x1c + rdi_3)
                *(rdi_3 - 0xc) = *(rsi_3 + rdi_3 - 0xc)
                *(rdi_3 - 4) = *(rsi_3 + rdi_3 - 4)
                *rdi_3 = *(rsi_3 + rdi_3)
                rdi_3 = &rdi_3[3]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x1cc) = 0

int32_t rax_6

if (arg2 == 0)
    rax_6 = 0
else
    void* rax_3 = sub_14273a800()
    void* rdx_6 = arg2[2]
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        rax_6 = 0
    else
        rax_6 = 1
        
        if ((arg2[0x83].b & 1) == 0)
            rax_6 = 0

arg1[0x52].d &= 0xfffffffe
arg1[0x52].d |= rax_6
void* rdi_4 = arg2[0x14]
arg1[0x50] = rdi_4

if (rdi_4 != 0)
    rbp = sub_140d21950(rdi_4, sub_14273acc0())

arg1[0x51] = rbp

if (rbp == 0)
    arg1[0x51] = sub_140d21950(arg2, sub_14273acc0())

return arg1
