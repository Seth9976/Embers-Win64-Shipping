// 函数: sub_1426e4f10
// 地址: 0x1426e4f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140fe7790(arg2)

if (rax != 0)
    void* rax_1 = sub_1427297d0()
    void* rcx_1 = *(rax + 0x10)
    int64_t r8_1 = sx.q(*(rax_1 + 0x38))
    
    if (r8_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (r8_1 << 3)) == rax_1 + 0x30)
        int32_t* rax_3 = sub_1426b2b20(rax, arg1, sub_1426b0430(rax, arg1))
        int32_t rax_4 = sub_1426b39d0(rax, arg1)
        
        if (rax_4 != 0)
            *(rax_3 + 8) = 0
            rax_4.b = 0
        else if (rax_3 == 0 || (rax_3[9].b & 1) != 0 || *(rax + 0xc0) == 0)
            rax_4.b = 1
        else
            void* const rbp_1
            
            if (arg1[0x11] == 0)
                rbp_1 = nullptr
            else
                void* rax_5 = sub_14272ef20()
                
                if (rax_5 == 0)
                    rbp_1 = nullptr
                else
                    rbp_1 = arg1[0x11]
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s> *(rbp_1 + 0x38)
                            || *(*(rbp_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                        rbp_1 = nullptr
            
            int64_t rax_8
            char r9_1
            rax_8, r9_1 = sub_14272e8c0()
            
            if (rbp_1 == rax_8)
                float var_18
                rax_4, r9_1 = sub_1426a2930(arg2, &var_18, arg1[0x12].b)
                float var_14
                arg4 = rax_3[5] f- var_14
                arg3 = rax_3[4] f- var_18
                float var_10
                float zmm0_1 = rax_3[6] f- var_10
                arg5 = arg1[0x15].d
                arg3 = arg3 * arg3
                arg5 = arg5 * arg5
                arg4 = arg4 * arg4 + arg3 + zmm0_1 * zmm0_1
                rax_4.b = arg4 > arg5
            
            if (rbp_1 == rax_8 && rax_4.b == 0)
                rax_4.b = 1
            else
                char var_28
                
                if (*rax_3 != 0xffffffff)
                    sub_1426c01a0(arg1, rax)
                    var_28 = 1
                    int64_t* rcx_9 = *(*(rax + 0xc0) + 0x2d8)
                    r9_1 = (*(*rcx_9 + 0x418))(rcx_9, arg1, 0x80, zx.q(*rax_3), 1)
                
                if ((*(arg1 + 0xac) & 0x400) == 0)
                    int64_t* rcx_11 = *(rax + 0xc0) + 0x220
                    rax_4, r9_1 = (*(*rcx_11 + 0x40))(rcx_11, arg5, arg3, arg4, var_28)
                
                if ((*(arg1 + 0xac) & 0x400) != 0 || rax_4.b == 0)
                    int512_t zmm2
                    rax_4, zmm2 = sub_1426e6600(arg1, rax, rax_3, r9_1)
                    
                    if (rax_4 != 3)
                        sub_1426b08f0(arg1, rax, rax_4, zmm2)
                    
                    rax_4.b = 1
                else
                    rax_3[9].b |= 1
                    rax_4.b = 1
        
        return rax_4

rax.b = 0
return rax
