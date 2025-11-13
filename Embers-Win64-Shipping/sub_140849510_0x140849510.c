// 函数: sub_140849510
// 地址: 0x140849510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0xffffffff
char rax = sub_14081fd00(arg1, arg2, arg3, arg4, &var_18)

if (rax != 0)
    int32_t rbp_1 = var_18
    
    if (sub_140834780(&arg2[1]) == 0)
        int64_t rax_2 = sx.q(*(arg1 + 0xc8))
        uint32_t var_14 = 0
        
        if (rax_2.d != 0)
            int64_t rdx = *(arg1 + 0xc0)
            var_14 = zx.d(*(rdx + (rax_2 << 3) - 2)) + zx.d(*(rdx + (rax_2 << 3) - 6))
        
        void* const rbx_1
        
        if (arg2[2].w != 3)
            rbx_1 = arg2[1]
            
            if (rbx_1 == 0)
                rbx_1 = nullptr
            else
                void* rax_4 = sub_140be01c0()
                void* rdx_1 = *(rbx_1 + 0x10)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30
                        || rbx_1 == 0)
                    rbx_1 = nullptr
                else
                label_1408495d2:
                    void* rax_7 = sub_140bdfe30()
                    void* rdx_2 = *(rbx_1 + 0x10)
                    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                    
                    if (rax_8.d s> *(rdx_2 + 0x38)
                            || *(*(rdx_2 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                        rbx_1 = nullptr
        else
            rbx_1 = data_143ce3880
            
            if (rbx_1 != 0)
                goto label_1408495d2
            
            rbx_1 = nullptr
        
        sub_140850d80(arg1 + 0xc0, &var_14, rbx_1, rbp_1)
        int64_t rax_10 = sx.q(*(arg1 + 0xc8))
        
        if (rax_10.d == 0)
            *(arg1 + 0xbc) = 0
        else
            int64_t rax_11 = *(arg1 + 0xc0)
            *(arg1 + 0xbc) = (zx.d(*(rax_11 + (rax_10 << 3) - 6)) + 0xf
                + zx.d(*(rax_11 + (rax_10 << 3) - 2))) & 0xfffffff0

if (arg5 != 0)
    *arg5 = var_18

return zx.q(rax)
