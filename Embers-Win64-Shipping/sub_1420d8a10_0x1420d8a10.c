// 函数: sub_1420d8a10
// 地址: 0x1420d8a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = arg2
*arg1 = &data_1432c24b8
*(arg1 + 0xa) = arg5
*(arg1 + 9) = arg4
*(arg1 + 0xc) = 0xffffffff
arg1[2].d = 0
int64_t rcx = *arg3
*(arg1 + 0x14) = rcx
*(arg1 + 0x20) = *arg6
arg1[6] = arg6[1].q
int64_t* rax_2 = sub_1420e3860(rcx, arg7)
sub_140d3a3a0(arg1 + 0xc, rax_2)

if (rax_2 != 0)
    int64_t r8 = *(*rax_2 + 0x260)
    
    if (arg1[1].b == 0)
        r8(rax_2, 0)
        char rax_5 = *(rax_2 + 0xba)
        
        if ((rax_5 & 8) != 0)
            *(rax_2 + 0xba) = rax_5 & 0xf7
            
            if (sub_140d23dc0(rax_2, 0x30) == 0)
                void* rcx_6 = rax_2[4]
                
                if (rcx_6 != 0)
                    sub_14244a940(rcx_6, rax_2)
        
        *(rax_2 + 0xbb) ^= (*(rax_2 + 0xbb) ^ *(arg1 + 0xa)) & 1
    else
        int64_t rdx_2
        rdx_2.b = 1
        r8(rax_2, rdx_2)
        char rdx_3
        
        if ((*(rax_2 + 0xba) & 8) != 0 || *(arg1 + 9) != 0)
            rdx_3 = 1
        else
            rdx_3 = 0
        
        sub_1420ee450(rax_2, rdx_3)
        *(rax_2 + 0xba) = *(arg1 + 0xa) << 7 | (*(rax_2 + 0xba) & 0x7f)
    
    if (sub_140d23dc0(rax_2, 0x30) == 0)
        int64_t r14 = rax_2[4]
        
        if (r14 == 0)
            return arg1
        
        char rax_10 = (*(*rax_2 + 0x268))(rax_2)
        int64_t rdx_5 = *rax_2
        char rax_11 = (*(rdx_5 + 0x270))(rax_2, rdx_5)
        int64_t* var_18
        sub_1424373a0(r14, &var_18)
        int32_t i_1
        int32_t i = i_1
        
        while (i s>= 0)
            int64_t* rax_12 = var_18
            
            if (i s>= rax_12[1].d)
                break
            
            int64_t* rax_14 = sub_140d3c6e0(*rax_12 + (sx.q(i) << 3))
            
            if (rax_14 != 0)
                sub_142271ca0(rax_14, rax_2, rax_10, rax_11, *(arg1 + 0xa), 0xffffffff)
            
            i = i_1 + 1
            i_1 = i

return arg1
