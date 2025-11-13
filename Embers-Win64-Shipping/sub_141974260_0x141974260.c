// 函数: sub_141974260
// 地址: 0x141974260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2
int32_t i = 0

if (*(arg1 + 0x80) s> 0)
    int64_t r14_1 = 0
    
    do
        void* rax_1 = *(arg1 + 0x78)
        void* rcx = arg1 + 0x58
        
        if (rax_1 != 0)
            rcx = rax_1
        
        void* rdx = *(rcx + r14_1)
        
        if (rdx != 0)
            int64_t rax_2 = 0
            
            if (0 == *(rdx + 8))
                *(rdx + 8) = 0
            else
                rax_2 = *(rdx + 8)
            
            if (((rax_2 u>> 0x1a).b & 1) == 0)
                int32_t rcx_1 = data_143f0f008
                int32_t rax_4
                
                if (rcx_1 != 0x400)
                    if (rcx_1 != 0x800 || data_14399e5c8 != 0)
                        rax_4 = data_143f0f00c | rcx_1
                    else
                        rax_4 = data_143f0f010
                else if (data_143cf0848 == 0)
                    if (data_14399e5cc != 0)
                        rax_4 = data_143f0f00c | rcx_1
                    else
                        rax_4 = data_143f0f010
                else if (data_143f0f014 == 1 || data_14399e5cc == 0)
                    rax_4 = data_143f0f010
                else
                    rax_4 = data_143f0f00c | rcx_1
                
                *(*r8 + 0x4c) = rax_4 | 0xff | 0x200
                void* rcx_3 = arg1 + 0x58
                void* rax_8 = *(arg1 + 0x78)
                
                if (rax_8 != 0)
                    rcx_3 = rax_8
                
                int64_t* rdi_1 = *(rcx_3 + r14_1)
                
                if (rdi_1 != 0)
                    rdi_1[9].d += 1
                
                void* rsi_2 = *r8 + 0x18
                int64_t rbp_1 = sx.q(*(rsi_2 + 0x28))
                int32_t rax_9 = (rbp_1 + 1).d
                *(rsi_2 + 0x28) = rax_9
                
                if (rax_9 s> *(rsi_2 + 0x2c))
                    sub_14083a490(rsi_2, rbp_1.d)
                
                void* rax_10 = *(rsi_2 + 0x20)
                
                if (rax_10 != 0)
                    rsi_2 = rax_10
                
                void* rcx_5 = rsi_2 + (rbp_1 << 3)
                
                if (rcx_5 == 0)
                    goto label_1419743a1
                
                *rcx_5 = rdi_1
                
                if (rdi_1 != 0)
                    rdi_1[9].d += 1
                label_1419743a1:
                    
                    if (rdi_1 != 0)
                        rdi_1[9].d -= 1
                        
                        if (rdi_1[9].d == 1)
                            sub_140a2f6e0(rdi_1)
        
        r8 = arg2
        i += 1
        r14_1 += 8
    while (i s< *(arg1 + 0x80))

return sub_14196c760(arg1 + 0x58, 0) __tailcall
