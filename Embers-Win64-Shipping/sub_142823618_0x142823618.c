// 函数: sub_142823618
// 地址: 0x142823618
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void** rdi = arg3

if (*(arg3 + 0x19) == 0)
    do
        sub_142823618(arg1, arg2, rdi[2])
        void** rsi_1 = rdi
        rdi = *rdi
        int64_t* rbx_1 = rsi_1[5]
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_2 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_2 == 1)
                    (*(*rbx_1 + 8))(rbx_1)
        
        result = sub_14058ba50(rsi_1, 0x30)
    while (*(rdi + 0x19) == 0)

return result
