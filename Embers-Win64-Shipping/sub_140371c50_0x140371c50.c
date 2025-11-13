// 函数: sub_140371c50
// 地址: 0x140371c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = -6

if (arg2 != 0 && arg3 == 0x58 && *arg2 == 0x31)
    rsi = -2
    
    if (arg1 != 0)
        *(arg1 + 0x20) = 0
        int64_t (* rax_1)(int64_t arg1, int32_t arg2, int32_t arg3) = *(arg1 + 0x30)
        
        if (rax_1 == 0)
            rax_1 = sub_140374330
            *(arg1 + 0x30) = sub_140374330
            *(arg1 + 0x40) = 0
        
        if (*(arg1 + 0x38) == 0)
            *(arg1 + 0x38) = sub_140374340
        
        void* rax_2 = rax_1(*(arg1 + 0x40), 1, 0x1be8)
        
        if (rax_2 == 0)
            rsi = -4
        else
            *(arg1 + 0x28) = rax_2
            *(rax_2 + 0x38) = 0
            void* rbx_1 = *(arg1 + 0x28)
            
            if (rbx_1 == 0)
                (*(arg1 + 0x38))(*(arg1 + 0x40), rax_2)
                *(arg1 + 0x28) = 0
            else
                int64_t rdx = *(rbx_1 + 0x38)
                
                if (rdx != 0 && *(rbx_1 + 0x28) != 0xf)
                    (*(arg1 + 0x38))(*(arg1 + 0x40), rdx)
                    *(rbx_1 + 0x38) = 0
                
                *(rbx_1 + 8) = 1
                *(rbx_1 + 0x28) = 0xf
                void* rax_3 = *(arg1 + 0x28)
                
                if (rax_3 == 0)
                    (*(arg1 + 0x38))(*(arg1 + 0x40), rax_2)
                    *(arg1 + 0x28) = 0
                else
                    *(rax_3 + 0x2c) = 0
                    *(rax_3 + 0x34) = 0
                    int64_t* rax_4 = *(arg1 + 0x28)
                    
                    if (rax_4 == 0)
                        (*(arg1 + 0x38))(*(arg1 + 0x40), rax_2)
                        *(arg1 + 0x28) = 0
                    else
                        *(rax_4 + 0x1c) = 0
                        *(arg1 + 0x1c) = 0
                        *(arg1 + 0xc) = 0
                        *(arg1 + 0x20) = 0
                        int32_t rcx_2 = rax_4[1].d
                        
                        if (rcx_2 != 0)
                            *(arg1 + 0x4c) = rcx_2 & 1
                        
                        *rax_4 = 0
                        *(rax_4 + 0xc) = 0
                        *(rax_4 + 0x14) = 0x8000
                        rax_4[4] = 0
                        rax_4[8] = 0
                        rax_4[0x10] = &rax_4[0xa9]
                        rax_4[0xc] = &rax_4[0xa9]
                        rax_4[0xb] = &rax_4[0xa9]
                        rax_4[0x37b] = -0xffffffff
                        rsi = 0

return zx.q(rsi)
