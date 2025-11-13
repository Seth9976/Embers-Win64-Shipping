// 函数: sub_142219a50
// 地址: 0x142219a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (data_143f3f3c8 != 0)
    void var_58
    result = sub_140597df0(arg1 + 0xb0, 
        sub_140ac6680(
            _vfprintf_p_l(&var_58, 
                Console commands were used which are disallowed in netplay.  You must restart t", 
            Engine")))
    int64_t* var_50
    
    if (var_50 != 0)
        result = var_50[1].d
        var_50[1].d -= 1
        
        if (result == 1)
            result = (**var_50)(var_50)
            int32_t rbx_5 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rbx_5 == 1)
                return (*(*var_50 + 8))(var_50, zx.q(rbx_5))
else
    int32_t var_b4_1 = 0
    void arg_10
    int32_t rdx = *sub_140b5e500(&arg_10, 0x11a)
    int32_t var_ac_1 = 0
    void arg_18
    int32_t rcx_2 = *sub_140b5e500(&arg_18, 0x11b)
    int32_t var_a8
    
    if (sub_1423d6b40(data_143f5b298, arg1, rcx_2.q, rdx.q) != 0)
        int32_t var_a4_1 = 0
        void arg_20
        var_a8 = *sub_140b5e500(&arg_20, 0x11b)
        *(arg1 + 0x30) = sub_1423dccf0(data_143f5b298, arg1, var_a8.q)
    
    int64_t* rcx_7 = *(arg1 + 0x30)
    int64_t* rdi_1
    
    if (rcx_7 != 0)
        char rax_8 =
            (*(*rcx_7 + 0x278))(rcx_7, arg1 + 0x28, arg1 + 0x40, arg1 + 0xb0, rdx, rcx_2, var_a8)
        void* r8_4 = *(arg1 + 0x30)
        
        if (rax_8 != 0)
            int32_t rdx_5 = data_143a2ec58
            int32_t rcx_12 = data_143a2ec64 + 1
            int64_t r14
            r14.b = 0
            void* r15_1 = *(r8_4 + 0x88)
            data_143a2ec64 = rcx_12
            int64_t rbx_1 = sx.q(rdx_5 - 1)
            
            if (rdx_5 - 1 s>= 0)
                int64_t rdi_3 = rbx_1 << 4
                int64_t temp1_1
                
                do
                    int64_t rax_10 = data_143a2ec50
                    
                    if (*(rdi_3 + rax_10 + 8) == 0)
                        r14.b = 1
                    else
                        int64_t* rcx_13 = *(rdi_3 + rax_10)
                        
                        if (rcx_13 == 0)
                            r14.b = 1
                        else if ((*(*rcx_13 + 0x50))(rcx_13, arg1) == 0)
                            r14.b = 1
                    
                    rdi_3 -= 0x10
                    temp1_1 = rbx_1
                    rbx_1 -= 1
                while (temp1_1 - 1 s>= 0)
                rcx_12 = data_143a2ec64
                rdx_5 = data_143a2ec58
            
            data_143a2ec64 = rcx_12 - 1
            
            if (r14.b != 0 && rcx_12 - 1 s<= 0)
                int32_t r14_1 = rdx_5
                int32_t rbx_2 = 0
                
                if (rdx_5 s> 0)
                    int64_t* rdi_4 = nullptr
                    
                    do
                        int64_t rax_13 = data_143a2ec50
                        
                        if (*(rdi_4 + rax_13 + 8) == 0)
                            sub_1405a4880(&data_143a2ec50, rbx_2, 1, 1)
                        else
                            int64_t* rcx_15 = *(rdi_4 + rax_13)
                            
                            if (rcx_15 == 0)
                                sub_1405a4880(&data_143a2ec50, rbx_2, 1, 1)
                            else if ((*(*rcx_15 + 0x20))(rcx_15) != 0)
                                sub_1405a4880(&data_143a2ec50, rbx_2, 1, 1)
                            else
                                rbx_2 += 1
                                rdi_4 = &rdi_4[2]
                        
                        rdx_5 = data_143a2ec58
                    while (rbx_2 s< rdx_5)
                
                int32_t rax_16 = rdx_5 * 2
                
                if (rax_16 s<= 2)
                    rax_16 = 2
                
                data_143a2ec60 = rax_16
                
                if (r14_1 s> rax_16 && data_143a2ec5c != rdx_5)
                    sub_1405a5410(&data_143a2ec50, rdx_5)
            
            if (*(r15_1 + 0x140) == 0)
                return sub_142220e10(arg1)
            
            int32_t var_a0_1 = 0
            var_a8.q = sub_142220e10
            int64_t var_98 = 0
            int32_t var_90_1 = 0
            void*** rax_17 = sub_1405978f0(0x30, &var_98)
            
            if (rax_17 != 0)
                *rax_17 = &data_142e33ea8
                sub_140d3a3a0(&rax_17[1], arg1)
                *(rax_17 + 0x10) = var_a8.o
                rax_17[5] = sub_140a387b0()
                *rax_17 = &data_142e33f00
            
            return sub_141ccd980(*(r15_1 + 0x140), &var_98)
        
        sub_1423d8490(data_143f5b298, arg1, *(r8_4 + 0x190))
        *(arg1 + 0x30) = 0
        result = *(arg1 + 0xb8)
        
        if (result == 0 || result == 1)
            void var_70
            result = sub_140597df0(arg1 + 0xb0, 
                sub_140ac6680(_vfprintf_p_l(&var_70, Error initializing network layer.", Engine")))
            int64_t* var_68
            rdi_1 = var_68
            goto label_142219d94
    else
        void var_88
        result = sub_140597df0(arg1 + 0xb0, 
            sub_140ac6680(_vfprintf_p_l(&var_88, Error creating network driver.", Engine")))
        int64_t* var_80
        rdi_1 = var_80
    label_142219d94:
        
        if (rdi_1 != 0)
            result = rdi_1[1].d
            rdi_1[1].d -= 1
            
            if (result == 1)
                result = (**rdi_1)(rdi_1)
                int32_t rbx_4 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rbx_4 == 1)
                    return (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_4))

return result
