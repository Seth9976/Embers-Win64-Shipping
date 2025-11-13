// 函数: sub_1412968b0
// 地址: 0x1412968b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = &arg1[4]
int64_t r10 = arg4

if (*(arg1 + 0x72) u> 0x50)
    r12 = *r12

int32_t rbx = -1
int32_t arg_8 = 0

if (arg1[3].d s<= 0)
    return 

int64_t r13_1 = 0

while (true)
    rbx += 1
    
    if (test_bit(zx.d(arg1[0xe].w), rbx))
        int64_t* rax_2 = arg1[2]
        int64_t* rcx = arg1
        int64_t* var_40_1 = r12
        
        if (rax_2 != 0)
            rcx = rax_2
        
        int64_t var_48 = *(rcx + r13_1)
        int32_t* r9_1 = zx.q(rbx.b) * 0x990 + r10
        
        if (rbx.b == 0)
            sub_141257b20(arg2, *(arg3 + 8), &var_48, r9_1)
        else if (rbx.b == 3)
            sub_141257b20(arg2, *(arg3 + 0x20), &var_48, r9_1)
        else if (rbx.b == 1)
            sub_141257b20(arg2, *(arg3 + 0x10), &var_48, r9_1)
        else if (rbx.b == 2)
            sub_141257b20(arg2, *(arg3 + 0x18), &var_48, r9_1)
        else if (rbx.b == 4)
            sub_141257b20(arg2, *(arg3 + 0x28), &var_48, r9_1)
        
        int64_t* rax_5 = arg1[2]
        int64_t* rcx_6 = arg1
        
        if (rax_5 != 0)
            rcx_6 = rax_5
        
        void* rdx_5 = *(rcx_6 + r13_1)
        int32_t rax_6 = *(rdx_5 + 0x28)
        int32_t rax_7 = rax_6 + 7
        
        if (rax_6 + 7 s< 0)
            rax_7 += 7
        
        int64_t i_1 = sx.q(*(rdx_5 + 0x38))
        int32_t r10_1 = 0
        
        if (i_1 s> 0)
            int64_t rdx_6 = 0
            int64_t i
            
            do
                void* rax_10 = *(rdx_5 + 0x30)
                
                if ((*(rdx_5 + 0x30) & 1) != 0)
                    rax_10 = (rax_10 s>> 1) + rdx_5 + 0x30
                
                uint32_t rcx_10 = zx.d(*(rdx_6 + rax_10 + 2))
                rdx_6 += 0x18
                r10_1 += rcx_10
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        r10 = arg4
        r13_1 += 8
        r12 += zx.q(r10_1 + 7 + (rax_7 s>> 3) + ((*(rdx_5 + 0x18) + *(rdx_5 + 8) + rax_6) << 3))
            & 0xfffffff8
        int32_t rcx_12 = arg_8 + 1
        arg_8 = rcx_12
        
        if (rcx_12 s>= arg1[3].d)
            break
