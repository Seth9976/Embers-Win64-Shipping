// 函数: sub_141e41c80
// 地址: 0x141e41c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
int64_t* rax = sub_140d21e10(arg2, &var_48, 0)
int16_t* rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

int64_t arg_18
sub_140b58260(&arg_18, rdx_1, 1)
int64_t rcx_2 = var_48

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rbx = arg_18
int64_t arg_8

if (*(arg1 + 0xa8) != *(arg1 + 0xd4))
    arg_8 = rbx
    int32_t rax_3 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8_1 = arg1 + 0xd8
    void* rcx_4 = *(r8_1 + 8)
    
    if (rcx_4 != 0)
        r8_1 = rcx_4
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0xe8)) - 1) & sx.q(rax_3)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0xa0)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rdx_5 = i_1 * 5
            
            if (*(r8_2 + (rdx_5 << 2)) == rbx)
                if (i != 0xffffffff)
                    void* rax_11 = r8_2 + i_1 * 0x14
                    
                    if (rax_11 != 0 && rax_11 != -8)
                        return zx.q(*(rax_11 + 8))
                
                break
            
            i = *(r8_2 + (rdx_5 << 2) + 0xc)
        while (i != 0xffffffff)

int64_t rbp = sx.q(*(arg1 + 0x48))
int32_t rax_5 = (rbp + 1).d
*(arg1 + 0x48) = rax_5

if (rax_5 s> *(arg1 + 0x4c))
    sub_1405a4f90(arg1 + 0x40)

int64_t rax_6 = *(arg1 + 0x40)
int64_t rsi_1 = rbp << 4
*(rsi_1 + rax_6) = 0
*(rsi_1 + rax_6 + 8) = 0
sub_140b33170(arg1 + 0xa0, &var_48)
int64_t rax_7 = arg_18
int64_t* var_40
*var_40 = rax_7
var_40[1].d = rbp.d
*(var_40 + 0xc) = 0xffffffff
sub_140a6fff0(arg1 + 0xa0, &arg_8, (rax_7 u>> 0x20).d + sub_140b5ead0(rax_7.d), var_40, var_48.d, 
    nullptr)
sub_141e3b6b0(*(arg1 + 0x40) + rsi_1, arg2, arg1)
return zx.q(rbp.d)
