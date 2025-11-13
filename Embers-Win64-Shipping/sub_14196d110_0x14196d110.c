// 函数: sub_14196d110
// 地址: 0x14196d110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r10_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &r10_2[4]

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    r10_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r10_2[4]

*(arg1 + 0x30) = rax
int64_t* rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = r10_2
*(arg1 + 8) = &r10_2[1]
r10_2[1] = 0
r10_2[3].b = arg3
*r10_2 = &data_143000d28
r10_2[2] = arg2
*(r10_2 + 0x19) = arg4

if (data_143f01c92 != 0)
    void*** rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rbx_3[3]
    
    if (rax_3 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x20)
        rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rbx_3[3]
    
    *(arg1 + 0x30) = rax_3
    int64_t* rax_4 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_4 = rbx_3
    *(arg1 + 8) = &rbx_3[1]
    rbx_3[1] = 0
    *rbx_3 = &data_143002a68
    sub_140a228d0(&rbx_3[2])
    int64_t* rdx = rbx_3[2]
    int64_t* var_20 = rdx
    int64_t* rax_6 = rdx
    
    if (rdx != 0)
        rdx[9].d += 1
        rax_6 = var_20
    
    void* r8 = &data_143f02f48 + (zx.q(data_143f0fca0) << 3)
    
    if (r8 != &var_20)
        int64_t* rcx_4 = *r8
        *r8 = rax_6
        
        if (rcx_4 != 0)
            rcx_4[9].d -= 1
            
            if (rcx_4[9].d == 1)
                sub_140a2f6e0(rcx_4)
    else if (rdx != 0)
        rdx[9].d -= 1
        
        if (rdx[9].d == 1)
            sub_140a2f6e0(var_20)

if (data_143f02bac u> 0)
    arg5, arg6 = sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)

if (data_143f01c92 != 0)
    uint64_t rsi_1 = zx.q(1 - data_143f0fca0)
    void* r8_1 = *(&data_143f02f48 + (rsi_1 << 3))
    
    if (r8_1 != 0)
        int64_t rax_9 = 0
        
        if (0 == *(r8_1 + 8))
            *(r8_1 + 8) = 0
        else
            rax_9 = *(r8_1 + 8)
        
        if (((rax_9 u>> 0x1a).b & 1) == 0)
            if (data_143f02bac u> 0)
                sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)
            
            int32_t rbp_1 = data_14399e5e0
            int64_t* rax_11 = sub_140a242a0()
            char rax_12
            int64_t r9_1
            rax_12, r9_1 = (*(*rax_11 + 0x20))(rax_11, zx.q(rbp_1))
            
            if (rax_12 != 0)
                sub_140af98a0("Unknown", 0x341, u"Deadlock in WaitOnRHIThreadFence.", r9_1)
                sub_140afbb40()
            
            sub_1405a6220(sub_140a242a0(), &data_143f02f48 + (rsi_1 << 3))
    
    int64_t* rcx_7 = *(&data_143f02f48 + (rsi_1 << 3))
    *(&data_143f02f48 + (rsi_1 << 3)) = 0
    
    if (rcx_7 != 0)
        rcx_7[9].d -= 1
        
        if (rcx_7[9].d == 1)
            sub_140a2f6e0(rcx_7)
    
    data_143f0fca0 = rsi_1.d

jump(*(*data_143f0f180 + 0x388))
