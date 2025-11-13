// 函数: sub_14205ef10
// 地址: 0x14205ef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[1].d
int32_t rsi = 0
void* const rcx_3

if (result == *(arg1 + 0x34))
label_14205efa0:
    rcx_3 = nullptr
else
    int64_t rax = *arg3
    int32_t rax_2 = sub_140b5ead0(rax.d) + rax:4.d
    void* r8 = &arg1[7]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    result = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (result == 0xffffffff)
    label_14205efa0_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rdx_3 = sx.q(result) * 5
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == *arg3)
                break
            
            result = *(rcx_3 + 0x20)
            
            if (result == 0xffffffff)
                goto label_14205efa0_2
        
        if (result == 0xffffffff)
        label_14205efa0_2:
            rcx_3 = nullptr

void* rdx_4 = rcx_3 + 0x18

if (rcx_3 == 0)
    rdx_4 = nullptr

if (rdx_4 != 0)
    if (arg4 == 0)
        rsi = (zx.d(arg5) ^ 1) + 1
    
    int64_t var_38 = *arg3
    int64_t var_30_1 = arg3[1]
    void* rax_6 = arg3[2]
    void* var_28_1 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    result = sub_142413bc0(arg2, &var_38, rsi, *rdx_4)
    
    if (arg5 != 0)
        result = sub_142065990(arg1, arg3)

int64_t* rbx_1 = arg3[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
