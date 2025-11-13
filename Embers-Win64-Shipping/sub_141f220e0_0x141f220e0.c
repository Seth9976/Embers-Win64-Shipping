// 函数: sub_141f220e0
// 地址: 0x141f220e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 1) & 1) != 0)
    int32_t rdx = 0
    bool cond:1_1 = *(arg2 + 2) == 0
    int32_t* r10_1 = nullptr
    int32_t rbx_1 = 0
    int32_t* var_38 = nullptr
    int32_t r15_1
    r15_1.b = cond:1_1
    uint64_t i_2 = 0
    int32_t var_2c_1 = 0
    
    if (*(arg1 + 0x118) s> 0)
        int64_t* r14_1 = nullptr
        
        while (true)
            if (rbx_1 == arg3)
            label_141f221a1:
                rbx_1 += 1
                r14_1 = &r14_1[2]
                
                if (rbx_1 s< *(arg1 + 0x118))
                    continue
            else
                void* rcx = *(r14_1 + *(arg1 + 0x110))
                
                if (*(rcx + 4) != *(arg2 + 4))
                    goto label_141f221a1
                
                char rax_3 = *(rcx + 2)
                
                if (rax_3 != *(arg2 + 2))
                    if (zx.d(rax_3) == r15_1)
                        int64_t rdi_1 = sx.q(i_2.d)
                        i_2 = zx.q((rdi_1 + 1).d)
                        int32_t i_3 = i_2.d
                        
                        if (i_2.d s> rdx)
                            sub_1405a4cf0(&var_38)
                            rdx = var_2c_1
                            i_2 = zx.q(i_3)
                            r10_1 = var_38
                        
                        r10_1[rdi_1] = rbx_1
                    
                    goto label_141f221a1
                
                int32_t i_4 = 0
                
                if (rdx == 0)
                    break
                
                sub_1405dadb0(&var_38, 0)
                i_2 = zx.q(i_4)
                r10_1 = var_38
            
            if (i_2.d s<= 0)
                break
            
            int32_t* r8 = r10_1
            uint64_t i
            
            do
                int64_t rdx_2 = sx.q(*r8)
                r8 = &r8[1]
                void* rdx_4 = *(*(arg1 + 0x110) + rdx_2 * 0x10)
                *(rdx_4 + 1) &= 0xfe
                i = i_2
                i_2 -= 1
            while (i != 1)
            break
        
        if (r10_1 != 0)
            sub_140a74f90(r10_1)

sub_140dbae50(arg1 + 0x110, arg3, 1, 0)
void* i_1 = *(arg1 + 0x120)
int64_t result = sx.q(*(arg1 + 0x128))

for (void* rdx_7 = result * 0x70 + i_1; i_1 != rdx_7; i_1 += 0x70)
    *(i_1 + 8) = 0

return result
