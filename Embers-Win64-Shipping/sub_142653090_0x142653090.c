// 函数: sub_142653090
// 地址: 0x142653090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = nullptr

if (arg1 != 0)
    rax = sub_1423de540(data_143f5b298, arg1, 1)

if (arg1 == 0 || rax == 0)
    if (arg4 != 0)
        rax = sub_1423de540(data_143f5b298, arg4, 1)
    
    if (rax == 0)
        return nullptr

int64_t* rbx_1 = *(rax + 0x120)

if (rbx_1 != 0)
    void* rax_1 = sub_14269bba0()
    void* rdx_2 = rbx_1[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
            && rbx_1[5] != 0)
        sub_140d19010(rbx_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        int64_t arg_8 = 0
        char var_1a8_1 = 0
        int32_t var_1b8_1 = 0
        void* result = sub_140d2dfc0(sub_14269baf0(), rbx_1, 0, 0, 0, 0, 0, 0, 0)
        int64_t* rsi_1
        
        if (arg4 == 0)
            rsi_1 = rbx_1[5]
        else
            void* rax_6 = sub_140d21950(arg4, sub_142548ca0())
            
            if (rax_6 == 0)
                void* rax_9 = sub_14269c200()
                void* rdx_7 = arg4[2]
                int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                
                if (rax_10.d s> *(rdx_7 + 0x38))
                    rsi_1 = rbx_1[5]
                else
                    rsi_1 = arg4
                    
                    if (*(*(rdx_7 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
                        rsi_1 = rbx_1[5]
            else
                int64_t rdx_5 = *rax_6
                rsi_1 = (*(*rbx_1 + 0x2b0))(rbx_1, (*(rdx_5 + 0x10))(rax_6, rdx_5), arg2, 
                    &data_143dbb1f8)
        
        int128_t var_160 = zx.o(0)
        var_1a8_1.q = &var_160
        var_1b8_1.q = arg3
        void var_150
        void var_138
        sub_142642800(&var_138, arg4, rsi_1, arg2, var_1b8_1, 
            sub_14265ad90(&var_150, rsi_1, arg4, arg5), var_1a8_1, 0x7f7fffff)
        int64_t var_188
        void var_a8
        sub_142652c30(rbx_1, &var_188, sub_142642440(&var_a8, &var_138), 0)
        int64_t* var_180
        int64_t* rbx_2 = var_180
        int32_t var_178
        
        if (var_178 == 3)
            int64_t var_170 = var_188
            int64_t* var_168_1 = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
                rbx_2 = var_180
            
            sub_1426688d0(result, &var_170)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**var_180)(var_180)
                int32_t rdi_1 = *(var_180 + 0xc)
                *(var_180 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_180 + 8))(var_180, zx.q(rdi_1))
        
        sub_142645530(&var_138)
        return result

return nullptr
