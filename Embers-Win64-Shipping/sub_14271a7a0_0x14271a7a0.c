// 函数: sub_14271a7a0
// 地址: 0x14271a7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14271a410(arg1, arg2)
*arg1 = &data_143480ad0
__builtin_memset(&arg1[0x10], 0, 0x28)

if (((arg1[1].d u>> 4).b & 1) != 0)
    return arg1

void* rax_2 = arg1[2]
int32_t arg_8

if ((*(rax_2 + 0xcc) & 1) == 0)
    int32_t rbx_1 = *(rax_2 + 0x18)
    bool cond:0_1 = data_143b58168 == data_143b58194
    arg_8 = rbx_1
    void* rcx_3
    
    if (cond:0_1)
    label_14271a88a:
        rcx_3 = nullptr
    else
        int32_t rax_4 = sub_140b5ead0(rbx_1)
        void* rcx_1 = data_143b581a0
        void* rax_6 = &data_143b58198
        
        if (rcx_1 != 0)
            rax_6 = rcx_1
        
        int32_t rax_7 = *(rax_6 + (((sx.q(data_143b581a8) - 1) & sx.q(rax_4)) << 2))
        
        if (rax_7 == 0xffffffff)
        label_14271a88a_1:
            rcx_3 = nullptr
        else
            int64_t r8_1 = data_143b58160
            int64_t rdx_4
            
            while (true)
                rdx_4 = sx.q(rax_7) * 0x18
                
                if (*(rdx_4 + r8_1) == rbx_1)
                    break
                
                rax_7 = *(rdx_4 + r8_1 + 0x10)
                
                if (rax_7 == 0xffffffff)
                    goto label_14271a88a_2
            
            rcx_3 = rdx_4 + r8_1
            
            if (rax_7 == 0xffffffff)
            label_14271a88a_2:
                rcx_3 = nullptr
    
    char* rax_8 = rcx_3 + 4
    
    if (rcx_3 == 0)
        rax_8 = nullptr
    
    if (rax_8 == 0)
        char rcx_5 = data_143f72518
        int64_t rdx_5 = arg1[3]
        char var_18 = rcx_5
        int64_t var_14_1 = rdx_5
        data_143f72518 = rcx_5 + 1
        *(arg1 + 0x44) = rcx_5
        arg1[9] = rdx_5
        sub_142719200(&data_143b58160, &arg_8, &var_18)
    else
        int64_t rcx_4 = *(rax_8 + 4)
        *(arg1 + 0x44) = *rax_8
        arg1[9] = rcx_4

int64_t rax_11 = sub_14272abd0()
sub_142718ef0(&arg1[0xa], arg1, sub_14271ee10)
sub_142718ef0(&arg1[0xe], arg1, sub_14271e360)
int64_t* rax_12 = sub_140b58260(&arg_8, u"OnListenerUpdated", 1)
void* rax_13 = sub_140bdc2b0(arg1[2], *rax_12, 1)

if (rax_13 != 0 && *(rax_13 + 0x20) != rax_11)
    sub_142718ef0(&arg1[0xc], arg1, sub_14271e5d0)

return arg1
