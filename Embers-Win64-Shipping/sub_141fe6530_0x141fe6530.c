// 函数: sub_141fe6530
// 地址: 0x141fe6530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t r13
r13.b = 0
char r14 = arg2
int32_t i = 0

if (arg1[8].d s<= 0)
    return 

int64_t rcx = 0
int64_t arg_8 = 0

do
    if (i != arg1[9].d)
        int64_t* rbx_2 = arg1[7] + rcx
        int64_t var_70 = 0
        int64_t arg_20 = 0
        int64_t arg_18 = 0
        int64_t var_78 = 0
        int64_t rdx = *rbx_2
        
        if (rdx != 0)
            int64_t* rcx_1 = data_143f0f180
            rdi.b = (*(*rcx_1 + 0x328))(rcx_1, rdx, &var_70, zx.q(r14), 0xffffffff).b != 0
        
        int64_t rdx_1 = rbx_2[2]
        
        if (rdx_1 != 0)
            int64_t* rcx_2 = data_143f0f180
            int32_t rcx_3
            rcx_3.b = (*(*rcx_2 + 0x328))(rcx_2, rdx_1, &arg_20, zx.q(r14), 0xffffffff).b != 0
            rdi += rcx_3
        
        int64_t rdx_2 = rbx_2[4]
        
        if (rdx_2 != 0)
            int64_t* rcx_4 = data_143f0f180
            int32_t rcx_5
            rcx_5.b = (*(*rcx_4 + 0x328))(rcx_4, rdx_2, &arg_18, zx.q(r14), 0xffffffff).b != 0
            rdi += rcx_5
        
        int64_t rdx_3 = rbx_2[6]
        
        if (rdx_3 != 0)
            int64_t* rcx_6 = data_143f0f180
            int32_t rcx_7
            rcx_7.b = (*(*rcx_6 + 0x328))(rcx_6, rdx_3, &var_78, zx.q(arg2), 0xffffffff).b != 0
            rdi += rcx_7
        
        if (rdi != 4)
            rdi = 0
        else
            bool cond:0_1 = data_143f0f1b8 == 0
            int64_t rax_5 = arg_18
            float zmm0 = float.s(rax_5 - arg_20)
            
            if (rax_5 - arg_20 s< 0)
                zmm0 = zmm0 + 1.84467441e+19f
            
            int64_t rdx_4 = rbx_2[8]
            
            if (rdx_4 != -1)
                int64_t r8_5 = arg1[5]
                
                if (rdx_4 u> r8_5 - sx.q(*(arg1 + 0x14)))
                    int64_t rax_11 = var_78
                    int64_t r8_6 =
                        sx.q(mods.dp.d(sx.q(arg1[2].d - r8_5.d + arg1[1].d + rdx_4.d), arg1[1].d))
                    int32_t zmm1 = float.s(rax_11 - var_70)
                    
                    if (rax_11 - var_70 s< 0)
                        zmm1 = zmm1 f+ 1.84467441e+19f
                    
                    *(*arg1 + r8_6 * 0x18 + 0xc) = zmm1 f* 0.00100000005f
                    *(*arg1 + r8_6 * 0x18 + 0x10) = zmm0 * 0.00100000005f
                    *(*arg1 + r8_6 * 0x18 + 0x14) = cond:0_1
            
            rbx_2[8] = -1
            int64_t* rcx_13 = rbx_2[1]
            
            if (rcx_13 == 0 || *rbx_2 == 0)
                rdi = 0
            else
                (*(*rcx_13 + 0x10))(rcx_13, rbx_2)
                rdi = 0
                rbx_2[1] = 0
            
            int64_t* rcx_14 = rbx_2[3]
            
            if (rcx_14 != 0 && rbx_2[2] != 0)
                (*(*rcx_14 + 0x10))(rcx_14, &rbx_2[2])
                rbx_2[3] = 0
            
            int64_t* rcx_15 = rbx_2[5]
            
            if (rcx_15 != 0 && rbx_2[4] != 0)
                (*(*rcx_15 + 0x10))(rcx_15, &rbx_2[4])
                rbx_2[5] = 0
            
            int64_t* rcx_16 = rbx_2[7]
            
            if (rcx_16 != 0 && rbx_2[6] != 0)
                (*(*rcx_16 + 0x10))(rcx_16, &rbx_2[6])
                rbx_2[7] = 0
            
            r13.b = 1
        
        r14 = arg2
        rcx = arg_8
    
    rcx += 0x48
    i += 1
    arg_8 = rcx
while (i s< arg1[8].d)

if (r13.b != 0)
    sub_141fea830(arg1)
