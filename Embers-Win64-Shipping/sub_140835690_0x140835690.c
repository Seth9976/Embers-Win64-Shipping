// 函数: sub_140835690
// 地址: 0x140835690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r14 = arg2
int32_t result = sub_14074a210(*(arg1 + 0x14))

if (result.b != 0)
    int32_t rax = *(arg1 + 0x2c)
    void* rbx_1 = *(arg1 + 0x20)
    int32_t i_4 = *(arg1 + 0x28)
    
    if (rax s< 0)
        if (i_4 != 0)
            void* rbx_3 = rbx_1 + 0x20
            int32_t i
            
            do
                sub_1405ec8a0(rbx_3 + 0x28)
                sub_1405ec8a0(rbx_3)
                sub_1405ec8a0(rbx_3 - 0x10)
                rbx_3 += 0x68
                i = i_4
                i_4 -= 1
            while (i != 1)
            rax = *(arg1 + 0x2c)
        
        *(arg1 + 0x28) = 0
        
        if (rax != 0)
            sub_1405fdf40(arg1 + 0x20, 0)
    else
        if (i_4 != 0)
            void* rbx_2 = rbx_1 + 0x20
            int32_t i_1
            
            do
                sub_1405ec8a0(rbx_2 + 0x28)
                sub_1405ec8a0(rbx_2)
                sub_1405ec8a0(rbx_2 - 0x10)
                rbx_2 += 0x68
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        *(arg1 + 0x28) = 0
    
    if (arg3 == 0)
        return sub_140839450(arg1 + 0x30, r14, *(arg1 + 0x10), 0)
    
    void* rbp_1 = *(arg1 + 0x208)
    int32_t r12_1 = 0
    void* rax_3 = sx.q(*(arg1 + 0x210)) * 0x58 + rbp_1
    void* arg_8 = rax_3
    
    if (rbp_1 != rax_3)
        do
            r12_1 += *(rbp_1 + 0x44)
            
            if (*(rbp_1 + 0x4f) != 0)
                int32_t i_2 = 0
                int64_t r15_1 = *(rbp_1 + 0x20)
                
                if (*(rbp_1 + 0x40) u> 0)
                    do
                        int32_t* rsi_1 = *(zx.q(i_2) * 0x110 + r15_1 + 0xc0)
                        
                        if (rsi_1 != 0 && *rsi_1 != 0xffffffff)
                            int64_t r14_1 = sx.q(*(arg1 + 0xf8))
                            int32_t rax_5 = (r14_1 + 1).d
                            *(arg1 + 0xf8) = rax_5
                            
                            if (rax_5 s> *(arg1 + 0xfc))
                                sub_1405a4cf0(arg1 + 0xf0)
                            
                            *(*(arg1 + 0xf0) + (r14_1 << 2)) = *rsi_1
                            *rsi_1 = 0xffffffff
                        
                        i_2 += 1
                    while (i_2 u< *(rbp_1 + 0x40))
                    
                    rax_3 = arg_8
            
            rbp_1 += 0x58
        while (rbp_1 != rax_3)
        
        r14 = arg2
    
    sub_140839450(arg1 + 0x30, r14, *(arg1 + 0x10), r12_1)
    void* rdx_2 = *(arg1 + 0x70)
    
    if (rdx_2 != 0 && *(arg1 + 0x78) != 0)
        void* rcx_12 = *(rdx_2 + 8)
        
        if (rcx_12 == 0)
        label_140835871:
            int64_t* rcx_14 = *(arg1 + 0x70)
            int64_t rax_11 = (*(*rcx_14 + 0x18))(rcx_14, zx.q(*(arg1 + 0x78) << 2))
            
            if (rax_11 != 0)
                void* i_3 = *(arg1 + 0x208)
                void* rax_13 = sx.q(*(arg1 + 0x210)) * 0x58 + i_3
                arg_8 = rax_13
                
                for (; i_3 != rax_13; i_3 += 0x58)
                    int32_t j = 0
                    int64_t r15_2 = *(i_3 + 0x20)
                    
                    if (*(i_3 + 0x40) u> 0)
                        do
                            int32_t* rbx_5 = *(zx.q(j) * 0x110 + r15_2 + 0xc0)
                            
                            if (rbx_5 != 0)
                                uint64_t rcx_16 = zx.q(*rbx_5)
                                
                                if (rcx_16.d != 0xffffffff)
                                    void* rdx_5 = *(*(rbx_5 + 8) + 0x98)
                                    
                                    if (rdx_5 != 0)
                                        int32_t r8_2 = rbx_5[1] - *(rax_11 + (rcx_16 << 2))
                                        int32_t rax_16 = *(rdx_5 + 0xb0)
                                        
                                        if (r8_2 u<= rax_16)
                                            *(rdx_5 + 0xb0) = rax_16 - r8_2
                                            rcx_16 = zx.q(*rbx_5)
                                    
                                    if (rcx_16.d != 0xffffffff)
                                        int64_t rbp_2 = sx.q(*(arg1 + 0xf8))
                                        int32_t rax_18 = (rbp_2 + 1).d
                                        *(arg1 + 0xf8) = rax_18
                                        
                                        if (rax_18 s> *(arg1 + 0xfc))
                                            sub_1405a4cf0(arg1 + 0xf0)
                                        
                                        *(*(arg1 + 0xf0) + (rbp_2 << 2)) = *rbx_5
                                        *rbx_5 = 0xffffffff
                            
                            j += 1
                        while (j u< *(i_3 + 0x40))
                        
                        rax_13 = arg_8
                
                int64_t* rcx_19 = *(arg1 + 0x70)
                (*(*rcx_19 + 0x20))(rcx_19)
                r14 = arg2
                *(arg1 + 0x78) = 0
        else
            bool z_1
            
            if (0 == *(rcx_12 + 0x18))
                *(rcx_12 + 0x18) = 0
                z_1 = true
            else
                *(rcx_12 + 0x18)
                z_1 = false
            
            if (z_1)
                int64_t* rcx_13 = *(rdx_2 + 8)
                
                if ((*(*rcx_13 + 0x18))(rcx_13) != 0)
                    goto label_140835871
    
    result = data_14399fa54
    *(arg1 + 0x200) = result
    
    if (data_14396f018 != 0)
        return sub_1408288d0(arg1, r14, nullptr, 0)

return result
