// 函数: sub_140cf09f0
// 地址: 0x140cf09f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4].b != 0)
    int64_t* rcx = *(*arg1 + 0x78)
    
    if ((not.b((rcx[8] u>> 0x24).b) & 1) != 0)
        (*(*rcx + 0xe8))(arg2, *arg1[1])
    
    sub_140a74f90(*arg1[1])
    
    if (*arg1[2] == 0)
        int64_t* rdi_1 = arg1[3]
        char* rax = rdi_1[1]
        int32_t r8_1 = *(rax + 8)
        
        if (r8_1 != *(rax + 0x34))
            sub_140cfb1f0(rdi_1, 0, r8_1 - *(rax + 0x34))
            uint64_t* rsi_1 = rdi_1[1]
            rsi_1[1].d = 0
            
            if (*(rsi_1 + 0xc) != 0)
                sub_140ce4fc0(rsi_1, 0, rdi_1[4].d)
            
            rsi_1[6].d = 0xffffffff
            *(rsi_1 + 0x34) = 0
            rsi_1[5].d = 0
            
            if (*(rsi_1 + 0x2c) != 0)
                *(rsi_1 + 0x2c) = 0
                sub_140d0bc80(&rsi_1[2], 0)
            
            int64_t rcx_6 = sx.q(rsi_1[9].d)
            char* rdi_2 = &rsi_1[7]
            rax = *(rdi_2 + 8)
            
            if (rcx_6 s> 0)
                if (rax != 0)
                    rdi_2 = rax
                
                __builtin_memset(rdi_2, 0xffffffff, rcx_6 << 2)

if (arg1[4].b != 0)
    arg1[4].b = 0
