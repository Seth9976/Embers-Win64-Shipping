// 函数: sub_142188980
// 地址: 0x142188980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result
result.o = zx.o(0)

if (not(0f f>= *(arg1 + 0x26c)))
    void* const rdx_1
    void* rax_7
    
    if (*(arg1 + 0x270) == 0)
        rax_7, result = sub_142496c20()
        rdx_1 = rax_7
    else
        void* rax_1 = sub_142496c20()
        
        if (rax_1 == 0)
            rax_7, result = sub_142496c20()
            rdx_1 = rax_7
        else
            void* rdx = *(arg1 + 0x270)
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
                    || rdx == 0)
                rax_7, result = sub_142496c20()
                rdx_1 = rax_7
            else
                void* rax_4
                rax_4, result = sub_142496c20()
                int64_t rax_5
                
                if (rax_4 != 0)
                    rdx_1 = *(arg1 + 0x270)
                    rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_4 == 0 || rax_5.d s> *(rdx_1 + 0x38)
                        || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                    rdx_1 = nullptr
    float zmm1 = *(arg1 + 0x278) f* *(arg1 + 0x26c)
    int64_t r9_1 = *(arg1 + 0x280)
    void** const var_18 = &data_14325a1f8
    void* const var_10_1 = rdx_1
    (*(*arg2 + 0x588))(arg2, zmm1, &var_18, r9_1, arg1)

return result
