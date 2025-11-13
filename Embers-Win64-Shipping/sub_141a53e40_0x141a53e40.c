// 函数: sub_141a53e40
// 地址: 0x141a53e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3
int32_t var_44 = arg3
int32_t var_3c = arg3 + arg4
*(arg1 + 0x90) = 1.o
arg1[0x15].d = 0
int64_t r9 = 0
int64_t* r8 = *arg2
uint64_t r10_1 = sx.q(arg2[1].d) << 3 u>> 3

if (r8 u> &r8[arg2[1]])
    r10_1 = 0

if (r10_1 != 0)
    int32_t rdx = *(arg1 + 0xac)
    
    do
        void* rax_3 = *r8
        r8 = &r8[1]
        int32_t rcx_1 = *(rax_3 + 0xac) + 1
        
        if (rcx_1 s>= rdx)
            rdx = rcx_1
        
        r9 += 1
        *(arg1 + 0xac) = rdx
    while (r9 != r10_1)

void* i = (*(*arg1 + 0x2a8))(arg1, arg2, 0, 0, 1, 0)
char var_48

if (arg5 == 0)
    for (; i != 0; i = (*(*arg1 + 0x2a8))(arg1, arg2, 0, 0, var_48))
        var_48.o = *(i + 0x90)
        int64_t rbx_1 = 0.q
        
        if (rbx_1.b == 2)
            *(arg1 + 0xac) += 1
            break
        
        int32_t rbx_3 = (rbx_1 u>> 0x20).d - rdi
        
        if (((arg1[0x16].d u>> 1).b & 1) == 0)
            int64_t rax_8 = arg1[0x12]
            
            if (rax_8.b != 2)
                *(arg1 + 0x94) = (rax_8 u>> 0x20).d + rbx_3
            
            int64_t rax_11 = arg1[0x13]
            
            if (rax_11.b != 2)
                *(arg1 + 0x9c) = (rax_11 u>> 0x20).d + rbx_3
            
            void* rcx_4 = arg1[0x1a]
            
            if (rcx_4 != 0)
                void* rax_14 = *(rcx_4 + 0x28)
                void* r15_1 = rcx_4 + 0x10
                
                if (rax_14 != 0)
                    r15_1 = rax_14
                
                void* r13_1 = r15_1 + sx.q(*(rcx_4 + 0x30)) * 0x18
                
                if (r15_1 != r13_1)
                    do
                        int64_t rbp_1 = 0
                        int64_t* rsi_1 = *(r15_1 + 8)
                        uint64_t r14_2 = sx.q(*(r15_1 + 0x10)) << 3 u>> 3
                        
                        if (rsi_1 u> &rsi_1[sx.q(*(r15_1 + 0x10))])
                            r14_2 = 0
                        
                        if (r14_2 != 0)
                            do
                                int64_t* rcx_6 = *rsi_1
                                (*(*rcx_6 + 0x58))(rcx_6, zx.q(rbx_3))
                                rbp_1 += 1
                                rsi_1 = &rsi_1[1]
                            while (rbp_1 != r14_2)
                        
                        r15_1 += 0x18
                    while (r15_1 != r13_1)
                    
                    rdi = arg3
else if (i != 0)
    int64_t i_1
    
    do
        arg1[0x15].d += 1
        i_1 = (*(*arg1 + 0x2a8))(arg1, arg2, 0, 0)
    while (i_1 != 0)
int64_t* result = sub_140d226f0(arg1, sub_141a7bc30())

if (result == 0)
    return result

return sub_141a6c0c0(result) __tailcall
