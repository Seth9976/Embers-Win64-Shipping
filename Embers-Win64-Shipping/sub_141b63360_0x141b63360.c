// 函数: sub_141b63360
// 地址: 0x141b63360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && (*(*arg2 + 0x240))(arg2) != 0)
    void* r14 = arg1 + 0x310
    void* rax_3 = *(r14 + 0x20)
    void* r12 = r14
    
    if (rax_3 != 0)
        r12 = rax_3
    
    void* rdi = r12
    void* rbp = r12 + (sx.q(*(r14 + 0x28)) << 3)
    int32_t rdi_1
    
    if (r12 == rbp)
    label_141b63412:
        rdi_1 = -1
    else
        while (true)
            int64_t* rcx_1 = *rdi
            int64_t rax_6 = (*(*rcx_1 + 0x240))(rcx_1)
            int64_t rdx = *arg2
            
            if (rax_6 == (*(rdx + 0x240))(arg2, rdx))
                rdi_1 = ((rdi - r12) s>> 3).d
                break
            
            rdi += 8
            
            if (rdi == rbp)
                goto label_141b63412
    
    *(arg1 + 0x340) = rdi_1
    
    if (rdi_1 == 0xffffffff)
        int64_t rbx_2 = sx.q(*(r14 + 0x28))
        int32_t rax_8 = (rbx_2 + 1).d
        *(r14 + 0x28) = rax_8
        
        if (rax_8 s> *(r14 + 0x2c))
            sub_14083a490(r14, rbx_2.d)
        
        void* rax_9 = *(r14 + 0x20)
        
        if (rax_9 != 0)
            r14 = rax_9
        
        *(r14 + (rbx_2 << 3)) = arg2
        int64_t* rdi_2 = *(arg1 + 0x238)
        int64_t* var_50_1 = arg2
        *(arg1 + 0x340) = rbx_2.d
        
        if (sub_140a80f40() == 0)
            if (data_143f138f4 == 0)
                if (data_143de5480 == 0)
                    goto label_141b6348c
                
                uint32_t rax_13
                rax_13.b = GetCurrentThreadId() == data_143de5470
                
                if (rax_13.b != 0)
                    goto label_141b6348c
                
                goto label_141b634e6
            
        label_141b634e6:
            void var_40
            int64_t* rax_14 = sub_141b52ec0(&var_40, nullptr, 0xff)
            void* rcx_6 = *rax_14
            *(rcx_6 + 0x10) = rdi_2.o
            *(rcx_6 + 0x20) = rbx_2.d.q
            void* rcx_7 = *rax_14
            int64_t* rdi_4 = *(rcx_7 + 0x30)
            
            if (rdi_4 != 0)
                rdi_4[9].d += 1
            
            sub_140778000(rcx_7, rax_14[1], rax_14[2].d, 1)
            
            if (rdi_4 != 0)
                rdi_4[9].d -= 1
                
                if (rdi_4[9].d == 1)
                    sub_140a2f6e0(rdi_4)
        else
        label_141b6348c:
            
            if (rbx_2.d != 0xffffffff)
                (*(*rdi_2 + 0x18))(rdi_2, arg2, zx.q(rbx_2.d))
    
    return zx.q(*(arg1 + 0x340))

*(arg1 + 0x340) = 0xffffffff
return 0xffffffff
