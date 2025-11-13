// 函数: sub_141f959b0
// 地址: 0x141f959b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbp = nullptr
uint64_t i_1

if ((*(arg2 + 0xe5) & 1) == 0)
label_141f95a2a:
    void* rdx_2 = arg1[5]
    i_1 = zx.q(*(rdx_2 + 0xa4) u>> 1)
    
    if ((i_1.b & 1) == 0 || (arg1[6].b & 0x20) == 0)
        int32_t r8_1
        
        if ((*(arg2 + 0xe4) & 0x10) != 0)
            r8_1 = arg2[0x1c].d
        
        if ((*(arg2 + 0xe4) & 0x10) == 0
                || r8_1 == *(*(rdx_2 + 0x1330) + (sx.q(*(arg1 + 0x34)) << 2)) + 1)
            i_1 = sub_141f951b0(arg1, arg2, arg3)
            
            if ((*(arg2 + 0x29) & 1) == 0 && i_1.b == 0)
                for (int64_t* i = arg1[0xb]; i != 0; i = arg1[0xb])
                    i_1 = zx.q(*(*(arg1[5] + 0x1330) + (sx.q(*(arg1 + 0x34)) << 2)) + 1)
                    
                    if (i[0x1c].d != i_1.d)
                        break
                    
                    int64_t rax_12 = i[0x18]
                    *(arg1 + 0x4c) -= 1
                    arg1[0xb] = rax_12
                    void arg_10
                    i_1 = sub_141f951b0(arg1, i, &arg_10)
                    char rbp_1 = i_1.b
                    
                    if ((*(arg2 + 0x29) & 1) != 0)
                        break
                    
                    if (i != 0)
                        int64_t r8_4 = *i
                        i_1 = (*r8_4)(i, 1, r8_4)
                    
                    if (rbp_1 != 0)
                        break
        else
            i_1 = arg1[0xb]
            void* rbx_3 = &arg1[0xb]
            
            for (; i_1 != 0; i_1 = *rbx_3)
                int32_t temp0_1 = *(i_1 + 0xe0)
                
                if (r8_1 == temp0_1)
                    return i_1
                
                if (r8_1 s< temp0_1)
                    break
                
                rbx_3 = i_1 + 0xc0
            
            void*** rax_8 = j_sub_140a82f30(0xe8)
            
            if (rax_8 != 0)
                rbp = sub_141f79650(rax_8, arg2)
            
            i_1 = *rbx_3
            rbp[0x18] = i_1
            *rbx_3 = rbp
            *(arg1 + 0x4c) += 1
            
            if (*(arg1 + 0x4c) s>= 0x100)
                *(arg2 + 0x29) |= 1
else
    void* rbx_1 = arg1[5]
    
    if (((*(rbx_1 + 0xa4) u>> 1).b & 1) != 0)
        goto label_141f95a2a
    
    int64_t* rbx_2 = *(rbx_1 + 0x68)
    void* rax_3
    int64_t rax_4
    void* rdx
    
    if (rbx_2 != 0)
        rax_3, arg4 = sub_14254d5d0()
        rdx = rbx_2[2]
        rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rbx_2 == 0 || rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        rbx_2 = nullptr
    
    i_1 = sub_142172560(rbx_2, arg2, arg4, arg5)
    
    if ((*(arg2 + 0x29) & 1) == 0)
        goto label_141f95a2a

return i_1
