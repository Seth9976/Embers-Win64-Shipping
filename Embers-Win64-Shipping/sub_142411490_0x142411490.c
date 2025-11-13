// 函数: sub_142411490
// 地址: 0x142411490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg4
void* rdi = arg1
int32_t i = 0

if (arg2[1].d s> 0)
    int32_t rsi_1 = 1
    int64_t* r15_1 = nullptr
    
    do
        if ((result & rsi_1) != 0)
            int64_t* rcx = &arg5[0xa]
            void* rbx_1 = *(r15_1 + *arg2)
            int64_t* rax_1 = rcx[2]
            
            if (rax_1 != 0)
                rcx = rax_1
            
            sub_14240b1b0(*(rcx + r15_1), rbx_1, *(rdi + 0x150))
            
            if (sub_14076deb0(rdi) != 0)
                char rdi_1 = (*(rbx_1 + 0x1548)).b
                char arg_10
                char* var_40_1 = &arg_10
                arg_10 = 0
                void*** (* var_48)() = j_sub_140597fc0
                void*** rax_4 =
                    sub_14081d830(0x138, sub_140a756e0(&var_48, &data_143958018) + 0x10, 1, 0)
                void*** rbx_2 = rax_4
                
                if (rax_4 == 0)
                    rbx_2 = nullptr
                else
                    *rbx_2 = &data_143347160
                    rbx_2[2].d = 0xffffffff
                    *(rbx_2 + 0x14) = rdi_1
                    rbx_2[0x13] = 0
                    rbx_2[0x14].d = 0
                    *(rbx_2 + 0xa4) = 8
                    rbx_2[0x15].d = 0xffff0001
                    *(rbx_2 + 0xac) = 0xff
                    rbx_2[0x1a] = 0
                    rbx_2[0x1b].d = 0
                    *(rbx_2 + 0xdc) = 2
                    rbx_2[0x22] = 0
                    rbx_2[0x23].d = 0
                    *(rbx_2 + 0x11c) = 3
                    __builtin_memset(&rbx_2[0x24], 0, 0x18)
                    rbx_2[1] = &data_1432ee418
                
                int64_t rbp_1 = sx.q(arg5[0x18].d)
                int32_t rax_5 = (rbp_1 + 1).d
                arg5[0x18].d = rax_5
                
                if (rax_5 s> *(arg5 + 0xc4))
                    sub_14083a310(&arg5[0x17], rbp_1.d)
                
                *(arg5[0x17] + (rbp_1 << 3)) = rbx_2
                rbx_2[1][5](&rbx_2[1])
                rdi = arg1
                sub_142412c30(&rbx_2[1], *(rdi + 0x150), i, arg5)
            
            result = arg4
        
        i += 1
        rsi_1 = rol.d(rsi_1, 1)
        r15_1 = &r15_1[1]
    while (i s< arg2[1].d)

return result
