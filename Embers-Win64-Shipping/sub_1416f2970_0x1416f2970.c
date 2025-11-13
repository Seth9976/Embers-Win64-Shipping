// 函数: sub_1416f2970
// 地址: 0x1416f2970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = arg1[0x12]
void* r14 = nullptr
int64_t* rdx = r9[1]
int64_t rcx = *rdx
int32_t arg_8
int64_t rax_1
bool cond:1

if (rcx + 4 u> rdx[1])
    int32_t rax_2
    rax_2.b = *arg2 != 0
    arg_8 = rax_2
    rax_1 = (*(*r9 + 0x150))(r9, &arg_8, 4)
    cond:1 = arg_8 != 0
else
    cond:1 = *rcx != 0
    rax_1 = rcx + 4
    *rdx = rax_1

if (cond:1 == 0)
    *arg2 = 0
    return rax_1

int64_t* rbx = arg1[0x12]
uint64_t rax_4 = zx.q(rbx[5].b)

if ((rax_4.b & 1) != 0)
    int64_t* rcx_2 = rbx[1]
    int32_t* rdx_2 = *rcx_2
    
    if (&rdx_2[1] u> rcx_2[1])
        int32_t* rdx_3 = &arg_8
        
        if ((*(rbx + 0x29) & 0x20) != 0)
            sub_140b54070(rbx, rdx_3, arg3)
        else
            (*(*rbx + 0x150))(rbx, rdx_3, 4)
    else
        arg_8 = *rdx_2
        int64_t* rax_7 = rbx[1]
        *rax_7 += 4
    
    int64_t* rax_9 = arg1[0x13]
    int32_t rcx_4 = arg_8
    int32_t rdx_6 = rcx_4 - rax_9[1].d + 1
    
    if (rdx_6 s> 0)
        sub_14172f920(rax_9, rdx_6)
        rax_9 = arg1[0x13]
        rcx_4 = arg_8
    
    rax_4 = *rax_9
    int64_t rdx_7 = *(rax_4 + (sx.q(rcx_4) << 3))
    
    if (rdx_7 == 0)
        sub_1416f5840(arg1, arg2)
        rax_4 = *arg2
        *(*arg1[0x13] + (sx.q(arg_8) << 3)) = rax_4
    else
        *arg2 = rdx_7
else if ((rax_4.b & 2) != 0)
    int64_t r12_1 = *arg2
    void* r13_1 = arg1[0x13]
    int64_t arg_18 = r12_1
    
    if (*sub_140865c40(r13_1 + 0x10, &arg_8, r12_1) == 0xffffffff)
        void arg_10
        sub_140946410(r13_1 + 0x60, &arg_10, &arg_18, nullptr)
        void* rcx_14 = arg1[0x13]
        arg_8 = *(rcx_14 + 0xb0)
        *(rcx_14 + 0xb0) += 1
        void* rcx_15 = arg1[0x13]
        int64_t* var_48 = &arg_18
        int32_t* var_40_1 = &arg_8
        int512_t zmm1 = sub_1408419d0(rcx_15 + 0x10, &arg_10, &var_48, nullptr)
        int64_t* r9_1 = arg1[0x12]
        int64_t* rcx_17 = r9_1[1]
        int32_t* rdx_16 = *rcx_17
        
        if (&rdx_16[1] u> rcx_17[1])
            int32_t* rdx_17 = &arg_8
            
            if ((*(r9_1 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_1, rdx_17, zmm1)
            else
                (*(*r9_1 + 0x150))(r9_1, rdx_17, 4)
        else
            arg_8 = *rdx_16
            int64_t* rax_20 = r9_1[1]
            *rax_20 += 4
        
        sub_1416f5840(arg1, arg2)
        return sub_1409740e0(arg1[0x13] + 0x60, arg_18)
    
    sub_140865c40(r13_1 + 0x10, &arg_8, r12_1)
    int64_t rax_12 = sx.q(arg_8)
    
    if (rax_12.d != 0xffffffff)
        r14 = *(r13_1 + 0x10) + rax_12 * 0x18
    
    int64_t* rcx_11 = rbx[1]
    int32_t* r8_3 = *rcx_11
    
    if (&r8_3[1] u> rcx_11[1])
        if ((*(rbx + 0x29) & 0x20) != 0)
            return sub_140b54070(rbx, r14 + 8, arg3)
        
        return (*(*rbx + 0x150))(rbx, r14 + 8, 4)
    
    *(r14 + 8) = *r8_3
    rax_4 = rbx[1]
    *rax_4 += 4

return rax_4
