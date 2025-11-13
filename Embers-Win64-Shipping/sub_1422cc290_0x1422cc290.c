// 函数: sub_1422cc290
// 地址: 0x1422cc290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr

if (arg4 != 0)
    int64_t r10_1 = sx.q(arg5)
    int32_t* rcx_3
    
    if (arg4[1].d == *(arg4 + 0x34))
    label_1422cc324:
        rcx_3 = nullptr
    else
        void* rcx = arg4[8]
        void* r8 = &arg4[7]
        
        if (rcx != 0)
            r8 = rcx
        
        int32_t rax_2 = *(r8 + (((sx.q(arg4[9].d) - 1) & r10_1) << 2))
        
        if (rax_2 == 0xffffffff)
        label_1422cc324_1:
            rcx_3 = nullptr
        else
            while (true)
                rcx_3 = sx.q(rax_2) * 0xd8 + *arg4
                
                if (*rcx_3 == r10_1.d)
                    break
                
                rax_2 = rcx_3[0x34]
                
                if (rax_2 == 0xffffffff)
                    goto label_1422cc324_2
            
            if (rax_2 == 0xffffffff)
            label_1422cc324_2:
                rcx_3 = nullptr
    
    rbx = &rcx_3[2]
    
    if (rcx_3 == 0)
        rbx = nullptr
    
    if (rbx == 0)
        rbx = sub_1422b3920(arg4, r10_1.d, &arg5)
        int64_t* rax_4 = j_sub_140a82f30(0x50)
        
        if (rax_4 == 0)
            rax_4 = nullptr
        else
            *rax_4 = 0
            void* rdx_4 = &rax_4[2]
            rax_4[1] = 0
            *(rdx_4 + 0x10) = 0
            *(rdx_4 + 0x18) = 0
            *(rdx_4 + 0x1c) = 0x80
            void* rcx_5 = *(rdx_4 + 0x10)
            
            if (rcx_5 != 0)
                rdx_4 = rcx_5
            
            *rdx_4 = 0
            *(rdx_4 + 8) = 0
            rax_4[6].d = 0xffffffff
            *(rax_4 + 0x34) = 0
            rax_4[8] = 0
            rax_4[9].d = 0
        
        *(rbx + 0xc0) = rax_4
        *rbx = zx.d(*(arg7 + 0x16))
        *(rbx + 4) = arg8

if (arg11 != 0 && arg6[5].d != 0xffffffff && (arg3[1].d != arg1 || *(arg6 + 0x24) == 1))
    sub_1405a7050(arg11, arg6)

void* rax_7 = *arg7
void* rcx_7 = *(rax_7 + 0x78)
int32_t rdx_6 = *(rax_7 + 0x80)
int32_t rax_8 = *(rcx_7 + 0x3c)
void* var_48 = rcx_7
int32_t var_34 = rdx_6
int32_t var_38 = rax_8
int64_t* var_40 = arg3
sub_1422cf5a0(&var_48, arg1)
*arg10 = *arg3
*arg9 = 0

if (arg11 != 0)
    void* rax_10 = *arg7
    void* rcx_10 = *(rax_10 + 0x78)
    int32_t rdx_8 = *(rax_10 + 0x80)
    int32_t rax_11 = *(rcx_10 + 0x3c)
    void* var_30 = rcx_10
    int32_t var_1c_1 = rdx_8
    int32_t var_20_1 = rax_11
    int64_t* var_28_1 = arg2
    sub_1422cf5a0(&var_30, arg1)
    *arg9 = *arg2

if (rbx == 0)
    return 0

return *(rbx + 0xc0)
