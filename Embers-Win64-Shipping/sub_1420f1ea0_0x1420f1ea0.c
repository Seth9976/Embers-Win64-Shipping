// 函数: sub_1420f1ea0
// 地址: 0x1420f1ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = arg3
uint64_t r10

if (sub_140d23dc0(arg1, 0x30) == 0)
    r10 = arg1[4]
else
    r10 = 0

*arg2 = 0
uint64_t arg_8
int64_t* var_20 = &arg_8
*rsi = 0
uint64_t rax_2 = zx.q(zx.d(arg1[0x17].b) - 1)
arg_8 = r10
int64_t* var_28 = arg1
char* var_18 = rsi
char* var_10 = arg2

if (rax_2.d u<= 6)
    rax_2 = sx.q(rax_2.d)
    int32_t rcx_10
    int32_t r14
    
    switch (rax_2)
        case 0
            uint32_t rcx_9 = zx.d(*(arg1 + 0xb9))
            rcx_10 = rcx_9 - 1
            
            if (rcx_9 == 1)
                int64_t* rax_7 = sub_142441a80(r10, arg1)
                *rsi = 1
                return rax_7
            
        label_1420f204d:
            
            if (rcx_10 == 1)
                return sub_1420db980(&var_28, r14, arg4)
        case 1
            *rsi = 1
        case 3
            uint32_t rcx_13 = zx.d(*(arg1 + 0xb9))
            
            if (rcx_13 == 0)
                sub_1420e14b0(arg1, r10)
                sub_1420ee280(arg1, nullptr)
                rax_2 = sub_1420e14b0(arg1, arg_8)
                *arg2 = 1
                *rsi = 1
            else
                if (rcx_13 == 2)
                    if (arg1[0x25] != 0)
                        char rax_8
                        rax_8, arg4 = sub_1420e6170(arg1)
                        
                        if (rax_8 == 0)
                            arg4 = sub_1420e14b0(arg1, arg_8)
                    
                    return sub_1420db980(&var_28, r14, arg4)
                
                if (rcx_13 == 3)
                    arg1[0x17].b = 5
                    *arg2 = (rcx_13 - 2).b
        case 4
            int64_t* rdx = arg1[0x25]
            
            if (rdx != 0)
                sub_14242c960(r10, rdx, &arg1[0x10], not.b(*(arg1 + 0xba)) u>> 7)
                rax_2 = arg1[0x25]
                
                if ((*(rax_2 + 0x1f4) & 0x20) != 0)
                    sub_1420e14b0(arg1, arg_8)
                    rax_2 = arg_8
                    
                    if (*(rax_2 + 0x1b0) != 0)
                        void* rax_3 = sub_140d21d80(arg1[0x25])
                        uint64_t r8_1 = arg_8
                        int64_t* rcx_5 = *(r8_1 + 0x1b0)
                        rax_2 = (*(*rcx_5 + 0x298))(rcx_5, *(rax_3 + 0x18), r8_1, 
                            *(arg1[0x25] + 0x1f4) & 1)
                    
                    arg1[0x17].b = 6
                    *arg2 = 1
                    *rsi = 1
        case 5
            uint32_t rcx_21 = zx.d(*(arg1 + 0xb9))
            rcx_10 = rcx_21 - 2
            
            if (rcx_21 != 2)
                goto label_1420f204d
            
            arg1[0x17].b = 7
            *arg2 = 1
        case 6
            if (arg1[0x25] != 0)
                char rax_4
                
                if ((*(arg1 + 0xbb) & 1) == 0)
                    rax_4 = sub_14243ade0(r10)
                
                if ((*(arg1 + 0xbb) & 1) != 0 || rax_4 == 0)
                    arg3 = nullptr
                else
                    arg3.b = 1
                
                sub_142440df0(arg_8, arg1[0x25], arg3.b)
                rax_2 = arg1[0x25]
                char r8_2 = *(rax_2 + 0x1f4)
                
                if ((r8_2 & 0x20) == 0)
                    uint64_t rdx_5 = arg_8
                    int64_t* rcx_8 = *(rdx_5 + 0x1b0)
                    
                    if (rcx_8 != 0)
                        rax_2 = (*(*rcx_8 + 0x2a0))(rcx_8, rdx_5, r8_2 & 1)
                    
                    arg1[0x17].b = 4
                    *arg2 = 1
                    *rsi = 1

return rax_2
