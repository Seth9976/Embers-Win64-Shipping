// 函数: sub_140a3bc80
// 地址: 0x140a3bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a3b760(arg1, arg3, arg4, arg5, 0, arg6)
void* r12 = arg7
void*** rsi = nullptr
*arg1 = &data_142e5d170
arg1[0x10] = arg2
arg1[0x11] = r12
arg1[0x12] = arg8
arg1[0x13].d = arg9

if (not(test_bit(arg9, 8)))
    void*** r13_1 = arg1[2]
    EnterCriticalSection(arg2 + 0x30)
    int64_t* i = *(arg2 + 0x20)
    void* rax_3 = &i[sx.q(*(arg2 + 0x28))]
    arg7 = rax_3
    
    for (; i != rax_3; i = &i[1])
        void* rdi_1 = *i
        rsi = r13_1
        int64_t r8_1 = *(rdi_1 + 0x88)
        
        if (r12 s< r8_1)
            rsi = nullptr
        else
            int64_t rdx_1
            
            if (r12 + arg8 s<= *(rdi_1 + 0x90) + r8_1 && *(rdi_1 + 0x61) != 0)
                rdx_1 = *(rdi_1 + 0x10)
            
            if (r12 + arg8 s> *(rdi_1 + 0x90) + r8_1 || *(rdi_1 + 0x61) == 0 || rdx_1 == 0)
                rax_3 = arg7
                rsi = nullptr
            else
                if (r13_1 == 0)
                    void*** rax_5 = sub_140a82f30(arg8, 0)
                    rdx_1 = *(rdi_1 + 0x10)
                    rsi = rax_5
                    r8_1 = *(rdi_1 + 0x88)
                
                memcpy(rsi, rdx_1 - r8_1 + r12, arg8.d)
                
                if (rsi != 0)
                    break
                
                rax_3 = arg7
    
    if (arg2 != -0x30)
        LeaveCriticalSection(arg2 + 0x30)
    
    if (rsi != 0)
        arg1[2] = rsi
        sub_140a536a0(arg1)
        return arg1

void*** rax_7 = j_sub_140a82f30(0x28)

if (rax_7 == 0)
    rax_7 = rsi
else
    *rax_7 = &data_142e5d138
    rax_7[1] = arg1
    rax_7[2].d = rsi.d
    rax_7[3] = rsi
    rax_7[4] = rsi

arg1[0xd] = rax_7
char rax_8
int64_t rdx_4
rax_8, rdx_4 = sub_140a54810()
void* rcx_7 = arg1[0xd]

if (rax_8 != 0)
    sub_140a54280(rcx_7, 0, data_143db7ad0)
    return arg1

rdx_4.b = 1
sub_140a54280(rcx_7, rdx_4, data_143db7ac8)
int512_t zmm1
zmm1.o = zx.o(0)
(*arg1)[1](arg1, zmm1)
return arg1
