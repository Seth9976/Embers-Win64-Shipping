// 函数: sub_14216ced0
// 地址: 0x14216ced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
int32_t rbp = 0

if (arg1[6].b == 0 || *(arg1 + 0x59) != 0)
    return 0

*(arg1 + 0x59) = 1
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t* r12_1 = nullptr
    
    do
        int64_t rax_1 = *arg2
        int64_t var_48 = 0
        int32_t var_40_1 = 0
        int64_t var_38 = 0
        int32_t rbx_1 = *(r12_1 + rax_1 + 8)
        int64_t rdi_1 = *(r12_1 + rax_1)
        int32_t var_30_1 = rbx_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_38, rbx_1, 0)
            memcpy(var_38, rdi_1, rbx_1 * 2)
        else
            int32_t var_2c_1 = 0
        
        if (sub_142002f00(&var_38, &var_48, 1) != 0)
            int32_t rdi_2 = 0
            
            if (var_40_1 s> 0)
                do
                    void* rbx_3 = *(rsi + var_48)
                    
                    if (rbx_3 != 0)
                        void* rax_3 = sub_14247bf70()
                        void* rdx_3 = *(rbx_3 + 0x10)
                        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                        
                        if (rax_4.d s<= *(rdx_3 + 0x38)
                                && *(*(rdx_3 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
                            void* rax_6 = arg1[5]
                            
                            if (rax_6 == 0)
                                (*(*arg1 + 0x268))(arg1, rbx_3)
                                rbp += 1
                            else
                                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                                
                                if (rax_7.d s<= *(rbx_3 + 0x38)
                                        && *(*(rbx_3 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
                                    (*(*arg1 + 0x268))(arg1, rbx_3)
                                    rbp += 1
                    
                    rdi_2 += 1
                    rsi = &rsi[1]
                while (rdi_2 s< var_40_1)
                
                rsi = nullptr
        
        int64_t rcx_6 = var_38
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = var_48
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        i += 1
        r12_1 = &r12_1[2]
    while (i s< arg2[1].d)

return zx.q(rbp)
