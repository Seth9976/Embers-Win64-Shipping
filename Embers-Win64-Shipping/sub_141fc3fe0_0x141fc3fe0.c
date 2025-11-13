// 函数: sub_141fc3fe0
// 地址: 0x141fc3fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8
sub_141fa4f40(&arg_8, arg1)
int64_t* rsi = *(arg1 + 0x28)

if (rsi == 0)
    if (((*(arg1 + 8) u>> 4).b & 1) == 0)
        sub_140d21d80(arg1)
        sub_140cde0b0()
    
    rsi = sub_142499390()

if (*(arg1 + 0x38) != *(arg1 + 0x64))
    int32_t rax_5 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0x68
    void* rcx_4 = *(r8_1 + 8)
    
    if (rcx_4 != 0)
        r8_1 = rcx_4
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x78)) - 1) & sx.q(rax_5)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x30)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rax_7 = i_1 * 3
            
            if (*(r8_2 + (rax_7 << 3)) == arg2)
                if (i != 0xffffffff)
                    int64_t rbx_1 = *(r8_2 + i_1 * 0x18 + 8)
                    sub_1405c2fb0(arg1 + 0x30, i)
                    
                    if (rbx_1 != 0)
                        (*(*rsi + 0x2a8))(rsi, rbx_1, 1)
                        sub_140a74f90(rbx_1)
                
                break
            
            i = *(r8_2 + (rax_7 << 3) + 0x10)
        while (i != 0xffffffff)

EnterCriticalSection(&data_143f3d1e8)
void* rbx_2 = arg_8
sub_140865c40(&data_143a2dbd0, &arg_8, rbx_2)
int64_t rax_10 = sx.q(arg_8.d)
void* const rcx_8

if (rax_10.d == 0xffffffff)
    rcx_8 = nullptr
else
    rcx_8 = data_143a2dbd0 + rax_10 * 0x18

int32_t temp0 = *(rcx_8 + 8)
*(rcx_8 + 8) -= 1

if (temp0 == 1)
    sub_140599090(rbx_2 + 0x98)
    sub_140868c90(&data_143a2dbd0, rbx_2)

return LeaveCriticalSection(&data_143f3d1e8) __tailcall
