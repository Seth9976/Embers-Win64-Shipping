// 函数: sub_14269b680
// 地址: 0x14269b680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee9b30(arg1, arg2)

if ((*(arg1 + 0xd4) & 1) != 0)
    int64_t* rdi_1 = arg1[0x14]
    
    if (rdi_1 != 0)
        void* rsi_1 = rdi_1[0x26]
        
        if (rsi_1 != 0)
            void* rax_2 = sub_140d21950(rsi_1, sub_14254cd20())
            
            if (rax_2 != 0)
                int64_t rdx_2 = *rax_2
                
                if ((*(rdx_2 + 0x48))(rax_2, rdx_2) != 0 && (*(*rdi_1 + 0x618))(rdi_1, rsi_1) != 0)
                    arg1[0x1b] = rsi_1
        
        if (arg1[0x1b] == 0)
            void* rax_7 = sub_140d21950(rdi_1, sub_14254cd20())
            
            if (rax_7 != 0)
                int64_t rdx_5 = *rax_7
                
                if ((*(rdx_5 + 0x48))(rax_7, rdx_5) != 0)
                    arg1[0x1b] = rdi_1

return sub_141dee770(arg1) __tailcall
