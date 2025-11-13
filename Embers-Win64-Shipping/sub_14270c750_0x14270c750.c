// 函数: sub_14270c750
// 地址: 0x14270c750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x4f].b == 0 && arg1[0x37].b == 2)
    int32_t rax_1 = arg1[0x47].d
    
    if (rax_1 != 0xffffffff && arg2 != 0xffffffff && (arg2 == rax_1 || arg2 == 0 || rax_1 == 0))
        void* rax_2 = arg1[0x15]
        
        if (rax_2 == 0)
            rax_2 = sub_141ee69e0(arg1)
        
        void* rax_3 = sub_1426fbe40(rax_2)
        
        if (rax_3 != 0)
            char rax_4
            
            if ((*(arg1 + 0x276) & 2) != 0)
                rax_4 = sub_142702ac0(arg1)
            
            int64_t rbp
            
            if ((*(arg1 + 0x276) & 2) == 0 || rax_4 == 0)
                rbp.b = 0
            else
                rbp.b = 1
            
            int32_t arg_8
            sub_140ba6bd0(rax_3 + 0x78, &arg_8, &arg1[0x4b])
            int64_t rax_5 = sx.q(arg_8)
            void* const rdx_2
            
            if (rax_5.d == 0xffffffff)
                rdx_2 = nullptr
            else
                rdx_2 = rax_5 * 0x38 + *(rax_3 + 0x78)
            
            void* rax_6 = rdx_2 + 8
            
            if (rdx_2 == 0)
                rax_6 = nullptr
            
            if (rax_6 != 0 && (*(rax_6 + 0x20) & 1) != 0)
                int32_t rdx_3 = *(rax_6 + 0x18)
                
                if (rdx_3 s>= 0)
                    int32_t* rcx_3 = *(rax_3 + 0xd8)
                    
                    if (rcx_3 != 0)
                        sub_1426177f0(rcx_3, rdx_3, rbp.b)
        
        arg1[0x4d] = data_143dbb1f8.q
        arg1[0x4e].d = data_143dbb200

return sub_14270c9b0(arg1, zx.q(arg2)) __tailcall
