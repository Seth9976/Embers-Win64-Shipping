// 函数: sub_141b82670
// 地址: 0x141b82670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_14306f848
arg1[0x21] = &data_14306fcb8
sub_140d3a3a0(&arg1[0x24], nullptr)
arg1[0x25] = 0
__builtin_memcpy(&arg1[0x26], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
arg1[0x29] = 0
arg1[0x2a] = 0
sub_140d3a3a0(&arg1[0x2b], nullptr)
__builtin_memset(&arg1[0x2c], 0, 0x48)
arg1[0x38].b = 1
*(arg1 + 0x1b4) = (*(arg1 + 0x1b4) & 0x9f) | 0x18
__builtin_memset(&arg1[0x3a], 0, 0x30)
arg1[0x41] = 0
arg1[0x42] = 0
sub_1420f36f0(&arg1[0x43])
uint128_t zmm0 = data_142d5beb0
arg1[0x45].d = 0xffffffff
*(arg1 + 0x22c) = 0
char rax_1 = *(arg1 + 0x1b4) & 0xfd
*(arg1 + 0xc3) = 4
*(arg1 + 0x1b4) = rax_1 | 1
*(arg1 + 0x1e0) = zmm0
*(arg1 + 0x110) = data_14399f5c0
__builtin_memcpy(&arg1[0x26], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 0x11)
void var_28

if (&var_28 != &arg1[0x29])
    zmm0 = *(arg1 + 0x148)
    *(arg1 + 0x148) = zx.o(0)
    int64_t* rbx_1 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

bool cond:0 = data_143f320e4 != 0
arg1[0x37] = 0

if (not(cond:0))
    data_143f320e4 = 1
    void*** rax_4 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_4 != 0)
        *rax_4 = &data_142ea6120
        rax_4[1] = sub_141bc00b0
        rax_4[3] = sub_140a387b0()
        *rax_4 = &data_142ea6178
    
    if (rax_4 != 0)
        sub_140599630(&data_143a2e4a8, 1)
        (*rax_4)[6](rax_4, &var_28)
        int64_t rsi_1 = sx.q(data_143a2e4b0)
        int32_t rax_7 = (rsi_1 + 1).d
        bool cond:1_1 = rax_7 s<= data_143a2e4b4
        data_143a2e4b0 = rax_7
        
        if (not(cond:1_1))
            sub_1405a4f90(&data_143a2e4a8)
        
        void**** rcx_8 = (rsi_1 << 4) + data_143a2e4a8
        *rcx_8 = rax_4
        rcx_8[1].d = 2

return arg1
