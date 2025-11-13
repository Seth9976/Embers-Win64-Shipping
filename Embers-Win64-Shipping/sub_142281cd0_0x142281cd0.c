// 函数: sub_142281cd0
// 地址: 0x142281cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

int64_t* rdi_1 = arg2 + 8
uint64_t i_1 = zx.q(arg3)
uint64_t i

do
    int32_t* rax = *rdi_1
    
    if (rax != 0)
        rax = *(rax + 0x10)
        
        if (rax != 0 && *rax == 4)
            int32_t* rbx_1 = *(rax + 8)
            
            if (rbx_1 != 0)
                void* rsi_1 = *(arg1 + 8)
                int64_t* var_38 = nullptr
                int32_t var_30_1 = 0
                
                if (&rbx_1[0x6a] != &var_38 && rbx_1[0x6c] != 0)
                    int64_t* rcx = *(rbx_1 + 0x1a8)
                    
                    if (rcx != 0)
                        (*(*rcx + 0x40))(rcx, &var_38)
                
                int32_t rax_3 = *rbx_1
                int64_t rsi_2 = sx.q(*(rsi_1 + 0xf8))
                int32_t rax_4 = (rsi_2 + 1).d
                *(rsi_1 + 0xf8) = rax_4
                
                if (rax_4 s> *(rsi_1 + 0xfc))
                    sub_1405a4df0(rsi_1 + 0xf0)
                
                int64_t rax_5 = *(rsi_1 + 0xf0)
                int64_t rcx_2 = rsi_2 * 3
                *(rax_5 + (rcx_2 << 3)) = 0
                *(rax_5 + (rcx_2 << 3) + 8) = 0
                void* rbx_3 = rax_5 + (rcx_2 << 3)
                
                if (&var_38 != rbx_3 && var_30_1 != 0)
                    int64_t* rcx_3 = var_38
                    
                    if (rcx_3 != 0)
                        (*(*rcx_3 + 0x40))(rcx_3, rbx_3)
                
                *(rbx_3 + 0x10) = rax_3
                sub_140745b20(&var_38)
    
    rdi_1 = &rdi_1[3]
    i = i_1
    i_1 -= 1
while (i != 1)
