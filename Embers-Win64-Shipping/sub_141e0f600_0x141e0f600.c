// 函数: sub_141e0f600
// 地址: 0x141e0f600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[0x1b]
int64_t __saved_r15
int64_t __saved_r14

if (arg3 != rdx)
    (*(*arg1 + 0x68))(arg7, arg3)
else
    if ((*(arg1 + 0x6d9) & 4) != 0)
        sub_141e06200(arg1, rdx)
        int64_t* rcx = arg1[0x15]
        
        if (rcx != 0)
            __saved_r14 = arg5
            __saved_r15 = arg6
            int64_t* rax_2 = (*(*rcx + 0x40))(rcx)
            int64_t rbp_1 = 0
            int64_t* r14 = *rax_2
            uint64_t r15_1 = sx.q(rax_2[1].d) << 3 u>> 3
            
            if (r14 u> &r14[rax_2[1]])
                r15_1 = 0
            
            if (r15_1 != 0)
                do
                    int64_t rsi_1 = sx.q(*(*r14 + 0x4c))
                    void* rsi_2 = rsi_1 + arg1[0x14]
                    
                    if (rsi_1 != neg.q(arg1[0x14]) && sub_141df1e90(rsi_2) != 0)
                        void arg_8
                        sub_140dd5b90(&arg_8, arg1)
                        sub_141e2a4a0(rsi_2, &arg_8)
                        void arg_18
                        sub_140dd5b90(&arg_18, arg1)
                        sub_141e170d0(rsi_2, &arg_18)
                    
                    r14 = &r14[1]
                    rbp_1 += 1
                while (rbp_1 != r15_1)
        
        *(arg1 + 0x6d9) &= 0xfb
    
    (*(*arg1 + 0x60))(arg1)

if (arg1[0xdb].b == 0 && arg1[0x89] != data_143de5458)
    int512_t zmm1
    zmm1.o = arg1[0x18].d
    (*(*arg1 + 0x20))(arg1, zmm1)
    arg1[0x89] = data_143de5458

char rsi_3 = arg1[0xdb].b
arg1[0xdb].b = 1
int64_t rax_12 = *arg1
int64_t result

if (arg3 != arg1[0x1b])
    result = (*(rax_12 + 0x38))(arg1, arg2, arg3, arg4, __saved_r15, __saved_r14)
else
    result = (*(rax_12 + 0x28))(arg1, arg2)

arg1[0xdb].b = rsi_3
return result
