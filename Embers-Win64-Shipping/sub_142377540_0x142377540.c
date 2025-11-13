// 函数: sub_142377540
// 地址: 0x142377540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x528)

if ((rax & 0x10) == 0)
    rax |= 0x10
    *(arg1 + 0x528) = rax
    void* rcx = *(arg1 + 0x28)
    
    if (rcx == 0 || (*(rcx + 0x4c) & 0x20) == 0)
        rcx.b = 0
    else
        rcx.b = 8
    
    rax = (rax & 0xf7) | rcx.b
    *(arg1 + 0x528) = rax
    
    if ((rax & 8) == 0)
        int64_t* var_18 = nullptr
        int32_t var_10_1 = 0
        sub_140d3ccc0(arg1, &var_18, 1, 0, 0)
        int64_t* rbx_1 = var_18
        void* rbp_1 = &rbx_1[sx.q(var_10_1)]
        
        if (rbx_1 != rbp_1)
            do
                void* rdi_1 = *rbx_1
                
                if (rdi_1 != 0)
                    void* rax_2 = sub_1425a1860()
                    void* rdx_2 = *(rdi_1 + 0x10)
                    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                    
                    if (rax_3.d s<= *(rdx_2 + 0x38)
                            && *(*(rdx_2 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                        void* rax_5 = *(rdi_1 + 0x48)
                        
                        if (rax_5 != 0 && (*(rax_5 + 0x4c) & 0x20) != 0)
                            *(arg1 + 0x528) |= 8
                            break
                
                rbx_1 = &rbx_1[1]
            while (rbx_1 != rbp_1)
            
            rbx_1 = var_18
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)

return *(arg1 + 0x528) u>> 3 & 1
