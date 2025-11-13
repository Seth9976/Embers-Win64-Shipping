// 函数: sub_1426daf20
// 地址: 0x1426daf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr

if (arg1 != 0)
    void* rax_1 = sub_1427249f0()
    void* rdx_1 = arg1[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    void* rax_4
    
    if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        int64_t rax_5 = sub_14273f770()
        int64_t r8_2 = *arg1
        int64_t arg_10 = rax_5
        rax_4 = (*(r8_2 + 0x610))(arg1, rax_5, r8_2)
    else
        rax_4 = arg1[0x5b]
    
    if (rax_4 != 0)
        int64_t rcx_2 = *(rax_4 + 0x100)
        int64_t* rbp = *(rax_4 + 0x108)
        int64_t* rsi = rbp
        
        if (rbp != 0)
            rbp[1].d += 1
            rsi = rbp
        
        if (rcx_2 != 0)
            void* rax_6 = sub_140cde0b0()
            sub_140d19010(rax_6, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            int64_t arg_8 = 0
            void* result_1 = sub_140d2dfc0(sub_14269baf0(), rax_6, 0, 0, 0, 0, 0, 0, 0)
            result = result_1
            int128_t var_28 = rcx_2.o
            
            if (rbp != 0)
                rbp[1].d += 1
                rsi = rbp
            
            sub_1426688d0(result_1, &var_28)
        
        if (rsi != 0)
            rsi[1].d -= 1
            
            if (rsi[1].d == 1)
                (**rbp)(rbp)
                int32_t rbp_1 = *(rbp + 0xc)
                *(rbp + 0xc) -= 1
                
                if (rbp_1 == 1)
                    (*(*rbp + 8))(rbp, zx.q(rbp_1))
        
        return result

return 0
